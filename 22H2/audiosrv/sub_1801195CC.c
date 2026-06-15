/*
 * XREFs of sub_1801195CC @ 0x1801195CC
 * Callers:
 *     sub_180059458 @ 0x180059458 (sub_180059458.c)
 *     sub_1801191A4 @ 0x1801191A4 (sub_1801191A4.c)
 * Callees:
 *     sub_180022EE0 @ 0x180022EE0 (sub_180022EE0.c)
 *     sub_1800234A0 @ 0x1800234A0 (sub_1800234A0.c)
 *     sub_1800273F8 @ 0x1800273F8 (sub_1800273F8.c)
 *     sub_1800384A4 @ 0x1800384A4 (sub_1800384A4.c)
 *     sub_18004B060 @ 0x18004B060 (sub_18004B060.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180055010 @ 0x180055010 (sub_180055010.c)
 *     sub_180119ED8 @ 0x180119ED8 (sub_180119ED8.c)
 *     sub_18011E9F8 @ 0x18011E9F8 (sub_18011E9F8.c)
 */

__int64 __fastcall sub_1801195CC(int *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  int v5; // edx
  unsigned int v6; // ebx
  __int64 *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)sub_180055010((unsigned __int64 *)(*((_QWORD *)a1 + 3) + 64LL), *a1) )
  {
    if ( *a1
      && (v8 = (__int64 *)sub_1800234A0((unsigned __int64 *)(*((_QWORD *)a1 + 3) + 152LL), *a1),
          (unsigned int)sub_180022EE0(v8, &xmmword_18015B810) == -1) )
    {
      if ( *a1 != 3 )
      {
        v6 = -2147418113;
        v5 = 1999;
        goto LABEL_5;
      }
      v9 = sub_1800234A0((unsigned __int64 *)(*((_QWORD *)a1 + 3) + 152LL), 3uLL);
      if ( !(unsigned int)sub_18011E9F8(v9, a1 + 1) )
      {
        v6 = -2147418113;
        v5 = 1992;
        goto LABEL_5;
      }
      v10 = sub_18004B060((unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1720LL), *a1);
      if ( !(unsigned int)sub_180119ED8(v10, v11, a1 + 1) )
      {
        v5 = 1994;
        goto LABEL_4;
      }
    }
    else
    {
      v12 = sub_1800234A0((unsigned __int64 *)(*((_QWORD *)a1 + 3) + 152LL), *a1);
      if ( !(unsigned int)sub_18011E9F8(v12, &xmmword_18015B810) )
      {
        v6 = -2147418113;
        v5 = 1984;
        goto LABEL_5;
      }
      v13 = sub_18004B060((unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1720LL), *a1);
      if ( !(unsigned int)sub_180119ED8(v13, v14, &xmmword_18015B810) )
      {
        v5 = 1986;
        goto LABEL_4;
      }
    }
  }
  else
  {
    *(_DWORD *)sub_180055010((unsigned __int64 *)(*((_QWORD *)a1 + 3) + 64LL), *a1) = 1;
    v2 = (__int64 *)sub_1800234A0((unsigned __int64 *)(*((_QWORD *)a1 + 3) + 152LL), *a1);
    sub_1800384A4(v2);
    v3 = sub_18004B060((unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1720LL), *a1);
    if ( !(unsigned int)sub_180119ED8(v3, v4, &xmmword_18015B730) )
    {
      v5 = 1977;
LABEL_4:
      v6 = -2147024882;
LABEL_5:
      sub_18004BD84(
        (int)retaddr,
        v5,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        v6);
      return v6;
    }
  }
  v15 = sub_1800234A0((unsigned __int64 *)(*((_QWORD *)a1 + 3) + 152LL), *a1);
  if ( !(unsigned int)sub_1800273F8(v15, &xmmword_18015B798) )
  {
    v5 = 2003;
    goto LABEL_4;
  }
  *(_DWORD *)sub_180055010((unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1704LL), *a1) = 1;
  return 0LL;
}
