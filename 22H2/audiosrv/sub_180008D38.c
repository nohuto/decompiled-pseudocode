/*
 * XREFs of sub_180008D38 @ 0x180008D38
 * Callers:
 *     sub_180017690 @ 0x180017690 (sub_180017690.c)
 *     sub_18002ADD8 @ 0x18002ADD8 (sub_18002ADD8.c)
 *     sub_1800D134C @ 0x1800D134C (sub_1800D134C.c)
 * Callees:
 *     sub_1800027F4 @ 0x1800027F4 (sub_1800027F4.c)
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180071940 @ 0x180071940 (sub_180071940.c)
 *     sub_1800D0AE0 @ 0x1800D0AE0 (sub_1800D0AE0.c)
 */

__int64 *__fastcall sub_180008D38(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  SIZE_T v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 *v15; // rsi
  __int64 v16; // rcx
  __int64 *v17; // r8
  __int64 *v18; // rcx
  _QWORD *v19; // rdx
  __int64 v20; // rax
  __int64 v22; // [rsp+88h] [rbp+20h]

  v6 = ((__int64)a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 8 * v11;
  v22 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v14 = sub_180008EAC(v12);
  v15 = (__int64 *)(v14 + 8 * v6);
  v16 = *a3;
  *v15 = *a3;
  if ( v16 )
    sub_180071940(v16, v13);
  v17 = (__int64 *)a1[1];
  v18 = (__int64 *)*a1;
  if ( a2 == v17 )
  {
    v19 = (_QWORD *)v14;
    while ( v18 != v17 )
    {
      v20 = *v18;
      *v18 = 0LL;
      *v19++ = v20;
      ++v18;
    }
  }
  else
  {
    sub_1800D0AE0(v18, a2, v14);
    sub_1800D0AE0(a2, a1[1], v15 + 1);
  }
  if ( *a1 )
  {
    sub_1800027F4((_QWORD *)*a1, (_QWORD *)a1[1]);
    sub_1800472E0(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v14;
  a1[1] = v14 + 8 * v8;
  a1[2] = v14 + v22;
  return v15;
}
