/*
 * XREFs of sub_1800D23B0 @ 0x1800D23B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     sub_1800D1B10 @ 0x1800D1B10 (sub_1800D1B10.c)
 */

__int64 __fastcall sub_1800D23B0(__int64 a1, unsigned int a2)
{
  SIZE_T v3; // rax
  __int64 *v4; // rsi
  unsigned int v5; // ebx
  int v6; // edx
  __int64 v8; // rcx
  __int64 v9; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  void *v11; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 92) != a2 )
  {
    *(_DWORD *)(a1 + 92) = a2;
    v3 = 4LL * a2;
    if ( !is_mul_ok(a2, 4uLL) )
      v3 = -1LL;
    v4 = (__int64 *)(a1 + 112);
    v11 = sub_18006A1B0(v3);
    sub_1800D1B10((void **)(a1 + 112), &v11);
    v5 = 0;
    if ( v11 )
      sub_180033A70(v11);
    if ( !*v4 )
    {
      v6 = 214;
LABEL_8:
      sub_18004BD84((int)retaddr, v6, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", -2147024882);
      return 2147942414LL;
    }
    v11 = sub_18006A1B0(saturated_mul(*(unsigned int *)(a1 + 92), 4uLL));
    sub_1800D1B10((void **)(a1 + 120), &v11);
    if ( v11 )
      sub_180033A70(v11);
    if ( !*(_QWORD *)(a1 + 120) )
    {
      v6 = 216;
      goto LABEL_8;
    }
    if ( *(_DWORD *)(a1 + 92) )
    {
      v8 = *v4;
      do
      {
        v9 = v5++;
        *(_DWORD *)(v8 + 4 * v9) = 1065353216;
      }
      while ( v5 < *(_DWORD *)(a1 + 92) );
    }
  }
  return 0LL;
}
