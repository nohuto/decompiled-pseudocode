/*
 * XREFs of ?DxgkComparePointers@@YAHPEBX0@Z @ 0x1C0040B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkComparePointers(_QWORD *a1, _QWORD *a2)
{
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  else
    return 0xFFFFFFFFLL;
}
