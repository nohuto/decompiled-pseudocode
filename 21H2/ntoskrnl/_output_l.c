/*
 * XREFs of _output_l @ 0x1403D553C
 * Callers:
 *     _vsnprintf_l @ 0x1403D1320 (_vsnprintf_l.c)
 *     _snprintf @ 0x1403D1D40 (_snprintf.c)
 *     sprintf @ 0x1403D3460 (sprintf.c)
 *     _vsprintf_l @ 0x1403D3F58 (_vsprintf_l.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039AB40 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     wctomb_s @ 0x1403D47A4 (wctomb_s.c)
 *     write_char_0 @ 0x1403D5D78 (write_char_0.c)
 *     write_multi_char_0 @ 0x1403D5DC8 (write_multi_char_0.c)
 *     write_string_0 @ 0x1403D5E20 (write_string_0.c)
 *     _get_printf_count_output @ 0x1403D64DC (_get_printf_count_output.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall output_l(__int64 a1, char *a2, __int64 a3, int *a4)
{
  int v6; // edi
  int v7; // esi
  int v8; // r14d
  wchar_t *v9; // rbx
  char v11; // r9
  int v12; // r15d
  unsigned int v13; // r8d
  int v14; // ecx
  __int64 *v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // r10
  __int64 v18; // rax
  unsigned __int16 *v19; // rdx
  const wchar_t *v20; // rax
  int v21; // eax
  __int64 v22; // rax
  unsigned __int64 v23; // r8
  char *v24; // rbx
  int v25; // ecx
  char v26; // r14
  int v27; // r9d
  unsigned __int64 v28; // rdx
  char v29; // al
  int v30; // eax
  wchar_t *v31; // rsi
  unsigned int v32; // r15d
  unsigned int v33; // r14d
  __int64 v34; // rcx
  __int64 v35; // r15
  int v36; // esi
  wchar_t *v37; // r15
  wchar_t v38; // r9
  __int64 v39; // rcx
  char v40; // cl
  int v41; // eax
  int v43; // eax
  int v44; // ecx
  int v45; // ecx
  int v46; // [rsp+30h] [rbp-D0h]
  int v47; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v48[4]; // [rsp+38h] [rbp-C8h] BYREF
  int v49; // [rsp+3Ch] [rbp-C4h]
  int SizeConverted; // [rsp+40h] [rbp-C0h] BYREF
  int v51; // [rsp+44h] [rbp-BCh]
  int v52; // [rsp+48h] [rbp-B8h]
  unsigned int v53; // [rsp+4Ch] [rbp-B4h]
  int v54; // [rsp+50h] [rbp-B0h]
  int v55; // [rsp+54h] [rbp-ACh]
  __int64 v56; // [rsp+58h] [rbp-A8h]
  int v57[4]; // [rsp+60h] [rbp-A0h] BYREF
  char MbCh[512]; // [rsp+70h] [rbp-90h] BYREF
  char v59[8]; // [rsp+270h] [rbp+170h] BYREF

  v56 = a1;
  v55 = 0;
  v52 = 0;
  v49 = 0;
  v46 = 0;
  v54 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  memset(MbCh, 0, sizeof(MbCh));
  v51 = 0;
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
        if ( v12 < 0 )
          return (unsigned int)v12;
        if ( (unsigned __int8)(v11 - 32) > 0x5Au )
          v14 = 0;
        else
          v14 = *((_BYTE *)&_lookuptable[-4] + v11) & 0xF;
        v15 = _lookuptable;
        v13 = *((char *)_lookuptable + (int)(v13 + 8 * v14)) >> 4;
        v53 = v13;
        v16 = v13;
        switch ( v13 )
        {
          case 0u:
            goto LABEL_165;
          case 1u:
            v7 = -1;
            v54 = 0;
            v49 = -1;
            v8 = 0;
            v52 = 0;
            v6 = 0;
            v46 = 0;
            v51 = 0;
            break;
          case 2u:
            switch ( v11 )
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
          case 3u:
            if ( v11 == 42 )
            {
              v43 = *a4;
              a4 += 2;
              v44 = v6 | 4;
              if ( v43 >= 0 )
                v44 = v6;
              v6 = v44;
              v45 = abs32(v43);
            }
            else
            {
              v45 = v11 + 2 * (5 * v52 - 24);
            }
            v52 = v45;
            break;
          case 4u:
            v7 = 0;
            v49 = 0;
            break;
          case 5u:
            if ( v11 != 42 )
            {
              v7 = v11 + 2 * (5 * v7 - 24);
              goto LABEL_174;
            }
            v7 = *a4;
            a4 += 2;
            v49 = v7;
            if ( v7 < 0 )
            {
              v7 = -1;
LABEL_174:
              v49 = v7;
            }
            break;
          default:
            v16 = v13 - 6;
            if ( v13 == 6 )
            {
              switch ( v11 )
              {
                case 'I':
                  goto LABEL_147;
                case 'h':
                  v6 |= 0x20u;
                  goto LABEL_168;
                case 'j':
                  goto LABEL_147;
                case 'l':
                  v40 = *a2;
                  if ( *a2 == 108 )
                    ++a2;
                  v41 = 4096;
                  if ( v40 != 108 )
                    v41 = 16;
                  v6 |= v41;
                  goto LABEL_168;
                case 't':
                  goto LABEL_147;
                case 'w':
                  v6 |= 0x800u;
                  goto LABEL_168;
                case 'z':
LABEL_147:
                  v6 |= 0x8000u;
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
                        LOBYTE(v15) = *a2 - 88;
                        if ( (unsigned __int8)v15 <= 0x20u )
                        {
                          v16 = 0x120821001LL;
                          if ( _bittest64(&v16, (unsigned __int64)v15) )
                            goto LABEL_168;
                        }
                        v53 = 0;
LABEL_165:
                        LOBYTE(v16) = v11;
                        v51 = 0;
                        write_char_0(v16, v56, &v47);
LABEL_166:
                        v12 = v47;
                        goto LABEL_167;
                      }
                      a2 += 2;
                      v6 &= ~0x8000u;
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
              if ( v11 > 105 )
              {
                switch ( v11 )
                {
                  case 'n':
                    v31 = *(wchar_t **)a4;
                    a4 += 2;
                    if ( !get_printf_count_output() )
                      goto LABEL_193;
                    if ( (v6 & 0x20) != 0 )
                      *v31 = v12;
                    else
                      *(_DWORD *)v31 = v12;
                    v7 = v49;
                    v54 = 1;
                    goto LABEL_112;
                  case 'o':
                    v17 = 8LL;
                    if ( (v6 & 0x80u) != 0 )
                      v6 |= 0x200u;
                    goto LABEL_26;
                  case 'p':
                    v7 = 16;
                    v6 |= 0x8000u;
                    goto LABEL_75;
                }
                if ( v11 != 115 )
                {
                  if ( v11 != 117 )
                  {
                    if ( v11 != 120 )
                      goto LABEL_112;
                    v21 = 39;
                    goto LABEL_76;
                  }
LABEL_25:
                  v17 = 10LL;
LABEL_26:
                  a4 += 2;
                  if ( (v6 & 0x8000) != 0 || (v6 & 0x1000) != 0 )
                  {
                    v18 = *((_QWORD *)a4 - 1);
                  }
                  else if ( (v6 & 0x20) != 0 )
                  {
                    if ( (v6 & 0x40) != 0 )
                      v18 = *((__int16 *)a4 - 4);
                    else
                      v18 = *((unsigned __int16 *)a4 - 4);
                  }
                  else if ( (v6 & 0x40) != 0 )
                  {
                    v18 = *(a4 - 2);
                  }
                  else
                  {
                    v18 = (unsigned int)*(a4 - 2);
                  }
                  if ( (v6 & 0x40) != 0 && v18 < 0 )
                  {
                    v18 = -v18;
                    v6 |= 0x100u;
                  }
                  v23 = (unsigned int)v18;
                  if ( (v6 & 0x9000) != 0 )
                    v23 = v18;
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
                  v24 = &MbCh[511];
                  v25 = v23 != 0 ? v8 : 0;
                  v26 = v55;
                  v46 = v25;
                  v27 = v25;
                  while ( 1 )
                  {
                    v16 = (unsigned int)v7--;
                    if ( (int)v16 <= 0 && !v23 )
                      break;
                    v28 = v23 % v17;
                    v23 /= v17;
                    v29 = v28 + 48;
                    if ( (int)v28 + 48 > 57 )
                      v29 = v28 + v26 + 48;
                    *v24-- = v29;
                  }
                  v49 = v7;
                  v30 = (unsigned int)&MbCh[144] + 367 - (_DWORD)v24;
                  v8 = v27;
                  v9 = (wchar_t *)(v24 + 1);
                  SizeConverted = v30;
                  if ( (v6 & 0x200) != 0 )
                  {
                    if ( !v30 || (v46 = v27, *(_BYTE *)v9 != 48) )
                    {
                      v9 = (wchar_t *)((char *)v9 - 1);
                      v46 = v27;
                      v8 = v27;
                      SizeConverted = v30 + 1;
                      *(_BYTE *)v9 = 48;
                    }
                  }
                  goto LABEL_112;
                }
              }
              else
              {
                if ( v11 == 105 )
                  goto LABEL_24;
                if ( v11 == 67 )
                {
                  if ( (v6 & 0x830) == 0 )
                    v6 |= 0x800u;
                  goto LABEL_50;
                }
                if ( v11 != 83 )
                {
                  if ( v11 != 88 )
                  {
                    if ( v11 == 90 )
                    {
                      v19 = *(unsigned __int16 **)a4;
                      a4 += 2;
                      if ( v19 && (v9 = (wchar_t *)*((_QWORD *)v19 + 1)) != 0LL )
                      {
                        if ( v19[1] < *v19 )
                          goto LABEL_193;
                        v16 = *v19;
                        if ( (v6 & 0x800) != 0 )
                        {
                          if ( (*v19 & 1) != 0 || ((unsigned __int8)v9 & 1) != 0 )
                            goto LABEL_193;
                          v51 = 1;
                          v16 = (unsigned int)v16 >> 1;
                        }
                        else
                        {
                          v51 = 0;
                        }
                      }
                      else
                      {
                        v16 = -1LL;
                        v9 = (wchar_t *)"(null)";
                        do
                          ++v16;
                        while ( aNull_2[v16] );
                      }
                      SizeConverted = v16;
                      goto LABEL_112;
                    }
                    if ( v11 != 99 )
                    {
                      if ( v11 == 100 )
                      {
LABEL_24:
                        v6 |= 0x40u;
                        goto LABEL_25;
                      }
LABEL_112:
                      if ( v54 )
                        goto LABEL_167;
                      if ( (v6 & 0x40) == 0 )
                        goto LABEL_121;
                      if ( (v6 & 0x100) != 0 )
                      {
                        v48[0] = 45;
                        goto LABEL_118;
                      }
                      if ( (v6 & 1) != 0 )
                      {
                        v48[0] = 43;
                        goto LABEL_118;
                      }
                      if ( (v6 & 2) != 0 )
                      {
                        v48[0] = 32;
LABEL_118:
                        v32 = 1;
                        v46 = 1;
                      }
                      else
                      {
LABEL_121:
                        v32 = v46;
                      }
                      v33 = v52 - SizeConverted - v32;
                      if ( (v6 & 0xC) == 0 )
                      {
                        LOBYTE(v16) = 32;
                        write_multi_char_0(v16, v33, v56, &v47);
                      }
                      write_string_0(v48, v32, v56, &v47);
                      v35 = v56;
                      if ( (v6 & 0xC) == 8 )
                      {
                        LOBYTE(v34) = 48;
                        write_multi_char_0(v34, v33, v56, &v47);
                      }
                      v36 = SizeConverted;
                      if ( v51 && SizeConverted > 0 )
                      {
                        v57[0] = 0;
                        v37 = v9;
                        while ( 1 )
                        {
                          v38 = *v37++;
                          --v36;
                          if ( wctomb_s(v57, v59, 6uLL, v38) || !v57[0] )
                            break;
                          write_string_0(v59, (unsigned int)v57[0], v56, &v47);
                          if ( !v36 )
                            goto LABEL_135;
                        }
                        v12 = -1;
                        v47 = -1;
                      }
                      else
                      {
                        write_string_0(v9, (unsigned int)SizeConverted, v35, &v47);
LABEL_135:
                        v12 = v47;
                      }
                      if ( v12 >= 0 && (v6 & 4) != 0 )
                      {
                        LOBYTE(v39) = 32;
                        write_multi_char_0(v39, v33, v56, &v47);
                        v7 = v49;
                        v8 = v46;
                        goto LABEL_166;
                      }
                      v7 = v49;
                      v8 = v46;
LABEL_167:
                      v13 = v53;
                      break;
                    }
LABEL_50:
                    a4 += 2;
                    if ( (v6 & 0x810) != 0 )
                    {
                      if ( wctomb_s(&SizeConverted, MbCh, 0x200uLL, *((_WORD *)a4 - 4)) )
                        v54 = 1;
                    }
                    else
                    {
                      MbCh[0] = *((_BYTE *)a4 - 8);
                      SizeConverted = 1;
                    }
                    v9 = (wchar_t *)MbCh;
                    goto LABEL_112;
                  }
LABEL_75:
                  v21 = 7;
LABEL_76:
                  v55 = v21;
                  if ( (v6 & 0x80u) != 0 )
                  {
                    v48[0] = 48;
                    v48[1] = v21 + 81;
                    v8 = 2;
                  }
                  v17 = 16LL;
                  goto LABEL_26;
                }
                if ( (v6 & 0x830) == 0 )
                  v6 |= 0x800u;
              }
              v9 = *(wchar_t **)a4;
              v16 = (unsigned int)v7;
              if ( v7 == -1 )
                v16 = 0x7FFFFFFFLL;
              a4 += 2;
              if ( (v6 & 0x810) != 0 )
              {
                v20 = v9;
                if ( !v9 )
                {
                  v9 = L"(null)";
                  v20 = L"(null)";
                }
                v51 = 1;
                while ( (_DWORD)v16 )
                {
                  v16 = (unsigned int)(v16 - 1);
                  if ( !*v20 )
                    break;
                  ++v20;
                }
                v22 = v20 - v9;
              }
              else
              {
                v22 = (__int64)"(null)";
                if ( v9 )
                  v22 = (__int64)v9;
                v9 = (wchar_t *)v22;
                while ( (_DWORD)v16 )
                {
                  v16 = (unsigned int)(v16 - 1);
                  if ( !*(_BYTE *)v22 )
                    break;
                  ++v22;
                }
                LODWORD(v22) = v22 - (_DWORD)v9;
              }
              SizeConverted = v22;
              goto LABEL_112;
            }
            break;
        }
LABEL_168:
        v11 = *a2;
      }
      while ( *a2 );
    }
    return (unsigned int)v12;
  }
  else
  {
LABEL_193:
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
}
