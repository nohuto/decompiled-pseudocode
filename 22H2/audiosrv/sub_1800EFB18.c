/*
 * XREFs of sub_1800EFB18 @ 0x1800EFB18
 * Callers:
 *     sub_180013120 @ 0x180013120 (sub_180013120.c)
 *     sub_1800EFB00 @ 0x1800EFB00 (sub_1800EFB00.c)
 * Callees:
 *     sub_18002A0F0 @ 0x18002A0F0 (sub_18002A0F0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800EFB18(char *a1, int a2, __int64 a3, LPVOID **a4)
{
  LPVOID *v7; // rax
  LPVOID *v8; // rsi
  LPVOID *v9; // rbx
  int v10; // edi
  int v11; // edx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // r14
  char *v14; // rax
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v7 = (LPVOID *)sub_18006A18C(0x20uLL);
  v8 = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 2) = 0;
    *v7 = off_1801556E8;
    v7[2] = 0LL;
    v7[3] = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = v8;
  if ( v8 )
  {
    if ( !a1 )
    {
LABEL_15:
      *((_DWORD *)v8 + 6) = a2;
      v9 = 0LL;
      *a4 = v8;
      v10 = 0;
      goto LABEL_16;
    }
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)&a1[2 * v12] );
    v8[2] = 0LL;
    v13 = v12 + 1;
    if ( v12 + 1 < v12 )
    {
      v10 = -2147024362;
      goto LABEL_21;
    }
    if ( is_mul_ok(v13, 2uLL) )
    {
      v14 = (char *)CoTaskMemAlloc(2 * v13);
      v8[2] = v14;
      if ( !v14 )
      {
        v10 = -2147024882;
        goto LABEL_21;
      }
      v10 = 0;
      sub_18002A0F0(v14, v12 + 1, a1, v12);
    }
    else
    {
      v10 = -2147024362;
    }
    if ( v10 >= 0 )
      goto LABEL_15;
LABEL_21:
    v11 = 23;
    goto LABEL_22;
  }
  v10 = -2147024882;
  v11 = 19;
LABEL_22:
  sub_18004BD84((int)retaddr, v11, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\streamgroupattributes.cpp", v10);
LABEL_16:
  if ( v9 )
  {
    CoTaskMemFree(v9[2]);
    v9[2] = 0LL;
    sub_18006A148(v9);
  }
  return (unsigned int)v10;
}
