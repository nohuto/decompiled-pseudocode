/*
 * XREFs of _output_s @ 0x1403DA5B8
 * Callers:
 *     _soutput_s @ 0x1403DAF04 (_soutput_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     write_char_0 @ 0x1403D7AC8 (write_char_0.c)
 *     write_multi_char_0 @ 0x1403D7B18 (write_multi_char_0.c)
 *     write_string_0 @ 0x1403D7B70 (write_string_0.c)
 *     _safecrt_wctomb_s @ 0x1403DAE28 (_safecrt_wctomb_s.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall output_s(FILE *a1, char *a2, unsigned __int16 *a3)
{
  int v4; // edi
  int v5; // esi
  int v6; // r14d
  char *v7; // rbx
  unsigned __int16 *v8; // r15
  char v10; // r9
  __int64 v11; // r12
  int v12; // r10d
  unsigned __int16 *v13; // r8
  int v14; // edx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r11
  unsigned __int16 *v17; // r15
  __int64 v18; // rax
  unsigned __int16 *v19; // rcx
  unsigned int v20; // eax
  int v21; // ecx
  const wchar_t *v22; // rax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rax
  unsigned __int64 v26; // r9
  char v27; // si
  int v28; // r10d
  char *i; // rcx
  int v30; // edx
  int v31; // r8d
  int v32; // eax
  bool v33; // zf
  int v34; // r15d
  int v35; // r14d
  FILE *v36; // rsi
  unsigned __int16 *v37; // r15
  int v38; // esi
  __int64 v39; // r9
  char v40; // cl
  int v41; // eax
  __int64 v42; // rcx
  int v43; // esi
  int v44; // ecx
  int v45; // eax
  char v47[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v48; // [rsp+34h] [rbp-CCh] BYREF
  int v49; // [rsp+38h] [rbp-C8h]
  int v50; // [rsp+3Ch] [rbp-C4h]
  int v51; // [rsp+40h] [rbp-C0h]
  int v52; // [rsp+44h] [rbp-BCh] BYREF
  int v53; // [rsp+48h] [rbp-B8h]
  int v54; // [rsp+4Ch] [rbp-B4h]
  unsigned __int16 *v55; // [rsp+50h] [rbp-B0h]
  FILE *v56; // [rsp+58h] [rbp-A8h]
  int v57; // [rsp+60h] [rbp-A0h]
  int v58; // [rsp+64h] [rbp-9Ch]
  int v59; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v60[512]; // [rsp+70h] [rbp-90h] BYREF
  char v61[8]; // [rsp+270h] [rbp+170h] BYREF

  v56 = a1;
  v55 = a3;
  v57 = 0;
  v4 = 0;
  v5 = 0;
  v51 = 0;
  v6 = 0;
  v50 = 0;
  v49 = 0;
  v7 = 0LL;
  v58 = 0;
  v8 = a3;
  memset(v60, 0, sizeof(v60));
  v53 = 0;
  if ( !a1 || !a2 )
    goto LABEL_192;
  v10 = *a2;
  LODWORD(v11) = 0;
  v48 = 0;
  v12 = 0;
  v52 = 0;
  if ( !v10 )
    return (unsigned int)v48;
  do
  {
    ++a2;
    v13 = v8;
    if ( v48 < 0 )
      break;
    if ( (unsigned __int8)(v10 - 32) > 0x5Au )
      v14 = 0;
    else
      v14 = *((_BYTE *)&_lookuptable_s[-4] + v10) & 0xF;
    v15 = (unsigned int)(v14 + v12 + 8 * v14);
    v12 = *((unsigned __int8 *)_lookuptable_s + v15) >> 4;
    v54 = v12;
    switch ( v12 )
    {
      case 8:
        goto LABEL_192;
      case 0:
        goto LABEL_160;
      case 1:
        v6 = -1;
        v58 = 0;
        v50 = -1;
        v5 = 0;
        v51 = 0;
        v4 = 0;
        v49 = 0;
        v53 = 0;
        break;
      case 2:
        switch ( v10 )
        {
          case ' ':
            v4 |= 2u;
            break;
          case '#':
            v4 |= 0x80u;
            break;
          case '+':
            v4 |= 1u;
            break;
          case '-':
            v4 |= 4u;
            break;
          case '0':
            v4 |= 8u;
            break;
        }
        break;
      case 3:
        if ( v10 == 42 )
        {
          v43 = *(_DWORD *)v8;
          v55 = v8 + 4;
          v44 = v43;
          if ( v43 < 0 )
            v4 |= 4u;
          v45 = v43;
          v5 = -v43;
          if ( v45 >= 0 )
            v5 = v44;
        }
        else
        {
          v5 = v10 + 2 * (5 * v5 - 24);
        }
        v51 = v5;
        break;
      case 4:
        v6 = 0;
        v50 = 0;
        break;
      case 5:
        if ( v10 != 42 )
        {
          v6 = v10 + 2 * (5 * v6 - 24);
          goto LABEL_165;
        }
        v6 = *(_DWORD *)v8;
        v55 = v8 + 4;
        v50 = v6;
        if ( v6 < 0 )
        {
          v6 = -1;
LABEL_165:
          v50 = v6;
        }
        break;
      case 6:
        switch ( v10 )
        {
          case 'I':
            goto LABEL_142;
          case 'h':
            v4 |= 0x20u;
            goto LABEL_188;
          case 'j':
            goto LABEL_142;
          case 'l':
            v40 = *a2;
            if ( *a2 == 108 )
              ++a2;
            v41 = 4096;
            if ( v40 != 108 )
              v41 = 16;
            v4 |= v41;
            goto LABEL_188;
          case 't':
            goto LABEL_142;
          case 'w':
            v4 |= 0x800u;
            goto LABEL_188;
          case 'z':
LABEL_142:
            v4 |= 0x8000u;
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
LABEL_157:
                  LOBYTE(v15) = *a2 - 88;
                  if ( (unsigned __int8)v15 <= 0x20u )
                  {
                    v42 = 0x120821001LL;
                    if ( _bittest64(&v42, v15) )
                      goto LABEL_188;
                  }
                  v54 = 0;
LABEL_160:
                  v53 = 0;
                  write_char_0(v10, v56, &v48);
LABEL_187:
                  v12 = v54;
                  goto LABEL_188;
                }
                a2 += 2;
                v4 &= ~0x8000u;
              }
            }
            else if ( v10 != 106 )
            {
              goto LABEL_157;
            }
            break;
        }
        break;
      case 7:
        if ( v10 <= 105 )
        {
          if ( v10 == 105 )
            goto LABEL_25;
          if ( v10 == 67 )
          {
            if ( (v4 & 0x830) == 0 )
              v4 |= 0x800u;
            goto LABEL_52;
          }
          if ( v10 != 83 )
          {
            if ( v10 != 88 )
            {
              if ( v10 == 90 )
              {
                v19 = *(unsigned __int16 **)v8;
                v55 = v8 + 4;
                if ( v19 && (v7 = (char *)*((_QWORD *)v19 + 1)) != 0LL )
                {
                  v20 = *v19;
                  if ( v19[1] < (unsigned __int16)v20 )
                    goto LABEL_192;
                  LODWORD(v11) = *v19;
                  if ( (v4 & 0x800) != 0 )
                  {
                    if ( (v20 & 1) != 0 || ((unsigned __int8)v7 & 1) != 0 )
                      goto LABEL_192;
                    v53 = 1;
                    LODWORD(v11) = v20 >> 1;
                  }
                  else
                  {
                    v53 = 0;
                  }
                }
                else
                {
                  v11 = -1LL;
                  v7 = "(null)";
                  do
                    ++v11;
                  while ( aNull_2[v11] );
                }
                v52 = v11;
                goto LABEL_109;
              }
              if ( v10 != 99 )
              {
                if ( v10 == 100 )
                {
LABEL_25:
                  v4 |= 0x40u;
                  goto LABEL_26;
                }
LABEL_109:
                if ( v58 )
                  goto LABEL_187;
                if ( (v4 & 0x40) != 0 )
                {
                  if ( (v4 & 0x100) != 0 )
                  {
                    v47[0] = 45;
                    goto LABEL_117;
                  }
                  if ( (v4 & 1) != 0 )
                  {
                    v47[0] = 43;
                    goto LABEL_117;
                  }
                  if ( (v4 & 2) != 0 )
                  {
                    v47[0] = 32;
LABEL_117:
                    v49 = 1;
                  }
                }
                v34 = v49;
                v35 = v5 - v11 - v49;
                if ( (v4 & 0xC) == 0 )
                  write_multi_char_0(32, v35, v56, &v48);
                write_string_0(v47, v34, v56, &v48);
                v36 = v56;
                if ( (v4 & 0xC) == 8 )
                  write_multi_char_0(48, v35, v56, &v48);
                if ( v53 && (int)v11 > 0 )
                {
                  v59 = 0;
                  v37 = (unsigned __int16 *)v7;
                  v38 = v11;
                  while ( 1 )
                  {
                    v39 = *v37++;
                    --v38;
                    if ( (unsigned int)safecrt_wctomb_s(&v59, v61, 6LL, v39) || !v59 )
                      break;
                    write_string_0(v61, v59, v56, &v48);
                    if ( !v38 )
                      goto LABEL_130;
                  }
                  v48 = -1;
LABEL_130:
                  v36 = v56;
                }
                else
                {
                  write_string_0(v7, v11, v36, &v48);
                }
                if ( v48 >= 0 && (v4 & 4) != 0 )
                {
                  write_multi_char_0(32, v35, v36, &v48);
                  v6 = v50;
                  v5 = v51;
                }
                else
                {
                  v5 = v51;
                  v6 = v50;
                }
                goto LABEL_187;
              }
LABEL_52:
              v55 = v8 + 4;
              if ( (v4 & 0x810) != 0 )
              {
                v23 = safecrt_wctomb_s(&v52, v60, 512LL, *v8);
                LODWORD(v11) = v52;
                if ( v23 )
                  v58 = 1;
              }
              else
              {
                LODWORD(v11) = 1;
                v60[0] = *(_BYTE *)v8;
                v52 = 1;
              }
              v7 = v60;
              goto LABEL_109;
            }
LABEL_77:
            v24 = 7;
LABEL_78:
            v57 = v24;
            if ( (v4 & 0x80u) != 0 )
            {
              v47[0] = 48;
              v47[1] = v24 + 81;
              v49 = 2;
            }
            v16 = 16LL;
            goto LABEL_27;
          }
          if ( (v4 & 0x830) == 0 )
            v4 |= 0x800u;
LABEL_44:
          v7 = *(char **)v8;
          v21 = v6;
          if ( v6 == -1 )
            v21 = 0x7FFFFFFF;
          v55 = v8 + 4;
          if ( (v4 & 0x810) != 0 )
          {
            v22 = (const wchar_t *)v7;
            if ( !v7 )
            {
              v7 = (char *)L"(null)";
              v22 = L"(null)";
            }
            v53 = 1;
            while ( v21 )
            {
              --v21;
              if ( !*v22 )
                break;
              ++v22;
            }
            v25 = ((char *)v22 - v7) >> 1;
          }
          else
          {
            v25 = (__int64)"(null)";
            if ( v7 )
              v25 = (__int64)v7;
            v7 = (char *)v25;
            while ( v21 )
            {
              --v21;
              if ( !*(_BYTE *)v25 )
                break;
              ++v25;
            }
            LODWORD(v25) = v25 - (_DWORD)v7;
          }
          LODWORD(v11) = v25;
          v52 = v25;
          goto LABEL_109;
        }
        switch ( v10 )
        {
          case 'n':
            goto LABEL_192;
          case 'o':
            v16 = 8LL;
            if ( (v4 & 0x80u) != 0 )
              v4 |= 0x200u;
            goto LABEL_27;
          case 'p':
            v6 = 16;
            v4 |= 0x8000u;
            goto LABEL_77;
          case 's':
            goto LABEL_44;
        }
        if ( v10 != 117 )
        {
          if ( v10 != 120 )
            goto LABEL_109;
          v24 = 39;
          goto LABEL_78;
        }
LABEL_26:
        v16 = 10LL;
LABEL_27:
        v17 = v8 + 4;
        v55 = v17;
        if ( (v4 & 0x8000) != 0 || (v4 & 0x1000) != 0 )
        {
          v18 = *(_QWORD *)v13;
          if ( (v4 & 0x40) != 0 )
            goto LABEL_89;
LABEL_92:
          v26 = (unsigned int)v18;
          if ( (v4 & 0x9000) != 0 )
            v26 = v18;
          if ( v6 >= 0 )
          {
            v4 &= ~8u;
            if ( v6 > 512 )
              v6 = 512;
          }
          else
          {
            v6 = 1;
          }
          v27 = v57;
          v49 &= -(v26 != 0);
          v28 = v49;
          for ( i = &v60[511]; ; --i )
          {
            v30 = v6--;
            if ( v30 <= 0 && !v26 )
              break;
            v31 = v26 % v16 + 48;
            v26 /= v16;
            if ( v31 > 57 )
              LOBYTE(v31) = v27 + v31;
            *i = v31;
          }
          v50 = v6;
          v32 = (unsigned int)&v60[144] + 367 - (_DWORD)i;
          v7 = i + 1;
          v52 = v32;
          LODWORD(v11) = v32;
          if ( (v4 & 0x200) != 0 )
          {
            if ( !v32 || (v33 = *v7 == 48, v55 = v17, v49 = v28, !v33) )
            {
              v7 = i;
              v55 = v17;
              LODWORD(v11) = v32 + 1;
              v49 = v28;
              v52 = v32 + 1;
              *i = 48;
            }
          }
          v5 = v51;
          goto LABEL_109;
        }
        if ( (v4 & 0x20) != 0 )
        {
          if ( (v4 & 0x40) == 0 )
          {
            v18 = *v13;
            goto LABEL_92;
          }
          v18 = (__int16)*v13;
        }
        else
        {
          if ( (v4 & 0x40) == 0 )
          {
            v18 = *(unsigned int *)v13;
            goto LABEL_92;
          }
          v18 = *(int *)v13;
        }
LABEL_89:
        if ( v18 < 0 )
        {
          v18 = -v18;
          v4 |= 0x100u;
        }
        goto LABEL_92;
    }
LABEL_188:
    v10 = *a2;
    v8 = v55;
  }
  while ( *a2 );
  if ( !v12 || v12 == 7 )
    return (unsigned int)v48;
LABEL_192:
  xHalTimerWatchdogStop();
  return 0xFFFFFFFFLL;
}
