/*
 * XREFs of KiInsertNonMaxOverQuotaScb @ 0x14035D2FC
 * Callers:
 *     KiTransitionSchedulingGroupGeneration @ 0x140259550 (KiTransitionSchedulingGroupGeneration.c)
 *     KiAddThreadToScbQueue @ 0x14035D254 (KiAddThreadToScbQueue.c)
 * Callees:
 *     KiInsertSchedulingGroupQueue @ 0x14035D35C (KiInsertSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x14035D48C (KiResortScbQueue.c)
 */

char __fastcall KiInsertNonMaxOverQuotaScb(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  char result; // al

  v3 = a3;
  do
  {
    result = *(_BYTE *)(a1 + 112);
    if ( (result & 2) != 0 )
      break;
    if ( (result & 1) != 0 )
    {
      result = KiResortScbQueue(a2, a1, 0LL);
    }
    else
    {
      LOBYTE(a3) = v3;
      result = KiInsertSchedulingGroupQueue(a2, a1, a3);
    }
    a1 = *(_QWORD *)(a1 + 408);
  }
  while ( a1 );
  return result;
}
