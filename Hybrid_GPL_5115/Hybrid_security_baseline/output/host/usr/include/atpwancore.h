#ifndef __ATP_WANCORE_H__
#define __ATP_WANCORE_H__


typedef enum tagATP_WANCORE_MSGTYPES_EN
{
    ATP_MSG_WANCORE_START = ATP_MSG_CATEGORY_DEF(ATP_MODULE_WANCORE),
/* <DTS2012083003620 z81004485 2012/9/11 begin  */
#ifdef SUPPORT_ATP_FIREWALL_B890
    ATP_MSG_WANCORE_WANCONN_CONNECT, /* ����������һ�����ŵ���Ϣ�ϱ� */
#endif  /* SUPPORT_ATP_FIREWALL_B890 */
/* <DTS2013102206837  z81004485 2013/10/22 begin  */
/* <DTS2013110505441 z81004485 2013/11/5 begin  */
#ifdef SUPPORT_ATP_WAN_STATS_OVERFLOW_SAVE
    ATP_MSG_WANCORE_WANCONN_SAVE_UMTS_STAT,
    ATP_MSG_WANCORE_WANCONN_CLEAR_UMTS_STAT,
    ATP_MSG_WANCORE_WANCONN_SAVE_Ethernet_STAT,
    ATP_MSG_WANCORE_WANCONN_CLEAR_Ethernet_STAT,
    ATP_MSG_WANCORE_WANCONN_SAVE_WAN_STAT,
#endif
/* DTS2013110505441 z81004485 2013/11/5 end> */
/* DTS2013102206837  z81004485 2013/10/22 end> */
/* DTS2012083003620 z81004485 2012/9/11 end> */
    ATP_MSG_WANCORE_WANCONN_CHANGE,
} ATP_WANCORE_MSGTYPES_EN;

/* ���Ӵ�������Ҫ��DHCP/PPPOE�ͻ�����һ�� */
typedef enum
{
    /* �ȴ� */
    WAN_TRIGGER_IDLE = 0,
    /* ���� */
    WAN_TRIGGER_DISCONNECTING = 1,
    /* �ֶ� */
    WAN_TRIGGER_MANUAL = 2,
    /* �Զ� */
    WAN_TRIGGER_ALWAYSON = 3,
    /* ���貦�� */
    WAN_TRIGGER_ONDEMAND = 4, 
}WAN_TRIGGER_EN;


/* WAN����״̬ */
typedef enum
{
    /* δ��ʼ�� */
    ATP_WAN_STATUS_UNCONFIGURED,
    /* �������� */
    ATP_WAN_STATUS_CONNECTING,
    /* ������֤ */
    ATP_WAN_STATUS_AUTHENTICATING,
    /* ������ */
    ATP_WAN_STATUS_CONNECTED,
    /* δ���� */
    ATP_WAN_STATUS_PENDING,
    /* ���ڶϿ� */
    ATP_WAN_STATUS_DISCONNECTING,
    /* �ѶϿ� */
    ATP_WAN_STATUS_DISCONNECTED, 
}ATP_WAN_STATUS_EN;


#endif