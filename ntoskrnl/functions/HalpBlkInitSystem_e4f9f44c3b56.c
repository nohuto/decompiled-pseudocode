void __fastcall HalpBlkInitSystem(int a1)
{
  int v1; // eax
  _QWORD v2[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( a1 == 12 )
  {
    qword_140C01E18 = (__int64)HalpBlkPoGetPowerInterface;
    qword_140C01E20 = (__int64)HalpBlkPoGetPackageId;
    qword_140C01E28 = (__int64)HalpBlkPoGetProcessorCount;
    qword_140C01E30 = (__int64)HalpBlkPoGetApicIdByIndex;
    qword_140C01E38 = (__int64)HalpBlkPoRegisterIdleState;
    if ( HalpInterruptBlockedProcessors && HalpInterruptStartHyperthreadSiblings )
    {
      v1 = HalpBlkInitializeVirtualAddressSpace();
      if ( v1 < 0 )
        KeBugCheckEx(0x1DAu, 1uLL, v1, 0LL, 0LL);
      HalpBlkWdInitialize();
    }
  }
  else if ( HalpInterruptBlockedProcessors && a1 == 21 )
  {
    if ( HalpInterruptStartHyperthreadSiblings )
    {
      v2[0] = 0LL;
      v2[1] = -1LL;
      KeSetTimer2((__int64)&HalpBlkWdTimer, -30000000LL, 30000000LL, (__int64)v2);
    }
  }
}
