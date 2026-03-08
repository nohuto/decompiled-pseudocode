/*
 * XREFs of PsUpdateComponentPower @ 0x140294B40
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x1406FF27C (PspApplyJobChainLimitsToProcess.c)
 *     PspSetProcessEnergyTrackingStateCallback @ 0x14079B910 (PspSetProcessEnergyTrackingStateCallback.c)
 * Callees:
 *     RtlInterlockedTimelineBitmapUpdate @ 0x140294BF4 (RtlInterlockedTimelineBitmapUpdate.c)
 *     PoEnergyContextUpdateComponentPower @ 0x1406FF3F8 (PoEnergyContextUpdateComponentPower.c)
 */

void __fastcall PsUpdateComponentPower(struct _KPROCESS *a1, int a2, unsigned __int64 a3)
{
  PEPROCESS v3; // r10
  unsigned __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rax
  signed __int64 v7; // r8
  unsigned __int64 v8; // rcx

  v3 = a1;
  if ( !a1 || a1 == PsIdleProcess )
    v3 = PsInitialSystemProcess;
  v4 = v3[2].Affinity.StaticBitmap[4];
  if ( v4 )
  {
    if ( a2 < 8 )
    {
      switch ( a2 )
      {
        case 1:
          if ( !a3 )
            return;
          v5 = 280LL;
          v6 = 64LL;
          goto LABEL_9;
        case 2:
          if ( !a3 )
            return;
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 72), HIDWORD(a3));
          a3 = (unsigned int)a3;
          v5 = 288LL;
          v6 = 88LL;
LABEL_9:
          v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + v6), a3);
          v8 = v4 + v5;
          if ( v8 )
            RtlInterlockedTimelineBitmapUpdate(v8, (unsigned int)KiTimelineBitmapTime, v7);
          return;
        case 3:
          if ( !a3 )
            return;
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 80), HIDWORD(a3));
          a3 = (unsigned int)a3;
          v5 = 296LL;
          v6 = 96LL;
          goto LABEL_9;
      }
    }
    PoEnergyContextUpdateComponentPower(v3);
  }
}
