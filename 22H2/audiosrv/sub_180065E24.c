/*
 * XREFs of sub_180065E24 @ 0x180065E24
 * Callers:
 *     sub_180065E10 @ 0x180065E10 (sub_180065E10.c)
 * Callees:
 *     sub_18001F7C0 @ 0x18001F7C0 (sub_18001F7C0.c)
 *     sub_18004B060 @ 0x18004B060 (sub_18004B060.c)
 *     sub_18004B400 @ 0x18004B400 (sub_18004B400.c)
 *     sub_18004BA74 @ 0x18004BA74 (sub_18004BA74.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_1800BB2C8 @ 0x1800BB2C8 (sub_1800BB2C8.c)
 *     sub_18011B780 @ 0x18011B780 (sub_18011B780.c)
 */

char __fastcall sub_180065E24(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  __int128 v5; // xmm6
  __int64 v6; // rax
  int v7; // ecx
  int v8; // r8d
  char v9; // bl
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // r13
  unsigned __int128 v13; // kr00_16
  int v14; // r12d
  __int64 i; // rsi
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  int v19; // r14d
  __int64 v20; // r15
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // r11
  __int128 v27; // xmm0
  __int64 v28; // [rsp+20h] [rbp-50h]
  __int64 v29; // [rsp+28h] [rbp-48h]
  __int128 v31; // [rsp+40h] [rbp-30h] BYREF

  if ( sub_18001F7C0((__int16 *)a2) && sub_18004BA74(*(_QWORD *)a1, (_QWORD *)(a2 + 24)) )
    return 1;
  v4 = *(_QWORD *)a1;
  v5 = *(_OWORD *)(a1 + 8);
  v29 = v4;
  v31 = v5;
  v6 = sub_18004B060((unsigned __int64 *)(v4 + 1720), 0LL);
  v7 = 0;
  v8 = *(_DWORD *)(v6 + 16);
  v9 = 1;
  if ( v8 > 0 )
  {
    v22 = *(_QWORD *)v6;
    while ( 1 )
    {
      v23 = *(_QWORD *)(v22 + 16LL * v7) - v31;
      if ( !v23 )
        v23 = *(_QWORD *)(v22 + 16LL * v7 + 8) - *((_QWORD *)&v31 + 1);
      if ( !v23 )
        break;
      if ( ++v7 >= v8 )
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    v7 = -1;
  }
  v31 = v5;
  if ( v7 != -1 )
  {
    v24 = sub_18004B060((unsigned __int64 *)(v4 + 1720), 0LL);
    v25 = sub_18011B780(v24, &v31);
    if ( v25 == -1 )
    {
      v27 = xmmword_18015B730;
    }
    else
    {
      if ( v25 < 0 || v25 >= *(_DWORD *)(v26 + 16) )
      {
        sub_1800BB2C8(3221225612LL);
        __debugbreak();
      }
      v27 = *(_OWORD *)(*(_QWORD *)(v26 + 8) + 16LL * v25);
    }
    v31 = v27;
  }
  v10 = v31;
  v13 = v31;
  v12 = v13 >> 64;
  v11 = v13;
  v28 = v31;
  if ( !(_QWORD)v31 )
    v11 = *((_QWORD *)&v31 + 1);
  if ( !v11 )
  {
    v31 = xmmword_18015B798;
    v12 = 0xCF56A961137EA8A1uLL;
    v10 = 0x4FD1B4939E90EA20LL;
    v28 = 0x4FD1B4939E90EA20LL;
  }
  v14 = 0;
  for ( i = 0LL; ; i += 8LL )
  {
    v16 = *(_QWORD *)(v4 + 224);
    if ( v14 >= *(_DWORD *)(v16 + 8) )
      return 0;
    if ( i < 0 )
    {
      sub_1800BB2C8(3221225612LL);
      JUMPOUT(0x1800B30A8LL);
    }
    v17 = *(_QWORD *)(i + *(_QWORD *)v16);
    v18 = *(_QWORD *)v17 - v10;
    if ( *(_QWORD *)v17 == v10 )
      v18 = *(_QWORD *)(v17 + 8) - v12;
    if ( !v18 )
      break;
LABEL_24:
    ++v14;
  }
  v19 = 0;
  if ( *(int *)(v17 + 24) <= 0 )
  {
LABEL_23:
    v4 = v29;
    goto LABEL_24;
  }
  v20 = 0LL;
  while ( 1 )
  {
    if ( v20 < 0 || v19 >= *(_DWORD *)(v17 + 24) )
    {
      sub_1800BB2C8(3221225612LL);
      __debugbreak();
    }
    if ( (unsigned int)sub_18004B400((unsigned __int16 *)a2, **(unsigned __int16 ***)(v20 + *(_QWORD *)(v17 + 16))) )
      return v9;
    ++v19;
    v20 += 8LL;
    if ( v19 >= *(_DWORD *)(v17 + 24) )
    {
      v10 = v28;
      goto LABEL_23;
    }
  }
}
