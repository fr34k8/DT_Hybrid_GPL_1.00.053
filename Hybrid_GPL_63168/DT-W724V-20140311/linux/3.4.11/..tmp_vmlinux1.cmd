cmd_.tmp_vmlinux1 := /home/zengyao/DT_Hybrid_GPL_1.00.052/DT-W724V-20140311/output/host/usr/bin/mips-unknown-linux-uclibc-ld  -m elf32btsmip -G 0 -static -n -nostdlib --build-id -o .tmp_vmlinux1 -T arch/mips/kernel/vmlinux.lds arch/mips/kernel/head.o arch/mips/kernel/init_task.o  init/built-in.o --start-group  usr/built-in.o  arch/mips/built-in.o  kernel/built-in.o  mm/built-in.o  fs/built-in.o  ipc/built-in.o  security/built-in.o  crypto/built-in.o  block/built-in.o  lib/lib.a  arch/mips/fw/lib/lib.a  arch/mips/lib/lib.a  lib/built-in.o  arch/mips/fw/lib/built-in.o  arch/mips/lib/built-in.o  drivers/built-in.o  sound/built-in.o  firmware/built-in.o  arch/mips/pci/built-in.o  /home/zengyao/DT_Hybrid_GPL_1.00.052/DT-W724V-20140311/package/atp/libraries/private/bhalapi/kernel/src/built-in.o  /home/zengyao/DT_Hybrid_GPL_1.00.052/DT-W724V-20140311/package/atp/applications/ledservice/kernel/dt/Hybrid/built-in.o  /home/zengyao/DT_Hybrid_GPL_1.00.052/DT-W724V-20140311/package/atp/network/qos/dtqoskernel/src/built-in.o  /home/zengyao/DT_Hybrid_GPL_1.00.052/DT-W724V-20140311/package/atp/network/wan/kernel/multinas/built-in.o  /home/zengyao/DT_Hybrid_GPL_1.00.052/DT-W724V-20140311/driver/broadcom/bcm963268/4.14L02/built-in.o  net/built-in.o --end-group 