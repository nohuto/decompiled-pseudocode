/*
 * XREFs of _output_l @ 0x1403E478C
 * Callers:
 *     _vsnprintf_l @ 0x1403E0580 (_vsnprintf_l.c)
 *     _snprintf @ 0x1403E0F90 (_snprintf.c)
 *     sprintf @ 0x1403E26A0 (sprintf.c)
 *     _vsprintf_l @ 0x1403E3198 (_vsprintf_l.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403A7020 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wctomb_s @ 0x1403E39B4 (wctomb_s.c)
 *     write_char_0 @ 0x1403E4FC8 (write_char_0.c)
 *     write_multi_char_0 @ 0x1403E5018 (write_multi_char_0.c)
 *     write_string_0 @ 0x1403E5070 (write_string_0.c)
 *     _get_printf_count_output @ 0x1403E57CC (_get_printf_count_output.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall output_l(__int64 a1, char *a2, __int64 a3, int *a4)
{
  int v6; // esi
  int v7; // edi
  int v8; // r14d
  wchar_t *v9; // rbx
  char v11; // r9
  int v12; // r15d
  unsigned int v13; // r8d
  unsigned __int64 v14; // r10
  int v15; // ecx
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int16 *v19; // rdx
  const wchar_t *v20; // rax
  int v21; // eax
  __int64 v22; // rax
  unsigned __int64 v23; // r8
  char *v24; // rbx
  char v25; // r14
  int v26; // eax
  unsigned __int64 v27; // rdx
  char v28; // al
  int v29; // eax
  unsigned int v30; // r15d
  unsigned int v31; // r14d
  __int64 v32; // rcx
  __int64 v33; // r15
  int v34; // edi
  wchar_t *v35; // r15
  wchar_t v36; // r9
  __int64 v37; // rcx
  wchar_t *v38; // rdi
  char v39; // cl
  int v40; // eax
  int v42; // ecx
  int v43; // r8d
  int v44; // [rsp+30h] [rbp-D0h]
  int v45; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v46[4]; // [rsp+38h] [rbp-C8h] BYREF
  int v47; // [rsp+3Ch] [rbp-C4h]
  int SizeConverted; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v49; // [rsp+44h] [rbp-BCh]
  int v50; // [rsp+48h] [rbp-B8h]
  int v51; // [rsp+4Ch] [rbp-B4h]
  int v52; // [rsp+50h] [rbp-B0h]
  int v53; // [rsp+54h] [rbp-ACh]
  __int64 v54; // [rsp+58h] [rbp-A8h]
  int v55[4]; // [rsp+60h] [rbp-A0h] BYREF
  char MbCh[512]; // [rsp+70h] [rbp-90h] BYREF
  char v57[8]; // [rsp+270h] [rbp+170h] BYREF

  v54 = a1;
  v53 = 0;
  v6 = 0;
  v51 = 0;
  v7 = 0;
  v47 = 0;
  v8 = 0;
  v44 = 0;
  v9 = 0LL;
  v52 = 0;
  memset(MbCh, 0, sizeof(MbCh));
  v50 = 0;
  if ( a1 && a2 )
  {
    v11 = *a2;
    v12 = 0;
    v45 = 0;
    v13 = 0;
    SizeConverted = 0;
    if ( v11 )
    {
      v14 = 16LL;
      do
      {
        ++a2;
        if ( v12 < 0 )
          return (unsigned int)v12;
        if ( (unsigned __int8)(v11 - 32) > 0x5Au )
          v15 = 0;
        else
          v15 = *((_BYTE *)&_lookuptable[-4] + v11) & 0xF;
        v16 = _lookuptable;
        v13 = *((char *)_lookuptable + (int)(v13 + 8 * v15)) >> 4;
        v49 = v13;
        v17 = v13;
        switch ( v13 )
        {
          case 0u:
            goto LABEL_166;
          case 1u:
            v7 = -1;
            v52 = 0;
            v47 = -1;
            v8 = 0;
            v51 = 0;
            v6 = 0;
            v44 = 0;
            v50 = 0;
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
            if ( v11 != 42 )
            {
              v51 = v11 + 2 * (5 * v51 - 24);
              break;
            }
            v42 = *a4;
            a4 += 2;
            if ( v42 < 0 )
              v6 |= 4u;
            v43 = -v42;
            if ( v42 >= 0 )
              v43 = v42;
            v51 = v43;
            goto LABEL_169;
          case 4u:
            v7 = 0;
            v47 = 0;
            break;
          case 5u:
            if ( v11 != 42 )
            {
              v7 = v11 + 2 * (5 * v7 - 24);
              goto LABEL_176;
            }
            v7 = *a4;
            a4 += 2;
            v47 = v7;
            if ( v7 < 0 )
            {
              v7 = -1;
LABEL_176:
              v47 = v7;
            }
            break;
          default:
            v17 = v13 - 6;
            if ( v13 == 6 )
            {
              switch ( v11 )
              {
                case 'I':
                  goto LABEL_148;
                case 'h':
                  v6 |= 0x20u;
                  goto LABEL_170;
                case 'j':
                  goto LABEL_148;
                case 'l':
                  v39 = *a2;
                  if ( *a2 == 108 )
                    ++a2;
                  v40 = 4096;
                  if ( v39 != 108 )
                    v40 = 16;
                  v6 |= v40;
                  goto LABEL_170;
                case 't':
                  goto LABEL_148;
                case 'w':
                  v6 |= 0x800u;
                  goto LABEL_170;
                case 'z':
LABEL_148:
                  v6 |= 0x8000u;
                  if ( v11 == 73 )
                  {
                    if ( *a2 == 54 )
                    {
                      if ( a2[1] != 52 )
                        goto LABEL_163;
                      a2 += 2;
                    }
                    else
                    {
                      if ( *a2 != 51 || a2[1] != 50 )
                      {
LABEL_163:
                        LOBYTE(v16) = *a2 - 88;
                        if ( (unsigned __int8)v16 <= 0x20u )
                        {
                          v17 = 0x120821001LL;
                          if ( _bittest64(&v17, (unsigned __int64)v16) )
                            goto LABEL_170;
                        }
                        v49 = 0;
LABEL_166:
                        LOBYTE(v17) = v11;
                        v50 = 0;
                        write_char_0(v17, v54, &v45);
LABEL_167:
                        v12 = v45;
                        goto LABEL_168;
                      }
                      a2 += 2;
                      v6 &= ~0x8000u;
                    }
                  }
                  else if ( v11 != 106 )
                  {
                    goto LABEL_163;
                  }
                  break;
              }
            }
            else if ( v13 == 7 )
            {
              if ( v11 <= 105 )
              {
                if ( v11 == 105 )
                  goto LABEL_25;
                if ( v11 == 67 )
                {
                  if ( (v6 & 0x830) == 0 )
                    v6 |= 0x800u;
                  goto LABEL_51;
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
                          goto LABEL_196;
                        v17 = *v19;
                        if ( (v6 & 0x800) != 0 )
                        {
                          if ( (*v19 & 1) != 0 || ((unsigned __int8)v9 & 1) != 0 )
                            goto LABEL_196;
                          v50 = 1;
                          v17 = (unsigned int)v17 >> 1;
                        }
                        else
                        {
                          v50 = 0;
                        }
                      }
                      else
                      {
                        v17 = -1LL;
                        v9 = (wchar_t *)"(null)";
                        do
                          ++v17;
                        while ( aNull_2[v17] );
                      }
                      SizeConverted = v17;
                      goto LABEL_108;
                    }
                    if ( v11 != 99 )
                    {
                      if ( v11 == 100 )
                      {
LABEL_25:
                        v6 |= 0x40u;
                        goto LABEL_26;
                      }
LABEL_108:
                      if ( v52 )
                        goto LABEL_168;
                      if ( (v6 & 0x40) == 0 )
                        goto LABEL_117;
                      if ( (v6 & 0x100) != 0 )
                      {
                        v46[0] = 45;
                        goto LABEL_114;
                      }
                      if ( (v6 & 1) != 0 )
                      {
                        v46[0] = 43;
                        goto LABEL_114;
                      }
                      if ( (v6 & 2) != 0 )
                      {
                        v46[0] = 32;
LABEL_114:
                        v30 = 1;
                        v44 = 1;
                      }
                      else
                      {
LABEL_117:
                        v30 = v44;
                      }
                      v31 = v51 - SizeConverted - v30;
                      if ( (v6 & 0xC) == 0 )
                      {
                        LOBYTE(v17) = 32;
                        write_multi_char_0(v17, v31, v54, &v45);
                      }
                      write_string_0(v46, v30, v54, &v45);
                      v33 = v54;
                      if ( (v6 & 0xC) == 8 )
                      {
                        LOBYTE(v32) = 48;
                        write_multi_char_0(v32, v31, v54, &v45);
                      }
                      v34 = SizeConverted;
                      if ( v50 && SizeConverted > 0 )
                      {
                        v55[0] = 0;
                        v35 = v9;
                        while ( 1 )
                        {
                          v36 = *v35++;
                          --v34;
                          if ( wctomb_s(v55, v57, 6uLL, v36) || !v55[0] )
                            break;
                          write_string_0(v57, (unsigned int)v55[0], v54, &v45);
                          if ( !v34 )
                            goto LABEL_131;
                        }
                        v12 = -1;
                        v45 = -1;
                      }
                      else
                      {
                        write_string_0(v9, (unsigned int)SizeConverted, v33, &v45);
LABEL_131:
                        v12 = v45;
                      }
                      if ( v12 >= 0 && (v6 & 4) != 0 )
                      {
                        LOBYTE(v37) = 32;
                        write_multi_char_0(v37, v31, v54, &v45);
                        v7 = v47;
                        v8 = v44;
                        goto LABEL_167;
                      }
                      v7 = v47;
                      v8 = v44;
LABEL_168:
                      v14 = 16LL;
LABEL_169:
                      v13 = v49;
                      break;
                    }
LABEL_51:
                    a4 += 2;
                    if ( (v6 & 0x810) != 0 )
                    {
                      if ( wctomb_s(&SizeConverted, MbCh, 0x200uLL, *((_WORD *)a4 - 4)) )
                        v52 = 1;
                    }
                    else
                    {
                      MbCh[0] = *((_BYTE *)a4 - 8);
                      SizeConverted = 1;
                    }
                    v9 = (wchar_t *)MbCh;
                    goto LABEL_108;
                  }
LABEL_76:
                  v21 = 7;
LABEL_77:
                  v53 = v21;
                  if ( (v6 & 0x80u) != 0 )
                  {
                    v46[0] = 48;
                    v46[1] = v21 + 81;
                    v8 = 2;
                  }
                  goto LABEL_27;
                }
                if ( (v6 & 0x830) == 0 )
                  v6 |= 0x800u;
LABEL_43:
                v9 = *(wchar_t **)a4;
                v17 = (unsigned int)v7;
                if ( v7 == -1 )
                  v17 = 0x7FFFFFFFLL;
                a4 += 2;
                if ( (v6 & 0x810) != 0 )
                {
                  v20 = v9;
                  if ( !v9 )
                  {
                    v9 = L"(null)";
                    v20 = L"(null)";
                  }
                  v50 = 1;
                  while ( (_DWORD)v17 )
                  {
                    v17 = (unsigned int)(v17 - 1);
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
                  while ( (_DWORD)v17 )
                  {
                    v17 = (unsigned int)(v17 - 1);
                    if ( !*(_BYTE *)v22 )
                      break;
                    ++v22;
                  }
                  LODWORD(v22) = v22 - (_DWORD)v9;
                }
                SizeConverted = v22;
                goto LABEL_108;
              }
              switch ( v11 )
              {
                case 'n':
                  v38 = *(wchar_t **)a4;
                  a4 += 2;
                  if ( !get_printf_count_output() )
                    goto LABEL_196;
                  if ( (v6 & 0x20) != 0 )
                    *v38 = v12;
                  else
                    *(_DWORD *)v38 = v12;
                  v7 = v47;
                  v52 = 1;
                  goto LABEL_168;
                case 'o':
                  v14 = 8LL;
                  if ( (v6 & 0x80u) != 0 )
                    v6 |= 0x200u;
                  goto LABEL_27;
                case 'p':
                  v7 = 16;
                  v6 |= 0x8000u;
                  goto LABEL_76;
                case 's':
                  goto LABEL_43;
              }
              if ( v11 != 117 )
              {
                if ( v11 != 120 )
                  goto LABEL_108;
                v21 = 39;
                goto LABEL_77;
              }
LABEL_26:
              v14 = 10LL;
LABEL_27:
              a4 += 2;
              if ( (v6 & 0x8000) != 0 || (v6 & 0x1000) != 0 )
              {
                v18 = *((_QWORD *)a4 - 1);
                goto LABEL_85;
              }
              if ( (v6 & 0x20) != 0 )
              {
                if ( (v6 & 0x40) != 0 )
                {
                  v18 = *((__int16 *)a4 - 4);
                  goto LABEL_89;
                }
                v18 = *((unsigned __int16 *)a4 - 4);
LABEL_85:
                if ( (v6 & 0x40) != 0 )
                {
LABEL_89:
                  if ( v18 < 0 )
                  {
                    v18 = -v18;
                    v6 |= 0x100u;
                  }
                }
              }
              else
              {
                if ( (v6 & 0x40) != 0 )
                {
                  v18 = *(a4 - 2);
                  goto LABEL_89;
                }
                v18 = (unsigned int)*(a4 - 2);
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
              v17 = v8 & (unsigned int)-(v23 != 0);
              v25 = v53;
              v44 = v17;
              while ( 1 )
              {
                v26 = v7--;
                if ( v26 <= 0 && !v23 )
                  break;
                v27 = v23 % v14;
                v23 /= v14;
                v28 = v27 + 48;
                if ( (int)v27 + 48 > 57 )
                  v28 += v25;
                *v24-- = v28;
              }
              v47 = v7;
              v29 = (unsigned int)&MbCh[144] + 367 - (_DWORD)v24;
              v8 = v17;
              v9 = (wchar_t *)(v24 + 1);
              SizeConverted = v29;
              if ( (v6 & 0x200) != 0 )
              {
                if ( !v29 || (v44 = v17, *(_BYTE *)v9 != 48) )
                {
                  v9 = (wchar_t *)((char *)v9 - 1);
                  v44 = v17;
                  v8 = v17;
                  SizeConverted = v29 + 1;
                  *(_BYTE *)v9 = 48;
                }
              }
              goto LABEL_108;
            }
            break;
        }
LABEL_170:
        v11 = *a2;
      }
      while ( *a2 );
    }
    return (unsigned int)v12;
  }
  else
  {
LABEL_196:
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
}
