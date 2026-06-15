/*
 * XREFs of sub_1800E2748 @ 0x1800E2748
 * Callers:
 *     sub_18002FD00 @ 0x18002FD00 (sub_18002FD00.c)
 * Callees:
 *     sub_180033AB0 @ 0x180033AB0 (sub_180033AB0.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_1800E269C @ 0x1800E269C (sub_1800E269C.c)
 *     sub_1800E3308 @ 0x1800E3308 (sub_1800E3308.c)
 *     sub_1800E6510 @ 0x1800E6510 (sub_1800E6510.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800E2748(_QWORD *a1, _QWORD *a2, _QWORD *a3, unsigned int *a4)
{
  LPVOID v8; // rax
  int v9; // edi
  __int64 v10; // rbx

  *a1 = 0LL;
  v8 = sub_18006A18C(0x250uLL);
  if ( v8 )
  {
    v10 = sub_1800E3308(v8);
    v9 = sub_1800E6510(v10, *a2, *a3, *a4, 0LL);
    if ( v9 >= 0 )
      v9 = sub_1800E269C(v10, &xmmword_18015B860, a1);
    if ( v10 )
      sub_180033AB0(v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
