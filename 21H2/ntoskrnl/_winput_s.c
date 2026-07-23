/*
 * XREFs of _winput_s @ 0x1403DAF78
 * Callers:
 *     _swinput_s @ 0x1403DAEA4 (_swinput_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039AB40 (xHalTimerWatchdogStop.c)
 *     iswctype @ 0x1403D4ADC (iswctype.c)
 *     ReadString_0 @ 0x1403DAAA8 (ReadString_0.c)
 *     ReadStringDelimited_0 @ 0x1403DACE8 (ReadStringDelimited_0.c)
 *     _whiteout @ 0x1403DAF20 (_whiteout.c)
 *     _fgetwc_nolock @ 0x1403DB9F0 (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x1403DBA3C (_ungetwc_nolock.c)
 */

__int64 __fastcall winput_s(FILE *File, wint_t *a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned __int16 *v4; // rsi
  int v5; // edi
  FILE *v6; // r14
  wint_t v7; // ax
  int v8; // r15d
  unsigned int v9; // r12d
  wint_t v10; // ax
  int v11; // r11d
  int v12; // r10d
  char v13; // r12
  char v14; // r8
  char v15; // r13
  char v16; // r9
  int v17; // r14d
  unsigned int v18; // edx
  unsigned __int16 v19; // cx
  unsigned __int16 *v20; // rax
  unsigned __int16 *v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  char v24; // r8
  __int64 Src; // r9
  int *v26; // rdx
  char v27; // r12
  char v28; // cl
  unsigned int v29; // r14d
  unsigned __int16 v30; // ax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  char v34; // al
  char v35; // cl
  char v36; // al
  int v37; // eax
  FILE *v38; // r13
  wint_t v39; // ax
  int v40; // r8d
  int v41; // r13d
  wint_t v42; // ax
  wint_t v43; // ax
  __int64 v44; // rcx
  wchar_t v45; // dx
  __int64 v46; // rcx
  wint_t v47; // ax
  __int64 v48; // rax
  int v49; // ecx
  wchar_t v50; // dx
  int v51; // ecx
  wint_t v52; // ax
  wint_t v53; // ax
  wint_t v54; // ax
  int v55; // r13d
  bool v56; // cc
  int v58; // [rsp+50h] [rbp-49h] BYREF
  char v59; // [rsp+54h] [rbp-45h]
  int v60; // [rsp+58h] [rbp-41h] BYREF
  char v61; // [rsp+5Ch] [rbp-3Dh]
  char v62; // [rsp+5Dh] [rbp-3Ch]
  unsigned int v63; // [rsp+60h] [rbp-39h]
  int v64; // [rsp+64h] [rbp-35h]
  int v65; // [rsp+68h] [rbp-31h]
  int v66; // [rsp+6Ch] [rbp-2Dh]
  int v67; // [rsp+70h] [rbp-29h]
  int v68; // [rsp+74h] [rbp-25h]
  __int64 v69; // [rsp+80h] [rbp-19h]
  int v70; // [rsp+88h] [rbp-11h]
  _DWORD v71[3]; // [rsp+8Ch] [rbp-Dh] BYREF
  int *v72; // [rsp+98h] [rbp-1h]
  __int64 v73[10]; // [rsp+A0h] [rbp+7h] BYREF
  unsigned __int16 *v75; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v76; // [rsp+110h] [rbp+77h]
  char v77; // [rsp+118h] [rbp+7Fh]

  v76 = a3;
  v3 = 0;
  v4 = a2;
  v69 = 0LL;
  LOWORD(v5) = 0;
  v64 = 0;
  v6 = File;
  LOWORD(v58) = 0;
  *(_QWORD *)&v71[1] = 0LL;
  if ( !a2 || !File )
  {
    v9 = -1;
LABEL_210:
    xHalTimerWatchdogStop();
    return v9;
  }
  v7 = *a2;
  v8 = 0;
  v59 = 0;
  v9 = 0;
  v60 = 0;
  v63 = 0;
  v71[0] = 0;
  if ( !v7 )
    return v9;
  while ( iswctype(v7, 8u) )
  {
    v60 = v8 - 1;
    v10 = whiteout(&v60, v6);
    if ( v10 != 0xFFFF )
      ungetwc_nolock(v10, v6);
    do
      ++v4;
    while ( iswctype(*v4, 8u) );
    v8 = v60;
LABEL_188:
    v7 = *v4;
    if ( !*v4 )
      goto LABEL_189;
  }
  if ( *v4 != 37 )
    goto LABEL_184;
  if ( v4[1] == 37 )
  {
    ++v4;
LABEL_184:
    v60 = ++v8;
    v53 = fgetwc_nolock(v6);
    v5 = v53;
    LOWORD(v58) = v53;
    v54 = *v4++;
    v64 = v5;
    if ( v54 == (_WORD)v5 )
      goto LABEL_185;
    if ( (_WORD)v5 == 0xFFFF )
      goto LABEL_205;
    ungetwc_nolock(v5, v6);
LABEL_189:
    v55 = 0;
    goto LABEL_194;
  }
  v67 = 0;
  v70 = 0;
  v11 = 0;
  v12 = 0;
  v61 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 1;
  v17 = 0;
  do
  {
    v75 = ++v4;
    v18 = *v4;
    if ( (v18 & 0xFF00) == 0 && (pctype[(unsigned __int8)v18] & 4) != 0 )
    {
      ++v11;
      v12 = v18 + 2 * (5 * v12 - 24);
      continue;
    }
    if ( v18 <= 0x68 )
    {
      switch ( v18 )
      {
        case 'h':
          --v16;
          --v15;
          continue;
        case '*':
          ++v13;
          continue;
        case 'F':
          continue;
        case 'I':
          v19 = v4[1];
          if ( v19 == 54 )
          {
            v20 = v4 + 2;
            if ( v4[2] == 52 )
            {
LABEL_26:
              v4 = v20;
              v75 = v20;
LABEL_27:
              ++v17;
              v69 = 0LL;
              continue;
            }
          }
          if ( v19 == 51 )
          {
            v21 = v4 + 2;
            if ( v4[2] == 50 )
            {
              v4 += 2;
              v75 = v21;
              continue;
            }
          }
LABEL_38:
          v22 = v4[1];
          LOWORD(v22) = v22 - 88;
          if ( (unsigned __int16)v22 <= 0x20u )
          {
            v23 = 0x120821001LL;
            if ( _bittest64(&v23, v22) )
              goto LABEL_27;
          }
          ++v17;
          v69 = 0LL;
          break;
        case 'L':
          ++v16;
          continue;
        case 'N':
          continue;
      }
LABEL_41:
      ++v14;
      continue;
    }
    switch ( v18 )
    {
      case 'j':
        goto LABEL_27;
      case 'l':
        v20 = v4 + 1;
        if ( v4[1] == 108 )
          goto LABEL_26;
        ++v16;
        break;
      case 't':
        goto LABEL_38;
      case 'w':
        break;
      case 'z':
        goto LABEL_38;
      default:
        goto LABEL_41;
    }
    ++v15;
  }
  while ( !v14 );
  v5 = v64;
  v24 = v13;
  v8 = v60;
  v77 = v16;
  Src = 0LL;
  v62 = v13;
  v68 = v17;
  v66 = v11;
  v65 = v12;
  if ( v13 )
  {
    v26 = 0LL;
    v72 = 0LL;
  }
  else
  {
    *(_QWORD *)&v71[1] = v76;
    v76 += 8LL;
    v26 = *(int **)(v76 - 8);
    v72 = v26;
  }
  v73[0] = (__int64)v26;
  v27 = 0;
  if ( !v15 )
    v15 = ((*v4 - 67) & 0xFFEF) != 0 ? 1 : -1;
  v28 = 32;
  v29 = *v4 | 0x20;
  if ( v29 == 110 )
  {
LABEL_58:
    if ( v11 && !v12 )
    {
      if ( (_WORD)v5 == 0xFFFF )
        goto LABEL_205;
      ungetwc_nolock(v5, File);
LABEL_192:
      v55 = 0;
LABEL_193:
      v9 = v63;
      goto LABEL_194;
    }
    if ( v24
      || v29 != 99 && v29 != 115 && v29 != 123
      || (*(_QWORD *)&v71[1] += 8LL,
          v26 = *(int **)(*(_QWORD *)&v71[1] - 8LL),
          v72 = v26,
          v73[0] = (__int64)v26,
          v76 = *(_QWORD *)&v71[1] + 8LL,
          Src = (unsigned int)**(_DWORD **)&v71[1],
          **(_DWORD **)&v71[1]) )
    {
      if ( v29 > 0x70 )
      {
        if ( v29 != 115 )
        {
          if ( v29 == 117 )
            goto LABEL_72;
          if ( v29 == 120 )
            goto LABEL_78;
          if ( v29 != 123 )
          {
LABEL_98:
            if ( *v4 == (_WORD)v5 )
            {
              --v59;
              if ( !v24 )
                v76 = *(_QWORD *)&v71[1];
              goto LABEL_75;
            }
            if ( (_WORD)v5 != 0xFFFF )
              ungetwc_nolock(v5, File);
            v55 = 1;
            goto LABEL_193;
          }
          v28 = 64;
        }
      }
      else
      {
        if ( v29 == 112 )
        {
          ++v68;
          v77 = 1;
          v69 = 0LL;
          goto LABEL_72;
        }
        if ( v29 != 99 )
        {
          if ( v29 != 100 )
          {
            if ( v29 != 105 )
            {
              if ( v29 == 110 )
              {
                v31 = v8;
                if ( v24 )
                  goto LABEL_75;
                goto LABEL_175;
              }
              if ( v29 == 111 )
                goto LABEL_72;
              goto LABEL_98;
            }
            v29 = 100;
LABEL_78:
            if ( (_WORD)v5 == 45 )
            {
              v61 = 1;
            }
            else if ( (_WORD)v5 != 43 )
            {
              goto LABEL_106;
            }
            v65 = v12 - 1;
            if ( v12 != 1 || !v11 )
            {
              v38 = File;
              v60 = ++v8;
              v42 = fgetwc_nolock(File);
              v5 = v42;
              LOWORD(v58) = v42;
              v64 = v42;
LABEL_107:
              if ( (_WORD)v5 == 48 )
              {
                v60 = ++v8;
                v39 = fgetwc_nolock(v38);
                v5 = v39;
                LOWORD(v58) = v39;
                v64 = v39;
                if ( ((v39 - 88) & 0xFFDF) == 0 )
                {
                  v60 = ++v8;
                  v43 = fgetwc_nolock(v38);
                  v40 = v66;
                  v5 = v43;
                  v41 = v65;
                  v64 = v43;
                  LOWORD(v58) = v43;
                  if ( v66 )
                  {
                    v41 = v65 - 2;
                    if ( v65 - 2 < 1 )
                      ++v27;
                  }
                  v29 = 120;
                  goto LABEL_130;
                }
                v70 = 1;
                if ( v29 != 120 )
                {
                  v40 = v66;
                  v41 = v65;
                  if ( v66 )
                  {
                    v41 = v65 - 1;
                    if ( v65 == 1 )
                      ++v27;
                  }
                  v29 = 111;
                  goto LABEL_130;
                }
                v60 = --v8;
                if ( v39 != 0xFFFF )
                  ungetwc_nolock(v39, v38);
                v5 = 48;
LABEL_127:
                LOWORD(v58) = v5;
                v64 = v5;
                goto LABEL_128;
              }
              goto LABEL_128;
            }
            v27 = 1;
LABEL_106:
            v38 = File;
            goto LABEL_107;
          }
LABEL_72:
          if ( (_WORD)v5 == 45 )
          {
            v61 = 1;
            goto LABEL_123;
          }
          if ( (_WORD)v5 == 43 )
          {
LABEL_123:
            v65 = v12 - 1;
            if ( v12 == 1 && v11 )
            {
              v27 = 1;
              v41 = 0;
LABEL_129:
              v40 = v66;
LABEL_130:
              if ( v68 )
              {
                if ( !v27 )
                {
                  while ( 1 )
                  {
                    if ( ((v29 - 112) & 0xFFFFFFF7) != 0 )
                    {
                      if ( (v5 & 0xFF00) != 0 || (pctype[(unsigned __int8)v5] & 4) == 0 )
                        goto LABEL_146;
                      if ( v29 == 111 )
                      {
                        if ( (unsigned __int16)v5 >= 0x38u )
                          goto LABEL_146;
                        v44 = 8 * v69;
                      }
                      else
                      {
                        v44 = 10 * v69;
                      }
                    }
                    else
                    {
                      if ( (v5 & 0xFF00) != 0 || (v45 = pctype[(unsigned __int8)v5], (v45 & 0x80u) == 0) )
                      {
LABEL_146:
                        v60 = --v8;
                        if ( (_WORD)v5 != 0xFFFF )
                          ungetwc_nolock(v5, File);
                        break;
                      }
                      v44 = 16 * v69;
                      if ( (v45 & 4) == 0 )
                      {
                        LOWORD(v5) = (v5 & 0xFFDF) - 7;
                        v64 = v5;
                        LOWORD(v58) = v5;
                      }
                    }
                    ++v70;
                    v46 = (unsigned __int16)v5 + v44 - 48;
                    v69 = v46;
                    if ( v40 )
                    {
                      if ( !--v41 )
                        goto LABEL_149;
                    }
                    v60 = ++v8;
                    v47 = fgetwc_nolock(File);
                    v40 = v66;
                    v5 = v47;
                    v64 = v47;
                    LOWORD(v58) = v47;
                  }
                }
                v46 = v69;
LABEL_149:
                v48 = -v46;
                if ( !v61 )
                  v48 = v46;
                v69 = v48;
              }
              else
              {
                if ( !v27 )
                {
                  while ( 1 )
                  {
                    if ( ((v29 - 112) & 0xFFFFFFF7) != 0 )
                    {
                      if ( (v5 & 0xFF00) != 0 || (pctype[(unsigned __int8)v5] & 4) == 0 )
                        goto LABEL_167;
                      if ( v29 == 111 )
                      {
                        if ( (unsigned __int16)v5 >= 0x38u )
                          goto LABEL_167;
                        v49 = 8 * v67;
                      }
                      else
                      {
                        v49 = 10 * v67;
                      }
                    }
                    else
                    {
                      if ( (v5 & 0xFF00) != 0 || (v50 = pctype[(unsigned __int8)v5], (v50 & 0x80u) == 0) )
                      {
LABEL_167:
                        v60 = --v8;
                        if ( (_WORD)v5 != 0xFFFF )
                          ungetwc_nolock(v5, File);
                        break;
                      }
                      v49 = 16 * v67;
                      if ( (v50 & 4) == 0 )
                      {
                        LOWORD(v5) = (v5 & 0xFFDF) - 7;
                        v64 = v5;
                        LOWORD(v58) = v5;
                      }
                    }
                    ++v70;
                    v51 = (unsigned __int16)v5 + v49 - 48;
                    v67 = v51;
                    if ( v40 )
                    {
                      if ( !--v41 )
                        goto LABEL_170;
                    }
                    v60 = ++v8;
                    v52 = fgetwc_nolock(File);
                    v40 = v66;
                    v5 = v52;
                    v64 = v52;
                    LOWORD(v58) = v52;
                  }
                }
                v51 = v67;
LABEL_170:
                if ( v61 )
                  v67 = -v51;
              }
              if ( !v70 )
                goto LABEL_192;
              if ( v62 )
                goto LABEL_75;
              v26 = v72;
              v71[0] = ++v63;
              v31 = v67;
LABEL_175:
              if ( !v68 )
              {
                v9 = v63;
                if ( v77 )
                  *v26 = v31;
                else
                  *(_WORD *)v26 = v31;
                goto LABEL_76;
              }
              *(_QWORD *)v26 = v69;
LABEL_75:
              v9 = v63;
LABEL_76:
              ++v59;
              v6 = File;
              ++v4;
LABEL_185:
              if ( (_WORD)v5 == 0xFFFF && (*v4 != 37 || v4[1] != 110) )
                goto LABEL_205;
              goto LABEL_188;
            }
            v60 = ++v8;
            v5 = fgetwc_nolock(File);
            goto LABEL_127;
          }
LABEL_128:
          v41 = v65;
          goto LABEL_129;
        }
        v32 = v12 + 1;
        v28 = 16;
        if ( v11 )
          v32 = v12;
        v12 = v32;
        v33 = 1;
        if ( v11 )
          v33 = v11;
        v11 = v33;
      }
      v34 = v28 | 1;
      if ( !v11 )
        v34 = v28;
      v35 = v34 | 2;
      if ( v15 <= 0 )
        v35 = v34;
      v36 = v35 | 4;
      if ( !v24 )
        v36 = v35;
      if ( v29 == 123 )
      {
        v37 = ReadStringDelimited_0(v36, &v75, (wint_t *)&v58, &v60, (void **)v73, v12, File, Src, v71);
        v4 = v75;
      }
      else
      {
        v37 = ReadString_0(v36, 0LL, (wint_t *)&v58, &v60, (void **)v73, v12, File, Src, v71);
      }
      v9 = v71[0];
      LOWORD(v5) = v58;
      v63 = v71[0];
      if ( v37 )
        goto LABEL_189;
      v8 = v60;
      v64 = (unsigned __int16)v58;
      goto LABEL_76;
    }
    v9 = v63;
    v56 = v15 <= 0;
    v55 = 0;
    if ( v56 )
      *(_BYTE *)v26 = 0;
    else
      *(_WORD *)v26 = 0;
LABEL_194:
    if ( (_WORD)v5 == 0xFFFF )
      goto LABEL_205;
    if ( v55 != 1 )
      return v9;
    goto LABEL_210;
  }
  if ( v29 == 99 || v29 == 123 )
  {
    v8 = ++v60;
    v30 = fgetwc_nolock(File);
  }
  else
  {
    v30 = whiteout(&v60, File);
    v8 = v60;
  }
  v5 = v30;
  LOWORD(v58) = v30;
  v64 = v30;
  if ( v30 != 0xFFFF )
  {
    v26 = v72;
    Src = 0LL;
    v12 = v65;
    v28 = 32;
    v11 = v66;
    v24 = v62;
    goto LABEL_58;
  }
LABEL_205:
  if ( v63 || v59 )
    return v63;
  return v3;
}
