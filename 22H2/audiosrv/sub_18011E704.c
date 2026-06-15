/*
 * XREFs of sub_18011E704 @ 0x18011E704
 * Callers:
 *     sub_18011E608 @ 0x18011E608 (sub_18011E608.c)
 * Callees:
 *     sub_18001E240 @ 0x18001E240 (sub_18001E240.c)
 *     sub_180021ED0 @ 0x180021ED0 (sub_180021ED0.c)
 *     sub_1800384A4 @ 0x1800384A4 (sub_1800384A4.c)
 *     sub_18004B9B4 @ 0x18004B9B4 (sub_18004B9B4.c)
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     sub_180119CCC @ 0x180119CCC (sub_180119CCC.c)
 *     sub_18011E51C @ 0x18011E51C (sub_18011E51C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18011E704(__int64 a1)
{
  int i; // r14d
  __int64 v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rax
  int j; // esi
  LPVOID *v8; // rcx
  int k; // esi
  void **v10; // rax
  int v11; // eax
  char v13; // [rsp+38h] [rbp-29h] BYREF
  __int64 v14; // [rsp+40h] [rbp-21h]
  __int128 v15; // [rsp+48h] [rbp-19h] BYREF
  __int128 v16; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v17[32]; // [rsp+68h] [rbp+7h] BYREF
  char *v18; // [rsp+88h] [rbp+27h]
  int v19; // [rsp+90h] [rbp+2Fh]
  int v20; // [rsp+94h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh]

  v14 = 0LL;
  if ( (unsigned int)dword_18019C448 > 4 )
  {
    v13 = 0;
    v18 = &v13;
    v19 = 1;
    v20 = 0;
    sub_1800521E8((__int64)&dword_18019C448, byte_180169E48, 0LL, 0LL, 3, (__int64)v17);
  }
  sub_180021ED0(a1, 0, &v16, 0LL, 0LL);
  if ( *(_QWORD *)(a1 + 224) )
  {
    v15 = v16;
    sub_18001E240(a1, (__int64 *)&v16, 0, &v15, 0);
    for ( i = 0; ; ++i )
    {
      v3 = *(_QWORD *)(a1 + 224);
      if ( i >= *(_DWORD *)(v3 + 8) )
        break;
      v4 = (_QWORD *)sub_18004B9B4(v3, i);
      v5 = (_QWORD *)*v4;
      v6 = *(_QWORD *)*v4 - v16;
      if ( !v6 )
        v6 = v5[1] - *((_QWORD *)&v16 + 1);
      if ( !v6 )
      {
        for ( j = 0; j < *((_DWORD *)v5 + 6); ++j )
        {
          v8 = *(LPVOID **)sub_18004B9B4((__int64)(v5 + 2), j);
          if ( v8 )
            sub_180119CCC(v8);
        }
        sub_1800384A4(v5 + 2);
        for ( k = 0; k < *((_DWORD *)v5 + 10); ++k )
        {
          v10 = (void **)sub_18004B9B4((__int64)(v5 + 4), k);
          sub_18006A148(*v10);
        }
        sub_1800384A4(v5 + 4);
      }
    }
  }
  v11 = sub_18011E51C(a1);
  if ( v11 < 0 )
    sub_18006D26C(
      (int)retaddr,
      6438,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      v11);
  return 0LL;
}
