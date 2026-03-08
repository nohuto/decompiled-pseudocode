/*
 * XREFs of KiAbThreadInsertList @ 0x1402F45E0
 * Callers:
 *     PsBoostThreadIoEx @ 0x1402634D0 (PsBoostThreadIoEx.c)
 *     ExpApplyPriorityBoost @ 0x140282C50 (ExpApplyPriorityBoost.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x140356D7C (KeAbProcessEffectiveIoPriorityChange.c)
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x140357A54 (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     KiAbSetMinimumThreadPriority @ 0x140357EB4 (KiAbSetMinimumThreadPriority.c)
 *     KiAbThreadBoostIoPriority @ 0x140358384 (KiAbThreadBoostIoPriority.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiAbThreadInsertList(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v3; // edi
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v8);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *a3 == 1LL )
  {
    v3 = 1;
    *a3 = *a2;
    *a2 = a3;
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v3 )
    _InterlockedAdd16((volatile signed __int16 *)(a1 + 868), 1u);
  return v3;
}
