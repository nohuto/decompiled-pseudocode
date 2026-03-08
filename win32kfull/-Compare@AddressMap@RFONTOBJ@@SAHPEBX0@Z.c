/*
 * XREFs of ?Compare@AddressMap@RFONTOBJ@@SAHPEBX0@Z @ 0x1C014FBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RFONTOBJ::AddressMap::Compare(_QWORD *a1, _QWORD *a2)
{
  if ( *a1 == *a2 )
    return 0LL;
  else
    return *a1 < *a2 ? -1 : 1;
}
