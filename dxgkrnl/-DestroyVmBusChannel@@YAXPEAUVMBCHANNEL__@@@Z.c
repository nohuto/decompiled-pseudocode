void __fastcall DestroyVmBusChannel(struct VMBCHANNEL__ *a1)
{
  if ( a1 )
  {
    ((void (*)(void))qword_1C013CE38)();
    ((void (__fastcall *)(struct VMBCHANNEL__ *))qword_1C013CE18)(a1);
    VmBusInterfaceDereference();
  }
}
