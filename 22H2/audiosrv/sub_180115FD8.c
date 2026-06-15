/*
 * XREFs of sub_180115FD8 @ 0x180115FD8
 * Callers:
 *     sub_1801174D4 @ 0x1801174D4 (sub_1801174D4.c)
 * Callees:
 *     sub_180048714 @ 0x180048714 (sub_180048714.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180119B20 @ 0x180119B20 (sub_180119B20.c)
 */

__int64 __fastcall sub_180115FD8(__int64 a1, __int64 a2, unsigned int *a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int16 *v12; // rdi
  int v13; // edx
  __int64 v14; // xmm0_8
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  __int16 v17; // [rsp+30h] [rbp-28h]

  v4 = 0;
  if ( a3 )
  {
    v7 = *((_QWORD *)a3 + 4) - 0x10000000000001LL;
    if ( *((_QWORD *)a3 + 4) == 0x10000000000001LL )
      v7 = *((_QWORD *)a3 + 5) - 0x719B3800AA000080LL;
    if ( !v7 )
      goto LABEL_8;
    v8 = *((_QWORD *)a3 + 4) - 0x10000000000003LL;
    if ( *((_QWORD *)a3 + 4) == 0x10000000000003LL )
      v8 = *((_QWORD *)a3 + 5) - 0x719B3800AA000080LL;
    if ( !v8 )
    {
LABEL_8:
      v9 = *((_QWORD *)a3 + 6) - 0x11CEC35605589F81LL;
      if ( *((_QWORD *)a3 + 6) == 0x11CEC35605589F81LL )
        v9 = *((_QWORD *)a3 + 7) - 0x5A595500AA0001BFLL;
      if ( !v9 && *a3 > 0x40 )
      {
        v10 = *a3 - 64LL;
        if ( v10 <= 0x28 )
        {
          v11 = 0x10000044000LL;
          if ( _bittest64(&v11, v10) )
          {
            v12 = (unsigned __int16 *)(a3 + 16);
            v17 = 0;
            v16 = 0LL;
            if ( v10 == 14 )
            {
              v13 = *((unsigned __int16 *)a3 + 38);
              v14 = *(_QWORD *)v12;
              v12 = (unsigned __int16 *)&v16;
              DWORD2(v16) = a3[18];
              WORD6(v16) = v13;
              *(_QWORD *)&v16 = v14;
              v17 = 0;
              v10 = 18LL;
              HIWORD(v16) = 8 * v13 / (unsigned int)WORD1(v14);
            }
            if ( v10 >= (unsigned __int64)v12[8] + 18 && (unsigned __int8)sub_180119B20(a2, v12) )
              return (unsigned int)sub_180048714(v12, a4);
          }
        }
      }
    }
  }
  return v4;
}
