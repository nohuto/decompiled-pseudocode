/*
 * XREFs of _input_s @ 0x1403DA084
 * Callers:
 *     _sinput_s @ 0x1403DAA30 (_sinput_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039AB40 (xHalTimerWatchdogStop.c)
 *     ReadString @ 0x1403D9D24 (ReadString.c)
 *     ReadStringDelimited @ 0x1403D9ECC (ReadStringDelimited.c)
 *     _inc @ 0x1403DA054 (_inc.c)
 *     _ungetc_nolock @ 0x1403DB958 (_ungetc_nolock.c)
 */

__int64 __fastcall input_s(FILE *File, unsigned __int8 *a2, _BYTE **a3)
{
  int v3; // r11d
  _BYTE **v4; // r13
  int v5; // ebx
  unsigned __int8 *v6; // rdi
  FILE *v7; // rsi
  unsigned __int8 v8; // cl
  int v9; // r14d
  unsigned int v10; // r15d
  unsigned int v11; // r10d
  unsigned __int64 v12; // rax
  int v13; // eax
  char v14; // r15
  char v15; // r8
  char v16; // r12
  int v17; // esi
  int v18; // r14d
  char v19; // bl
  __int64 v20; // rcx
  unsigned __int8 v21; // dl
  char v22; // cl
  __int64 v23; // rcx
  _BYTE *v24; // r13
  unsigned int v25; // esi
  int v26; // eax
  int v27; // r8d
  _DWORD *v28; // r9
  __int64 v29; // rdx
  int v30; // eax
  int v31; // eax
  char v32; // cl
  int v33; // eax
  FILE *v34; // r12
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
  int v51; // eax
  bool v52; // cc
  int v53; // r12d
  char v55; // [rsp+50h] [rbp-49h]
  char v56; // [rsp+51h] [rbp-48h]
  char v57; // [rsp+52h] [rbp-47h]
  unsigned int v58; // [rsp+54h] [rbp-45h]
  int v59; // [rsp+58h] [rbp-41h] BYREF
  int v60; // [rsp+5Ch] [rbp-3Dh] BYREF
  int v61; // [rsp+60h] [rbp-39h]
  int v62; // [rsp+64h] [rbp-35h]
  int v63; // [rsp+68h] [rbp-31h]
  int v64; // [rsp+6Ch] [rbp-2Dh]
  int v65; // [rsp+70h] [rbp-29h]
  int v66; // [rsp+74h] [rbp-25h]
  int v67; // [rsp+78h] [rbp-21h]
  __int64 v68; // [rsp+80h] [rbp-19h]
  int v69; // [rsp+88h] [rbp-11h]
  _DWORD v70[3]; // [rsp+8Ch] [rbp-Dh] BYREF
  __int64 v71; // [rsp+98h] [rbp-1h] BYREF
  _BYTE *v72; // [rsp+A0h] [rbp+7h]
  unsigned __int8 *v74; // [rsp+108h] [rbp+6Fh] BYREF
  _BYTE **v75; // [rsp+110h] [rbp+77h]
  char v76; // [rsp+118h] [rbp+7Fh]

  v75 = a3;
  v3 = 0;
  v4 = a3;
  v68 = 0LL;
  v5 = 0;
  v62 = 0;
  v6 = a2;
  v60 = 0;
  v7 = File;
  v67 = 0;
  *(_QWORD *)&v70[1] = 0LL;
  if ( !a2 || !File )
  {
    v10 = -1;
LABEL_220:
    xHalTimerWatchdogStop();
    return v10;
  }
  v8 = *a2;
  v9 = 0;
  v56 = 0;
  v10 = 0;
  v61 = 0;
  v59 = 0;
  v58 = 0;
  v70[0] = 0;
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
      v61 = ++v9;
      v59 = v9;
      v13 = inc(v7);
      v11 = -1;
      if ( v13 == -1 )
        break;
      if ( (pctype[(unsigned __int8)v13] & 8) == 0 )
      {
        ungetc_nolock(v13, v7);
        v11 = -1;
        goto LABEL_10;
      }
    }
    do
LABEL_10:
      ++v6;
    while ( (pctype[*v6] & 8) != 0 );
