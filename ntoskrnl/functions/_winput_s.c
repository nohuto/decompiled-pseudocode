__int64 __fastcall winput_s(FILE *File, unsigned __int16 *a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v5; // edi
  __int64 v6; // r13
  FILE *v7; // r12
  int v8; // edx
  wint_t v9; // ax
  char v10; // cl
  int v11; // r14d
  unsigned int v12; // esi
  wint_t v13; // ax
  int v14; // r11d
  int v15; // r10d
  char v16; // r13
  char v17; // r8
  char v18; // r12
  char v19; // si
  int v20; // r9d
  unsigned int v21; // edx
  unsigned __int16 v22; // ax
  unsigned __int16 *v23; // rax
  char v24; // r8
  __int64 v25; // r9
  _BYTE *v26; // rdx
  unsigned __int16 *v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  char v30; // r13
  unsigned int v31; // esi
  unsigned __int16 v32; // ax
  __int64 v33; // rcx
  int v34; // eax
  char v35; // cl
  FILE *v36; // r12
  wint_t v37; // ax
  int v38; // r8d
  int v39; // r12d
  wint_t v40; // ax
  wint_t v41; // ax
  __int64 v42; // rcx
  wchar_t v43; // dx
  __int64 v44; // rcx
  wint_t v45; // ax
  __int64 v46; // rax
  int v47; // ecx
  wchar_t v48; // dx
  int v49; // ecx
  wint_t v50; // ax
  char v51; // al
  char v52; // cl
  char v53; // al
  int v54; // eax
  unsigned __int16 *v55; // rcx
  wint_t v56; // ax
  wint_t v57; // ax
  FILE *v59; // rdx
  int v60; // [rsp+50h] [rbp-49h] BYREF
  char v61; // [rsp+54h] [rbp-45h]
  int v62; // [rsp+58h] [rbp-41h] BYREF
  char v63; // [rsp+5Ch] [rbp-3Dh]
  char v64; // [rsp+5Dh] [rbp-3Ch]
  unsigned int v65; // [rsp+60h] [rbp-39h] BYREF
  int v66; // [rsp+64h] [rbp-35h]
  int v67; // [rsp+68h] [rbp-31h]
  int v68; // [rsp+6Ch] [rbp-2Dh]
  int v69; // [rsp+70h] [rbp-29h]
  int v70; // [rsp+78h] [rbp-21h]
  __int64 v71; // [rsp+80h] [rbp-19h]
  int v72; // [rsp+88h] [rbp-11h]
  __int64 v73; // [rsp+90h] [rbp-9h] BYREF
  __int64 v74; // [rsp+98h] [rbp-1h]
  _BYTE *v75; // [rsp+A0h] [rbp+7h]
  unsigned __int16 *v77; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v78; // [rsp+110h] [rbp+77h]
  char v79; // [rsp+118h] [rbp+7Fh]

  v78 = a3;
  v3 = 0;
  v71 = 0LL;
  LOWORD(v5) = 0;
  v66 = 0;
  v6 = a3;
  LOWORD(v60) = 0;
  v7 = File;
  v74 = 0LL;
  v8 = 0;
  if ( !a2 || !File )
  {
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
  v9 = *a2;
  v10 = 0;
  v79 = 0;
  v11 = 0;
  v62 = 0;
  v12 = 0;
  v65 = 0;
  if ( !v9 )
    goto LABEL_196;
  while ( 1 )
  {
    v73 = v6;
    if ( iswctype(v9, 8u) )
    {
      v62 = v11 - 1;
      v13 = whiteout(&v62, v7);
      if ( v13 != 0xFFFF )
        ungetwc_nolock(v13, v7);
      do
        ++a2;
      while ( iswctype(*a2, 8u) );
      v11 = v62;
      goto LABEL_193;
    }
    if ( *a2 == 37 )
      break;
LABEL_189:
    v62 = ++v11;
    v56 = fgetwc_nolock(v7);
    v5 = v56;
    LOWORD(v60) = v56;
    v57 = *a2++;
    v66 = v5;
    v55 = a2;
    if ( v57 != (_WORD)v5 )
    {
      if ( (_WORD)v5 == 0xFFFF )
        goto LABEL_194;
      v59 = v7;
      goto LABEL_202;
    }
LABEL_190:
    if ( (_WORD)v5 == 0xFFFF )
    {
      if ( *a2 == 37 )
      {
        if ( v55[1] == 110 )
          goto LABEL_193;
LABEL_194:
        v10 = v79;
        v12 = v65;
LABEL_195:
        v8 = 0;
LABEL_196:
        if ( (_WORD)v5 == 0xFFFF )
          goto LABEL_214;
        if ( v8 == 1 )
          xHalTimerWatchdogStop();
        return v12;
      }
      v8 = 0;
LABEL_212:
      v10 = v79;
      v12 = v65;
      goto LABEL_196;
    }
LABEL_193:
    v9 = *a2;
    if ( !*a2 )
      goto LABEL_194;
  }
  if ( a2[1] == 37 )
  {
    ++a2;
    goto LABEL_189;
  }
  v68 = 0;
  v72 = 0;
  v14 = 0;
  v15 = 0;
  v63 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 1;
  v20 = 0;
  while ( 2 )
  {
    v77 = ++a2;
    v21 = *a2;
    if ( (v21 & 0xFF00) == 0 && (pctype[(unsigned __int8)v21] & 4) != 0 )
    {
      ++v14;
      v15 = v21 + 2 * (5 * v15 - 24);
      goto LABEL_28;
    }
    if ( v21 > 0x68 )
    {
      switch ( v21 )
      {
        case 'j':
          goto LABEL_27;
        case 'l':
          v23 = a2 + 1;
          if ( a2[1] == 108 )
            goto LABEL_26;
          ++v19;
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
      ++v18;
      goto LABEL_28;
    }
    switch ( v21 )
    {
      case 'h':
        --v19;
        --v18;
        break;
      case '*':
        ++v16;
        break;
      case 'F':
        break;
      case 'I':
        v22 = a2[1];
        if ( v22 == 54 )
        {
          v23 = a2 + 2;
          if ( a2[2] == 52 )
          {
LABEL_26:
            a2 = v23;
            v77 = v23;
LABEL_27:
            v71 = 0LL;
            ++v20;
            break;
          }
        }
        else if ( v22 == 51 )
        {
          v27 = a2 + 2;
          if ( a2[2] == 50 )
          {
            a2 += 2;
            v77 = v27;
            break;
          }
        }
LABEL_41:
        v28 = a2[1];
        LOWORD(v28) = v28 - 88;
        if ( (unsigned __int16)v28 > 0x20u || (v29 = 0x120821001LL, !_bittest64(&v29, v28)) )
        {
          ++v20;
          v71 = 0LL;
          goto LABEL_44;
        }
        goto LABEL_27;
      case 'L':
        ++v19;
        break;
      default:
        if ( v21 != 78 )
LABEL_44:
          ++v17;
        break;
    }
LABEL_28:
    if ( !v17 )
      continue;
    break;
  }
  v5 = v66;
  v24 = v16;
  v11 = v62;
  v61 = v19;
  v70 = v20;
  v25 = 0LL;
  v64 = v16;
  v69 = v14;
  v67 = v15;
  if ( v16 )
  {
    v26 = 0LL;
    v75 = 0LL;
  }
  else
  {
    v26 = *(_BYTE **)v73;
    v74 = v78;
    v78 += 8LL;
    v75 = v26;
  }
  v73 = (__int64)v26;
  v30 = 0;
  if ( !v18 )
    v18 = ((*a2 - 67) & 0xFFEF) != 0 ? 1 : -1;
  v31 = *a2 | 0x20;
  if ( v31 == 110 )
  {
LABEL_58:
    if ( v14 && !v15 )
    {
      if ( (_WORD)v5 == 0xFFFF )
        goto LABEL_194;
      v59 = File;
LABEL_202:
      ungetwc_nolock(v5, v59);
      goto LABEL_194;
    }
    if ( !v24 && (v31 == 99 || v31 == 115 || v31 == 123) )
    {
      v26 = *(_BYTE **)v74;
      v25 = *(unsigned int *)(v74 + 8);
      v33 = v74 + 16;
      v75 = v26;
      v73 = (__int64)v26;
      v74 += 8LL;
      v78 = v33;
      if ( !v25 )
      {
        v12 = v65;
        v10 = v79;
        if ( v18 <= 0 )
          *v26 = 0;
        else
          *(_WORD *)v26 = 0;
        goto LABEL_195;
      }
    }
    if ( v31 > 0x70 )
    {
      switch ( v31 )
      {
        case 's':
          v35 = 32;
          break;
        case 'u':
          goto LABEL_72;
        case 'x':
          goto LABEL_77;
        case '{':
          v35 = 64;
          break;
        default:
          goto LABEL_86;
      }
    }
    else
    {
      if ( v31 == 112 )
      {
        ++v70;
        v61 = 1;
        v71 = 0LL;
        goto LABEL_72;
      }
      if ( v31 != 99 )
      {
        if ( v31 != 100 )
        {
          if ( v31 != 105 )
          {
            if ( v31 == 110 )
            {
              v34 = v11;
              if ( !v24 )
              {
LABEL_169:
                if ( !v70 )
                {
                  v6 = v78;
                  if ( v61 )
                    *(_DWORD *)v26 = v34;
                  else
                    *(_WORD *)v26 = v34;
                  goto LABEL_187;
                }
                *(_QWORD *)v26 = v71;
              }
LABEL_186:
              v6 = v78;
              goto LABEL_187;
            }
            if ( v31 == 111 )
              goto LABEL_72;
LABEL_86:
            if ( *a2 != (_WORD)v5 )
            {
              if ( (_WORD)v5 != 0xFFFF )
                ungetwc_nolock(v5, File);
              v8 = 1;
              goto LABEL_212;
            }
            --v79;
            if ( !v24 )
            {
              v6 = v74;
              v78 = v74;
LABEL_187:
              ++v79;
              v7 = File;
              v55 = ++a2;
              goto LABEL_190;
            }
            goto LABEL_186;
          }
          v31 = 100;
LABEL_77:
          if ( (_WORD)v5 == 45 )
          {
            v63 = 1;
          }
          else if ( (_WORD)v5 != 43 )
          {
            goto LABEL_94;
          }
          v67 = v15 - 1;
          if ( v15 != 1 || !v14 )
          {
            v36 = File;
            v62 = ++v11;
            v40 = fgetwc_nolock(File);
            v5 = v40;
            LOWORD(v60) = v40;
            v66 = v40;
LABEL_95:
            if ( (_WORD)v5 == 48 )
            {
              v62 = ++v11;
              v37 = fgetwc_nolock(v36);
              v5 = v37;
              LOWORD(v60) = v37;
              v66 = v37;
              if ( ((v37 - 88) & 0xFFDF) == 0 )
              {
                v62 = ++v11;
                v41 = fgetwc_nolock(v36);
                v38 = v69;
                v5 = v41;
                v39 = v67;
                v66 = v41;
                LOWORD(v60) = v41;
                if ( v69 )
                {
                  v39 = v67 - 2;
                  if ( v67 - 2 < 1 )
                    ++v30;
                }
                v31 = 120;
                goto LABEL_118;
              }
              v72 = 1;
              if ( v31 != 120 )
              {
                v38 = v69;
                v39 = v67;
                if ( v69 )
                {
                  v39 = v67 - 1;
                  if ( v67 == 1 )
                    ++v30;
                }
                v31 = 111;
                goto LABEL_118;
              }
              v62 = --v11;
              if ( v37 != 0xFFFF )
                ungetwc_nolock(v37, v36);
              v5 = 48;
LABEL_115:
              LOWORD(v60) = v5;
              v66 = v5;
              goto LABEL_116;
            }
            goto LABEL_116;
          }
          v30 = 1;
LABEL_94:
          v36 = File;
          goto LABEL_95;
        }
LABEL_72:
        if ( (_WORD)v5 == 45 )
        {
          v63 = 1;
          goto LABEL_111;
        }
        if ( (_WORD)v5 == 43 )
        {
LABEL_111:
          v67 = v15 - 1;
          if ( v15 == 1 && v14 )
          {
            v30 = 1;
            v39 = 0;
LABEL_117:
            v38 = v69;
LABEL_118:
            if ( v70 )
            {
              if ( !v30 )
              {
                while ( 1 )
                {
                  if ( ((v31 - 112) & 0xFFFFFFF7) != 0 )
                  {
                    if ( (v5 & 0xFF00) != 0 || (pctype[(unsigned __int8)v5] & 4) == 0 )
                      goto LABEL_137;
                    v42 = v71;
                    if ( v31 == 111 )
                    {
                      if ( (unsigned __int16)v5 >= 0x38u )
                      {
                        v30 = 1;
                        goto LABEL_133;
                      }
                      v42 = 8 * v71;
                    }
                    else
                    {
                      v42 = 10 * v71;
                    }
                    v71 = v42;
                  }
                  else
                  {
                    if ( (v5 & 0xFF00) != 0 || (v43 = pctype[(unsigned __int8)v5], (v43 & 0x80u) == 0) )
                    {
LABEL_137:
                      v62 = --v11;
                      if ( (_WORD)v5 != 0xFFFF )
                        ungetwc_nolock(v5, File);
                      break;
                    }
                    v42 = 16 * v71;
                    v71 *= 16LL;
                    if ( (v43 & 4) == 0 )
                    {
                      LOWORD(v5) = (v5 & 0xFFDF) - 7;
                      v66 = v5;
                      LOWORD(v60) = v5;
                    }
                  }
LABEL_133:
                  if ( v30 )
                    goto LABEL_137;
                  ++v72;
                  v44 = (unsigned __int16)v5 + v42 - 48;
                  v71 = v44;
                  if ( v38 )
                  {
                    if ( !--v39 )
                      goto LABEL_140;
                  }
                  v62 = ++v11;
                  v45 = fgetwc_nolock(File);
                  v38 = v69;
                  v5 = v45;
                  v66 = v45;
                  LOWORD(v60) = v45;
                }
              }
              v44 = v71;
LABEL_140:
              v46 = -v44;
              if ( !v63 )
                v46 = v44;
              v71 = v46;
LABEL_166:
              if ( !v72 )
                goto LABEL_194;
              if ( !v64 )
              {
                ++v65;
                v26 = v75;
                v34 = v68;
                goto LABEL_169;
              }
              goto LABEL_186;
            }
            if ( v30 )
            {
LABEL_163:
              v49 = v68;
LABEL_164:
              if ( v63 )
                v68 = -v49;
              goto LABEL_166;
            }
            while ( 1 )
            {
              if ( ((v31 - 112) & 0xFFFFFFF7) != 0 )
              {
                if ( (v5 & 0xFF00) != 0 || (pctype[(unsigned __int8)v5] & 4) == 0 )
                  goto LABEL_161;
                v47 = v68;
                if ( v31 == 111 )
                {
                  if ( (unsigned __int16)v5 >= 0x38u )
                  {
                    v30 = 1;
                    goto LABEL_157;
                  }
                  v47 = 8 * v68;
                }
                else
                {
                  v47 = 10 * v68;
                }
                v68 = v47;
              }
              else
              {
                if ( (v5 & 0xFF00) != 0 || (v48 = pctype[(unsigned __int8)v5], (v48 & 0x80u) == 0) )
                {
LABEL_161:
                  v62 = --v11;
                  if ( (_WORD)v5 != 0xFFFF )
                    ungetwc_nolock(v5, File);
                  goto LABEL_163;
                }
                v47 = 16 * v68;
                v68 *= 16;
                if ( (v48 & 4) == 0 )
                {
                  LOWORD(v5) = (v5 & 0xFFDF) - 7;
                  v66 = v5;
                  LOWORD(v60) = v5;
                }
              }
LABEL_157:
              if ( v30 )
                goto LABEL_161;
              ++v72;
              v49 = (unsigned __int16)v5 + v47 - 48;
              v68 = v49;
              if ( v38 )
              {
                if ( !--v39 )
                  goto LABEL_164;
              }
              v62 = ++v11;
              v50 = fgetwc_nolock(File);
              v38 = v69;
              v5 = v50;
              v66 = v50;
              LOWORD(v60) = v50;
            }
          }
          v62 = ++v11;
          v5 = fgetwc_nolock(File);
          goto LABEL_115;
        }
LABEL_116:
        v39 = v67;
        goto LABEL_117;
      }
      v35 = 16;
      if ( !v14 )
      {
        v14 = 1;
        ++v15;
      }
    }
    v51 = v35 | 1;
    if ( !v14 )
      v51 = v35;
    v52 = v51 | 2;
    if ( v18 <= 0 )
      v52 = v51;
    v53 = v52 | 4;
    if ( !v24 )
      v53 = v52;
    if ( v31 == 123 )
    {
      v54 = ReadStringDelimited_0(v53, &v77, (wint_t *)&v60, &v62, (__int64)&v73, v15, File, v25, &v65);
      a2 = v77;
    }
    else
    {
      v54 = ReadString_0(v53, 0LL, (wint_t *)&v60, &v62, (__int64)&v73, v15, File, v25, &v65);
    }
    LOWORD(v5) = v60;
    if ( v54 )
      goto LABEL_194;
    v11 = v62;
    v66 = (unsigned __int16)v60;
    goto LABEL_186;
  }
  if ( v31 == 99 || v31 == 123 )
  {
    v11 = ++v62;
    v32 = fgetwc_nolock(File);
  }
  else
  {
    v32 = whiteout(&v62, File);
    v11 = v62;
  }
  LOWORD(v60) = v32;
  v5 = v32;
  v66 = v32;
  if ( v32 != 0xFFFF )
  {
    v26 = v75;
    v25 = 0LL;
    v15 = v67;
    v14 = v69;
    v24 = v64;
    goto LABEL_58;
  }
  v10 = v79;
LABEL_214:
  if ( v65 || v10 )
    return v65;
  return v3;
}
