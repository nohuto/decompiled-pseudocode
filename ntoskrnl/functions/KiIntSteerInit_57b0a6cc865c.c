__int64 __fastcall KiIntSteerInit(int a1)
{
  unsigned int v1; // ebx
  __int64 Pool2; // rax
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 == 1 )
  {
    KiIntTrackRootCount = 0;
    qword_140C41108 = (__int64)&KiIntTrackRootList;
    KiIntTrackRootList = (__int64)&KiIntTrackRootList;
    KiIntTrackSpinlock = 0LL;
    KiIntSteerMask = 2097153;
    memset(&unk_140C41264, 0, 0x104uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)&KiIntSteerMask, 0);
    KiIntSteerAffinitizedInterrupts[0] = 2097153;
    memset(&unk_140C41144, 0, 0x104uLL);
    v4 = 0;
    ((void (__fastcall *)(__int64, __int64, int *, int *))off_140C020E8[0])(39LL, 4LL, &KiInterruptControllerInfo, &v4);
    KiIntSteerEnabled = KiIntSteerDetermineSteeringEnabled();
    if ( KiIntSteerEnabled )
    {
      KiIntSteerDistributionContext = (void *)ExAllocatePool2(64LL, 0x204uLL, 0x6B725449u);
      Pool2 = ExAllocatePool2(64LL, 0x200uLL, 0x6B725449u);
      KiIntSteerPerProcIsrDpcTimeAffinitized = Pool2;
      if ( !KiIntSteerDistributionContext || !Pool2 )
        return (unsigned int)-1073741670;
    }
  }
  else if ( a1 == 2 && KiIntSteerEnabled )
  {
    return (unsigned int)KiIntPartInit();
  }
  return v1;
}
