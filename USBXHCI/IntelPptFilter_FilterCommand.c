__int64 __fastcall IntelPptFilter_FilterCommand(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  int v5; // edx
  unsigned int v6; // ebx
  int v7; // r8d
  KIRQL v8; // r15
  int v9; // edx

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  v6 = 4;
  v7 = *(_DWORD *)(a2 + 36) & 0xFC00;
  v8 = v4;
  if ( v7 == 9216 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v5,
        16,
        17,
        (__int64)&WPP_0f3e6ee050e235607aa5f43a2d147c91_Traceguids);
    }
    if ( !IntelPptFilter_CheckAndIncreaseEndpointCount(a1, 1) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 3;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v9,
          16,
          18,
          (__int64)&WPP_0f3e6ee050e235607aa5f43a2d147c91_Traceguids);
      }
      *(_BYTE *)(a2 + 60) = 9;
      v6 = 1;
    }
  }
  else if ( v7 == 12288 )
  {
    v6 = IntelPptFilter_FilterEndpointConfigureCommand(a1, a2, 0LL);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v8);
  return v6;
}
