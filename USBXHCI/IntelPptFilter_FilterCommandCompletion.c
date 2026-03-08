/*
 * XREFs of IntelPptFilter_FilterCommandCompletion @ 0x1C007C230
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BBC (WPP_RECORDER_SF_.c)
 *     IntelPptFilter_DecreaseEndpointCount @ 0x1C007C090 (IntelPptFilter_DecreaseEndpointCount.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C007C2F8 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 */

void __fastcall IntelPptFilter_FilterCommandCompletion(__int64 a1, __int64 a2)
{
  int v4; // edx
  KIRQL v5; // bp
  __int64 v6; // r8
  int v7; // ecx

  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  v7 = *(_DWORD *)(a2 + 36) & 0xFC00;
  if ( v7 == 10240 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v4,
        16,
        19,
        (__int64)&WPP_0f3e6ee050e235607aa5f43a2d147c91_Traceguids);
    }
    IntelPptFilter_DecreaseEndpointCount(a1, 1);
  }
  else if ( v7 == 12288 )
  {
    LOBYTE(v6) = 1;
    IntelPptFilter_FilterEndpointConfigureCommand(a1, a2, v6);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v5);
}
