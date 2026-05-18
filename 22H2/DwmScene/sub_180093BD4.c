/*
 * XREFs of sub_180093BD4 @ 0x180093BD4
 * Callers:
 *     sub_180013870 @ 0x180013870 (sub_180013870.c)
 *     sub_1800F5E6C @ 0x1800F5E6C (sub_1800F5E6C.c)
 *     sub_1800F601C @ 0x1800F601C (sub_1800F601C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180093BD4(__int64 a1, int a2)
{
  if ( !*(_DWORD *)(a1 + 124) )
    *(_DWORD *)(a1 + 124) = a2;
  *(_DWORD *)(a1 + 120) = a2;
}
