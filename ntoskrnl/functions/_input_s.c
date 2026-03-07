__int64 __fastcall input_s(FILE *File, unsigned __int8 *a2, __int64 a3)
{
  __int64 v3; // r15
  int v4; // ebx
  unsigned __int8 *v5; // r14
  FILE *v6; // rsi
  int v7; // r8d
  unsigned __int8 v8; // cl
  unsigned int v9; // r13d
  char v10; // dl
  __int64 result; // rax
  int v12; // edi
  int v13; // r8d
  unsigned __int8 *v14; // rax
  int v15; // esi
  int v16; // r10d
  char v17; // r9
  char v18; // dl
  char v19; // r15
  int v20; // r12d
  char v21; // r11
  __int64 v22; // rcx
  unsigned __int8 v23; // al
  __int64 v24; // r11
  _BYTE *v25; // rdx
  __int64 v26; // rcx
  char v27; // r12
  unsigned int v28; // esi
  int v29; // r8d
  __int64 v30; // rcx
  int v31; // eax
  char v32; // cl
  FILE *v33; // r15
  int v34; // r15d
  int v35; // eax
  __int64 v36; // rdx
  wchar_t v37; // cx
  int v38; // eax
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rax
  int v42; // edx
  wchar_t v43; // cx
  int v44; // eax
  int v45; // edx
  int v46; // eax
  char v47; // al
  char v48; // cl
  char v49; // al
  int v50; // eax
  unsigned __int8 *v51; // rcx
  int v52; // eax
  FILE *v53; // rdx
  char v54; // [rsp+50h] [rbp-49h]
  char v55; // [rsp+51h] [rbp-48h]
  char v56; // [rsp+52h] [rbp-47h]
  __int64 v57; // [rsp+54h] [rbp-45h] BYREF
  int v58; // [rsp+5Ch] [rbp-3Dh] BYREF
  int v59; // [rsp+60h] [rbp-39h]
  int v60; // [rsp+64h] [rbp-35h]
  int v61; // [rsp+68h] [rbp-31h]
  int v62; // [rsp+6Ch] [rbp-2Dh]
  int v63; // [rsp+70h] [rbp-29h]
  __int64 v64; // [rsp+78h] [rbp-21h]
  int v65; // [rsp+80h] [rbp-19h]
  __int64 v66; // [rsp+88h] [rbp-11h] BYREF
  __int64 v67; // [rsp+90h] [rbp-9h]
  _BYTE *v68; // [rsp+98h] [rbp-1h]
  unsigned int v69; // [rsp+A0h] [rbp+7h]
  __int64 v70; // [rsp+A8h] [rbp+Fh]
  unsigned __int8 *v72; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v73; // [rsp+110h] [rbp+77h]
  char v74; // [rsp+118h] [rbp+7Fh]

  v73 = a3;
  v3 = a3;
  v64 = 0LL;
  v4 = 0;
  v58 = 0;
  v5 = a2;
  v62 = 0;
  v6 = File;
  v67 = 0LL;
  v7 = 0;
  if ( !a2 || !File )
  {
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
  v8 = *a2;
  v9 = -1;
  v10 = 0;
  v74 = 0;
  result = 0LL;
  v57 = 0LL;
  v12 = 0;
  if ( !v8 )
    goto LABEL_201;
  while ( 2 )
  {
    v66 = v3;
    if ( (pctype[v8] & 8) != 0 )
    {
      --v12;
      while ( 1 )
      {
        HIDWORD(v57) = ++v12;
        v13 = inc(v6);
        if ( v13 == -1 )
          break;
        if ( (pctype[(unsigned __int8)v13] & 8) == 0 )
        {
          ungetc_nolock(v13, v6);
          goto LABEL_9;
        }
      }
      do
LABEL_9:
        ++v5;
      while ( (pctype[*v5] & 8) != 0 );
      goto LABEL_193;
    }
    if ( v8 != 37 )
      goto LABEL_189;
    if ( v5[1] == 37 )
    {
      ++v5;
LABEL_189:
      HIDWORD(v57) = ++v12;
      v4 = inc(v6);
      v58 = v4;
      v52 = *v5++;
      v51 = v5;
      if ( v52 == v4 )
        goto LABEL_190;
      if ( v4 != -1 )
      {
        v53 = v6;
        goto LABEL_197;
      }
LABEL_198:
      v7 = v62;
      goto LABEL_199;
    }
    v14 = 0LL;
    v60 = 0;
    v65 = 0;
    v15 = 0;
    v16 = 0;
    v70 = 0LL;
    v55 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 1;
    do
    {
      v72 = ++v5;
      v22 = *v5;
      if ( (pctype[v22] & 4) != 0 )
      {
        ++v15;
        v16 = v22 + 2 * (5 * v16 - 24);
        continue;
      }
      if ( (unsigned int)v22 <= 0x68 )
      {
        switch ( (_DWORD)v22 )
        {
          case 'h':
            --v21;
            --v19;
            continue;
          case '*':
            ++v17;
            continue;
          case 'F':
            continue;
          case 'I':
            v23 = v5[1];
            if ( v23 == 54 )
            {
              v14 = v5 + 2;
              if ( v5[2] == 52 )
                goto LABEL_27;
            }
            else if ( v23 == 51 )
            {
              v14 = v5 + 2;
              if ( v5[2] == 50 )
              {
                v5 += 2;
                v72 = v14;
                continue;
              }
            }
LABEL_42:
            LOBYTE(v14) = v5[1] - 88;
            if ( (unsigned __int8)v14 <= 0x20u )
            {
              v26 = 0x120821001LL;
              if ( _bittest64(&v26, (unsigned __int64)v14) )
                goto LABEL_28;
            }
            ++v20;
            v64 = 0LL;
            break;
          case 'L':
            ++v21;
            continue;
          case 'N':
            continue;
        }
LABEL_45:
        ++v18;
        continue;
      }
      switch ( (_DWORD)v22 )
      {
        case 'j':
          goto LABEL_28;
        case 'l':
          v14 = v5 + 1;
          if ( v5[1] == 108 )
          {
LABEL_27:
            v5 = v14;
            v72 = v14;
LABEL_28:
            ++v20;
            v64 = 0LL;
            continue;
          }
          ++v21;
          break;
        case 't':
          goto LABEL_42;
        case 'w':
          break;
        case 'z':
          goto LABEL_42;
        default:
          goto LABEL_45;
      }
      ++v19;
    }
    while ( !v18 );
    v56 = v17;
    v54 = v21;
    v24 = v70;
    v63 = v20;
    v61 = v15;
    v59 = v16;
    if ( v17 )
    {
      v25 = 0LL;
    }
    else
    {
      v25 = *(_BYTE **)v66;
      v67 = v73;
      v73 += 8LL;
    }
    v68 = v25;
    v27 = 0;
    v66 = (__int64)v25;
    if ( !v19 )
      v19 = ((*v5 - 67) & 0xEF) != 0 ? -1 : 1;
    v28 = *v5 | 0x20;
    v69 = v28;
    if ( v28 == 110 )
    {
LABEL_61:
      v29 = v61;
      if ( v61 && !v16 )
      {
        if ( v4 != -1 )
        {
          v53 = File;
LABEL_197:
          ungetc_nolock(v4, v53);
          goto LABEL_198;
        }
        goto LABEL_198;
      }
      if ( !v56 && (v28 == 99 || v28 == 115 || v28 == 123) )
      {
        v25 = *(_BYTE **)v67;
        v24 = *(unsigned int *)(v67 + 8);
        v30 = v67 + 16;
        v68 = v25;
        v66 = (__int64)v25;
        v67 += 8LL;
        v73 = v30;
        if ( !v24 )
        {
          result = (unsigned int)v57;
          v7 = 0;
          if ( v19 <= 0 )
            *v25 = 0;
          else
            *(_WORD *)v25 = 0;
          goto LABEL_200;
        }
      }
      if ( v28 > 0x70 )
      {
        switch ( v28 )
        {
          case 's':
            v32 = 32;
            goto LABEL_175;
          case 'u':
            goto LABEL_75;
          case 'x':
            goto LABEL_80;
          case '{':
            v32 = 64;
            goto LABEL_175;
        }
      }
      else
      {
        switch ( v28 )
        {
          case 'p':
            ++v63;
            v54 = 1;
            v64 = 0LL;
LABEL_75:
            if ( v4 == 45 )
            {
              v55 = 1;
            }
            else if ( v4 != 43 )
            {
              goto LABEL_119;
            }
            v59 = v16 - 1;
            if ( v16 == 1 && v61 )
            {
              v27 = 1;
              v34 = 0;
              goto LABEL_120;
            }
            HIDWORD(v57) = ++v12;
            v4 = inc(File);
            v58 = v4;
            goto LABEL_109;
          case 'c':
            v32 = 16;
            if ( !v61 )
            {
              v29 = 1;
              ++v16;
            }
LABEL_175:
            v47 = v32 | 1;
            if ( !v29 )
              v47 = v32;
            v48 = v47 | 2;
            if ( v19 <= 0 )
              v48 = v47;
            v49 = v48 | 4;
            if ( !v56 )
              v49 = v48;
            if ( v28 == 123 )
            {
              v50 = ReadStringDelimited(v49, &v72, &v58, (_DWORD *)&v57 + 1, (_WORD **)&v66, v16, File, v24, &v57);
              v5 = v72;
            }
            else
            {
              v50 = ReadString(v49, 0LL, &v58, (_DWORD *)&v57 + 1, (_WORD **)&v66, v16, File, v24, &v57);
            }
            v4 = v58;
            if ( v50 )
              goto LABEL_194;
            v12 = HIDWORD(v57);
LABEL_186:
            v3 = v73;
            goto LABEL_187;
          case 'd':
            goto LABEL_75;
          case 'i':
            v28 = 100;
LABEL_80:
            if ( v4 == 45 )
            {
              v55 = 1;
LABEL_94:
              v59 = v16 - 1;
              if ( v16 == 1 && v61 )
              {
                v27 = 1;
                goto LABEL_97;
              }
              v33 = File;
              HIDWORD(v57) = ++v12;
              v4 = inc(File);
              v58 = v4;
            }
            else
            {
              if ( v4 == 43 )
                goto LABEL_94;
LABEL_97:
              v33 = File;
            }
            if ( v4 != 48 )
              goto LABEL_109;
            HIDWORD(v57) = ++v12;
            v4 = inc(v33);
            v58 = v4;
            if ( (((_BYTE)v4 - 88) & 0xDF) != 0 )
            {
              v65 = 1;
              if ( v28 != 120 )
              {
                v29 = v61;
                v34 = v59;
                if ( v61 )
                {
                  v34 = v59 - 1;
                  if ( v59 == 1 )
                    ++v27;
                }
                v28 = 111;
                goto LABEL_120;
              }
              HIDWORD(v57) = --v12;
              if ( v4 != -1 )
                ungetc_nolock(v4, v33);
              v4 = 48;
              v58 = 48;
LABEL_109:
              v29 = v61;
LABEL_119:
              v34 = v59;
              goto LABEL_120;
            }
            HIDWORD(v57) = ++v12;
            v35 = inc(v33);
            v29 = v61;
            v34 = v59;
            v4 = v35;
            v58 = v35;
            if ( v61 )
            {
              v34 = v59 - 2;
              if ( v59 - 2 < 1 )
                ++v27;
            }
            v28 = 120;
LABEL_120:
            if ( v63 )
            {
              if ( !v27 )
              {
                while ( 1 )
                {
                  if ( ((v28 - 112) & 0xFFFFFFF7) != 0 )
                  {
                    if ( (pctype[(unsigned __int8)v4] & 4) == 0 )
                      goto LABEL_138;
                    v36 = v64;
                    if ( v28 == 111 )
                    {
                      if ( v4 >= 56 )
                      {
                        v27 = 1;
                        goto LABEL_134;
                      }
                      v36 = 8 * v64;
                    }
                    else
                    {
                      v36 = 10 * v64;
                    }
                  }
                  else
                  {
                    v37 = pctype[(unsigned __int8)v4];
                    if ( (v37 & 0x80u) == 0 )
                      goto LABEL_138;
                    v38 = (char)v4;
                    v36 = 16 * v64;
                    v4 = ((char)v4 & 0xFFFFFFDF) - 7;
                    if ( (v37 & 4) != 0 )
                      v4 = v38;
                    v58 = v4;
                  }
                  v64 = v36;
LABEL_134:
                  if ( v27 )
                  {
LABEL_138:
                    HIDWORD(v57) = --v12;
                    if ( v4 != -1 )
                      ungetc_nolock(v4, File);
                    break;
                  }
                  ++v65;
                  v39 = v4 - 48 + v36;
                  v64 = v39;
                  if ( v29 )
                  {
                    if ( !--v34 )
                      goto LABEL_141;
                  }
                  HIDWORD(v57) = ++v12;
                  v40 = inc(File);
                  v29 = v61;
                  v4 = v40;
                  v58 = v40;
                }
              }
              v39 = v64;
LABEL_141:
              v41 = -v39;
              if ( !v55 )
                v41 = v39;
              v64 = v41;
LABEL_166:
              if ( !v65 )
              {
                v7 = v62;
                goto LABEL_199;
              }
              if ( v56 )
                goto LABEL_186;
              LODWORD(v57) = v57 + 1;
              v25 = v68;
              v31 = v60;
LABEL_169:
              if ( !v63 )
              {
                v3 = v73;
                if ( v54 )
                  *(_DWORD *)v25 = v31;
                else
                  *(_WORD *)v25 = v31;
                goto LABEL_187;
              }
              *(_QWORD *)v25 = v64;
              goto LABEL_186;
            }
            if ( v27 )
            {
LABEL_163:
              v45 = v60;
LABEL_164:
              if ( v55 )
                v60 = -v45;
              goto LABEL_166;
            }
            while ( 2 )
            {
              if ( ((v28 - 112) & 0xFFFFFFF7) != 0 )
              {
                if ( (pctype[(unsigned __int8)v4] & 4) == 0 )
                  goto LABEL_161;
                v42 = v60;
                if ( v28 == 111 )
                {
                  if ( v4 < 56 )
                  {
                    v42 = 8 * v60;
                    break;
                  }
                  v27 = 1;
LABEL_157:
                  if ( v27 )
                  {
LABEL_161:
                    HIDWORD(v57) = --v12;
                    if ( v4 != -1 )
                      ungetc_nolock(v4, File);
                    goto LABEL_163;
                  }
                  ++v65;
                  v45 = v4 + v42 - 48;
                  v60 = v45;
                  if ( v29 )
                  {
                    if ( !--v34 )
                      goto LABEL_164;
                  }
                  HIDWORD(v57) = ++v12;
                  v46 = inc(File);
                  v29 = v61;
                  v4 = v46;
                  v58 = v46;
                  continue;
                }
                v42 = 10 * v60;
              }
              else
              {
                v43 = pctype[(unsigned __int8)v4];
                if ( (v43 & 0x80u) == 0 )
                  goto LABEL_161;
                v44 = (char)v4;
                v42 = 16 * v60;
                v4 = ((char)v4 & 0xFFFFFFDF) - 7;
                if ( (v43 & 4) != 0 )
                  v4 = v44;
                v58 = v4;
              }
              break;
            }
            v60 = v42;
            goto LABEL_157;
          case 'n':
            v31 = v12;
            if ( v56 )
              goto LABEL_186;
            goto LABEL_169;
          case 'o':
            goto LABEL_75;
        }
      }
      if ( *v5 != v4 )
      {
        if ( v4 != -1 )
          ungetc_nolock(v4, File);
        v7 = 1;
        goto LABEL_199;
      }
      --v74;
      if ( v56 )
        goto LABEL_186;
      v3 = v67;
      v73 = v67;
LABEL_187:
      ++v74;
      v6 = File;
      v51 = ++v5;
LABEL_190:
      if ( v4 == -1 && (*v5 != 37 || v51[1] != 110) )
        goto LABEL_198;
LABEL_193:
      v8 = *v5;
      if ( !*v5 )
      {
LABEL_194:
        v7 = 0;
LABEL_199:
        result = (unsigned int)v57;
LABEL_200:
        v10 = v74;
LABEL_201:
        if ( v4 == -1 )
          goto LABEL_214;
        if ( v7 == 1 )
        {
          xHalTimerWatchdogStop();
          return (unsigned int)v57;
        }
        return result;
      }
      continue;
    }
    break;
  }
  if ( v28 == 99 || v28 == 123 )
  {
    HIDWORD(v57) = ++v12;
    v4 = inc(File);
    v58 = v4;
  }
  else
  {
    do
    {
      ++v12;
      v4 = inc(File);
    }
    while ( v4 != -1 && (pctype[(unsigned __int8)v4] & 8) != 0 );
    v28 = v69;
    HIDWORD(v57) = v12;
    v58 = v4;
  }
  if ( v4 != -1 )
  {
    v25 = v68;
    v16 = v59;
    v24 = v70;
    goto LABEL_61;
  }
  v10 = v74;
LABEL_214:
  if ( (_DWORD)v57 || v10 )
    return (unsigned int)v57;
  return v9;
}
