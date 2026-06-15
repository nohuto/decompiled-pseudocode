/*
 * XREFs of sub_180050FD0 @ 0x180050FD0
 * Callers:
 *     sub_18000319C @ 0x18000319C (sub_18000319C.c)
 *     sub_180050C80 @ 0x180050C80 (sub_180050C80.c)
 * Callees:
 *     sub_18005104C @ 0x18005104C (sub_18005104C.c)
 *     sub_180051090 @ 0x180051090 (sub_180051090.c)
 */

__int64 __fastcall sub_180050FD0(__int64 a1, int a2, _DWORD *a3)
{
  int v6; // esi

  if ( !*(_QWORD *)a1 )
    return 2147500037LL;
  v6 = sub_180051090(a1);
  if ( a2 < v6 || a2 > (int)sub_18005104C(a1) )
    return 2147942487LL;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 4LL * (a2 - v6)) = *a3;
  return 0LL;
}
