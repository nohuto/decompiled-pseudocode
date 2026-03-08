/*
 * XREFs of CmpHashCompressedComponent @ 0x14074BDE4
 * Callers:
 *     CmDeleteLayeredKey @ 0x1406144A0 (CmDeleteLayeredKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x14074BC50 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140A1D6E8 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpPartialPromoteSubkeys @ 0x140A236F0 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     NLS_UPCASE @ 0x140267AD0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall CmpHashCompressedComponent(unsigned __int8 *a1, int a2)
{
  unsigned int v2; // r9d
  int v3; // r11d
  unsigned __int8 *i; // r10
  unsigned __int16 v5; // r8
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 v8; // r8

  v2 = 0;
  v3 = a2;
  for ( i = a1; v3; --v3 )
  {
    v5 = *i;
    if ( (unsigned __int8)v5 >= 0x61u )
    {
      if ( (unsigned __int8)v5 <= 0x7Au )
      {
        v5 -= 32;
      }
      else
      {
        CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
        v5 = NLS_UPCASE((__int64)CurrentServerSiloGlobals[77].Flink, v8);
      }
    }
    ++i;
    v2 = v5 + 37 * v2;
  }
  return v2;
}
