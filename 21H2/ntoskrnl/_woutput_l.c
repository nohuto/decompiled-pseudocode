/*
 * XREFs of _woutput_l @ 0x1403D4B18
 * Callers:
 *     _vsnwprintf_l @ 0x1403D1200 (_vsnwprintf_l.c)
 *     _snwprintf @ 0x1403D1E00 (_snwprintf.c)
 *     swprintf @ 0x1403D2090 (swprintf.c)
 *     _vswprintf_l @ 0x1403D217C (_vswprintf_l.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039AB40 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _safecrt_mbtowc @ 0x1403D2AC0 (_safecrt_mbtowc.c)
 *     write_char @ 0x1403D5404 (write_char.c)
 *     write_multi_char @ 0x1403D5458 (write_multi_char.c)
 *     write_string @ 0x1403D54B0 (write_string.c)
 *     _get_printf_count_output @ 0x1403D64DC (_get_printf_count_output.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall woutput_l(__int64 a1, unsigned __int16 *a2, __int64 a3, wchar_t *a4)
{
  int v6; // edi
  int v7; // r12d
  wchar_t *v8; // rbx
  wchar_t *v9; // rsi
  unsigned __int16 v10; // r9
  int v11; // r14d
  __int64 v12; // r13
  int v13; // r8d
  int v14; // ecx
  unsigned __int64 v15; // r10
  wchar_t *v16; // rsi
  __int64 v17; // rax
  unsigned __int16 *v18; // rcx
  unsigned int v19; // eax
  int v20; // ecx
  const char *v21; // rax
  wchar_t v22; // ax
  int v23; // eax
  const wchar_t *v24; // rax
  unsigned __int64 v25; // r8
  char v26; // r11
  char *v27; // rbx
  int v28; // r9d
  int v29; // ecx
  unsigned __int64 v30; // rdx
  char v31; // al
  _WORD *v32; // rsi
  int v33; // eax
  __int16 v34; // ax
  unsigned int v35; // r14d
  unsigned int v36; // r12d
  __int64 v37; // rsi
  const char *v38; // r15
  int v39; // esi
  int v40; // eax
  __int64 v41; // r14
  unsigned __int16 v42; // cx
  int v43; // eax
  unsigned __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // eax
  int v47; // ecx
  int v48; // ecx
  int v50; // [rsp+30h] [rbp-D0h]
  int v51; // [rsp+34h] [rbp-CCh] BYREF
  int v52; // [rsp+38h] [rbp-C8h]
  int v53; // [rsp+3Ch] [rbp-C4h]
  wchar_t v54[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v55; // [rsp+44h] [rbp-BCh]
  int v56; // [rsp+48h] [rbp-B8h]
  char SrcCh[4]; // [rsp+4Ch] [rbp-B4h] BYREF
  _WORD v58[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v59; // [rsp+54h] [rbp-ACh]
  wchar_t *v60; // [rsp+58h] [rbp-A8h]
  __int64 v61; // [rsp+60h] [rbp-A0h]
  int v62; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v63; // [rsp+70h] [rbp-90h]
  wchar_t DstCh[512]; // [rsp+80h] [rbp-80h] BYREF

  v61 = a1;
  v62 = 0;
  v59 = 0;
  v53 = 0;
  v52 = 0;
  v50 = 0;
  v6 = 0;
  v60 = a4;
  v7 = 0;
  v8 = 0LL;
  v9 = a4;
  memset(DstCh, 0, sizeof(DstCh));
  v54[0] = 0;
  v55 = 0;
  if ( a1 && a2 )
  {
    v10 = *a2;
    v11 = 0;
    v51 = 0;
    LODWORD(v12) = 0;
    v13 = 0;
    if ( v10 )
    {
      do
      {
        v63 = ++a2;
        if ( v11 < 0 )
          return (unsigned int)v11;
        if ( (unsigned __int16)(v10 - 32) > 0x5Au )
          v14 = 0;
        else
          v14 = *((_BYTE *)&_lookuptable[-4] + v10) & 0xF;
        v13 = *((char *)&_lookuptable[v14] + v13) >> 4;
        v56 = v13;
        switch ( v13 )
        {
          case 0:
            goto LABEL_166;
          case 1:
            v7 = -1;
            v50 = 0;
            v53 = -1;
            v6 = 0;
            v59 = 0;
            v52 = 0;
            v55 = 0;
            break;
          case 2:
            switch ( v10 )
            {
              case ' ':
                v6 |= 2u;
                break;
              case '#':
                v6 |= 0x80u;
                break;
              case '+':
                v6 |= 1u;
                break;
              case '-':
                v6 |= 4u;
                break;
              case '0':
                v6 |= 8u;
                break;
            }
            break;
          case 3:
            if ( v10 == 42 )
            {
              v46 = *(_DWORD *)v9;
              v60 = v9 + 4;
              v47 = v6 | 4;
              if ( v46 >= 0 )
                v47 = v6;
              v6 = v47;
              v48 = abs32(v46);
            }
            else
            {
              v48 = v10 + 2 * (5 * v59 - 24);
            }
            v59 = v48;
            break;
          case 4:
            v7 = 0;
            v53 = 0;
            break;
          case 5:
            if ( v10 != 42 )
            {
              v7 = v10 + 2 * (5 * v7 - 24);
              goto LABEL_171;
            }
            v7 = *(_DWORD *)v9;
            v60 = v9 + 4;
            v53 = v7;
            if ( v7 < 0 )
            {
              v7 = -1;
LABEL_171:
              v53 = v7;
            }
            break;
          case 6:
            switch ( v10 )
            {
              case 'I':
                goto LABEL_148;
              case 'h':
                v6 |= 0x20u;
                goto LABEL_192;
              case 'j':
                goto LABEL_148;
              case 'l':
                v42 = *a2;
                if ( *a2 == 108 )
                  ++a2;
                v43 = 4096;
                if ( v42 != 108 )
                  v43 = 16;
                v6 |= v43;
                goto LABEL_192;
              case 't':
                goto LABEL_148;
              case 'w':
                v6 |= 0x800u;
                goto LABEL_192;
              case 'z':
LABEL_148:
                v6 |= 0x8000u;
                if ( v10 == 73 )
                {
                  if ( *a2 == 54 && a2[1] == 52 )
                  {
                    a2 += 2;
                  }
                  else
                  {
                    if ( *a2 != 51 || a2[1] != 50 )
                    {
LABEL_163:
                      v44 = *a2;
                      LOWORD(v44) = v44 - 88;
                      if ( (unsigned __int16)v44 <= 0x20u )
                      {
                        v45 = 0x120821001LL;
                        if ( _bittest64(&v45, v44) )
                          goto LABEL_192;
                      }
                      v56 = 0;
LABEL_166:
                      v55 = 1;
                      write_char(v10, v61, &v51);
LABEL_140:
                      v11 = v51;
                      goto LABEL_191;
                    }
                    a2 += 2;
                    v6 &= ~0x8000u;
                  }
                }
                else if ( v10 != 106 )
                {
                  goto LABEL_163;
                }
                break;
            }
            break;
          case 7:
            if ( v10 > 0x69u )
            {
              switch ( v10 )
              {
                case 'n':
                  v60 = v9 + 4;
                  v32 = *(_WORD **)v9;
                  if ( !get_printf_count_output() )
                    goto LABEL_194;
                  if ( (v6 & 0x20) != 0 )
                    *v32 = v11;
                  else
                    *(_DWORD *)v32 = v11;
                  v33 = 1;
                  v50 = 1;
                  goto LABEL_111;
                case 'o':
                  v15 = 8LL;
                  if ( (v6 & 0x80u) != 0 )
                    v6 |= 0x200u;
                  goto LABEL_26;
                case 'p':
                  v7 = 16;
                  v6 |= 0x8000u;
                  goto LABEL_73;
              }
              if ( v10 != 115 )
              {
                if ( v10 != 117 )
                {
                  if ( v10 != 120 )
                    goto LABEL_110;
                  v23 = 39;
                  goto LABEL_74;
                }
LABEL_25:
                v15 = 10LL;
LABEL_26:
                v16 = v9 + 4;
                v60 = v16;
                if ( (v6 & 0x8000) != 0 || (v6 & 0x1000) != 0 )
                {
                  v17 = *((_QWORD *)v16 - 1);
                }
                else if ( (v6 & 0x20) != 0 )
                {
                  if ( (v6 & 0x40) != 0 )
                    v17 = (__int16)*(v16 - 4);
                  else
                    v17 = *(v16 - 4);
                }
                else if ( (v6 & 0x40) != 0 )
                {
                  v17 = *((int *)v16 - 2);
                }
                else
                {
                  v17 = *((unsigned int *)v16 - 2);
                }
                if ( (v6 & 0x40) != 0 && v17 < 0 )
                {
                  v17 = -v17;
                  v6 |= 0x100u;
                }
                v25 = (unsigned int)v17;
                if ( (v6 & 0x9000) != 0 )
                  v25 = v17;
                if ( v7 >= 0 )
                {
                  v6 &= ~8u;
                  if ( v7 > 512 )
                    v7 = 512;
                }
                else
                {
                  v7 = 1;
                }
                v26 = v62;
                v27 = (char *)&DstCh[255] + 1;
                v52 &= -(v25 != 0);
                v28 = v52;
                while ( 1 )
                {
                  v29 = v7--;
                  if ( v29 <= 0 && !v25 )
                    break;
                  v30 = v25 % v15;
                  v25 /= v15;
                  v31 = v30 + 48;
                  if ( (int)v30 + 48 > 57 )
                    v31 = v30 + v26 + 48;
                  *v27-- = v31;
                }
                v53 = v7;
                LODWORD(v12) = (unsigned int)&DstCh[64] + 383 - (_DWORD)v27;
                v8 = (wchar_t *)(v27 + 1);
                if ( (v6 & 0x200) != 0 )
                {
                  if ( !(_DWORD)v12 || (v60 = v16, v52 = v28, *(_BYTE *)v8 != 48) )
                  {
                    v8 = (wchar_t *)((char *)v8 - 1);
                    v60 = v16;
                    LODWORD(v12) = v12 + 1;
                    v52 = v28;
                    *(_BYTE *)v8 = 48;
                  }
                }
                goto LABEL_110;
              }
            }
            else
            {
              if ( v10 == 105 )
                goto LABEL_24;
              if ( v10 == 67 )
              {
                if ( (v6 & 0x830) == 0 )
                  v6 |= 0x20u;
                goto LABEL_53;
              }
              if ( v10 != 83 )
              {
                if ( v10 != 88 )
                {
                  if ( v10 == 90 )
                  {
                    v18 = *(unsigned __int16 **)v9;
                    v60 = v9 + 4;
                    if ( v18 && (v8 = (wchar_t *)*((_QWORD *)v18 + 1)) != 0LL )
                    {
                      v19 = *v18;
                      if ( v18[1] < (unsigned __int16)v19 )
                        goto LABEL_194;
                      LODWORD(v12) = *v18;
                      if ( (v6 & 0x800) != 0 )
                      {
                        if ( (v19 & 1) != 0 || ((unsigned __int8)v8 & 1) != 0 )
                          goto LABEL_194;
                        LODWORD(v12) = v19 >> 1;
                        v55 = 1;
                      }
                      else
                      {
                        v55 = 0;
                      }
                    }
                    else
                    {
                      v12 = -1LL;
                      v8 = (wchar_t *)"(null)";
                      do
                        ++v12;
                      while ( aNull_2[v12] );
                    }
                    goto LABEL_110;
                  }
                  if ( v10 != 99 )
                  {
                    if ( v10 == 100 )
                    {
LABEL_24:
                      v6 |= 0x40u;
                      goto LABEL_25;
                    }
LABEL_110:
                    v33 = v50;
LABEL_111:
                    if ( v33 )
                      goto LABEL_191;
                    if ( (v6 & 0x40) != 0 )
                    {
                      if ( (v6 & 0x100) != 0 )
                      {
                        v34 = 45;
                        goto LABEL_117;
                      }
                      if ( (v6 & 1) != 0 )
                      {
                        v34 = 43;
LABEL_117:
                        v58[0] = v34;
LABEL_118:
                        v35 = 1;
                        v52 = 1;
LABEL_122:
                        v36 = v59 - v12 - v35;
                        if ( (v6 & 0xC) == 0 )
                          write_multi_char(32LL, v36, v61, &v51);
                        write_string(v58, v35, v61, &v51);
                        v37 = v61;
                        if ( (v6 & 0xC) == 8 )
                          write_multi_char(48LL, v36, v61, &v51);
                        if ( v55 || (int)v12 <= 0 )
                        {
                          write_string(v8, (unsigned int)v12, v37, &v51);
LABEL_136:
                          v11 = v51;
                        }
                        else
                        {
                          v38 = (const char *)v8;
                          v39 = v12;
                          while ( 1 )
                          {
                            --v39;
                            v40 = safecrt_mbtowc(v54, v38, _mb_cur_max);
                            v41 = v40;
                            if ( v40 == 2 )
                              --v39;
                            if ( v40 <= 0 )
                              break;
                            write_char(v54[0], v61, &v51);
                            v38 += v41;
                            if ( v39 <= 0 )
                            {
                              a2 = v63;
                              v37 = v61;
                              goto LABEL_136;
                            }
                          }
                          a2 = v63;
                          v11 = -1;
                          v37 = v61;
                          v51 = -1;
                        }
                        if ( v11 >= 0 && (v6 & 4) != 0 )
                        {
                          write_multi_char(32LL, v36, v37, &v51);
                          v7 = v53;
                          goto LABEL_140;
                        }
                        v7 = v53;
LABEL_191:
                        v13 = v56;
                        break;
                      }
                      if ( (v6 & 2) != 0 )
                      {
                        v58[0] = 32;
                        goto LABEL_118;
                      }
                    }
                    v35 = v52;
                    goto LABEL_122;
                  }
LABEL_53:
                  v22 = *v9;
                  v54[0] = *v9;
                  v55 = 1;
                  v60 = v9 + 4;
                  if ( (v6 & 0x20) != 0 )
                  {
                    SrcCh[0] = v22;
                    SrcCh[1] = 0;
                    if ( safecrt_mbtowc(DstCh, SrcCh, _mb_cur_max) < 0 )
                      v50 = 1;
                  }
                  else
                  {
                    DstCh[0] = v22;
                  }
                  v8 = DstCh;
                  LODWORD(v12) = 1;
                  goto LABEL_110;
                }
LABEL_73:
                v23 = 7;
LABEL_74:
                v62 = v23;
                if ( (v6 & 0x80u) != 0 )
                {
                  v52 = 2;
                  v58[0] = 48;
                  v58[1] = v23 + 81;
                }
                v15 = 16LL;
                goto LABEL_26;
              }
              if ( (v6 & 0x830) == 0 )
                v6 |= 0x20u;
            }
            v8 = *(wchar_t **)v9;
            v20 = v7;
            if ( v7 == -1 )
              v20 = 0x7FFFFFFF;
            v60 = v9 + 4;
            if ( (v6 & 0x20) != 0 )
            {
              v21 = (const char *)v8;
              if ( !v8 )
              {
                v8 = (wchar_t *)"(null)";
                v21 = "(null)";
              }
              LODWORD(v12) = 0;
              if ( v20 > 0 )
              {
                do
                {
                  if ( !*v21 )
                    break;
                  ++v21;
                  LODWORD(v12) = v12 + 1;
                }
                while ( (int)v12 < v20 );
              }
            }
            else
            {
              v55 = 1;
              v24 = L"(null)";
              if ( v8 )
                v24 = v8;
              v8 = (wchar_t *)v24;
              while ( v20 )
              {
                --v20;
                if ( !*v24 )
                  break;
                ++v24;
              }
              LODWORD(v12) = v24 - v8;
            }
            goto LABEL_110;
        }
LABEL_192:
        v10 = *a2;
        v9 = v60;
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
