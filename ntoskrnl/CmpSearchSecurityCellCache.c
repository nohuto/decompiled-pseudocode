/*
 * XREFs of CmpSearchSecurityCellCache @ 0x1402D00A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpSearchSecurityCellCache(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 > *a2 )
    return 1LL;
  else
    return (unsigned int)-(*a1 < *a2);
}
