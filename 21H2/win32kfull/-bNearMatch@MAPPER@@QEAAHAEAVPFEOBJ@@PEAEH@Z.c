/*
 * XREFs of ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C001D8F0
 * Callers:
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C001D360 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C0291D74 (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C0291F30 (-vEmergency@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C0011894 (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C001E92C (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     ?bNoMatch@MAPPER@@QEBAHPEAVPFE@@@Z @ 0x1C001EBD8 (-bNoMatch@MAPPER@@QEBAHPEAVPFE@@@Z.c)
 *     ?jMapCharset@@YAEEAEAVPFEOBJ@@@Z @ 0x1C001EC24 (-jMapCharset@@YAEEAEAVPFEOBJ@@@Z.c)
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1C001ED70 (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ?bCalcOrientation@MAPPER@@QEAAHXZ @ 0x1C001F0A4 (-bCalcOrientation@MAPPER@@QEAAHXZ.c)
 *     ?lfOutPrecision@IFIOBJ@@QEBAEXZ @ 0x1C001F114 (-lfOutPrecision@IFIOBJ@@QEBAEXZ.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C0124BD4 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C014A7F8 (-bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C014A834 (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C014AA04 (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ??$SafeDivide@KKK@@YAJKKPEAK@Z @ 0x1C014D158 (--$SafeDivide@KKK@@YAJKKPEAK@Z.c)
 *     memcmp @ 0x1C0159400 (memcmp.c)
 *     ?bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C0291CEC (-bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02BA560 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

__int64 __fastcall MAPPER::bNearMatch(MAPPER *this, struct PFE **a2, unsigned __int8 *a3, int a4)
{
  unsigned int v4; // eax
  struct PFE *v6; // r8
  struct PFEOBJ *v8; // r10
  struct PFE *v9; // rcx
  const wchar_t *v10; // r14
  bool v11; // zf
  char *v12; // r12
  struct PFE *v13; // rdx
  int v14; // r15d
  __int64 v15; // r11
  __int64 v16; // r9
  char v17; // cl
  char v18; // al
  char v19; // cl
  int v20; // edx
  unsigned __int8 v21; // dl
  unsigned __int8 v22; // cl
  int v23; // eax
  int v24; // eax
  unsigned int v25; // eax
  unsigned __int8 v26; // di
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int8 v29; // dl
  struct PFE *v30; // r15
  int v31; // r13d
  __int64 v32; // rcx
  int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // edi
  int v37; // r10d
  unsigned int v38; // edx
  int v39; // eax
  int v40; // edi
  int v41; // eax
  unsigned int v42; // eax
  __int64 v44; // rsi
  unsigned __int64 v45; // rcx
  __int64 v46; // r11
  __int64 v47; // r9
  __int16 v48; // ax
  int v49; // r8d
  int v50; // edi
  int v51; // edx
  char v52; // al
  char v53; // r8
  int v54; // eax
  int v55; // esi
  int v56; // r8d
  int v57; // eax
  int v58; // esi
  int v59; // r13d
  unsigned int v60; // eax
  struct PFE *v61; // rdi
  int v62; // ecx
  int v63; // r9d
  __int64 v64; // rax
  char *v65; // r9
  int *v66; // rax
  _BYTE *v67; // r9
  unsigned __int64 v68; // rcx
  unsigned int v69; // eax
  int v70; // ecx
  unsigned __int8 v71; // al
  int v72; // eax
  int v73; // esi
  unsigned int v74; // edi
  __int64 v75; // r11
  unsigned int v76; // r14d
  unsigned int v77; // r15d
  unsigned int v78; // r10d
  int v79; // r11d
  int v80; // r8d
  int v81; // r9d
  unsigned int v82; // eax
  int v83; // r11d
  int v84; // ecx
  int v85; // r8d
  int v86; // r10d
  int v87; // r9d
  int v88; // eax
  struct tagPvtData *v89; // rax
  struct _LIST_ENTRY *LinkedFontList; // r10
  struct _LIST_ENTRY *i; // r9
  struct _LIST_ENTRY *Flink; // r8
  __int64 Blink_low; // rcx
  _BYTE *v94; // rax
  unsigned __int64 v95; // r8
  const unsigned __int16 *v96; // rdx
  int v97; // edx
  int v98; // r8d
  int v99; // edx
  int v100; // eax
  __int64 v101; // rdx
  unsigned int v102; // r9d
  unsigned int v103; // r8d
  unsigned int v104; // eax
  unsigned int v105; // ecx
  __int64 v106; // rdx
  __int64 v107; // r8
  __int64 v108; // r10
  unsigned int v109; // r8d
  int v110; // r11d
  unsigned int v111; // edx
  unsigned int v112; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v113; // [rsp+24h] [rbp-24h] BYREF
  struct PFE *v114; // [rsp+28h] [rbp-20h]
  _QWORD v115[2]; // [rsp+30h] [rbp-18h] BYREF
  int v116; // [rsp+80h] [rbp+38h] BYREF
  struct PFEOBJ *v117; // [rsp+88h] [rbp+40h]
  int v118; // [rsp+98h] [rbp+50h]

  v118 = a4;
  v117 = (struct PFEOBJ *)a2;
  v4 = *((_DWORD *)this + 63) & 0xFFFFB7FF;
  v6 = *a2;
  *((_DWORD *)this + 63) = v4;
  v8 = (struct PFEOBJ *)a2;
  v9 = *a2;
  v10 = 0LL;
  v11 = *a2 == gppfeMapperDefault;
  v114 = v6;
  if ( v11 )
  {
    *((_DWORD *)this + 63) = v4 | 0x4000;
    v9 = *a2;
  }
  v12 = (char *)this + 256;
  *((_QWORD *)this + 32) = *((_QWORD *)v9 + 4);
  v13 = *a2;
  if ( (*((_DWORD *)v13 + 3) & 2) != 0 )
    goto LABEL_291;
  v115[0] = *(_QWORD *)v13;
  if ( *(struct PFT **const *)(v115[0] + 128LL) == gpPFTPrivate )
  {
    if ( !PFFOBJ::pPvtDataMatch((PFFOBJ *)v115) )
      goto LABEL_291;
    v8 = v117;
    v6 = v114;
  }
  if ( (*(_DWORD *)(*(_QWORD *)v8 + 12LL) & 0x20) != 0 )
    goto LABEL_291;
  if ( *(struct PFT **const *)(**(_QWORD **)v8 + 128LL) != gpPFTPrivate )
    goto LABEL_7;
  v115[0] = **(_QWORD **)v8;
  v89 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v115);
  if ( v89 )
  {
    if ( (*((_DWORD *)v89 + 2) & 0xC) != 0 && *(char *)(*((_QWORD *)this + 1) + 25LL) >= 0 )
    {
LABEL_291:
      *((_DWORD *)this + 46) = -2;
      return 0LL;
    }
  }
  v8 = v117;
  v6 = v114;
LABEL_7:
  v14 = *((_DWORD *)this + 63);
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 1;
  *((_DWORD *)this + 49) = 1;
  if ( v14 < 0 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 32LL) + 48LL) & 0x4000) == 0
    || *((_DWORD *)this + 70) && !*((_QWORD *)v6 + 9) )
  {
    goto LABEL_174;
  }
  v15 = *((_QWORD *)this + 1);
  v16 = *(_QWORD *)v12;
  v17 = *(_BYTE *)(*(_QWORD *)v12 + 45LL);
  v18 = *(_BYTE *)(v15 + 27) & 3;
  if ( v18 )
  {
    v19 = v17 & 2;
    if ( v18 == 1 )
    {
      v20 = v19 != 0 ? 0x3A98 : 0;
      if ( !v19 )
        goto LABEL_12;
    }
    else
    {
      if ( v19 )
        goto LABEL_12;
      v20 = 350;
    }
  }
  else
  {
    if ( (v17 & 1) == 0 )
      goto LABEL_12;
    v20 = 1;
  }
  *((_DWORD *)this + 46) = v20;
  if ( (unsigned int)MAPPER::bNoMatch(this, v6) )
    return 0LL;
  v8 = v117;
  v6 = v114;
LABEL_12:
  v21 = *(_BYTE *)(v16 + 45) & 0x70;
  v22 = *(_BYTE *)(v15 + 27) & 0x70;
  if ( v22 )
    goto LABEL_18;
  if ( *((_BYTE *)this + 284) == 2 )
  {
    v22 = *(_BYTE *)(v16 + 45) & 0x70;
LABEL_18:
    if ( (v22 & 0xF0u) >= 0x60 )
      goto LABEL_20;
    goto LABEL_19;
  }
  if ( !v21 )
    goto LABEL_18;
  if ( (v14 & 0x800000) != 0 )
    v22 = 16;
  else
    v22 = 32;
LABEL_19:
  v10 = (const wchar_t *)gpwszFamilyDefaultFonts[(unsigned __int64)v22 >> 4];
LABEL_20:
  if ( v22 == v21 )
    goto LABEL_26;
  v23 = 0;
  if ( !v21 )
  {
    v24 = 8000;
    goto LABEL_25;
  }
  if ( v22 > 0x30u )
  {
    if ( v21 > 0x30u )
      goto LABEL_24;
LABEL_200:
    v23 = 50;
    goto LABEL_24;
  }
  if ( v21 > 0x30u )
    goto LABEL_200;
LABEL_24:
  v24 = v23 + 9000;
LABEL_25:
  *((_DWORD *)this + 46) += v24;
  v25 = *((_DWORD *)this + 46);
  if ( v25 >= *((_DWORD *)this + 45)
    && (v25 != *((_DWORD *)this + 45) || (v14 & 0x1000080) != 0 || *((_DWORD *)v6 + 20) >= *((_DWORD *)this + 52)) )
  {
    return 0LL;
  }
LABEL_26:
  v26 = *((_BYTE *)this + 284);
  if ( v26 == 1 )
  {
    v71 = jMapCharset(1u, v8);
    *a3 = v71;
    if ( (v14 & 0x8000000) == 0 )
    {
      v30 = v114;
      if ( MAPPER::DefaultCharset != v71 )
      {
        *((_DWORD *)this + 46) += 2;
        if ( (unsigned int)MAPPER::bNoMatch(this, v30) )
          return 0LL;
      }
LABEL_122:
      v8 = v117;
      goto LABEL_32;
    }
LABEL_146:
    v8 = v117;
    goto LABEL_31;
  }
  if ( (v14 & 0x8000000) != 0 )
  {
    *a3 = jMapCharset(v26, v8);
    goto LABEL_146;
  }
  v27 = *(_QWORD *)(*(_QWORD *)v8 + 32LL);
  v28 = *(int *)(v27 + 40);
  if ( (_DWORD)v28 )
  {
    if ( v26 == 0xFE )
    {
      *a3 = -2;
      goto LABEL_31;
    }
    v29 = *(_BYTE *)(v27 + v28);
    v67 = (_BYTE *)(v27 + v28);
    v68 = v27 + v28 + 16;
    if ( (unsigned __int64)v67 < v68 )
    {
      while ( *v67 != v26 )
      {
        if ( *v67 != 1 && (unsigned __int64)++v67 < v68 )
          continue;
        goto LABEL_144;
      }
LABEL_88:
      *a3 = v26;
      goto LABEL_31;
    }
LABEL_144:
    if ( *(_QWORD *)(*(_QWORD *)v8 + 120LL) )
    {
      LinkedFontList = PFEOBJ::pGetLinkedFontList(v8);
      for ( i = LinkedFontList->Flink; i != LinkedFontList; i = i->Flink )
      {
        Flink = i[2].Flink[2].Flink;
        Blink_low = SLODWORD(Flink[2].Blink);
        if ( (_DWORD)Blink_low )
        {
          v94 = (char *)Flink + Blink_low;
          v95 = (unsigned __int64)&Flink[1] + Blink_low;
          if ( (unsigned __int64)v94 < v95 )
          {
            while ( *v94 != v26 )
            {
              if ( *v94 != 1 && (unsigned __int64)++v94 < v95 )
                continue;
              goto LABEL_211;
            }
LABEL_206:
            v8 = v117;
            goto LABEL_88;
          }
        }
        else if ( BYTE4(Flink[2].Blink) == v26 )
        {
          goto LABEL_206;
        }
LABEL_211:
        ;
      }
      v8 = v117;
    }
  }
  else
  {
    v29 = *(_BYTE *)(v27 + 44);
  }
  *a3 = v29;
  if ( v26 != v29 )
  {
    if ( (v14 & 0x4000000) == 0 )
      goto LABEL_174;
    v30 = v114;
    *((_DWORD *)this + 46) += 65000;
    if ( (unsigned int)MAPPER::bNoMatch(this, v30) )
      return 0LL;
    goto LABEL_122;
  }
LABEL_31:
  v30 = v114;
LABEL_32:
  v31 = 0;
  if ( v118 )
  {
    v96 = (const unsigned __int16 *)*((_QWORD *)this + 2);
    v116 = 0;
    if ( (unsigned int)PFEOBJ::bCheckFamilyName(v8, v96, 0, (unsigned int *)&v116) )
    {
      if ( v116 )
        ++*((_DWORD *)this + 46);
    }
    else
    {
      *((_DWORD *)this + 46) += !v10
                             || _wcsicmp(
                                  (const wchar_t *)(*(_QWORD *)(*(_QWORD *)v117 + 32LL)
                                                  + *(int *)(*(_QWORD *)(*(_QWORD *)v117 + 32LL) + 8LL)),
                                  v10)
                              ? 10000
                              : 9000;
    }
    if ( (unsigned int)MAPPER::bNoMatch(this, v30) )
      return 0LL;
  }
  v32 = *(_QWORD *)v12;
  v33 = *((_DWORD *)this + 63);
  v34 = *(int *)(*(_QWORD *)v12 + 8LL);
  if ( (v33 & 0x2000000) != 0 )
  {
    if ( *(_WORD *)(v34 + v32) != 64 )
    {
      *((_DWORD *)this + 46) = -2;
      return 0LL;
    }
  }
  else if ( *(_WORD *)(v34 + v32) == 64 )
  {
    goto LABEL_174;
  }
  if ( (*(_DWORD *)(v32 + 48) & 0x3000010) != 0 )
    goto LABEL_51;
  if ( (v33 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
    goto LABEL_174;
  v35 = *(_QWORD *)v12;
  if ( (*((_DWORD *)this + 63) & 2) != 0 )
    v36 = *(__int16 *)(v35 + 56);
  else
    v36 = *(__int16 *)(v35 + 60) + *(__int16 *)(v35 + 62);
  v37 = *((_DWORD *)this + 41);
  if ( v36 >= v37
    || (LOBYTE(v35) = (*(_DWORD *)(v35 + 48) & 0x100000) != 0,
        ((unsigned __int8)v35 & ((*((_DWORD *)this + 63) & 0x8000) == 0)) == 0)
    || v37 <= 7 * v36 / 4 )
  {
    *((_DWORD *)this + 49) = 1;
LABEL_41:
    v38 = 0;
    goto LABEL_42;
  }
  v116 = 0;
  if ( !(unsigned int)MAPPER::bWin31BitmapHeightScaling((MAPPER *)v35, v37, v36, &v116) )
    return 0LL;
  v84 = v116;
  if ( (unsigned int)v116 > 8 )
    v84 = 8;
  *((_DWORD *)this + 49) = v84;
  if ( v84 <= 1 )
    goto LABEL_41;
  if ( (*((_DWORD *)this + 63) & 0x800) == 0 && v84 + 2 >= v36 )
    return 0LL;
  v36 *= v84;
  v38 = (20 * v84) | (5 * (v84 - 1));
LABEL_42:
  v39 = *((_DWORD *)this + 41);
  if ( v39 >= v36 )
  {
    v38 += 150 * (v39 - v36);
  }
  else
  {
    v40 = v36 - v39;
    if ( (*((_DWORD *)this + 63) & 0x1080) == 0x1080 )
    {
      if ( v40 <= 1 )
        goto LABEL_46;
      v41 = v40 + 20;
    }
    else
    {
      v41 = v40 + 4;
    }
    v38 += 150 * v41;
  }
LABEL_46:
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
LABEL_51:
  v44 = *(_QWORD *)this;
  v45 = *(_QWORD *)(**(_QWORD **)this + 976LL);
  if ( (*(_DWORD *)(v45 + 236) & 1) != 0
    && IFIOBJ::lfOutPrecision((MAPPER *)((char *)this + 256)) == 6
    && (*((_DWORD *)this + 63) & 0x4000) == 0 )
  {
    v45 = *(_QWORD *)v12;
    v97 = *((_DWORD *)this + 61);
    v98 = *(_DWORD *)(*(_QWORD *)v12 + 128LL);
    if ( v97 != v98 || *((_DWORD *)this + 62) != *(_DWORD *)(v45 + 132) )
    {
      v45 = (unsigned int)(v97 * *(_DWORD *)(v45 + 132));
      if ( (_DWORD)v45 != v98 * *((_DWORD *)this + 62) )
        goto LABEL_174;
    }
  }
  v46 = *(_QWORD *)v12;
  v47 = *((_QWORD *)this + 1);
  v48 = *(_WORD *)(*(_QWORD *)v12 + 52LL) & 1;
  if ( *(_BYTE *)(v47 + 20) )
  {
    if ( !v48 )
    {
      if ( (unsigned int)IFIOBJ::bSimItalic((MAPPER *)((char *)this + 256)) )
      {
        *((_DWORD *)this + 47) |= 0x4000u;
        v72 = 1;
      }
      else
      {
        v72 = 4;
      }
      *((_DWORD *)this + 46) += v72;
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
    v45 = *(unsigned int *)(v46 + 48);
    if ( (v45 & 1) == 0
      && (v45 & 2) != 0
      && ((v50 & 0x10000) != 0
       || *(int *)(*(_QWORD *)v44 + 72LL) < 0
       || ((v50 & 0x100) == 0 || *((_DWORD *)this + 61) != *((_DWORD *)this + 62)) && (v45 & 0x40000000) == 0) )
    {
      goto LABEL_174;
    }
    v52 = *(_BYTE *)(v47 + 24);
    if ( v52 != 7 )
    {
      if ( v52 == 10 && (v45 & 0x80000000) == 0LL )
        goto LABEL_174;
      goto LABEL_60;
    }
    if ( IFIOBJ::lfOutPrecision((MAPPER *)((char *)this + 256)) != 8 )
    {
      *((_DWORD *)this + 46) = -2;
      return 0LL;
    }
  }
LABEL_60:
  v53 = *(_BYTE *)(v47 + 24);
  if ( v53 == 9
    || (v45 = gpGdiSharedMemory, *(_DWORD *)(gpGdiSharedMemory + 1573012LL)) && ((v53 - 5) & 0xFA) != 0
    || (*(_DWORD *)(*(_QWORD *)v44 + 72LL) & 0x20000000) != 0 )
  {
    if ( v51 || (v54 = *(_DWORD *)(v46 + 48), (v54 & 1) == 0) && ((v54 & 2) != 0 || (v54 & 4) != 0 || (v54 & 8) == 0) )
    {
      *((_DWORD *)this + 46) += 2;
      v69 = *((_DWORD *)this + 46);
      if ( v69 >= *((_DWORD *)this + 45)
        && (v69 != *((_DWORD *)this + 45) || (v50 & 0x1000080) != 0 || *((_DWORD *)v30 + 20) >= *((_DWORD *)this + 52)) )
      {
        return 0LL;
      }
    }
  }
  if ( (*(_DWORD *)(v46 + 48) & 0x2000010) != 0 )
    goto LABEL_76;
  v55 = *(__int16 *)(v46 + 76);
  *((_DWORD *)this + 48) = 1;
  if ( *(_DWORD *)(v47 + 4) )
  {
    if ( (v50 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
      goto LABEL_174;
    v56 = *(_DWORD *)(*(_QWORD *)v12 + 48LL);
    LOBYTE(v45) = (v56 & 0x100000) != 0;
    if ( ((unsigned __int8)v45 & ((*((_DWORD *)this + 63) & 0x8000) == 0)) != 0
      && (v99 = *((_DWORD *)this + 42), v99 > v55) )
    {
      v116 = 0;
      if ( !(unsigned int)MAPPER::bWin31BitmapWidthScaling((MAPPER *)v45, v99, v55, &v116) )
        return 0LL;
      v100 = v116;
      if ( (unsigned int)v116 > 5 )
        v100 = 5;
      *((_DWORD *)this + 48) = v100;
    }
    else if ( (v56 & 0x1000000) != 0 )
    {
      v101 = (unsigned int)(*(__int16 *)(*(_QWORD *)v12 + 60LL) + *(__int16 *)(*(_QWORD *)v12 + 62LL));
      v116 = v55 * *((_DWORD *)this + 41);
      if ( (unsigned int)SafeDivide<long,long,long>((unsigned int)v116, v101, &v116) )
        return 0LL;
      v55 = v116;
    }
    v57 = *((_DWORD *)this + 48);
    if ( v57 > 1 )
    {
      v55 *= v57;
      v31 = (v57 - 1) | (20 * v57);
    }
    if ( *((_DWORD *)this + 42) - v55 < 0 )
      v58 = v55 - *((_DWORD *)this + 42);
    else
      v58 = *((_DWORD *)this + 42) - v55;
    v59 = 50 * v58 + v31;
    if ( v59 )
    {
      *((_DWORD *)this + 46) += v59;
      v60 = *((_DWORD *)this + 46);
      if ( v60 >= *((_DWORD *)this + 45)
        && (v60 != *((_DWORD *)this + 45)
         || (*((_DWORD *)this + 63) & 0x1000080) != 0
         || *((_DWORD *)v30 + 20) >= *((_DWORD *)this + 52)) )
      {
        return 0LL;
      }
    }
    goto LABEL_76;
  }
  if ( (*(_DWORD *)(v46 + 48) & 0x100000) == 0 || (v50 & 0x8000) != 0 )
    goto LABEL_76;
  v73 = *((_DWORD *)this + 62);
  v74 = *((_DWORD *)this + 61);
  v116 = 0;
  v113 = 0;
  v112 = 0;
  if ( (unsigned int)SafeDivide<unsigned long,unsigned long,unsigned long>((unsigned int)(100 * v73), v74, &v116) )
    return 0LL;
  v76 = *(_DWORD *)(v75 + 132);
  if ( (unsigned int)SafeDivide<long,long,long>((unsigned int)(100 * *(_DWORD *)(v75 + 128)), v76, &v112) )
    return 0LL;
  v77 = v112;
  if ( (unsigned int)SafeDivide<long,long,long>(v112, *((unsigned int *)this + 49), &v113) )
    return 0LL;
  v80 = 0;
  if ( v79 == v76 && v74 == v73 )
  {
    v80 = 1;
    if ( v78 != 1 )
    {
      v81 = v116;
      v82 = v78;
      goto LABEL_155;
    }
LABEL_76:
    v61 = v114;
    goto LABEL_77;
  }
  v83 = 1;
  v81 = v116;
  if ( v116 <= (3 * v113) >> 1 )
  {
LABEL_159:
    if ( !v78 )
      goto LABEL_174;
    v31 += 30 * abs32(v81 - v77 * v83 / v78);
    goto LABEL_161;
  }
  if ( !v113 )
    goto LABEL_174;
  v82 = v116 / v113;
LABEL_155:
  if ( v82 > 5 )
    v82 = 5;
  *((_DWORD *)this + 48) = v82;
  v83 = v82;
  v31 = 20 * v82;
  if ( !v80 || v82 != v78 )
    goto LABEL_159;
LABEL_161:
  v61 = v114;
  if ( v31 )
  {
    *((_DWORD *)this + 46) += v31;
    if ( (unsigned int)MAPPER::bNoMatch(this, v61) )
      return 0LL;
  }
LABEL_77:
  v62 = *((_DWORD *)this + 48);
  if ( v62 <= 1 && *((int *)this + 49) <= 1 )
    goto LABEL_79;
  v85 = *((_DWORD *)this + 49);
  v86 = *((_DWORD *)this + 46) + 50;
  *((_DWORD *)this + 46) = v86;
  if ( v62 > v85 )
  {
    if ( !v85 )
      goto LABEL_174;
    v87 = 100 * v62;
    if ( v85 == 1 )
      goto LABEL_185;
    v88 = (v87 + v85 / 2) / v85;
    goto LABEL_184;
  }
  if ( v62 >= v85 )
    goto LABEL_186;
  if ( !v62 )
    goto LABEL_174;
  v87 = 100 * v85;
  if ( v62 != 1 )
  {
    v88 = (v87 + v62 / 2) / v62;
LABEL_184:
    v87 = v88;
  }
LABEL_185:
  *((_DWORD *)this + 46) = v86 + 4 * v87;
LABEL_186:
  if ( (unsigned int)MAPPER::bNoMatch(this, v61) )
    return 0LL;
LABEL_79:
  if ( (*(_DWORD *)(*(_QWORD *)v12 + 48LL) & 0x10) != 0 )
    goto LABEL_80;
  v70 = *((_DWORD *)this + 63);
  if ( (v70 & 0x41000) == 0x41000 )
    goto LABEL_80;
  if ( (v70 & 0x80000) == 0 && !(unsigned int)MAPPER::bCalcOrientation(this) )
  {
LABEL_174:
    *((_DWORD *)this + 46) = -2;
    return 0LL;
  }
  v102 = *((_DWORD *)this + 44);
  v103 = v102 - *(_DWORD *)(*(_QWORD *)v117 + 68LL);
  if ( v103 )
  {
    if ( (*((_DWORD *)this + 63) & 0x480) != 0x480 )
    {
LABEL_273:
      if ( (*(_DWORD *)(*(_QWORD *)v12 + 48LL) & 0x200000) == 0 )
        goto LABEL_174;
      v105 = -v103;
      if ( v103 <= v102 )
        v105 = v103;
      if ( v105 != 900 * (v105 / 0x384) )
        goto LABEL_174;
      goto LABEL_80;
    }
    v104 = *(_DWORD *)(*(_QWORD *)v117 + 68LL) - *((_DWORD *)this + 44);
    if ( v103 <= v102 )
      v104 = *((_DWORD *)this + 44) - *(_DWORD *)(*(_QWORD *)v117 + 68LL);
    v103 = v104 % 0x384;
  }
  if ( v103 )
    goto LABEL_273;
LABEL_80:
  v63 = *((_DWORD *)this + 63);
  if ( (v63 & 0x400000) != 0 )
  {
    ++*((_DWORD *)this + 46);
    if ( (unsigned int)MAPPER::bNoMatch(this, v61) )
      return 0LL;
  }
  if ( v63 < 0 )
  {
    v65 = (char *)this + 100;
    v66 = (int *)((char *)this + 96);
  }
  else
  {
    v64 = *((_QWORD *)this + 1);
    v65 = (char *)(v64 + 356);
    v66 = (int *)(v64 + 352);
  }
  if ( *v66 )
  {
    v106 = *(_QWORD *)v12;
    if ( *(_DWORD *)(*(_QWORD *)v12 + 4LL) < 0x10u )
      goto LABEL_174;
    v107 = *(int *)(v106 + 204);
    if ( !(_DWORD)v107 )
      goto LABEL_174;
    v108 = v106 + v107;
    if ( !(v106 + v107) )
      goto LABEL_174;
    v109 = *(_DWORD *)(v108 + 4);
    v110 = *v66;
    v111 = v109;
    if ( v109 && *v66 == v109 && *((_DWORD *)this + 46) <= 0x88B8u )
    {
      *((_QWORD *)this + 36) = v61;
      v110 = *v66;
      v111 = *(_DWORD *)(v108 + 4);
    }
    if ( v110 != v111 || memcmp(v65, (const void *)(v108 + 8), 4LL * v111) )
      goto LABEL_174;
  }
  return 1LL;
}
