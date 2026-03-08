/*
 * XREFs of KiMayStealStandbyThread @ 0x1402ADAD0
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x1402AC810 (KiSearchForNewThreadOnProcessor.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiMayStealStandbyThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  bool result; // al

  result = 0;
  if ( *(_BYTE *)(a1 + 34057) == *(_BYTE *)(a2 + 34057) )
  {
    v2 = *(_QWORD *)(a1 + 16);
    if ( v2 )
    {
      if ( v2 != *(_QWORD *)(a1 + 24) && (**(_BYTE **)(a1 + 56) & 0x7Fu) >= 0x10 )
        return 1;
    }
  }
  return result;
}
