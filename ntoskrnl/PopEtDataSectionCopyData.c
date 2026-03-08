/*
 * XREFs of PopEtDataSectionCopyData @ 0x140768274
 * Callers:
 *     PopEtEnergyTrackerQuery @ 0x140767578 (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

void *__fastcall PopEtDataSectionCopyData(__int64 a1, const void *a2, unsigned int a3)
{
  __int64 v4; // rsi
  void *result; // rax

  v4 = a3;
  if ( a3 + *(_DWORD *)(a1 + 20) <= *(_DWORD *)(a1 + 8) )
  {
    result = memmove(*(void **)(a1 + 24), a2, a3);
    *(_QWORD *)(a1 + 24) += v4;
    *(_DWORD *)(a1 + 20) += v4;
  }
  return result;
}
