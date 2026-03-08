/*
 * XREFs of HalpChannelAscendingSort @ 0x140B8F740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpChannelAscendingSort(_QWORD *a1, _QWORD *a2)
{
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  else
    return 0xFFFFFFFFLL;
}