LABEL_195:
    v8 = *v6;
    v3 = 0;
    if ( !*v6 )
      goto LABEL_206;
  }
  if ( v8 != 37 )
    goto LABEL_191;
  if ( v6[1] == 37 )
  {
    ++v6;
LABEL_191:
    v61 = ++v9;
    v59 = v9;
    v5 = inc(v7);
    v62 = v5;
    v60 = v5;
    v51 = *v6++;
    if ( v51 == v5 )
      goto LABEL_192;
    v11 = -1;
    if ( v5 == -1 )
      goto LABEL_215;
    ungetc_nolock(v5, v7);
    v53 = v67;
    v11 = -1;
    goto LABEL_212;
  }
  v14 = 0;
  v65 = 0;
  v57 = 0;
  v15 = 0;
  v76 = 0;
  v16 = 0;
  v17 = 0;
  v69 = 0;
  v18 = 0;
  v19 = 1;
  do
  {
    v74 = ++v6;
    v20 = *v6;
    if ( (pctype[v20] & 4) != 0 )
    {
      ++v18;
      v3 = v20 + 2 * (5 * v3 - 24);
      goto LABEL_44;
    }
    if ( (unsigned int)v20 > 0x68 )
    {
      if ( (_DWORD)v20 == 106 )
        goto LABEL_29;
      if ( (_DWORD)v20 == 108 )
      {
        if ( v6[1] != 108 )
        {
          ++v19;
LABEL_51:
          ++v16;
          goto LABEL_44;
        }
        v74 = ++v6;
        goto LABEL_29;
      }
      if ( (_DWORD)v20 != 116 )
      {
        if ( (_DWORD)v20 == 119 )
          goto LABEL_51;
        if ( (_DWORD)v20 != 122 )
          goto LABEL_43;
      }
      goto LABEL_40;
    }
    if ( (_DWORD)v20 == 104 )
    {
      --v19;
      --v16;
      goto LABEL_44;
    }
    if ( (_DWORD)v20 == 42 )
    {
      v22 = ++v76;
      continue;
    }
    if ( (_DWORD)v20 != 70 )
    {
      if ( (_DWORD)v20 != 73 )
      {
        if ( (_DWORD)v20 == 76 )
        {
          ++v19;
        }
        else if ( (_DWORD)v20 != 78 )
        {
          goto LABEL_43;
        }
        goto LABEL_44;
      }
      v21 = v6[1];
      if ( v21 == 54 )
      {
        v12 = (unsigned __int64)(v6 + 2);
        if ( v6[2] == 52 )
        {
          v6 += 2;
          v74 = (unsigned __int8 *)v12;
LABEL_29:
          ++v17;
          v68 = 0LL;
          goto LABEL_44;
        }
      }
      if ( v21 == 51 )
      {
        v12 = (unsigned __int64)(v6 + 2);
        if ( v6[2] == 50 )
        {
          v6 += 2;
          v74 = (unsigned __int8 *)v12;
          goto LABEL_44;
        }
      }
LABEL_40:
      LOBYTE(v12) = v6[1] - 88;
      if ( (unsigned __int8)v12 > 0x20u || (v23 = 0x120821001LL, !_bittest64(&v23, v12)) )
      {
        ++v17;
        v68 = 0LL;
LABEL_43:
        ++v15;
        goto LABEL_44;
      }
      goto LABEL_29;
    }
LABEL_44:
    v22 = v76;
  }
  while ( !v15 );
  v55 = v19;
  v5 = v62;
  v64 = v18;
  v9 = v61;
  v66 = v17;
  v63 = v3;
  if ( v22 )
  {
    v24 = 0LL;
    v72 = 0LL;
  }
  else
  {
    *(_QWORD *)&v70[1] = v4;
    v75 = v4 + 1;
    v24 = *v4;
    v72 = v24;
  }
  v71 = (__int64)v24;
  if ( !v16 )
    v16 = ((*v6 - 67) & 0xEF) != 0 ? -1 : 1;
  v25 = *v6 | 0x20;
  if ( v25 == 110 )
  {
LABEL_64:
    v27 = v64;
    if ( v64 && !v3 )
    {
      if ( v5 == -1 )
        goto LABEL_215;
      ungetc_nolock(v5, File);
      v11 = -1;
LABEL_210:
      v53 = v67;
LABEL_211:
      v10 = v58;
      goto LABEL_212;
    }
    if ( !v22 && (v25 == 99 || v25 == 115 || v25 == 123) )
    {
      v28 = (_DWORD *)(*(_QWORD *)&v70[1] + 8LL);
      *(_QWORD *)&v70[1] = v28;
      v24 = (_BYTE *)*((_QWORD *)v28 - 1);
      v71 = (__int64)v24;
      v75 = (_BYTE **)(v28 + 2);
      v29 = (unsigned int)*v28;
      if ( !*v28 )
      {
        v10 = v58;
        v52 = v16 <= 0;
        v53 = 0;
        if ( v52 )
          *v24 = 0;
        else
          *(_WORD *)v24 = 0;
        goto LABEL_212;
      }
    }
    else
    {
      v28 = *(_DWORD **)&v70[1];
      v29 = 0LL;
    }
    if ( v25 > 0x70 )
    {
      switch ( v25 )
      {
        case 's':
          v32 = 32;
          break;
        case 'u':
          goto LABEL_93;
        case 'x':
          goto LABEL_85;
        case '{':
          v32 = 64;
          break;
        default:
          goto LABEL_99;
      }
    }
    else
    {
      if ( v25 == 112 )
      {
        ++v66;
        v55 = 1;
        v68 = 0LL;
        goto LABEL_93;
      }
      if ( v25 != 99 )
      {
        if ( v25 != 100 )
        {
          if ( v25 != 105 )
          {
            if ( v25 == 110 )
            {
              v30 = v9;
              if ( v76 )
                goto LABEL_81;
              goto LABEL_172;
            }
            if ( v25 != 111 )
            {
              v22 = v76;
LABEL_99:
              if ( *v6 == v5 )
              {
                --v56;
                if ( !v22 )
                {
                  v4 = (_BYTE **)v28;
                  v75 = (_BYTE **)v28;
                  goto LABEL_82;
                }
LABEL_81:
                v4 = v75;
LABEL_82:
                v10 = v58;
LABEL_83:
                ++v56;
                v7 = File;
                ++v6;
LABEL_192:
                v11 = -1;
                if ( v5 == -1 && (*v6 != 37 || v6[1] != 110) )
                  goto LABEL_215;
                goto LABEL_195;
              }
              if ( v5 != -1 )
              {
                ungetc_nolock(v5, File);
                v11 = -1;
              }
              v53 = 1;
              goto LABEL_211;
            }
            goto LABEL_93;
          }
          v25 = 100;
LABEL_85:
          if ( v5 == 45 )
          {
            v57 = 1;
          }
          else if ( v5 != 43 )
          {
            goto LABEL_107;
          }
          v63 = v3 - 1;
          if ( v3 != 1 || !v64 )
          {
            v34 = File;
            v61 = ++v9;
            v59 = v9;
            v5 = inc(File);
            v62 = v5;
            v60 = v5;
LABEL_108:
            if ( v5 == 48 )
            {
              v61 = ++v9;
              v59 = v9;
              v5 = inc(v34);
              v62 = v5;
              v60 = v5;
              if ( (((_BYTE)v5 - 88) & 0xDF) != 0 )
              {
                v69 = 1;
                if ( v25 == 120 )
                {
                  v61 = --v9;
                  v59 = v9;
                  if ( v5 != -1 )
                    ungetc_nolock(v5, File);
                  v27 = v64;
                  v5 = 48;
                  v62 = 48;
                  v60 = 48;
                }
                else
                {
                  v27 = v64;
                  if ( v64 )
                  {
                    if ( !--v63 )
                      ++v14;
                  }
                  v25 = 111;
                }
              }
              else
              {
                v61 = ++v9;
                v59 = v9;
                v35 = inc(v34);
                v27 = v64;
                v62 = v35;
                v5 = v35;
                v60 = v35;
                if ( v64 )
                {
                  v63 -= 2;
                  if ( v63 < 1 )
                    ++v14;
                }
                v25 = 120;
              }
              goto LABEL_129;
            }
            goto LABEL_128;
          }
          v14 = 1;
LABEL_107:
          v34 = File;
          goto LABEL_108;
        }
LABEL_93:
        if ( v5 == 45 )
        {
          v57 = 1;
        }
        else if ( v5 != 43 )
        {
LABEL_129:
          if ( v66 )
          {
            if ( !v14 )
            {
              while ( 1 )
              {
                if ( ((v25 - 112) & 0xFFFFFFF7) != 0 )
                {
                  if ( (pctype[(unsigned __int8)v5] & 4) == 0 )
                    goto LABEL_144;
                  if ( v25 == 111 )
                  {
                    if ( v5 >= 56 )
                      goto LABEL_144;
                    v36 = 8 * v68;
                  }
                  else
                  {
                    v36 = 10 * v68;
                  }
                }
                else
                {
                  v37 = pctype[(unsigned __int8)v5];
                  if ( (v37 & 0x80u) == 0 )
                  {
LABEL_144:
                    v61 = --v9;
                    v59 = v9;
                    if ( v5 != -1 )
                      ungetc_nolock(v5, File);
                    break;
                  }
                  v38 = (char)v5;
                  v36 = 16 * v68;
                  v5 = ((char)v5 & 0xFFFFFFDF) - 7;
                  if ( (v37 & 4) != 0 )
                    v5 = v38;
                  v62 = v5;
                  v60 = v5;
                }
                ++v69;
                v39 = v5 - 48 + v36;
                v68 = v39;
                if ( v27 )
                {
                  if ( !--v63 )
                    goto LABEL_147;
                }
                v61 = ++v9;
                v59 = v9;
                v40 = inc(File);
                v27 = v64;
                v5 = v40;
                v62 = v40;
                v60 = v40;
              }
            }
            v39 = v68;
LABEL_147:
            v41 = -v39;
            if ( !v57 )
              v41 = v39;
            v68 = v41;
          }
          else
          {
            if ( !v14 )
            {
              while ( 1 )
              {
                if ( ((v25 - 112) & 0xFFFFFFF7) != 0 )
                {
                  if ( (pctype[(unsigned __int8)v5] & 4) == 0 )
                    goto LABEL_164;
                  if ( v25 == 111 )
                  {
                    if ( v5 >= 56 )
                      goto LABEL_164;
                    v42 = 8 * v65;
                  }
                  else
                  {
                    v42 = 10 * v65;
                  }
                }
                else
                {
                  v43 = pctype[(unsigned __int8)v5];
                  if ( (v43 & 0x80u) == 0 )
                  {
LABEL_164:
                    v61 = --v9;
                    v59 = v9;
                    if ( v5 != -1 )
                      ungetc_nolock(v5, File);
                    break;
                  }
                  v44 = (char)v5;
                  v42 = 16 * v65;
                  v5 = ((char)v5 & 0xFFFFFFDF) - 7;
                  if ( (v43 & 4) != 0 )
                    v5 = v44;
                  v62 = v5;
                  v60 = v5;
                }
                ++v69;
                v45 = v5 + v42 - 48;
                v65 = v45;
                if ( v27 )
                {
                  if ( !--v63 )
                    goto LABEL_167;
                }
                v61 = ++v9;
                v59 = v9;
                v46 = inc(File);
                v27 = v64;
                v5 = v46;
                v62 = v46;
                v60 = v46;
              }
            }
            v45 = v65;
LABEL_167:
            if ( v57 )
              v65 = -v45;
          }
          if ( !v69 )
          {
            v11 = -1;
            goto LABEL_210;
          }
          if ( v76 )
            goto LABEL_81;
          v70[0] = ++v58;
          v30 = v65;
LABEL_172:
          if ( v66 )
          {
            *(_QWORD *)v24 = v68;
            goto LABEL_81;
          }
          v10 = v58;
          if ( v55 )
            *(_DWORD *)v24 = v30;
          else
            *(_WORD *)v24 = v30;
LABEL_177:
          v4 = v75;
          goto LABEL_83;
        }
        v63 = v3 - 1;
        if ( v3 == 1 && v64 )
        {
          v14 = 1;
          goto LABEL_129;
        }
        v61 = ++v9;
        v59 = v9;
        v5 = inc(File);
        v62 = v5;
        v60 = v5;
LABEL_128:
        v27 = v64;
        goto LABEL_129;
      }
      v31 = v3 + 1;
      v32 = 16;
      if ( v64 )
        v31 = v3;
      v3 = v31;
      v33 = 1;
      if ( v64 )
        v33 = v64;
      v27 = v33;
    }
    v47 = v32 | 1;
    if ( !v27 )
      v47 = v32;
    v48 = v47 | 2;
    if ( v16 <= 0 )
      v48 = v47;
    v49 = v48 | 4;
    if ( !v76 )
      v49 = v48;
    if ( v25 == 123 )
    {
      v50 = ReadStringDelimited(v49, &v74, &v60, &v59, (_WORD **)&v71, v3, File, v29, v70);
      v6 = v74;
    }
    else
    {
      v50 = ReadString(v49, 0LL, &v60, &v59, (_WORD **)&v71, v3, File, v29, v70);
    }
    v10 = v70[0];
    v5 = v60;
    v58 = v70[0];
    if ( !v50 )
    {
      v9 = v59;
      v61 = v59;
      v62 = v60;
      goto LABEL_177;
    }
    v11 = -1;
LABEL_206:
    v53 = 0;
LABEL_212:
    if ( v5 == -1 )
      goto LABEL_215;
    if ( v53 != 1 )
      return v10;
    goto LABEL_220;
  }
  if ( v25 == 99 || v25 == 123 )
  {
    v9 = v61 + 1;
    v61 = v9;
    v59 = v9;
    v5 = inc(File);
    v62 = v5;
    v60 = v5;
    v11 = -1;
  }
  else
  {
    do
    {
      v59 = ++v9;
      v26 = inc(File);
      v11 = -1;
      v5 = v26;
      v62 = v26;
    }
    while ( v26 != -1 && (pctype[(unsigned __int8)v26] & 8) != 0 );
    v24 = v72;
    v61 = v9;
    v60 = v26;
  }
  if ( v5 != -1 )
  {
    v3 = v63;
    v22 = v76;
    goto LABEL_64;
  }
LABEL_215:
  if ( v58 || v56 )
    return v58;
  return v11;
}
