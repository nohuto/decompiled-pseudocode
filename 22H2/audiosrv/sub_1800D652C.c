/*
 * XREFs of sub_1800D652C @ 0x1800D652C
 * Callers:
 *     sub_1800D5E18 @ 0x1800D5E18 (sub_1800D5E18.c)
 * Callees:
 *     sub_180048714 @ 0x180048714 (sub_180048714.c)
 *     sub_18004BB48 @ 0x18004BB48 (sub_18004BB48.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_1800D56D8 @ 0x1800D56D8 (sub_1800D56D8.c)
 *     sub_1800D763C @ 0x1800D763C (sub_1800D763C.c)
 */

__int64 __fastcall sub_1800D652C(__int64 a1, int a2, __int64 a3, __int128 *a4, _QWORD *a5)
{
  _QWORD *v5; // rsi
  int v10; // r14d
  int v11; // edx
  int v12; // edi
  int v13; // edx
  int v15; // r8d
  unsigned __int16 *v16; // r12
  unsigned int v17; // r15d
  int v18; // ebx
  int v19; // edx
  int v20; // [rsp+28h] [rbp-69h]
  __int128 v22; // [rsp+50h] [rbp-41h] BYREF
  __int128 *v23; // [rsp+60h] [rbp-31h]
  _QWORD *v24; // [rsp+68h] [rbp-29h]
  _OWORD Src[2]; // [rsp+70h] [rbp-21h] BYREF
  __int64 v26; // [rsp+90h] [rbp-1h]
  _UNKNOWN *retaddr; // [rsp+E8h] [rbp+57h]

  v5 = a5;
  v23 = a4;
  v24 = a5;
  if ( *(_WORD *)a3 == 0xFFFE )
    v10 = *(_DWORD *)(a3 + 20);
  else
    v10 = 0;
  *a5 = 0LL;
  v12 = sub_18004BB48(a3);
  if ( v12 < 0 )
  {
    v13 = 1487;
LABEL_6:
    sub_18004BD84((int)retaddr, v13, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v12);
    return (unsigned int)v12;
  }
  if ( v12 )
  {
    v22 = *a4;
    v12 = sub_1800D56D8(a1, a2, (unsigned __int16 *)a3, &v22);
    if ( v12 < 0 )
    {
      v13 = 1514;
      goto LABEL_6;
    }
    v18 = sub_180048714((unsigned __int16 *)a3, a5);
    if ( v18 < 0 )
    {
      v19 = 1515;
      goto LABEL_16;
    }
  }
  else
  {
    v15 = *(_DWORD *)(a3 + 4);
    v26 = 0LL;
    v20 = *(unsigned __int16 *)(a3 + 2);
    LOBYTE(v11) = 1;
    memset(Src, 0, sizeof(Src));
    sub_1800D763C((unsigned int)Src, v11, v15, 32, 32, v20, v10);
    v22 = *a4;
    v12 = sub_1800D56D8(a1, a2, (unsigned __int16 *)Src, &v22);
    if ( v12 < 0 )
    {
      v16 = (unsigned __int16 *)&unk_180170590;
      v17 = 0;
      do
      {
        if ( v17 >= 5 )
          break;
        sub_1800D763C((unsigned int)Src, 0, *(_DWORD *)(a3 + 4), *v16, v16[1], *(unsigned __int16 *)(a3 + 2), v10);
        v22 = *v23;
        ++v17;
        v16 += 2;
        v12 = sub_1800D56D8(a1, a2, (unsigned __int16 *)Src, &v22);
      }
      while ( v12 < 0 );
      v5 = v24;
      if ( v12 < 0 )
      {
        v13 = 1507;
        goto LABEL_6;
      }
    }
    v18 = sub_180048714((unsigned __int16 *)Src, v5);
    if ( v18 < 0 )
    {
      v19 = 1509;
LABEL_16:
      sub_18004BD84((int)retaddr, v19, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v18);
      return (unsigned int)v18;
    }
  }
  return 0LL;
}
