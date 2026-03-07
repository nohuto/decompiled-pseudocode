__int64 __fastcall output_l(__int64 a1, char *a2, __int64 a3, wchar_t *a4)
{
  int v5; // edi
  int v6; // esi
  int v7; // r13d
  char *v8; // rbx
  wchar_t *v10; // r14
  char v11; // r9
  int v12; // r15d
  unsigned int v13; // r10d
  wchar_t *v14; // r8
  int v15; // ecx
  char *v16; // rax
  __int64 i; // rcx
  unsigned __int64 v18; // r11
  wchar_t *v19; // r14
  __int64 v20; // rax
  unsigned __int16 *v21; // rdx
  const wchar_t *v22; // rax
  int v23; // eax
  __int64 v24; // rax
  unsigned __int64 v25; // r9
  char v26; // si
  int v27; // r10d
  int v28; // eax
  int v29; // r8d
  int v30; // eax
  bool v31; // zf
  unsigned int v32; // r15d
  unsigned int v33; // r14d
  __int64 v34; // rcx
  __int64 v35; // r15
  int v36; // esi
  wchar_t *v37; // r15
  wchar_t v38; // r9
  __int64 v39; // rcx
  _WORD *v40; // rsi
  char v41; // cl
  int v42; // eax
  int v44; // esi
  int v45; // ecx
  int v46; // eax
  int v47; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v48[4]; // [rsp+34h] [rbp-CCh] BYREF
  int v49; // [rsp+38h] [rbp-C8h]
  int v50; // [rsp+3Ch] [rbp-C4h]
  int SizeConverted; // [rsp+40h] [rbp-C0h] BYREF
  int v52; // [rsp+44h] [rbp-BCh]
  unsigned int v53; // [rsp+48h] [rbp-B8h]
  wchar_t *v54; // [rsp+50h] [rbp-B0h]
  int v55; // [rsp+58h] [rbp-A8h]
  int v56; // [rsp+5Ch] [rbp-A4h]
  __int64 v57; // [rsp+60h] [rbp-A0h]
  int v58; // [rsp+68h] [rbp-98h] BYREF
  char MbCh[512]; // [rsp+70h] [rbp-90h] BYREF
  char v60[8]; // [rsp+270h] [rbp+170h] BYREF

  v57 = a1;
  v54 = a4;
  v56 = 0;
  v5 = 0;
  v6 = 0;
  v50 = 0;
  v7 = 0;
  v49 = 0;
  v55 = 0;
  v8 = 0LL;
  v10 = a4;
  memset(MbCh, 0, sizeof(MbCh));
  v52 = 0;
  if ( a1 && a2 )
  {
    v11 = *a2;
    v12 = 0;
    v47 = 0;
    v13 = 0;
    SizeConverted = 0;
    if ( v11 )
    {
      do
      {
        ++a2;
        v14 = v10;
        if ( v12 < 0 )
          return (unsigned int)v12;
        if ( (unsigned __int8)(v11 - 32) > 0x5Au )
          v15 = 0;
        else
          v15 = _lookuptable[v11 - 32] & 0xF;
        v16 = _lookuptable;
        v13 = _lookuptable[v13 + 8 * v15] >> 4;
        v53 = v13;
        i = v13;
        switch ( v13 )
        {
          case 0u:
            goto LABEL_165;
          case 1u:
            v55 = 0;
            v6 = 0;
            v50 = 0;
            v5 = 0;
            v49 = 0;
            v7 = -1;
            v52 = 0;
            goto LABEL_168;
          case 2u:
            switch ( v11 )
            {
              case ' ':
                v5 |= 2u;
                break;
              case '#':
                v5 |= 0x80u;
                break;
              case '+':
                v5 |= 1u;
                break;
              case '-':
                v5 |= 4u;
                break;
              case '0':
                v5 |= 8u;
                break;
            }
            goto LABEL_168;
          case 3u:
            if ( v11 == 42 )
            {
              v44 = *(_DWORD *)v10;
              v54 = v10 + 4;
              v45 = v44;
              if ( v44 < 0 )
                v5 |= 4u;
              v46 = v44;
              v6 = -v44;
              if ( v46 >= 0 )
                v6 = v45;
            }
            else
            {
              v6 = v11 + 2 * (5 * v6 - 24);
            }
            v50 = v6;
            goto LABEL_168;
          case 4u:
            v7 = 0;
            goto LABEL_168;
          case 5u:
            if ( v11 == 42 )
            {
              v7 = *(_DWORD *)v10;
              v54 = v10 + 4;
              if ( v7 < 0 )
                v7 = -1;
            }
            else
            {
              v7 = v11 + 2 * (5 * v7 - 24);
            }
            goto LABEL_168;
        }
        i = v13 - 6;
        if ( v13 == 6 )
        {
          switch ( v11 )
          {
            case 'I':
              goto LABEL_147;
            case 'h':
              v5 |= 0x20u;
              break;
            case 'j':
              goto LABEL_147;
            case 'l':
              v41 = *a2;
              if ( *a2 == 108 )
                ++a2;
              v42 = 4096;
              if ( v41 != 108 )
                v42 = 16;
              v5 |= v42;
              break;
            case 't':
              goto LABEL_147;
            case 'w':
              v5 |= 0x800u;
              break;
            case 'z':
LABEL_147:
              v5 |= 0x8000u;
              if ( v11 == 73 )
              {
                if ( *a2 == 54 && a2[1] == 52 )
                {
                  a2 += 2;
                }
                else
                {
                  if ( *a2 != 51 || a2[1] != 50 )
                  {
LABEL_162:
                    LOBYTE(v16) = *a2 - 88;
                    if ( (unsigned __int8)v16 <= 0x20u )
                    {
                      i = 0x120821001LL;
                      if ( _bittest64(&i, (unsigned __int64)v16) )
                        break;
                    }
                    v53 = 0;
LABEL_165:
                    LOBYTE(i) = v11;
                    v52 = 0;
                    write_char(i, v57, &v47);
LABEL_166:
                    v12 = v47;
LABEL_167:
                    v13 = v53;
                    break;
                  }
                  a2 += 2;
                  v5 &= ~0x8000u;
                }
              }
              else if ( v11 != 106 )
              {
                goto LABEL_162;
              }
              break;
          }
        }
        else if ( v13 == 7 )
        {
          if ( v11 <= 105 )
          {
            if ( v11 == 105 )
              goto LABEL_24;
            if ( v11 == 67 )
            {
              if ( (v5 & 0x830) == 0 )
                v5 |= 0x800u;
              goto LABEL_51;
            }
            if ( v11 != 83 )
            {
              if ( v11 != 88 )
              {
                if ( v11 == 90 )
                {
                  v21 = *(unsigned __int16 **)v10;
                  v54 = v10 + 4;
                  if ( v21 && (v8 = (char *)*((_QWORD *)v21 + 1)) != 0LL )
                  {
                    if ( v21[1] < *v21 )
                      goto LABEL_194;
                    i = *v21;
                    if ( (v5 & 0x800) != 0 )
                    {
                      if ( (*v21 & 1) != 0 || ((unsigned __int8)v8 & 1) != 0 )
                        goto LABEL_194;
                      v52 = 1;
                      i = (unsigned int)i >> 1;
                    }
                    else
                    {
                      v52 = 0;
                    }
                  }
                  else
                  {
                    i = -1LL;
                    v8 = "(null)";
                    do
                      ++i;
                    while ( aNull_0[i] );
                  }
                  SizeConverted = i;
                  goto LABEL_108;
                }
                if ( v11 != 99 )
                {
                  if ( v11 == 100 )
                  {
LABEL_24:
                    v5 |= 0x40u;
                    goto LABEL_25;
                  }
LABEL_108:
                  if ( v55 )
                    goto LABEL_167;
                  if ( (v5 & 0x40) != 0 )
                  {
                    if ( (v5 & 0x100) != 0 )
                    {
                      v48[0] = 45;
                      goto LABEL_116;
                    }
                    if ( (v5 & 1) != 0 )
                    {
                      v48[0] = 43;
                      goto LABEL_116;
                    }
                    if ( (v5 & 2) != 0 )
                    {
                      v48[0] = 32;
LABEL_116:
                      v49 = 1;
                    }
                  }
                  v32 = v49;
                  v33 = v6 - SizeConverted - v49;
                  if ( (v5 & 0xC) == 0 )
                  {
                    LOBYTE(i) = 32;
                    write_multi_char(i, v33, v57, &v47);
                  }
                  write_string(v48, v32, v57, &v47);
                  v35 = v57;
                  if ( (v5 & 0xC) == 8 )
                  {
                    LOBYTE(v34) = 48;
                    write_multi_char(v34, v33, v57, &v47);
                  }
                  v36 = SizeConverted;
                  if ( v52 && SizeConverted > 0 )
                  {
                    v58 = 0;
                    v37 = (wchar_t *)v8;
                    while ( 1 )
                    {
                      v38 = *v37++;
                      --v36;
                      if ( wctomb_s(&v58, v60, 6uLL, v38) || !v58 )
                        break;
                      write_string(v60, (unsigned int)v58, v57, &v47);
                      if ( !v36 )
                        goto LABEL_130;
                    }
                    v12 = -1;
                    v47 = -1;
                  }
                  else
                  {
                    write_string(v8, (unsigned int)SizeConverted, v35, &v47);
LABEL_130:
                    v12 = v47;
                  }
                  if ( v12 >= 0 && (v5 & 4) != 0 )
                  {
                    LOBYTE(v39) = 32;
                    write_multi_char(v39, v33, v57, &v47);
                    v6 = v50;
                    goto LABEL_166;
                  }
LABEL_139:
                  v6 = v50;
                  goto LABEL_167;
                }
LABEL_51:
                v54 = v10 + 4;
                if ( (v5 & 0x810) != 0 )
                {
                  if ( wctomb_s(&SizeConverted, MbCh, 0x200uLL, *v10) )
                    v55 = 1;
                }
                else
                {
                  MbCh[0] = *(_BYTE *)v10;
                  SizeConverted = 1;
                }
                v8 = MbCh;
                goto LABEL_108;
              }
LABEL_76:
              v23 = 7;
LABEL_77:
              v56 = v23;
              if ( (v5 & 0x80u) != 0 )
              {
                v48[0] = 48;
                v48[1] = v23 + 81;
                v49 = 2;
              }
              v18 = 16LL;
              goto LABEL_26;
            }
            if ( (v5 & 0x830) == 0 )
              v5 |= 0x800u;
LABEL_43:
            v8 = *(char **)v10;
            i = (unsigned int)v7;
            if ( v7 == -1 )
              i = 0x7FFFFFFFLL;
            v54 = v10 + 4;
            if ( (v5 & 0x810) != 0 )
            {
              v22 = (const wchar_t *)v8;
              if ( !v8 )
              {
                v8 = (char *)L"(null)";
                v22 = L"(null)";
              }
              v52 = 1;
              while ( (_DWORD)i )
              {
                i = (unsigned int)(i - 1);
                if ( !*v22 )
                  break;
                ++v22;
              }
              v24 = ((char *)v22 - v8) >> 1;
            }
            else
            {
              v24 = (__int64)"(null)";
              if ( v8 )
                v24 = (__int64)v8;
              v8 = (char *)v24;
              while ( (_DWORD)i )
              {
                i = (unsigned int)(i - 1);
                if ( !*(_BYTE *)v24 )
                  break;
                ++v24;
              }
              LODWORD(v24) = v24 - (_DWORD)v8;
            }
            SizeConverted = v24;
            goto LABEL_108;
          }
          switch ( v11 )
          {
            case 'n':
              v40 = *(_WORD **)v10;
              v54 = v10 + 4;
              if ( !get_printf_count_output() )
                goto LABEL_194;
              if ( (v5 & 0x20) != 0 )
                *v40 = v12;
              else
                *(_DWORD *)v40 = v12;
              v55 = 1;
              goto LABEL_139;
            case 'o':
              v18 = 8LL;
              if ( (v5 & 0x80u) != 0 )
                v5 |= 0x200u;
              goto LABEL_26;
            case 'p':
              v7 = 16;
              v5 |= 0x8000u;
              goto LABEL_76;
            case 's':
              goto LABEL_43;
          }
          if ( v11 != 117 )
          {
            if ( v11 != 120 )
              goto LABEL_108;
            v23 = 39;
            goto LABEL_77;
          }
LABEL_25:
          v18 = 10LL;
LABEL_26:
          v19 = v10 + 4;
          v54 = v19;
          if ( (v5 & 0x8000) != 0 || (v5 & 0x1000) != 0 )
          {
            v20 = *(_QWORD *)v14;
            if ( (v5 & 0x40) != 0 )
              goto LABEL_88;
LABEL_91:
            v25 = (unsigned int)v20;
            if ( (v5 & 0x9000) != 0 )
              v25 = v20;
            if ( v7 >= 0 )
            {
              v5 &= ~8u;
              if ( v7 > 512 )
                v7 = 512;
            }
            else
            {
              v7 = 1;
            }
            v26 = v56;
            v49 &= -(v25 != 0);
            v27 = v49;
            for ( i = (__int64)&MbCh[511]; ; --i )
            {
              v28 = v7--;
              if ( v28 <= 0 && !v25 )
                break;
              v29 = v25 % v18 + 48;
              v25 /= v18;
              if ( v29 > 57 )
                LOBYTE(v29) = v26 + v29;
              *(_BYTE *)i = v29;
            }
            v30 = (unsigned int)&MbCh[144] + 367 - i;
            v8 = (char *)(i + 1);
            SizeConverted = v30;
            if ( (v5 & 0x200) != 0 )
            {
              if ( !v30 || (v31 = *v8 == 48, v54 = v19, v49 = v27, !v31) )
              {
                v8 = (char *)i;
                v54 = v19;
                v49 = v27;
                SizeConverted = v30 + 1;
                *(_BYTE *)i = 48;
              }
            }
            v6 = v50;
            goto LABEL_108;
          }
          if ( (v5 & 0x20) != 0 )
          {
            if ( (v5 & 0x40) == 0 )
            {
              v20 = *v14;
              goto LABEL_91;
            }
            v20 = (__int16)*v14;
          }
          else
          {
            if ( (v5 & 0x40) == 0 )
            {
              v20 = *(unsigned int *)v14;
              goto LABEL_91;
            }
            v20 = *(int *)v14;
          }
LABEL_88:
          if ( v20 < 0 )
          {
            v20 = -v20;
            v5 |= 0x100u;
          }
          goto LABEL_91;
        }
LABEL_168:
        v11 = *a2;
        v10 = v54;
      }
      while ( *a2 );
    }
    return (unsigned int)v12;
  }
  else
  {
LABEL_194:
    CIgnoreInputQueue::MarkInvalid(0LL);
    return 0xFFFFFFFFLL;
  }
}
