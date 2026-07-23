/*
 * XREFs of PsUpdateComponentPower @ 0x1402F67A0
 * Callers:
 *     PspSetProcessEnergyTrackingStateCallback @ 0x140620C40 (PspSetProcessEnergyTrackingStateCallback.c)
 *     PspApplyJobChainLimitsToProcess @ 0x1406F487C (PspApplyJobChainLimitsToProcess.c)
 * Callees:
 *     PoEnergyContextUpdateComponentPower @ 0x1406F499C (PoEnergyContextUpdateComponentPower.c)
 */

signed __int64 __fastcall PsUpdateComponentPower(PEPROCESS a1, int a2, unsigned __int64 a3)
{
  signed __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  volatile signed __int64 *v6; // r9
  unsigned int v7; // r10d
  bool v8; // cc
  signed __int64 v9; // rtt
  signed __int64 v10; // [rsp+30h] [rbp+8h]

  if ( !a1 || a1 == PsIdleProcess )
    a1 = PsInitialSystemProcess;
  result = a1[2].Affinity.Bitmap[4];
  if ( !result )
    return result;
  if ( a2 == 1 )
  {
    if ( !a3 )
      return result;
    v4 = 280LL;
    v5 = 64LL;
    goto LABEL_7;
  }
  if ( a2 == 2 )
  {
    if ( !a3 )
      return result;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(result + 72), HIDWORD(a3));
    a3 = (unsigned int)a3;
    v4 = 288LL;
    v5 = 88LL;
    goto LABEL_7;
  }
  if ( a2 != 3 )
    return PoEnergyContextUpdateComponentPower();
  if ( a3 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(result + 80), HIDWORD(a3));
    a3 = (unsigned int)a3;
    v4 = 296LL;
    v5 = 96LL;
LABEL_7:
    v6 = (volatile signed __int64 *)(v4 + result);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + result), a3);
    if ( v4 + result )
    {
      result = *v6;
      v7 = KiTimelineBitmapTime;
      v8 = KiTimelineBitmapTime <= (unsigned int)*v6;
      if ( KiTimelineBitmapTime != (unsigned int)*v6 )
        goto LABEL_18;
      if ( (result & 0x100000000LL) == 0 )
      {
        do
        {
          v8 = v7 <= (unsigned int)result;
LABEL_18:
          if ( v8 )
          {
            if ( (unsigned int)result - v7 >= 0x20 )
              return result;
            HIDWORD(v10) = HIDWORD(result) | (1 << (result - v7));
            if ( HIDWORD(v10) == HIDWORD(result) )
              return result;
            LODWORD(v10) = result;
          }
          else
          {
            if ( v7 - (unsigned int)result >= 0x20 )
              HIDWORD(v10) = 1;
            else
              HIDWORD(v10) = (HIDWORD(result) << (v7 - result)) | 1;
            LODWORD(v10) = v7;
          }
          v9 = result;
          result = _InterlockedCompareExchange64(v6, v10, result);
        }
        while ( v9 != result );
      }
    }
  }
  return result;
}
