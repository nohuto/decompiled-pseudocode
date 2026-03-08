/*
 * XREFs of CmpValueEnumStackEntryCleanup @ 0x14061431C
 * Callers:
 *     CmpValueEnumStackCleanup @ 0x140A22A28 (CmpValueEnumStackCleanup.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 */

__int64 __fastcall CmpValueEnumStackEntryCleanup(__int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rcx
  __int64 result; // rax

  if ( a1[1] )
  {
    v1 = a1 + 2;
    v2 = *a1;
    if ( (*(_BYTE *)(v2 + 140) & 1) != 0 )
      return HvpReleaseCellFlat(v2, v1);
    else
      return HvpReleaseCellPaged(v2, v1);
  }
  return result;
}
