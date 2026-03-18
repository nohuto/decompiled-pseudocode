/*
 * XREFs of CmpValueEnumStackEntryCleanup @ 0x1406167D8
 * Callers:
 *     CmpValueEnumStackCleanup @ 0x140A25788 (CmpValueEnumStackCleanup.c)
 * Callees:
 *     HvpReleaseCellPaged @ 0x1406E0310 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x1407D99F0 (HvpReleaseCellFlat.c)
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
