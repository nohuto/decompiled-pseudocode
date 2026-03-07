__int64 __fastcall woutput_l(__int64 a1, unsigned __int16 *a2, __int64 a3, unsigned __int16 *a4)
{
  int v5; // edi
  int v6; // r12d
  wchar_t *v7; // rbx
  wchar_t *v9; // rsi
  unsigned __int16 v10; // r9
  int v11; // r14d
  __int64 v12; // r13
  int v13; // r10d
  int v14; // ecx
  unsigned __int64 v15; // r11
  __int64 v16; // rax
  unsigned __int16 *v17; // rcx
  unsigned int v18; // eax
  int v19; // ecx
  const char *v20; // rax
  wchar_t v21; // ax
  int v22; // eax
  const wchar_t *v23; // rax
  unsigned __int64 v24; // r9
  char v25; // si
  wchar_t *i; // rcx
  int v27; // eax
  int v28; // r8d
  __int16 v29; // ax
  unsigned int v30; // r14d
  unsigned int v31; // r12d
  __int64 v32; // rsi
  const char *v33; // r15
  int v34; // esi
  int v35; // eax
  __int64 v36; // r14
  _WORD *v38; // rsi
  unsigned __int16 v39; // cx
  int v40; // eax
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // r8d
  int v44; // ecx
  int v45; // eax
  int v46; // r8d
  int v47; // [rsp+30h] [rbp-D0h] BYREF
  int v48; // [rsp+34h] [rbp-CCh]
  int v49; // [rsp+38h] [rbp-C8h]
  wchar_t v50; // [rsp+3Ch] [rbp-C4h] BYREF
  int v51; // [rsp+40h] [rbp-C0h]
  int v52; // [rsp+44h] [rbp-BCh]
  char SrcCh[4]; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v54[2]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v55; // [rsp+50h] [rbp-B0h]
  unsigned __int16 *v56; // [rsp+58h] [rbp-A8h]
  int v57; // [rsp+60h] [rbp-A0h]
  __int64 v58; // [rsp+68h] [rbp-98h]
  int v59; // [rsp+70h] [rbp-90h]
  int v60; // [rsp+74h] [rbp-8Ch]
  unsigned __int16 *v61; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v62; // [rsp+80h] [rbp-80h]
  wchar_t DstCh[512]; // [rsp+90h] [rbp-70h] BYREF

  v58 = a1;
  v56 = a4;
  v59 = 0;
  v5 = 0;
  v55 = 0;
  v6 = 0;
  v49 = 0;
  v7 = 0LL;
  v48 = 0;
  v57 = 0;
  v9 = a4;
  memset(DstCh, 0, sizeof(DstCh));
  v50 = 0;
  v51 = 0;
  if ( a1 && a2 )
  {
    v10 = *a2;
    v11 = 0;
    v47 = 0;
    LODWORD(v12) = 0;
    v13 = 0;
    if ( v10 )
    {
      do
      {
        v61 = ++a2;
        if ( v11 < 0 )
          return (unsigned int)v11;
        if ( (unsigned __int16)(v10 - 32) > 0x5Au )
          v14 = 0;
        else
          v14 = *((_BYTE *)&_lookuptable[-4] + v10) & 0xF;
        v13 = *((char *)&_lookuptable[v14] + v13) >> 4;
        v52 = v13;
        switch ( v13 )
        {
          case 0:
            goto LABEL_169;
          case 1:
            v6 = -1;
            v57 = 0;
            v49 = -1;
            v5 = 0;
            v55 = 0;
            v48 = 0;
            v51 = 0;
            break;
          case 2:
            switch ( v10 )
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
            break;
          case 3:
            if ( v10 == 42 )
            {
              v43 = *(_DWORD *)v9;
              v56 = v9 + 4;
              v44 = v43;
              if ( v43 < 0 )
                v5 |= 4u;
              v45 = v43;
              v46 = -v43;
              if ( v45 >= 0 )
                v46 = v44;
              v55 = v46;
            }
            else
            {
              v55 = v10 + 2 * (5 * v55 - 24);
            }
            break;
          case 4:
            v6 = 0;
            v49 = 0;
            break;
          case 5:
            if ( v10 == 42 )
            {
              v6 = *(_DWORD *)v9;
              v56 = v9 + 4;
              v49 = v6;
              if ( v6 < 0 )
              {
                v6 = -1;
                v49 = -1;
              }
            }
            else
            {
              v6 = v10 + 2 * (5 * v6 - 24);
              v49 = v6;
            }
            break;
          case 6:
            switch ( v10 )
            {
              case 'I':
                goto LABEL_151;
              case 'h':
                v5 |= 0x20u;
                goto LABEL_136;
              case 'j':
                goto LABEL_151;
              case 'l':
                v39 = *a2;
                if ( *a2 == 108 )
                  ++a2;
                v40 = 4096;
                if ( v39 != 108 )
                  v40 = 16;
                v5 |= v40;
                goto LABEL_136;
              case 't':
                goto LABEL_151;
              case 'w':
                v5 |= 0x800u;
                goto LABEL_136;
              case 'z':
LABEL_151:
                v5 |= 0x8000u;
                if ( v10 == 73 )
                {
                  if ( *a2 == 54 && a2[1] == 52 )
                  {
                    a2 += 2;
                    goto LABEL_136;
                  }
                  if ( *a2 == 51 && a2[1] == 50 )
                  {
                    a2 += 2;
                    v5 &= ~0x8000u;
                    goto LABEL_136;
                  }
                }
                else if ( v10 == 106 )
                {
                  goto LABEL_136;
                }
                v41 = *a2;
                LOWORD(v41) = v41 - 88;
                if ( (unsigned __int16)v41 <= 0x20u )
                {
                  v42 = 0x120821001LL;
                  if ( _bittest64(&v42, v41) )
                    goto LABEL_136;
                }
                v52 = 0;
LABEL_169:
                v51 = 1;
                write_char(v10, v58, &v47);
LABEL_134:
                v11 = v47;
LABEL_135:
                v13 = v52;
                break;
            }
            break;
          case 7:
            if ( v10 <= 0x69u )
            {
              if ( v10 == 105 )
                goto LABEL_24;
              if ( v10 == 67 )
              {
                if ( (v5 & 0x830) == 0 )
                  v5 |= 0x20u;
                goto LABEL_54;
              }
              if ( v10 != 83 )
              {
                if ( v10 != 88 )
                {
                  if ( v10 == 90 )
                  {
                    v17 = *(unsigned __int16 **)v9;
                    v56 = v9 + 4;
                    if ( v17 && (v7 = (wchar_t *)*((_QWORD *)v17 + 1)) != 0LL )
                    {
                      v18 = *v17;
                      if ( v17[1] < (unsigned __int16)v18 )
                        goto LABEL_194;
                      LODWORD(v12) = *v17;
                      if ( (v5 & 0x800) != 0 )
                      {
                        if ( (v18 & 1) != 0 || ((unsigned __int8)v7 & 1) != 0 )
                          goto LABEL_194;
                        LODWORD(v12) = v18 >> 1;
                        v51 = 1;
                      }
                      else
                      {
                        v51 = 0;
                      }
                    }
                    else
                    {
                      v12 = -1LL;
                      v7 = (wchar_t *)"(null)";
                      do
                        ++v12;
                      while ( aNull_2[v12] );
                    }
                    goto LABEL_105;
                  }
                  if ( v10 != 99 )
                  {
                    if ( v10 == 100 )
                    {
LABEL_24:
                      v5 |= 0x40u;
                      goto LABEL_25;
                    }
LABEL_105:
                    if ( v57 )
                      goto LABEL_135;
                    if ( (v5 & 0x40) != 0 )
                    {
                      if ( (v5 & 0x100) != 0 )
                      {
                        v29 = 45;
                        goto LABEL_111;
                      }
                      if ( (v5 & 1) != 0 )
                      {
                        v29 = 43;
LABEL_111:
                        v54[0] = v29;
LABEL_112:
                        v30 = 1;
                        v48 = 1;
LABEL_116:
                        v31 = v55 - v12 - v30;
                        if ( (v5 & 0xC) == 0 )
                          write_multi_char(32LL, v31, v58, &v47);
                        write_string(v54, v30, v58, &v47);
                        v32 = v58;
                        if ( (v5 & 0xC) == 8 )
                          write_multi_char(48LL, v31, v58, &v47);
                        if ( !v51 && (int)v12 > 0 )
                        {
                          v33 = (const char *)v7;
                          v34 = v12;
                          while ( 1 )
                          {
                            --v34;
                            v35 = safecrt_mbtowc(&v50, v33, _mb_cur_max);
                            v36 = v35;
                            if ( v35 == 2 )
                            {
                              --v34;
                            }
                            else if ( v35 <= 0 )
                            {
                              a2 = v61;
                              v11 = -1;
                              v32 = v58;
                              v47 = -1;
                              goto LABEL_131;
                            }
                            write_char(v50, v58, &v47);
                            v33 += v36;
                            if ( v34 <= 0 )
                            {
                              a2 = v61;
                              v32 = v58;
                              goto LABEL_130;
                            }
                          }
                        }
                        write_string(v7, (unsigned int)v12, v32, &v47);
LABEL_130:
                        v11 = v47;
LABEL_131:
                        if ( v11 < 0 || (v5 & 4) == 0 )
                        {
                          v6 = v49;
LABEL_143:
                          v13 = v52;
                          break;
                        }
                        write_multi_char(32LL, v31, v32, &v47);
                        v6 = v49;
                        goto LABEL_134;
                      }
                      if ( (v5 & 2) != 0 )
                      {
                        v54[0] = 32;
                        goto LABEL_112;
                      }
                    }
                    v30 = v48;
                    goto LABEL_116;
                  }
LABEL_54:
                  v21 = *v9;
                  v51 = 1;
                  v56 = v9 + 4;
                  v50 = v21;
                  if ( (v5 & 0x20) != 0 )
                  {
                    SrcCh[0] = v21;
                    SrcCh[1] = 0;
                    if ( safecrt_mbtowc(DstCh, SrcCh, _mb_cur_max) < 0 )
                      v57 = 1;
                  }
                  else
                  {
                    DstCh[0] = v21;
                  }
                  v7 = DstCh;
                  LODWORD(v12) = 1;
                  goto LABEL_105;
                }
LABEL_74:
                v22 = 7;
LABEL_75:
                v59 = v22;
                if ( (v5 & 0x80u) != 0 )
                {
                  v48 = 2;
                  v54[0] = 48;
                  v54[1] = v22 + 81;
                }
                v15 = 16LL;
                goto LABEL_26;
              }
              if ( (v5 & 0x830) == 0 )
                v5 |= 0x20u;
LABEL_43:
              v7 = *(wchar_t **)v9;
              v19 = v6;
              if ( v6 == -1 )
                v19 = 0x7FFFFFFF;
              v56 = v9 + 4;
              if ( (v5 & 0x20) != 0 )
              {
                v20 = (const char *)v7;
                if ( !v7 )
                {
                  v7 = (wchar_t *)"(null)";
                  v20 = "(null)";
                }
                LODWORD(v12) = 0;
                if ( v19 > 0 )
                {
                  do
                  {
                    if ( !*v20 )
                      break;
                    ++v20;
                    LODWORD(v12) = v12 + 1;
                  }
                  while ( (int)v12 < v19 );
                }
              }
              else
              {
                v51 = 1;
                v23 = L"(null)";
                if ( v7 )
                  v23 = v7;
                v7 = (wchar_t *)v23;
                while ( v19 )
                {
                  --v19;
                  if ( !*v23 )
                    break;
                  ++v23;
                }
                LODWORD(v12) = v23 - v7;
              }
              goto LABEL_105;
            }
            switch ( v10 )
            {
              case 'n':
                v56 = v9 + 4;
                v38 = *(_WORD **)v9;
                if ( !get_printf_count_output() )
                  goto LABEL_194;
                if ( (v5 & 0x20) != 0 )
                  *v38 = v11;
                else
                  *(_DWORD *)v38 = v11;
                v57 = 1;
                goto LABEL_143;
              case 'o':
                v15 = 8LL;
                if ( (v5 & 0x80u) != 0 )
                  v5 |= 0x200u;
                goto LABEL_26;
              case 'p':
                v6 = 16;
                v5 |= 0x8000u;
                goto LABEL_74;
              case 's':
                goto LABEL_43;
            }
            if ( v10 != 117 )
            {
              if ( v10 != 120 )
                goto LABEL_105;
              v22 = 39;
              goto LABEL_75;
            }
LABEL_25:
            v15 = 10LL;
LABEL_26:
            v56 = v9 + 4;
            v62 = v9 + 4;
            if ( (v5 & 0x8000) != 0 || (v5 & 0x1000) != 0 )
            {
              v16 = *(_QWORD *)v9;
              if ( (v5 & 0x40) != 0 )
                goto LABEL_86;
LABEL_89:
              v24 = (unsigned int)v16;
              if ( (v5 & 0x9000) != 0 )
                v24 = v16;
              if ( v6 >= 0 )
              {
                v5 &= ~8u;
                if ( v6 > 512 )
                  v6 = 512;
              }
              else
              {
                v6 = 1;
              }
              v25 = v59;
              v48 &= -(v24 != 0);
              v60 = v48;
              for ( i = (wchar_t *)((char *)&DstCh[255] + 1); ; i = (wchar_t *)((char *)i - 1) )
              {
                v27 = v6--;
                if ( v27 <= 0 && !v24 )
                  break;
                v28 = v24 % v15 + 48;
                v24 /= v15;
                if ( v28 > 57 )
                  LOBYTE(v28) = v25 + v28;
                *(_BYTE *)i = v28;
              }
              v7 = (wchar_t *)((char *)i + 1);
              LODWORD(v12) = (unsigned int)&DstCh[56] + 399 - (_DWORD)i;
              v49 = v6;
              if ( (v5 & 0x200) != 0 )
              {
                if ( !(_DWORD)v12 || (v56 = v62, v48 = v60, *(_BYTE *)v7 != 48) )
                {
                  v7 = i;
                  v56 = v62;
                  LODWORD(v12) = v12 + 1;
                  v48 = v60;
                  *(_BYTE *)i = 48;
                }
              }
              goto LABEL_105;
            }
            if ( (v5 & 0x20) != 0 )
            {
              if ( (v5 & 0x40) == 0 )
              {
                v16 = *v9;
                goto LABEL_89;
              }
              v16 = (__int16)*v9;
            }
            else
            {
              if ( (v5 & 0x40) == 0 )
              {
                v16 = *(unsigned int *)v9;
                goto LABEL_89;
              }
              v16 = *(int *)v9;
            }
LABEL_86:
            if ( v16 < 0 )
            {
              v16 = -v16;
              v5 |= 0x100u;
            }
            goto LABEL_89;
        }
LABEL_136:
        v10 = *a2;
        v9 = v56;
      }
      while ( *a2 );
    }
    return (unsigned int)v11;
  }
  else
  {
LABEL_194:
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
}
