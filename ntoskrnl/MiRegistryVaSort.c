/*
 * XREFs of MiRegistryVaSort @ 0x140828F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiRegistryVaSort(_QWORD *a1, _QWORD *a2)
{
  if ( *a1 < *a2 )
    return 0xFFFFFFFFLL;
  else
    return *a1 > *a2;
}
