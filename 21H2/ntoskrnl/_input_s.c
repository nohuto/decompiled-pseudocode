/*
 * XREFs of _input_s @ 0x1403E9268
 * Callers:
 *     _sinput_s @ 0x1403E9BB4 (_sinput_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403A7020 (xHalTimerWatchdogStop.c)
 *     ReadString @ 0x1403E8F20 (ReadString.c)
 *     ReadStringDelimited @ 0x1403E90C8 (ReadStringDelimited.c)
 *     _inc @ 0x1403E9238 (_inc.c)
 *     _ungetc_nolock @ 0x1403EAAC4 (_ungetc_nolock.c)
 */

__int64 __fastcall input_s(FILE *File, unsigned __int8 *a2, _BYTE **a3)
{
  _BYTE **v4; // r12
  _BYTE *v5; // rdx
  FILE *v6; // rsi
  int v7; // ebx
  unsigned __int8 v8; // cl
  int v9; // r14d
  unsigned int v10; // r15d
  unsigned int v11; // r13d
  unsigned __int64 v12; // rax
  int v13; // r8d
  int v14; // r10d
  char v15; // bl
  char v16; // r8
  char v17; // r15
  char v18; // r14
  int v19; // esi
  int v20; // r11d
  __int64 v21; // rcx
  unsigned __int8 v22; // dl
  __int64 v23; // rcx
  char v24; // r9
  __int64 v25; // r11
  char v26; // r12
  unsigned int v27; // esi
  int v28; // r8d
  int v29; // eax
  char v30; // cl
  FILE *v31; // r15
  int v32; // r15d
  int v33; // eax
  __int64 v34; // rdx
  wchar_t v35; // cx
  int v36; // eax
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rax
  int v40; // edx
  wchar_t v41; // cx
  int v42; // eax
  int v43; // edx
  int v44; // eax
  char v45; // al
  char v46; // cl
  char v47; // al
  int v48; // eax
  int v49; // eax
  int v50; // eax
  bool v51; // cc
  char v53; // [rsp+50h] [rbp-59h]
  char v54; // [rsp+51h] [rbp-58h]
  char v55; // [rsp+52h] [rbp-57h]
  unsigned int v56; // [rsp+54h] [rbp-55h]
  int v57; // [rsp+58h] [rbp-51h] BYREF
  int v58; // [rsp+5Ch] [rbp-4Dh] BYREF
  int v59; // [rsp+60h] [rbp-49h]
  int v60; // [rsp+64h] [rbp-45h]
  int v61; // [rsp+68h] [rbp-41h]
  int v62; // [rsp+6Ch] [rbp-3Dh]
  int v63; // [rsp+70h] [rbp-39h]
  int v64; // [rsp+74h] [rbp-35h]
  int v65; // [rsp+78h] [rbp-31h]
  __int64 v66; // [rsp+80h] [rbp-29h]
  int v67; // [rsp+88h] [rbp-21h]
  _DWORD v68[3]; // [rsp+8Ch] [rbp-1Dh] BYREF
  _BYTE *v69; // [rsp+98h] [rbp-11h]
  unsigned int v70; // [rsp+A0h] [rbp-9h]
  __int64 v71; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v72; // [rsp+B0h] [rbp+7h]
  unsigned __int8 *v74; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 v75; // [rsp+120h] [rbp+77h]
  char v76; // [rsp+128h] [rbp+7Fh]

  v75 = (__int64)a3;
  v4 = a3;
  v5 = 0LL;
  v6 = File;
  v66 = 0LL;
  v7 = 0;
  v60 = 0;
  v58 = 0;
  v65 = 0;
  *(_QWORD *)&v68[1] = 0LL;
  if ( !a2 || !File )
  {
    v10 = -1;
LABEL_214:
    xHalTimerWatchdogStop();
    return v10;
  }
  v8 = *a2;
  v9 = 0;
  v53 = 0;
  v10 = 0;
  v59 = 0;
  v57 = 0;
  v56 = 0;
  v68[0] = 0;
  if ( !v8 )
    return v10;
  v11 = -1;
  while ( 1 )
  {
    v12 = v8;
    if ( (pctype[v8] & 8) == 0 )
      break;
    --v9;
    while ( 1 )
    {
      v59 = ++v9;
      v57 = v9;
      v13 = inc(v6);
      if ( v13 == -1 )
        break;
      if ( (pctype[(unsigned __int8)v13] & 8) == 0 )
      {
        ungetc_nolock(v13, v6);
        goto LABEL_10;
      }
    }
    do
LABEL_10:
      ++a2;
    while ( (pctype[*a2] & 8) != 0 );
LABEL_191:
    v8 = *a2;
    v5 = 0LL;
    if ( !*a2 )
      goto LABEL_192;
  }
  if ( v8 != 37 )
    goto LABEL_187;
  if ( a2[1] == 37 )
  {
    ++a2;
LABEL_187:
    v59 = ++v9;
    v57 = v9;
    v7 = inc(v6);
    v60 = v7;
    v58 = v7;
    v49 = *a2++;
    if ( v49 == v7 )
      goto LABEL_188;
    if ( v7 == -1 )
      goto LABEL_209;
    ungetc_nolock(v7, v6);
    goto LABEL_198;
  }
  v63 = 0;
  v14 = 0;
  v67 = 0;
  v15 = 0;
  v72 = 0LL;
  v16 = 0;
  v54 = 0;
  v17 = 0;
  v18 = 1;
  v19 = 0;
  v20 = 0;
  do
  {
    v74 = ++a2;
    v21 = *a2;
    if ( (pctype[v21] & 4) != 0 )
    {
      ++v20;
      v14 = v21 + 2 * (5 * v14 - 24);
      continue;
    }
    if ( (unsigned int)v21 <= 0x68 )
    {
      switch ( (_DWORD)v21 )
      {
        case 'h':
          --v18;
          --v17;
          continue;
        case '*':
          ++v15;
          continue;
        case 'F':
          continue;
      }
      if ( (_DWORD)v21 != 73 )
      {
        if ( (_DWORD)v21 == 76 )
        {
          ++v18;
          continue;
        }
        if ( (_DWORD)v21 == 78 )
          continue;
        goto LABEL_44;
      }
      v22 = a2[1];
      if ( v22 == 54 )
      {
        v12 = (unsigned __int64)(a2 + 2);
        if ( a2[2] == 52 )
        {
          ++v19;
          v74 = a2 + 2;
          v5 = 0LL;
          a2 += 2;
LABEL_48:
          v66 = 0LL;
          continue;
        }
      }
      if ( v22 == 51 )
      {
        v12 = (unsigned __int64)(a2 + 2);
        v5 = 0LL;
        if ( a2[2] == 50 )
        {
          a2 += 2;
          v74 = (unsigned __int8 *)v12;
          continue;
        }
      }
      else
      {
        v5 = 0LL;
      }
LABEL_41:
      LOBYTE(v12) = a2[1] - 88;
      if ( (unsigned __int8)v12 > 0x20u || (v23 = 0x120821001LL, !_bittest64(&v23, v12)) )
      {
        ++v19;
        v66 = 0LL;
LABEL_44:
        ++v16;
        continue;
      }
LABEL_47:
      ++v19;
      goto LABEL_48;
    }
    switch ( (_DWORD)v21 )
    {
      case 'j':
        goto LABEL_47;
      case 'l':
        if ( a2[1] == 108 )
        {
          v74 = ++a2;
          goto LABEL_47;
        }
        ++v18;
        break;
      case 't':
        goto LABEL_41;
      case 'w':
        break;
      case 'z':
        goto LABEL_41;
      default:
        goto LABEL_44;
    }
    ++v17;
  }
  while ( !v16 );
  v55 = v15;
  v24 = v15;
  v7 = v60;
  v76 = v18;
  v9 = v59;
  v62 = v20;
  v25 = v72;
  v64 = v19;
  v61 = v14;
  if ( !v24 )
  {
    v5 = *v4;
    *(_QWORD *)&v68[1] = v4;
    v75 = (__int64)(v4 + 1);
  }
  v69 = v5;
  v71 = (__int64)v5;
  v26 = 0;
  if ( !v17 )
    v17 = ((*a2 - 67) & 0xEF) != 0 ? -1 : 1;
  v27 = *a2 | 0x20;
  v70 = v27;
  if ( v27 == 110 )
  {
LABEL_65:
    v28 = v62;
    if ( !v62 || v14 )
    {
      if ( !v24 && (v27 == 99 || v27 == 115 || v27 == 123) )
      {
        *(_QWORD *)&v68[1] += 8LL;
        v5 = *(_BYTE **)(*(_QWORD *)&v68[1] - 8LL);
        v69 = v5;
        v71 = (__int64)v5;
        v75 = *(_QWORD *)&v68[1] + 8LL;
        v25 = (unsigned int)**(_DWORD **)&v68[1];
        if ( !**(_DWORD **)&v68[1] )
        {
          v50 = v65;
          v51 = v17 <= 0;
          v10 = v56;
          if ( v51 )
            *v5 = 0;
          else
            *(_WORD *)v5 = 0;
          goto LABEL_193;
        }
      }
      if ( v27 > 0x70 )
      {
        switch ( v27 )
        {
          case 's':
            v30 = 32;
            break;
          case 'u':
            goto LABEL_79;
          case 'x':
            goto LABEL_86;
          case '{':
            v30 = 64;
            break;
          default:
LABEL_95:
            if ( *a2 == v7 )
            {
              --v53;
              if ( !v24 )
              {
                v4 = *(_BYTE ***)&v68[1];
                v75 = *(_QWORD *)&v68[1];
                goto LABEL_83;
              }
              goto LABEL_82;
            }
            if ( v7 != -1 )
              ungetc_nolock(v7, File);
            v50 = 1;
LABEL_208:
            v10 = v56;
LABEL_193:
            if ( v7 == -1 )
              goto LABEL_209;
            if ( v50 != 1 )
              return v10;
            goto LABEL_214;
        }
      }
      else
      {
        if ( v27 == 112 )
        {
          ++v64;
          v76 = 1;
          v66 = 0LL;
          goto LABEL_79;
        }
        if ( v27 != 99 )
        {
          if ( v27 != 100 )
          {
            if ( v27 != 105 )
            {
              if ( v27 == 110 )
              {
                v29 = v9;
                if ( !v24 )
                {
LABEL_169:
                  if ( !v64 )
                  {
                    v10 = v56;
                    v4 = (_BYTE **)v75;
                    if ( v76 )
                      *(_DWORD *)v5 = v29;
                    else
                      *(_WORD *)v5 = v29;
                    goto LABEL_84;
                  }
                  *(_QWORD *)v5 = v66;
                }
LABEL_82:
                v4 = (_BYTE **)v75;
LABEL_83:
                v10 = v56;
LABEL_84:
                ++v53;
                v6 = File;
                ++a2;
LABEL_188:
                if ( v7 == -1 && (*a2 != 37 || a2[1] != 110) )
                  goto LABEL_209;
                goto LABEL_191;
              }
              if ( v27 == 111 )
                goto LABEL_79;
              goto LABEL_95;
            }
            v27 = 100;
LABEL_86:
            if ( v7 == 45 )
            {
              v54 = 1;
            }
            else if ( v7 != 43 )
            {
              goto LABEL_103;
            }
            v61 = v14 - 1;
            if ( v14 != 1 || !v62 )
            {
              v31 = File;
              v59 = ++v9;
              v57 = v9;
              v7 = inc(File);
              v60 = v7;
              v58 = v7;
LABEL_104:
              if ( v7 == 48 )
              {
                v59 = ++v9;
                v57 = v9;
                v7 = inc(v31);
                v60 = v7;
                v58 = v7;
                if ( (((_BYTE)v7 - 88) & 0xDF) != 0 )
                {
                  v67 = 1;
                  if ( v27 == 120 )
                  {
                    v59 = --v9;
                    v57 = v9;
                    if ( v7 != -1 )
                      ungetc_nolock(v7, v31);
                    v7 = 48;
                    v60 = 48;
                    v58 = 48;
                    goto LABEL_115;
                  }
                  v28 = v62;
                  v32 = v61;
                  if ( v62 )
                  {
                    v32 = v61 - 1;
                    if ( v61 == 1 )
                      ++v26;
                  }
                  v27 = 111;
                }
                else
                {
                  v59 = ++v9;
                  v57 = v9;
                  v33 = inc(v31);
                  v28 = v62;
                  v32 = v61;
                  v7 = v33;
                  v60 = v33;
                  v58 = v33;
                  if ( v62 )
                  {
                    v32 = v61 - 2;
                    if ( v61 - 2 < 1 )
                      ++v26;
                  }
                  v27 = 120;
                }
LABEL_126:
                if ( v64 )
                {
                  if ( !v26 )
                  {
                    while ( 1 )
                    {
                      if ( ((v27 - 112) & 0xFFFFFFF7) != 0 )
                      {
                        if ( (pctype[(unsigned __int8)v7] & 4) == 0 )
                          goto LABEL_141;
                        if ( v27 == 111 )
                        {
                          if ( v7 >= 56 )
                            goto LABEL_141;
                          v34 = 8 * v66;
                        }
                        else
                        {
                          v34 = 10 * v66;
                        }
                      }
                      else
                      {
                        v35 = pctype[(unsigned __int8)v7];
                        if ( (v35 & 0x80u) == 0 )
                        {
LABEL_141:
                          v59 = --v9;
                          v57 = v9;
                          if ( v7 != -1 )
                            ungetc_nolock(v7, File);
                          break;
                        }
                        v36 = (char)v7;
                        v34 = 16 * v66;
                        v7 = ((char)v7 & 0xFFFFFFDF) - 7;
                        if ( (v35 & 4) != 0 )
                          v7 = v36;
                        v60 = v7;
                        v58 = v7;
                      }
                      ++v67;
                      v37 = v7 - 48 + v34;
                      v66 = v37;
                      if ( v28 )
                      {
                        if ( !--v32 )
                          goto LABEL_144;
                      }
                      v59 = ++v9;
                      v57 = v9;
                      v38 = inc(File);
                      v28 = v62;
                      v7 = v38;
                      v60 = v38;
                      v58 = v38;
                    }
                  }
                  v37 = v66;
LABEL_144:
                  v39 = -v37;
                  if ( !v54 )
                    v39 = v37;
                  v66 = v39;
                }
                else
                {
                  if ( !v26 )
                  {
                    while ( 1 )
                    {
                      if ( ((v27 - 112) & 0xFFFFFFF7) != 0 )
                      {
                        if ( (pctype[(unsigned __int8)v7] & 4) == 0 )
                          goto LABEL_161;
                        if ( v27 == 111 )
                        {
                          if ( v7 >= 56 )
                            goto LABEL_161;
                          v40 = 8 * v63;
                        }
                        else
                        {
                          v40 = 10 * v63;
                        }
                      }
                      else
                      {
                        v41 = pctype[(unsigned __int8)v7];
                        if ( (v41 & 0x80u) == 0 )
                        {
LABEL_161:
                          v59 = --v9;
                          v57 = v9;
                          if ( v7 != -1 )
                            ungetc_nolock(v7, File);
                          break;
                        }
                        v42 = (char)v7;
                        v40 = 16 * v63;
                        v7 = ((char)v7 & 0xFFFFFFDF) - 7;
                        if ( (v41 & 4) != 0 )
                          v7 = v42;
                        v60 = v7;
                        v58 = v7;
                      }
                      ++v67;
                      v43 = v7 + v40 - 48;
                      v63 = v43;
                      if ( v28 )
                      {
                        if ( !--v32 )
                          goto LABEL_164;
                      }
                      v59 = ++v9;
                      v57 = v9;
                      v44 = inc(File);
                      v28 = v62;
                      v7 = v44;
                      v60 = v44;
                      v58 = v44;
                    }
                  }
                  v43 = v63;
LABEL_164:
                  if ( v54 )
                    v63 = -v43;
                }
                if ( !v67 )
                {
                  v50 = 0;
                  goto LABEL_208;
                }
                if ( !v55 )
                {
                  v5 = v69;
                  v68[0] = ++v56;
                  v29 = v63;
                  goto LABEL_169;
                }
                goto LABEL_82;
              }
LABEL_115:
              v28 = v62;
LABEL_125:
              v32 = v61;
              goto LABEL_126;
            }
            v26 = 1;
LABEL_103:
            v31 = File;
            goto LABEL_104;
          }
LABEL_79:
          if ( v7 == 45 )
          {
            v54 = 1;
          }
          else if ( v7 != 43 )
          {
            goto LABEL_125;
          }
          v61 = v14 - 1;
          if ( v14 == 1 && v62 )
          {
            v26 = 1;
            v32 = 0;
            goto LABEL_126;
          }
          v59 = ++v9;
          v57 = v9;
          v7 = inc(File);
          v60 = v7;
          v58 = v7;
          goto LABEL_115;
        }
        v30 = 16;
        if ( !v62 )
        {
          v28 = 1;
          ++v14;
        }
      }
      v45 = v30 | 1;
      if ( !v28 )
        v45 = v30;
      v46 = v45 | 2;
      if ( v17 <= 0 )
        v46 = v45;
      v47 = v46 | 4;
      if ( !v24 )
        v47 = v46;
      if ( v27 == 123 )
      {
        v48 = ReadStringDelimited(v47, &v74, &v58, &v57, (_WORD **)&v71, v14, File, v25, v68);
        a2 = v74;
      }
      else
      {
        v48 = ReadString(v47, 0LL, &v58, &v57, (_WORD **)&v71, v14, File, v25, v68);
      }
      v10 = v68[0];
      v7 = v58;
      v56 = v68[0];
      if ( !v48 )
      {
        v9 = v57;
        v4 = (_BYTE **)v75;
        v59 = v57;
        v60 = v58;
        goto LABEL_84;
      }
LABEL_192:
      v50 = 0;
      goto LABEL_193;
    }
    if ( v7 == -1 )
      goto LABEL_209;
    ungetc_nolock(v7, File);
    v10 = v56;
LABEL_198:
    v50 = v65;
    goto LABEL_193;
  }
  if ( v27 == 99 || v27 == 123 )
  {
    v9 = v59 + 1;
    v59 = v9;
    v57 = v9;
    v7 = inc(File);
    v60 = v7;
    v58 = v7;
  }
  else
  {
    do
    {
      v57 = ++v9;
      v7 = inc(File);
      v60 = v7;
    }
    while ( v7 != -1 && (pctype[(unsigned __int8)v7] & 8) != 0 );
    v27 = v70;
    v59 = v9;
    v58 = v7;
  }
  if ( v7 != -1 )
  {
    v5 = v69;
    v14 = v61;
    v25 = v72;
    v24 = v55;
    goto LABEL_65;
  }
LABEL_209:
  if ( v56 || v53 )
    return v56;
  return v11;
}
