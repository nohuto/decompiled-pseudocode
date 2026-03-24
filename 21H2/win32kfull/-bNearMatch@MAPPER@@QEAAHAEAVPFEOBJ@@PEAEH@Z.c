/*
 * XREFs of ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C00600F0
 * Callers:
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C005FB50 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C029435C (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C029451C (-vEmergency@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C00631C4 (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C0063464 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?bNoMatch@MAPPER@@QEBAHPEAVPFE@@@Z @ 0x1C0063488 (-bNoMatch@MAPPER@@QEBAHPEAVPFE@@@Z.c)
 *     ?jMapCharset@@YAEEAEAVPFEOBJ@@@Z @ 0x1C00634D4 (-jMapCharset@@YAEEAEAVPFEOBJ@@@Z.c)
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C00A2D24 (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 *     ?bCalcOrientation@MAPPER@@QEAAHXZ @ 0x1C0100300 (-bCalcOrientation@MAPPER@@QEAAHXZ.c)
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1C010DB38 (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ?lfOutPrecision@IFIOBJ@@QEBAEXZ @ 0x1C011B040 (-lfOutPrecision@IFIOBJ@@QEBAEXZ.c)
 *     ?bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C011F5A4 (-bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C011F5E0 (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 *     ??$SafeDivide@KKK@@YAJKKPEAK@Z @ 0x1C012567C (--$SafeDivide@KKK@@YAJKKPEAK@Z.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C0155D3C (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ?bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C01617FC (-bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     memcmp @ 0x1C0165DD0 (memcmp.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02BBF94 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

__int64 __fastcall MAPPER::bNearMatch(MAPPER *this, struct PFE **a2, unsigned __int8 *a3, int a4)
{
  int v4; // r12d
  struct PFE *v5; // r10
  unsigned int v6; // eax
  struct PFE *v8; // rcx
  bool v10; // zf
  char *v11; // r13
  struct PFE *v12; // rdx
  int v13; // r15d
  __int64 v14; // r11
  __int64 v15; // r9
  char v16; // cl
  char v17; // al
  char v18; // cl
  int v19; // edx
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // cl
  int v22; // eax
  int v23; // eax
  unsigned int v24; // eax
  unsigned __int8 v25; // si
  int v26; // edi
  __int64 v27; // rax
  __int64 v28; // rcx
  char v29; // dl
  struct PFE *v30; // r15
  __int64 v31; // rcx
  int v32; // edx
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // edi
  int v36; // r10d
  int v37; // eax
  unsigned int v38; // edx
  int v39; // eax
  int v40; // edi
  int v41; // eax
  unsigned int v42; // eax
  __int64 v44; // rdi
  unsigned __int64 v45; // rcx
  __int64 v46; // r11
  __int64 v47; // r9
  __int16 v48; // ax
  int v49; // r8d
  int v50; // esi
  int v51; // r8d
  int v52; // r10d
  char v53; // dl
  char v54; // dl
  int v55; // eax
  _DWORD *v56; // rdi
  int v57; // r15d
  int v58; // r8d
  int v59; // edx
  int v60; // eax
  int v61; // r15d
  int v62; // r12d
  unsigned int v63; // eax
  struct PFE *v64; // r15
  int v65; // ecx
  int v66; // r9d
  __int64 v67; // rax
  char *v68; // r9
  int *v69; // rax
  _BYTE *v70; // r9
  unsigned __int64 v71; // rcx
  unsigned int v72; // eax
  unsigned int v73; // r9d
  unsigned int v74; // r8d
  unsigned __int8 v75; // al
  int v76; // eax
  unsigned int v77; // r15d
  int v78; // r12d
  __int64 v79; // r11
  unsigned int v80; // r13d
  int v81; // ecx
  unsigned int v82; // r10d
  int v83; // r11d
  int v84; // r8d
  int v85; // r8d
  int v86; // r10d
  int v87; // r9d
  int v88; // eax
  int v89; // r11d
  unsigned int v90; // eax
  int v91; // r15d
  int v92; // r9d
  int v93; // ecx
  struct tagPvtData *v94; // rax
  struct _LIST_ENTRY *LinkedFontList; // r10
  struct _LIST_ENTRY *i; // r9
  struct _LIST_ENTRY *Flink; // r8
  __int64 Blink_low; // rcx
  _BYTE *v99; // rax
  unsigned __int64 v100; // r8
  const unsigned __int16 *v101; // rdx
  __int64 v102; // rdx
  int v103; // r8d
  int v104; // r9d
  __int64 v105; // rdx
  unsigned int v106; // eax
  unsigned int v107; // ecx
  __int64 v108; // rdx
  __int64 v109; // r8
  __int64 v110; // r10
  unsigned int v111; // r8d
  int v112; // r11d
  unsigned int v113; // edx
  unsigned int v114; // [rsp+20h] [rbp-40h] BYREF
  struct PFE *v115; // [rsp+28h] [rbp-38h]
  _QWORD v116[3]; // [rsp+30h] [rbp-30h] BYREF
  int v117; // [rsp+90h] [rbp+30h] BYREF
  wchar_t *Str2; // [rsp+98h] [rbp+38h] BYREF
  unsigned __int8 *v119; // [rsp+A0h] [rbp+40h]
  int v120; // [rsp+A8h] [rbp+48h]

  v120 = a4;
  v119 = a3;
  v4 = 0;
  v5 = *a2;
  v6 = *((_DWORD *)this + 63) & 0xFFFFB7FF;
  *((_DWORD *)this + 63) = v6;
  v8 = *a2;
  v10 = *a2 == gppfeMapperDefault;
  v115 = v5;
  Str2 = 0LL;
  if ( v10 )
  {
    *((_DWORD *)this + 63) = v6 | 0x4000;
    v8 = *a2;
  }
  v11 = (char *)this + 256;
  *((_QWORD *)this + 32) = *((_QWORD *)v8 + 4);
  v12 = *a2;
  if ( (*((_DWORD *)v12 + 3) & 2) != 0 )
    goto LABEL_293;
  v116[0] = *(_QWORD *)v12;
  if ( *(struct PFT **const *)(v116[0] + 128LL) == gpPFTPrivate )
  {
    if ( !PFFOBJ::pPvtDataMatch((PFFOBJ *)v116) )
      goto LABEL_293;
    v5 = v115;
  }
  if ( (*((_DWORD *)*a2 + 3) & 0x20) != 0 )
    goto LABEL_293;
  if ( *(struct PFT **const *)(*(_QWORD *)*a2 + 128LL) != gpPFTPrivate )
    goto LABEL_7;
  v116[0] = *(_QWORD *)*a2;
  v94 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v116);
  if ( v94 )
  {
    if ( (*((_DWORD *)v94 + 2) & 0xC) != 0 && *(char *)(*((_QWORD *)this + 1) + 25LL) >= 0 )
    {
LABEL_293:
      *((_DWORD *)this + 46) = -2;
      return 0LL;
    }
  }
  v5 = v115;
LABEL_7:
  v13 = *((_DWORD *)this + 63);
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 1;
  *((_DWORD *)this + 49) = 1;
  if ( v13 < 0 && (*(_DWORD *)(*((_QWORD *)*a2 + 4) + 48LL) & 0x4000) == 0
    || *((_DWORD *)this + 70) && !*((_QWORD *)v5 + 9) )
  {
    goto LABEL_148;
  }
  v14 = *((_QWORD *)this + 1);
  v15 = *(_QWORD *)v11;
  v16 = *(_BYTE *)(*(_QWORD *)v11 + 45LL);
  v17 = *(_BYTE *)(v14 + 27) & 3;
  if ( v17 )
  {
    v18 = v16 & 2;
    if ( v17 == 1 )
    {
      v19 = v18 != 0 ? 0x3A98 : 0;
      if ( !v18 )
        goto LABEL_12;
    }
    else
    {
      if ( v18 )
        goto LABEL_12;
      v19 = 350;
    }
  }
  else
  {
    if ( (v16 & 1) == 0 )
      goto LABEL_12;
    v19 = 1;
  }
  *((_DWORD *)this + 46) = v19;
  if ( (unsigned int)MAPPER::bNoMatch(this, v5) )
    return 0LL;
  v5 = v115;
LABEL_12:
  v20 = *(_BYTE *)(v15 + 45) & 0x70;
  v21 = *(_BYTE *)(v14 + 27) & 0x70;
  if ( !v21 )
  {
    if ( *((_BYTE *)this + 284) == 2 )
    {
      v21 = *(_BYTE *)(v15 + 45) & 0x70;
    }
    else if ( v20 )
    {
      if ( (v13 & 0x800000) != 0 )
        v21 = 16;
      else
        v21 = 32;
    }
  }
  if ( (v21 & 0xF0u) < 0x60 )
    Str2 = (wchar_t *)gpwszFamilyDefaultFonts[(unsigned __int64)v21 >> 4];
  if ( v21 == v20 )
    goto LABEL_25;
  v22 = 0;
  if ( !v20 )
  {
    v23 = 8000;
    goto LABEL_24;
  }
  if ( v21 > 0x30u )
  {
    if ( v20 > 0x30u )
      goto LABEL_23;
LABEL_215:
    v22 = 50;
    goto LABEL_23;
  }
  if ( v20 > 0x30u )
    goto LABEL_215;
LABEL_23:
  v23 = v22 + 9000;
LABEL_24:
  *((_DWORD *)this + 46) += v23;
  v24 = *((_DWORD *)this + 46);
  if ( v24 >= *((_DWORD *)this + 45)
    && (v24 != *((_DWORD *)this + 45) || (v13 & 0x1000080) != 0 || *((_DWORD *)v5 + 20) >= *((_DWORD *)this + 52)) )
  {
    return 0LL;
  }
LABEL_25:
  v25 = *((_BYTE *)this + 284);
  v26 = v13 & 0x8000000;
  if ( v25 != 1 && !v26 )
  {
    v27 = *((_QWORD *)*a2 + 4);
    v28 = *(int *)(v27 + 40);
    if ( (_DWORD)v28 )
    {
      if ( v25 == 0xFE )
      {
        v29 = -2;
      }
      else
      {
        v29 = *(_BYTE *)(v27 + v28);
        v70 = (_BYTE *)(v27 + v28);
        v71 = v27 + v28 + 16;
        if ( (unsigned __int64)v70 >= v71 )
        {
LABEL_135:
          if ( *((_QWORD *)*a2 + 15) )
          {
            LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)a2);
            for ( i = LinkedFontList->Flink; i != LinkedFontList; i = i->Flink )
            {
              Flink = i[2].Flink[2].Flink;
              Blink_low = SLODWORD(Flink[2].Blink);
              if ( (_DWORD)Blink_low )
              {
                v99 = (char *)Flink + Blink_low;
                v100 = (unsigned __int64)&Flink[1] + Blink_low;
                if ( (unsigned __int64)v99 < v100 )
                {
                  while ( *v99 != v25 )
                  {
                    if ( *v99 != 1 && (unsigned __int64)++v99 < v100 )
                      continue;
                    goto LABEL_226;
                  }
LABEL_220:
                  v29 = v25;
                  break;
                }
              }
              else if ( BYTE4(Flink[2].Blink) == v25 )
              {
                goto LABEL_220;
              }
LABEL_226:
              ;
            }
            v5 = v115;
          }
        }
        else
        {
          while ( *v70 != v25 )
          {
            if ( *v70 != 1 && (unsigned __int64)++v70 < v71 )
              continue;
            goto LABEL_135;
          }
          v29 = *((_BYTE *)this + 284);
        }
      }
    }
    else
    {
      v29 = *(_BYTE *)(v27 + 44);
    }
    *v119 = v29;
    if ( v25 != v29 )
    {
      if ( (v13 & 0x4000000) == 0 )
        goto LABEL_148;
      *((_DWORD *)this + 46) += 65000;
      if ( (unsigned int)MAPPER::bNoMatch(this, v5) )
        return 0LL;
    }
    goto LABEL_30;
  }
  v75 = jMapCharset(v25, (struct PFEOBJ *)a2);
  *v119 = v75;
  if ( v25 != 1 || v26 )
  {
LABEL_30:
    v30 = v115;
    goto LABEL_31;
  }
  v30 = v115;
  if ( MAPPER::DefaultCharset != v75 )
  {
    *((_DWORD *)this + 46) += 2;
    if ( (unsigned int)MAPPER::bNoMatch(this, v30) )
      return 0LL;
  }
LABEL_31:
  if ( v120 )
  {
    v101 = (const unsigned __int16 *)*((_QWORD *)this + 2);
    v117 = 0;
    if ( PFEOBJ::bCheckFamilyName((PFEOBJ *)a2, v101, 0, &v117) )
    {
      if ( v117 )
        ++*((_DWORD *)this + 46);
    }
    else
    {
      *((_DWORD *)this + 46) += !Str2
                             || _wcsicmp(
                                  (const wchar_t *)(*((_QWORD *)*a2 + 4) + *(int *)(*((_QWORD *)*a2 + 4) + 8LL)),
                                  Str2)
                              ? 10000
                              : 9000;
    }
    if ( (unsigned int)MAPPER::bNoMatch(this, v30) )
      return 0LL;
  }
  v31 = *(_QWORD *)v11;
  v32 = *((_DWORD *)this + 63);
  v33 = *(int *)(*(_QWORD *)v11 + 8LL);
  if ( (v32 & 0x2000000) != 0 )
  {
    if ( *(_WORD *)(v33 + v31) != 64 )
      goto LABEL_148;
  }
  else if ( *(_WORD *)(v33 + v31) == 64 )
  {
    goto LABEL_148;
  }
  if ( (*(_DWORD *)(v31 + 48) & 0x3000010) == 0 )
  {
    if ( (v32 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
      goto LABEL_148;
    v34 = *(_QWORD *)v11;
    if ( (*((_DWORD *)this + 63) & 2) != 0 )
      v35 = *(__int16 *)(v34 + 56);
    else
      v35 = *(__int16 *)(v34 + 60) + *(__int16 *)(v34 + 62);
    v36 = *((_DWORD *)this + 41);
    if ( v35 < v36
      && (LOBYTE(v34) = (*(_DWORD *)(v34 + 48) & 0x100000) != 0,
          ((unsigned __int8)v34 & ((*((_DWORD *)this + 63) & 0x8000) == 0)) != 0)
      && v36 > 7 * v35 / 4 )
    {
      v117 = 0;
      if ( !(unsigned int)MAPPER::bWin31BitmapHeightScaling((MAPPER *)v34, v36, v35, &v117) )
        return 0LL;
      v37 = v117;
      if ( (unsigned int)v117 > 8 )
        v37 = 8;
    }
    else
    {
      v37 = 1;
    }
    *((_DWORD *)this + 49) = v37;
    v38 = 0;
    if ( v37 > 1 )
    {
      if ( (*((_DWORD *)this + 63) & 0x800) == 0 && v37 + 2 >= v35 )
        return 0LL;
      v35 *= v37;
      v38 = (20 * v37) | (5 * (v37 - 1));
    }
    v39 = *((_DWORD *)this + 41);
    if ( v39 >= v35 )
    {
      v38 += 150 * (v39 - v35);
    }
    else
    {
      v40 = v35 - v39;
      if ( (*((_DWORD *)this + 63) & 0x1080) == 0x1080 )
      {
        if ( v40 <= 1 )
          goto LABEL_45;
        v41 = v40 + 20;
      }
      else
      {
        v41 = v40 + 4;
      }
      v38 += 150 * v41;
    }
LABEL_45:
    if ( v38 )
    {
      *((_DWORD *)this + 46) += v38;
      v42 = *((_DWORD *)this + 46);
      if ( v42 >= *((_DWORD *)this + 45)
        && (v42 != *((_DWORD *)this + 45)
         || (*((_DWORD *)this + 63) & 0x1000080) != 0
         || *((_DWORD *)v30 + 20) >= *((_DWORD *)this + 52)) )
      {
        return 0LL;
      }
      if ( v38 >= 0x2710 && (*((_DWORD *)this + 63) & 0x4800) == 0 )
        return 0LL;
    }
  }
  v44 = *(_QWORD *)this;
  v45 = *(_QWORD *)(**(_QWORD **)this + 976LL);
  if ( (*(_DWORD *)(v45 + 236) & 1) != 0
    && IFIOBJ::lfOutPrecision((MAPPER *)((char *)this + 256)) == 6
    && (*((_DWORD *)this + 63) & 0x4000) == 0 )
  {
    v102 = *(_QWORD *)v11;
    v103 = *((_DWORD *)this + 61);
    v104 = *(_DWORD *)(*(_QWORD *)v11 + 128LL);
    if ( v103 != v104 || *((_DWORD *)this + 62) != *(_DWORD *)(v102 + 132) )
    {
      v45 = (unsigned int)(v104 * *((_DWORD *)this + 62));
      if ( v103 * *(_DWORD *)(v102 + 132) != (_DWORD)v45 )
        goto LABEL_148;
    }
  }
  v46 = *(_QWORD *)v11;
  v47 = *((_QWORD *)this + 1);
  v48 = *(_WORD *)(*(_QWORD *)v11 + 52LL) & 1;
  if ( *(_BYTE *)(v47 + 20) )
  {
    if ( !v48 )
    {
      if ( (unsigned int)IFIOBJ::bSimItalic((MAPPER *)((char *)this + 256)) )
      {
        *((_DWORD *)this + 47) |= 0x4000u;
        v76 = 1;
      }
      else
      {
        v76 = 4;
      }
      *((_DWORD *)this + 46) += v76;
      if ( (unsigned int)MAPPER::bNoMatch(this, v30) )
        return 0LL;
    }
  }
  else if ( v48 )
  {
    *((_DWORD *)this + 46) += 4;
    if ( (unsigned int)MAPPER::bNoMatch(this, v30) )
      return 0LL;
  }
  v49 = *(unsigned __int16 *)(v46 + 46) - *((_DWORD *)this + 43);
  v50 = *((_DWORD *)this + 63);
  if ( (v50 & 0x200000) != 0 )
  {
    *((_DWORD *)this + 46) += (int)(19 * abs32(v49)) >> 7;
    if ( (unsigned int)MAPPER::bNoMatch(this, v30) )
      return 0LL;
  }
  else if ( v49 )
  {
    if ( v49 < 0 )
    {
      v49 = *((_DWORD *)this + 43) - *(unsigned __int16 *)(v46 + 46);
      if ( v49 > 150 )
      {
        if ( IFIOBJ::pvSimBold((MAPPER *)((char *)this + 256)) )
        {
          *((_DWORD *)this + 47) |= 0x2000u;
          v49 -= 120;
        }
      }
    }
    *((_DWORD *)this + 46) += (73 * v49) >> 8;
    if ( (unsigned int)MAPPER::bNoMatch(this, v30) )
      return 0LL;
  }
  v51 = v50 & 0x80;
  if ( (v50 & 0x80) == 0 )
  {
    v52 = *(_DWORD *)(v46 + 48);
    if ( (v52 & 1) == 0
      && (v52 & 2) != 0
      && ((v50 & 0x10000) != 0
       || *(int *)(*(_QWORD *)v44 + 72LL) < 0
       || ((v50 & 0x100) == 0 || *((_DWORD *)this + 61) != *((_DWORD *)this + 62)) && (v52 & 0x40000000) == 0) )
    {
      goto LABEL_148;
    }
    v53 = *(_BYTE *)(v47 + 24);
    if ( v53 == 7 && IFIOBJ::lfOutPrecision((MAPPER *)((char *)this + 256)) != 8 )
      goto LABEL_148;
    if ( v53 == 10 && v52 >= 0 )
      goto LABEL_148;
  }
  v54 = *(_BYTE *)(v47 + 24);
  if ( v54 == 9
    || (v45 = gpGdiSharedMemory, *(_DWORD *)(gpGdiSharedMemory + 1573012LL)) && ((v54 - 5) & 0xFA) != 0
    || (*(_DWORD *)(*(_QWORD *)v44 + 72LL) & 0x20000000) != 0 )
  {
    if ( v51 || (v55 = *(_DWORD *)(v46 + 48), (v55 & 1) == 0) && ((v55 & 2) != 0 || (v55 & 4) != 0 || (v55 & 8) == 0) )
    {
      *((_DWORD *)this + 46) += 2;
      v72 = *((_DWORD *)this + 46);
      if ( v72 >= *((_DWORD *)this + 45)
        && (v72 != *((_DWORD *)this + 45) || (v50 & 0x1000080) != 0 || *((_DWORD *)v30 + 20) >= *((_DWORD *)this + 52)) )
      {
        return 0LL;
      }
    }
  }
  v56 = (_DWORD *)(v46 + 48);
  if ( (*(_DWORD *)(v46 + 48) & 0x2000010) != 0 )
    goto LABEL_76;
  v57 = *(__int16 *)(v46 + 76);
  *((_DWORD *)this + 48) = 1;
  if ( !*(_DWORD *)(v47 + 4) )
  {
    if ( (*v56 & 0x100000) == 0 || (v50 & 0x8000) != 0 )
    {
LABEL_76:
      v64 = v115;
      goto LABEL_77;
    }
    v77 = *((_DWORD *)this + 61);
    LODWORD(Str2) = 0;
    v114 = 0;
    v117 = 0;
    v78 = *((_DWORD *)this + 62);
    if ( (unsigned int)SafeDivide<unsigned long,unsigned long,unsigned long>((unsigned int)(100 * v78), v77, &Str2) )
      return 0LL;
    v80 = *(_DWORD *)(v79 + 132);
    if ( (unsigned int)SafeDivide<long,long,long>((unsigned int)(100 * *(_DWORD *)(v79 + 128)), v80, &v117)
      || (unsigned int)SafeDivide<long,long,long>((unsigned int)v117, *((unsigned int *)this + 49), &v114) )
    {
      return 0LL;
    }
    v84 = 0;
    if ( v83 == v80 && v77 == v78 )
    {
      v84 = 1;
      if ( v82 == 1 )
      {
        v11 = (char *)this + 256;
        goto LABEL_76;
      }
      v89 = (int)Str2;
      v90 = v82;
    }
    else
    {
      v91 = 1;
      v89 = (int)Str2;
      if ( (unsigned int)Str2 <= (3 * v114) >> 1 )
      {
        v92 = 0;
        goto LABEL_193;
      }
      if ( !v114 )
        goto LABEL_148;
      v90 = (unsigned int)Str2 / v114;
    }
    if ( v90 > 5 )
      v90 = 5;
    *((_DWORD *)this + 48) = v90;
    v91 = v90;
    v92 = 20 * v90;
    if ( v84 && v90 == v82 )
    {
LABEL_187:
      v64 = v115;
      if ( v92 )
      {
        *((_DWORD *)this + 46) += v92;
        if ( (unsigned int)MAPPER::bNoMatch(this, v64) )
          return 0LL;
      }
      v11 = (char *)this + 256;
      goto LABEL_77;
    }
    v81 = v117;
LABEL_193:
    if ( !v82 )
      goto LABEL_148;
    v92 += 30 * abs32(v89 - v81 * v91 / v82);
    goto LABEL_187;
  }
  if ( (v50 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
    goto LABEL_148;
  v58 = *(_DWORD *)(*(_QWORD *)v11 + 48LL);
  v56 = (_DWORD *)(*(_QWORD *)v11 + 48LL);
  v50 = *((_DWORD *)this + 63);
  LOBYTE(v45) = (v58 & 0x100000) != 0;
  if ( ((unsigned __int8)v45 & ((v50 & 0x8000) == 0)) != 0 && (v59 = *((_DWORD *)this + 42), v59 > v57) )
  {
    v117 = 0;
    if ( !(unsigned int)MAPPER::bWin31BitmapWidthScaling((MAPPER *)v45, v59, v57, &v117) )
      return 0LL;
    v93 = v117;
    if ( (unsigned int)v117 > 5 )
      v93 = 5;
    *((_DWORD *)this + 48) = v93;
  }
  else if ( (v58 & 0x1000000) != 0 )
  {
    v105 = (unsigned int)(*(__int16 *)(*(_QWORD *)v11 + 60LL) + *(__int16 *)(*(_QWORD *)v11 + 62LL));
    v117 = v57 * *((_DWORD *)this + 41);
    if ( (unsigned int)SafeDivide<long,long,long>((unsigned int)v117, v105, &v117) )
      return 0LL;
    v57 = v117;
  }
  v60 = *((_DWORD *)this + 48);
  if ( v60 > 1 )
  {
    v57 *= v60;
    v4 = (v60 - 1) | (20 * v60);
  }
  if ( *((_DWORD *)this + 42) - v57 < 0 )
    v61 = v57 - *((_DWORD *)this + 42);
  else
    v61 = *((_DWORD *)this + 42) - v57;
  v62 = 50 * v61 + v4;
  if ( !v62 )
    goto LABEL_76;
  *((_DWORD *)this + 46) += v62;
  v63 = *((_DWORD *)this + 46);
  if ( v63 < *((_DWORD *)this + 45) )
    goto LABEL_76;
  if ( v63 != *((_DWORD *)this + 45) )
    return 0LL;
  if ( (v50 & 0x1000080) != 0 )
    return 0LL;
  v64 = v115;
  if ( *((_DWORD *)v115 + 20) >= *((_DWORD *)this + 52) )
    return 0LL;
LABEL_77:
  v65 = *((_DWORD *)this + 48);
  if ( v65 > 1 || *((int *)this + 49) > 1 )
  {
    v85 = *((_DWORD *)this + 49);
    v86 = *((_DWORD *)this + 46) + 50;
    *((_DWORD *)this + 46) = v86;
    if ( v65 > v85 )
    {
      if ( v85 )
      {
        v87 = 100 * v65;
        if ( v85 == 1 )
          goto LABEL_179;
        v88 = (v87 + v85 / 2) / v85;
        goto LABEL_178;
      }
    }
    else
    {
      if ( v65 >= v85 )
        goto LABEL_180;
      if ( v65 )
      {
        v87 = 100 * v85;
        if ( v65 == 1 )
        {
LABEL_179:
          *((_DWORD *)this + 46) = v86 + 4 * v87;
LABEL_180:
          if ( (unsigned int)MAPPER::bNoMatch(this, v64) )
            return 0LL;
          goto LABEL_79;
        }
        v88 = (v87 + v65 / 2) / v65;
LABEL_178:
        v87 = v88;
        goto LABEL_179;
      }
    }
LABEL_148:
    *((_DWORD *)this + 46) = -2;
    return 0LL;
  }
LABEL_79:
  if ( (*v56 & 0x10) == 0 && (v50 & 0x41000) != 0x41000 )
  {
    if ( (v50 & 0x80000) == 0 && !(unsigned int)MAPPER::bCalcOrientation(this) )
      goto LABEL_148;
    v73 = *((_DWORD *)this + 44);
    v74 = v73 - *((_DWORD *)*a2 + 17);
    if ( v74 && (*((_DWORD *)this + 63) & 0x480) == 0x480 )
    {
      v106 = *((_DWORD *)*a2 + 17) - *((_DWORD *)this + 44);
      if ( v74 <= v73 )
        v106 = *((_DWORD *)this + 44) - *((_DWORD *)*a2 + 17);
      v74 = v106 % 0x384;
    }
    if ( v74 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)v11 + 48LL) & 0x200000) != 0 )
      {
        v107 = -v74;
        if ( v74 <= v73 )
          v107 = v74;
        v74 = v107 % 0x384;
      }
      if ( v74 )
        goto LABEL_148;
    }
  }
  v66 = *((_DWORD *)this + 63);
  if ( (v66 & 0x400000) != 0 )
  {
    ++*((_DWORD *)this + 46);
    if ( (unsigned int)MAPPER::bNoMatch(this, v64) )
      return 0LL;
  }
  if ( v66 < 0 )
  {
    v68 = (char *)this + 100;
    v69 = (int *)((char *)this + 96);
  }
  else
  {
    v67 = *((_QWORD *)this + 1);
    v68 = (char *)(v67 + 356);
    v69 = (int *)(v67 + 352);
  }
  if ( *v69 )
  {
    v108 = *(_QWORD *)v11;
    if ( *(_DWORD *)(*(_QWORD *)v11 + 4LL) < 0x10u )
      goto LABEL_148;
    v109 = *(int *)(v108 + 204);
    if ( !(_DWORD)v109 )
      goto LABEL_148;
    v110 = v108 + v109;
    if ( !(v108 + v109) )
      goto LABEL_148;
    v111 = *(_DWORD *)(v110 + 4);
    v112 = *v69;
    v113 = v111;
    if ( v111 && *v69 == v111 && *((_DWORD *)this + 46) <= 0x88B8u )
    {
      *((_QWORD *)this + 36) = v64;
      v112 = *v69;
      v113 = *(_DWORD *)(v110 + 4);
    }
    if ( v112 != v113 || memcmp(v68, (const void *)(v110 + 8), 4LL * v113) )
      goto LABEL_148;
  }
  return 1LL;
}
