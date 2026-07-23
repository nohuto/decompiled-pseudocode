/*
 * XREFs of _output_s @ 0x1403D879C
 * Callers:
 *     _soutput_s @ 0x1403D90AC (_soutput_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039AB40 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     write_char_0 @ 0x1403D5D78 (write_char_0.c)
 *     write_multi_char_0 @ 0x1403D5DC8 (write_multi_char_0.c)
 *     _safecrt_wctomb_s @ 0x1403D8FD0 (_safecrt_wctomb_s.c)
 *     write_string_1 @ 0x1403D91A0 (write_string_1.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall output_s(FILE *a1, char *a2, int *a3)
{
  int v5; // edi
  int v6; // esi
  int v7; // r14d
  wchar_t *v8; // rbx
  char v10; // r9
  __int64 v11; // r12
  int v12; // r8d
  unsigned __int64 v13; // r10
  int v14; // edx
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int16 *v17; // rcx
  unsigned int v18; // eax
  int v19; // ecx
  const wchar_t *v20; // rax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rax
  unsigned __int64 v24; // r8
  _BYTE *v25; // rbx
  int v26; // ecx
  char v27; // r14
  int v28; // r9d
  int v29; // ecx
  unsigned __int64 v30; // rdx
  char v31; // al
  int v32; // eax
  unsigned int v33; // eax
  int v34; // r14d
  FILE *v35; // rsi
  wchar_t *v36; // r15
  int v37; // esi
  __int64 v38; // r9
  char v39; // cl
  int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  int v43; // ecx
  int v45; // [rsp+30h] [rbp-D0h]
  _BYTE v46[4]; // [rsp+34h] [rbp-CCh] BYREF
  int v47; // [rsp+38h] [rbp-C8h] BYREF
  int v48; // [rsp+3Ch] [rbp-C4h]
  int v49; // [rsp+40h] [rbp-C0h] BYREF
  int v50; // [rsp+44h] [rbp-BCh]
  int v51; // [rsp+48h] [rbp-B8h]
  int v52; // [rsp+4Ch] [rbp-B4h]
  FILE *v53; // [rsp+50h] [rbp-B0h]
  int v54; // [rsp+58h] [rbp-A8h]
  int v55; // [rsp+5Ch] [rbp-A4h]
  unsigned int v56; // [rsp+60h] [rbp-A0h] BYREF
  char *v57; // [rsp+68h] [rbp-98h]
  _BYTE v58[512]; // [rsp+70h] [rbp-90h] BYREF
  char v59[8]; // [rsp+270h] [rbp+170h] BYREF

  v53 = a1;
  v54 = 0;
  v5 = 0;
  v52 = 0;
  v6 = 0;
  v48 = 0;
  v7 = 0;
  v45 = 0;
  v8 = 0LL;
  v55 = 0;
  memset(v58, 0, sizeof(v58));
  v50 = 0;
  if ( !a1 || !a2 )
    goto LABEL_189;
  v10 = *a2;
  LODWORD(v11) = 0;
  v47 = 0;
  v12 = 0;
  v49 = 0;
  if ( !v10 )
    return (unsigned int)v47;
  v13 = 16LL;
  do
  {
    v57 = ++a2;
    if ( v47 < 0 )
      break;
    if ( (unsigned __int8)(v10 - 32) > 0x5Au )
      v14 = 0;
    else
      v14 = *((_BYTE *)&_lookuptable_s[-4] + v10) & 0xF;
    v15 = (unsigned int)(v14 + v12 + 8 * v14);
    v12 = *((unsigned __int8 *)_lookuptable_s + v15) >> 4;
    v51 = v12;
    switch ( v12 )
    {
      case 8:
        goto LABEL_189;
      case 0:
        goto LABEL_159;
      case 1:
        v6 = -1;
        v55 = 0;
        v48 = -1;
        v7 = 0;
        v52 = 0;
        v5 = 0;
        v45 = 0;
        v50 = 0;
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
          v42 = *a3;
          a3 += 2;
          v43 = v5 | 4;
          if ( v42 >= 0 )
            v43 = v5;
          v5 = v43;
          v52 = abs32(v42);
          goto LABEL_184;
        }
        v52 = v10 + 2 * (5 * v52 - 24);
        break;
      case 4:
        v6 = 0;
        v48 = 0;
        break;
      case 5:
        if ( v10 != 42 )
        {
          v6 = v10 + 2 * (5 * v6 - 24);
          goto LABEL_164;
        }
        v6 = *a3;
        a3 += 2;
        v48 = v6;
        if ( v6 < 0 )
        {
          v6 = -1;
LABEL_164:
          v48 = v6;
        }
        break;
      case 6:
        switch ( v10 )
        {
          case 'I':
            goto LABEL_141;
          case 'h':
            v5 |= 0x20u;
            goto LABEL_185;
          case 'j':
            goto LABEL_141;
          case 'l':
            v39 = *a2;
            if ( *a2 == 108 )
              ++a2;
            v40 = 4096;
            if ( v39 != 108 )
              v40 = 16;
            v5 |= v40;
            goto LABEL_185;
          case 't':
            goto LABEL_141;
          case 'w':
            v5 |= 0x800u;
            goto LABEL_185;
          case 'z':
LABEL_141:
            v5 |= 0x8000u;
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
LABEL_156:
                  LOBYTE(v15) = *a2 - 88;
                  if ( (unsigned __int8)v15 <= 0x20u )
                  {
                    v41 = 0x120821001LL;
                    if ( _bittest64(&v41, v15) )
                      goto LABEL_185;
                  }
                  v51 = 0;
LABEL_159:
                  v50 = 0;
                  write_char_0(v10, v53, &v47);
LABEL_183:
                  v12 = v51;
LABEL_184:
                  v13 = 16LL;
                  goto LABEL_185;
                }
                a2 += 2;
                v5 &= ~0x8000u;
              }
            }
            else if ( v10 != 106 )
            {
              goto LABEL_156;
            }
            break;
        }
        break;
      case 7:
        if ( v10 > 105 )
        {
          switch ( v10 )
          {
            case 'n':
              goto LABEL_189;
            case 'o':
              v13 = 8LL;
              if ( (v5 & 0x80u) != 0 )
                v5 |= 0x200u;
              goto LABEL_28;
            case 'p':
              v6 = 16;
              v5 |= 0x8000u;
              goto LABEL_77;
          }
          if ( v10 != 115 )
          {
            if ( v10 != 117 )
            {
              if ( v10 != 120 )
                goto LABEL_108;
              v22 = 39;
              goto LABEL_78;
            }
LABEL_27:
            v13 = 10LL;
LABEL_28:
            a3 += 2;
            if ( (v5 & 0x8000) != 0 || (v5 & 0x1000) != 0 )
            {
              v16 = *((_QWORD *)a3 - 1);
            }
            else if ( (v5 & 0x20) != 0 )
            {
              if ( (v5 & 0x40) != 0 )
                v16 = *((__int16 *)a3 - 4);
              else
                v16 = *((unsigned __int16 *)a3 - 4);
            }
            else if ( (v5 & 0x40) != 0 )
            {
              v16 = *(a3 - 2);
            }
            else
            {
              v16 = (unsigned int)*(a3 - 2);
            }
            if ( (v5 & 0x40) != 0 && v16 < 0 )
            {
              v16 = -v16;
              v5 |= 0x100u;
            }
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
            v25 = &v58[511];
            v26 = v24 != 0 ? v7 : 0;
            v27 = v54;
            v45 = v26;
            v28 = v26;
            while ( 1 )
            {
              v29 = v6--;
              if ( v29 <= 0 && !v24 )
                break;
              v30 = v24 % v13;
              v24 /= v13;
              v31 = v30 + 48;
              if ( (int)v30 + 48 > 57 )
                v31 = v30 + v27 + 48;
              *v25-- = v31;
            }
            v48 = v6;
            v32 = (unsigned int)&v58[144] + 367 - (_DWORD)v25;
            v7 = v28;
            v8 = (wchar_t *)(v25 + 1);
            v49 = v32;
            LODWORD(v11) = v32;
            if ( (v5 & 0x200) != 0 )
            {
              if ( !v32 || (v45 = v28, *(_BYTE *)v8 != 48) )
              {
                v8 = (wchar_t *)((char *)v8 - 1);
                v45 = v28;
                LODWORD(v11) = v32 + 1;
                v7 = v28;
                v49 = v32 + 1;
                *(_BYTE *)v8 = 48;
              }
            }
            goto LABEL_108;
          }
        }
        else
        {
          if ( v10 == 105 )
            goto LABEL_26;
          if ( v10 == 67 )
          {
            if ( (v5 & 0x830) == 0 )
              v5 |= 0x800u;
            goto LABEL_52;
          }
          if ( v10 != 83 )
          {
            if ( v10 != 88 )
            {
              if ( v10 == 90 )
              {
                v17 = *(unsigned __int16 **)a3;
                a3 += 2;
                if ( v17 && (v8 = (wchar_t *)*((_QWORD *)v17 + 1)) != 0LL )
                {
                  v18 = *v17;
                  if ( v17[1] < (unsigned __int16)v18 )
                    goto LABEL_189;
                  LODWORD(v11) = *v17;
                  if ( (v5 & 0x800) != 0 )
                  {
                    if ( (v18 & 1) != 0 || ((unsigned __int8)v8 & 1) != 0 )
                      goto LABEL_189;
                    v50 = 1;
                    LODWORD(v11) = v18 >> 1;
                  }
                  else
                  {
                    v50 = 0;
                  }
                }
                else
                {
                  v11 = -1LL;
                  v8 = (wchar_t *)"(null)";
                  do
                    ++v11;
                  while ( aNull_2[v11] );
                }
                v49 = v11;
                goto LABEL_108;
              }
              if ( v10 != 99 )
              {
                if ( v10 == 100 )
                {
LABEL_26:
                  v5 |= 0x40u;
                  goto LABEL_27;
                }
LABEL_108:
                if ( v55 )
                  goto LABEL_183;
                if ( (v5 & 0x40) != 0 )
                {
                  if ( (v5 & 0x100) != 0 )
                  {
                    v46[0] = 45;
                    goto LABEL_116;
                  }
                  if ( (v5 & 1) != 0 )
                  {
                    v46[0] = 43;
                    goto LABEL_116;
                  }
                  if ( (v5 & 2) != 0 )
                  {
                    v46[0] = 32;
LABEL_116:
                    v45 = 1;
                  }
                }
                v33 = v45;
                v34 = v52 - v11 - v45;
                if ( (v5 & 0xC) == 0 )
                {
                  write_multi_char_0(32, v34, v53, &v47);
                  v33 = v45;
                }
                write_string_1(v46, v33, v53, &v47);
                v35 = v53;
                if ( (v5 & 0xC) == 8 )
                  write_multi_char_0(48, v34, v53, &v47);
                if ( v50 && (int)v11 > 0 )
                {
                  v56 = 0;
                  v36 = v8;
                  v37 = v11;
                  while ( 1 )
                  {
                    v38 = *v36++;
                    --v37;
                    if ( (unsigned int)safecrt_wctomb_s(&v56, v59, 6LL, v38) || !v56 )
                      break;
                    write_string_1(v59, v56, v53, &v47);
                    if ( !v37 )
                      goto LABEL_129;
                  }
                  v47 = -1;
LABEL_129:
                  a2 = v57;
                  v35 = v53;
                }
                else
                {
                  write_string_1(v8, (unsigned int)v11, v35, &v47);
                }
                if ( v47 >= 0 && (v5 & 4) != 0 )
                {
                  write_multi_char_0(32, v34, v35, &v47);
                  v6 = v48;
                  v7 = v45;
                }
                else
                {
                  v7 = v45;
                  v6 = v48;
                }
                goto LABEL_183;
              }
LABEL_52:
              a3 += 2;
              if ( (v5 & 0x810) != 0 )
              {
                v21 = safecrt_wctomb_s(&v49, v58, 512LL, *((unsigned __int16 *)a3 - 4));
                LODWORD(v11) = v49;
                if ( v21 )
                  v55 = 1;
              }
              else
              {
                LODWORD(v11) = 1;
                v58[0] = *((_BYTE *)a3 - 8);
                v49 = 1;
              }
              v8 = (wchar_t *)v58;
              goto LABEL_108;
            }
LABEL_77:
            v22 = 7;
LABEL_78:
            v54 = v22;
            if ( (v5 & 0x80u) != 0 )
            {
              v46[0] = 48;
              v46[1] = v22 + 81;
              v7 = 2;
            }
            goto LABEL_28;
          }
          if ( (v5 & 0x830) == 0 )
            v5 |= 0x800u;
        }
        v8 = *(wchar_t **)a3;
        v19 = v6;
        if ( v6 == -1 )
          v19 = 0x7FFFFFFF;
        a3 += 2;
        if ( (v5 & 0x810) != 0 )
        {
          v20 = v8;
          if ( !v8 )
          {
            v8 = L"(null)";
            v20 = L"(null)";
          }
          v50 = 1;
          while ( v19 )
          {
            --v19;
            if ( !*v20 )
              break;
            ++v20;
          }
          v23 = v20 - v8;
        }
        else
        {
          v23 = (__int64)"(null)";
          if ( v8 )
            v23 = (__int64)v8;
          v8 = (wchar_t *)v23;
          while ( v19 )
          {
            --v19;
            if ( !*(_BYTE *)v23 )
              break;
            ++v23;
          }
          LODWORD(v23) = v23 - (_DWORD)v8;
        }
        LODWORD(v11) = v23;
        v49 = v23;
        goto LABEL_108;
    }
LABEL_185:
    v10 = *a2;
  }
  while ( *a2 );
  if ( !v12 || v12 == 7 )
    return (unsigned int)v47;
LABEL_189:
  xHalTimerWatchdogStop();
  return 0xFFFFFFFFLL;
}
