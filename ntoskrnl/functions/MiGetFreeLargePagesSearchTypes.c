int __fastcall MiGetFreeLargePagesSearchTypes(__int64 a1)
{
  int v1; // eax
  char *v3; // rsi
  unsigned __int8 *v4; // rax
  __int64 v5; // r15
  int v6; // edx
  __int64 v7; // r14
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // r13
  int v11; // edi
  __int64 v12; // r12
  __int64 v13; // rbp
  __int64 v14; // r8
  unsigned __int8 *v15; // rax
  bool v16; // zf
  __int64 v17; // r9
  unsigned int v18; // r10d
  unsigned int v19; // edx
  __int64 v20; // r8
  int i; // ecx
  unsigned int v22; // r12d
  _BYTE *v23; // r14
  __int64 v24; // rax
  int v25; // ecx
  int v26; // eax
  unsigned int v27; // r8d
  int v29; // [rsp+20h] [rbp-78h]
  int v30; // [rsp+24h] [rbp-74h]
  int v31; // [rsp+28h] [rbp-70h]
  __int64 v32; // [rsp+30h] [rbp-68h]
  __int64 v33; // [rsp+38h] [rbp-60h]
  unsigned __int8 *v34; // [rsp+40h] [rbp-58h]
  unsigned __int8 *v35; // [rsp+48h] [rbp-50h]
  char v36; // [rsp+A0h] [rbp+8h] BYREF
  char v37; // [rsp+A1h] [rbp+9h] BYREF
  unsigned int v38; // [rsp+A8h] [rbp+10h]
  int j; // [rsp+B0h] [rbp+18h]
  unsigned int v40; // [rsp+B8h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 36);
  v36 = 0;
  if ( v1 == 4 )
  {
    v3 = (char *)(*(_QWORD *)(a1 + 160) + 23037LL);
    v4 = (unsigned __int8 *)&v3[MmNumberOfChannels];
  }
  else
  {
    v36 = v1;
    v3 = &v36;
    v4 = (unsigned __int8 *)&v37;
  }
  v34 = v4;
  while ( 1 )
  {
    v5 = (unsigned __int8)*v3;
    v6 = 0;
    v29 = 0;
    if ( *(int *)(a1 + 84) >= 0 )
      break;
LABEL_33:
    if ( ++v3 == (char *)v4 )
    {
      if ( !*(_BYTE *)(a1 + 58) )
        *(_BYTE *)(a1 + 56) = 1;
      return (int)v4;
    }
  }
  v7 = 0LL;
  v33 = 0LL;
  while ( 1 )
  {
    v8 = 0LL;
    v31 = 0;
    if ( *(_DWORD *)(a1 + 80) )
      break;
LABEL_31:
    ++v6;
    v7 += 2LL;
    v29 = v6;
    v33 = v7;
    if ( v6 > *(_DWORD *)(a1 + 84) )
    {
      v4 = v34;
      goto LABEL_33;
    }
  }
  v9 = v5;
  while ( 1 )
  {
    v10 = *(int *)(a1 + 4 * v8 + 88);
    v11 = *(_DWORD *)(a1 + 40);
    v12 = v10;
    v30 = 0;
    v13 = v11;
    v4 = (unsigned __int8 *)(4 * (v9 + 4 * (v7 + v10)));
    v35 = v4;
    do
    {
      v14 = *(_QWORD *)(a1 + 176);
      v15 = &v4[v13];
      *(_DWORD *)(a1 + 96) = v6;
      *(_DWORD *)(a1 + 100) = v10;
      *(_DWORD *)(a1 + 104) = v5;
      v16 = *(_QWORD *)(v14 + 8LL * (_QWORD)v15 + 48) == 0LL;
      v17 = *(_QWORD *)(v14 + 8LL * (_QWORD)v15 + 560);
      *(_QWORD *)(a1 + 168) = v17;
      *(_DWORD *)(a1 + 108) = v11;
      if ( !v16 )
      {
        v18 = *(_DWORD *)(a1 + 76);
        *(_QWORD *)(a1 + 128) = 0LL;
        v40 = v18;
        v20 = *(_QWORD *)(v14 + 8 * (v11 + 4 * (v9 + 4 * (v12 + 2LL * v6))) + 560);
        v32 = v20;
        v38 = *(_DWORD *)(a1 + 72);
        v19 = v38;
        v4 = (unsigned __int8 *)(v17 + 24LL * v38);
        v16 = *(_QWORD *)(a1 + 48) == 0LL;
        *(_QWORD *)(a1 + 168) = v4;
        for ( i = v16; ; i = 1 )
        {
          v22 = 0;
          for ( j = i; v22 < v18; ++v22 )
          {
            v4 = *(unsigned __int8 **)(a1 + 168);
            if ( *(unsigned __int8 **)v4 != v4 )
            {
              if ( i || *(_QWORD *)(a1 + 128) || (v4 = (unsigned __int8 *)*((_QWORD *)v4 + 1), (v4[34] & 8) == 0) )
              {
                *(_DWORD *)(a1 + 72) = v19;
                LODWORD(v4) = MiGetFreeLargePage(a1);
                v23 = (_BYTE *)(a1 + 57);
                if ( (_DWORD)v4 )
                {
                  if ( *v23 )
                    goto LABEL_21;
                  v22 = -1;
                }
                else
                {
                  *(_QWORD *)(a1 + 128) = 0LL;
                }
                if ( *(_BYTE *)(a1 + 56) )
                  return (int)v4;
                v19 = v38;
                v18 = v40;
                v20 = v32;
              }
              else
              {
                v23 = (_BYTE *)(a1 + 57);
              }
              if ( *(_BYTE *)(a1 + 59) < 2u && (*(_BYTE *)(a1 + 24) & 0xF) == 0 )
              {
                LODWORD(v4) = KeShouldYieldProcessor();
                if ( (_DWORD)v4 )
                {
                  v16 = *(_QWORD *)(a1 + 136) == 0LL;
                  *v23 = 1;
                  if ( !v16 )
                    goto LABEL_21;
                }
                v20 = v32;
                v18 = v40;
                v19 = v38;
              }
              i = j;
            }
            v38 = ++v19;
            if ( v19 == v18 )
            {
              v19 = 0;
              *(_QWORD *)(a1 + 168) = v20;
              v38 = 0;
            }
            else
            {
              *(_QWORD *)(a1 + 168) += 24LL;
            }
          }
          if ( i )
            break;
        }
        *(_DWORD *)(a1 + 72) = v19;
        v23 = (_BYTE *)(a1 + 57);
LABEL_21:
        if ( *(_BYTE *)(a1 + 56) || *v23 && *(_QWORD *)(a1 + 136) )
          return (int)v4;
        v6 = v29;
        v12 = v10;
        v9 = v5;
      }
      v24 = v13 + 1;
      v13 = 0LL;
      v25 = v11 + 1;
      if ( v11 != 3 )
        v13 = v24;
      v26 = v11;
      v11 = 0;
      v27 = v30 + 1;
      v16 = v26 == 3;
      ++v30;
      v4 = v35;
      if ( !v16 )
        v11 = v25;
    }
    while ( v27 <= 3 );
    if ( *(_BYTE *)(a1 + 58) )
      return (int)v4;
    v7 = v33;
    v8 = (unsigned int)(v31 + 1);
    v31 = v8;
    if ( (unsigned int)v8 >= *(_DWORD *)(a1 + 80) )
      goto LABEL_31;
  }
}
