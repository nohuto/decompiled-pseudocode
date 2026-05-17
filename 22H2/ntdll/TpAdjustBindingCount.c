/*
 * XREFs of TpAdjustBindingCount @ 0x180010A00
 * Callers:
 *     TppDestroyTimer @ 0x18000F1E8 (TppDestroyTimer.c)
 *     TppInitializeTimer @ 0x180010960 (TppInitializeTimer.c)
 *     TpBindFileToDirect @ 0x180076E98 (TpBindFileToDirect.c)
 *     TppAllocAlpcCompletion @ 0x18007A7D4 (TppAllocAlpcCompletion.c)
 *     TppIopFree @ 0x18007DF70 (TppIopFree.c)
 *     TpAllocJobNotification @ 0x18007FE00 (TpAllocJobNotification.c)
 *     TppAlpcpFree @ 0x180083EC0 (TppAlpcpFree.c)
 *     TppJobpFree @ 0x180085700 (TppJobpFree.c)
 *     RtlpTpIoDllProcessUnloads @ 0x180113408 (RtlpTpIoDllProcessUnloads.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x1800A08F0 (NtSetInformationWorkerFactory.c)
 */

void __fastcall TpAdjustBindingCount(__int64 a1, unsigned int a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // eax
  __int64 v5; // rcx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 432), a2);
    v3 = v2 + a2;
    if ( v2 <= 0 )
    {
      if ( v3 <= 0 )
        return;
      v4 = 1;
    }
    else
    {
      if ( v3 > 0 )
        return;
      v4 = -1;
    }
    v5 = *(_QWORD *)(a1 + 56);
    v6 = v4;
    NtSetInformationWorkerFactory(v5, 3LL, &v6);
  }
}
