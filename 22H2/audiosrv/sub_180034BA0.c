/*
 * XREFs of sub_180034BA0 @ 0x180034BA0
 * Callers:
 *     sub_1800748D0 @ 0x1800748D0 (sub_1800748D0.c)
 *     sub_1800748E0 @ 0x1800748E0 (sub_1800748E0.c)
 *     sub_1800748F0 @ 0x1800748F0 (sub_1800748F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180034BA0(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 272);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFFLL;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 272), v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return sub_1800D7588(2 * v1 + 16);
}
