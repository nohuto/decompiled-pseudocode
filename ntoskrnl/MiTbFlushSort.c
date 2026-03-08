/*
 * XREFs of MiTbFlushSort @ 0x1402D8740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTbFlushSort(_QWORD *a1, _QWORD *a2)
{
  if ( *a1 < *a2 )
    return 0xFFFFFFFFLL;
  else
    return *a1 > *a2;
}
