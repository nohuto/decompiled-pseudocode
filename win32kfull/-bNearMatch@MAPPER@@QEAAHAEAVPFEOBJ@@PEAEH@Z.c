/*
 * XREFs of ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C011B94C
 * Callers:
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C011B3A0 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C014DD80 (-vEmergency@MAPPER@@QEAAXXZ.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C029D774 (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C00E3648 (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 *     ?jMapCharset@@YAEEAEAVPFEOBJ@@@Z @ 0x1C011CA08 (-jMapCharset@@YAEEAEAVPFEOBJ@@@Z.c)
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C011CF58 (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     ?bCalcOrientation@MAPPER@@QEAAHXZ @ 0x1C011CFEC (-bCalcOrientation@MAPPER@@QEAAHXZ.c)
 *     ?bNoMatch@MAPPER@@QEBAHPEAVPFE@@@Z @ 0x1C011D08C (-bNoMatch@MAPPER@@QEBAHPEAVPFE@@@Z.c)
 *     memcmp @ 0x1C012BEF0 (memcmp.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C014DCE6 (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C0150274 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C01502CC (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C029D2F0 (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 *     ??$SafeDivide@KKK@@YAJKKPEAK@Z @ 0x1C029D320 (--$SafeDivide@KKK@@YAJKKPEAK@Z.c)
 *     ?bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C029D6BC (-bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ?bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C029D6F8 (-bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1C029D740 (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 */

__int64 __fastcall MAPPER::bNearMatch(MAPPER *this, struct PFEOBJ *a2, unsigned __int8 *a3, int a4)
{
  struct PFE *v4; // r14
  const wchar_t *v8; // r13
  __int64 v9; // r15
  Gre::Base *v10; // rcx
  struct Gre::Base::SESSION_GLOBALS *v11; // rax
  __int64 v12; // rcx
  int v13; // esi
  __int64 v14; // r11
  __int64 v15; // r9
  char v16; // al
  unsigned __int8 v17; // dl
  unsigned __int8 v18; // bl
  PFEOBJ *v19; // r8
  __int64 v20; // rsi
  __int64 v21; // rax
  unsigned __int8 v22; // r14
  unsigned __int8 *v23; // rax
  unsigned __int8 *v24; // rdx
  bool v25; // zf
  PFEOBJ *v26; // rsi
  int v27; // edx
  char *v28; // r15
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rsi
  Gre::Base *v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // r11
  __int16 v35; // ax
  int v36; // r8d
  int v37; // r9d
  int v38; // r8d
  char v39; // al
  char v40; // cl
  MAPPER *v41; // rcx
  __int64 v42; // r10
  struct PFE *v43; // rbx
  int v44; // ecx
  int v45; // r9d
  __int64 v46; // rax
  char *v47; // r9
  _DWORD *v48; // rcx
  unsigned int v50; // edx
  unsigned __int8 v51; // al
  __int64 v52; // rax
  int v53; // ebx
  __int64 v54; // r8
  int *v55; // rsi
  int v56; // r9d
  int v57; // eax
  int v58; // ecx
  int v59; // ebx
  int v60; // ecx
  int v61; // eax
  int v62; // eax
  char v63; // al
  int v64; // ecx
  unsigned int v65; // r9d
  unsigned int v66; // r8d
  __int64 v67; // rcx
  int v68; // ebx
  int v69; // r10d
  int v70; // ecx
  int v71; // r9d
  int v72; // eax
  struct tagPvtData *v73; // rax
  int v74; // eax
  struct _LIST_ENTRY *i; // rsi
  struct _LIST_ENTRY *Flink; // rcx
  __int64 Blink_low; // rax
  _BYTE *v78; // rax
  _BYTE *v79; // rdx
  const unsigned __int16 *v80; // rdx
  int v81; // ebx
  int v82; // eax
  unsigned int v83; // r9d
  int v84; // eax
  int v85; // edx
  int v86; // r8d
  int v87; // r9d
  int v88; // eax
  int v90; // edx
  int v91; // eax
  int v92; // edx
  int v93; // eax
  int v95; // r15d
  unsigned int v96; // r14d
  __int64 v98; // r10
  int v99; // esi
  unsigned int v100; // ebx
  unsigned int v101; // r10d
  int v102; // r11d
  unsigned int v103; // r9d
  int v104; // r8d
  unsigned int v105; // eax
  int v106; // r8d
  int v107; // r10d
  int v108; // r9d
  int v109; // eax
  unsigned int v110; // eax
  unsigned int v111; // ecx
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rdx
  int v115; // eax
  __int64 v116; // r8
  unsigned int v117; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v118; // [rsp+24h] [rbp-1Ch] BYREF
  struct PFE *v119; // [rsp+28h] [rbp-18h]
  _QWORD v120[2]; // [rsp+30h] [rbp-10h] BYREF
  int v121; // [rsp+80h] [rbp+40h] BYREF
  PFEOBJ *v122; // [rsp+88h] [rbp+48h]
  int v123; // [rsp+98h] [rbp+58h]

  v123 = a4;
  v122 = a2;
  v4 = *(struct PFE **)a2;
  *((_DWORD *)this + 63) &= 0xFFFFB7FF;
  v119 = v4;
  v8 = 0LL;
  v9 = *(_QWORD *)(SGDGetSessionState(this) + 32);
  if ( *(_QWORD *)a2 == *(_QWORD *)(v9 + 19504) )
    *((_DWORD *)this + 63) |= 0x4000u;
  *((_QWORD *)this + 32) = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 12LL) & 2) != 0 )
    goto LABEL_291;
  v120[0] = **(_QWORD **)a2;
  if ( *(_QWORD *)(v120[0] + 128LL) == *((_QWORD *)Gre::Base::Globals((Gre::Base *)2) + 796)
    && !PFFOBJ::pPvtDataMatch((PFFOBJ *)v120) )
  {
    goto LABEL_291;
  }
  v10 = (Gre::Base *)*(unsigned int *)(*(_QWORD *)a2 + 12LL);
  if ( ((unsigned __int8)v10 & 0x20) != 0 )
    goto LABEL_291;
  v11 = Gre::Base::Globals(v10);
  v12 = *(_QWORD *)a2;
  if ( *(_QWORD *)(**(_QWORD **)a2 + 128LL) == *((_QWORD *)v11 + 796) )
  {
    v120[0] = **(_QWORD **)a2;
    v73 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v120);
    if ( v73 )
    {
      if ( (*((_DWORD *)v73 + 2) & 0xC) != 0 && *(char *)(*((_QWORD *)this + 1) + 25LL) >= 0 )
        goto LABEL_291;
    }
  }
  v13 = *((_DWORD *)this + 63);
  *((_DWORD *)this + 48) = 1;
  *((_DWORD *)this + 49) = 1;
  *((_QWORD *)this + 23) = 0LL;
  if ( v13 < 0 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)v122 + 32LL);
    if ( (*(_DWORD *)(v12 + 48) & 0x4000) == 0 )
      goto LABEL_291;
  }
  if ( *((_DWORD *)this + 70) && !*((_QWORD *)v4 + 9) )
    goto LABEL_291;
  v14 = *((_QWORD *)this + 1);
  v15 = *((_QWORD *)this + 32);
  v16 = *(_BYTE *)(v15 + 45);
  if ( (*(_BYTE *)(v14 + 27) & 3) == 0 )
  {
    if ( (v16 & 1) == 0 )
      goto LABEL_11;
    v74 = 1;
LABEL_124:
    *((_DWORD *)this + 46) = v74;
    if ( (unsigned int)MAPPER::bNoMatch(this, v4) )
      return 0LL;
    goto LABEL_11;
  }
  v63 = v16 & 2;
  if ( (*(_BYTE *)(v14 + 27) & 3) == 1 )
  {
    v74 = v63 != 0 ? 0x3A98 : 0;
  }
  else
  {
    if ( v63 )
      goto LABEL_11;
    v74 = 350;
  }
  if ( v74 )
    goto LABEL_124;
LABEL_11:
  v17 = *(_BYTE *)(v15 + 45) & 0x70;
  LOBYTE(v12) = *(_BYTE *)(v14 + 27) & 0x70;
  if ( (_BYTE)v12 )
    goto LABEL_16;
  if ( *((_BYTE *)this + 284) == 2 )
  {
    LOBYTE(v12) = *(_BYTE *)(v15 + 45) & 0x70;
LABEL_16:
    if ( ((unsigned __int8)v12 & 0xF0u) >= 0x60 )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( !v17 )
    goto LABEL_16;
  LOBYTE(v12) = (v13 & 0x800000) != 0 ? 16 : 32;
LABEL_17:
  v8 = *(const wchar_t **)(v9 + 8 * ((unsigned __int64)(unsigned __int8)v12 >> 4) + 19536);
LABEL_18:
  if ( (_BYTE)v12 == v17 )
    goto LABEL_19;
  v61 = 0;
  if ( v17 )
  {
    if ( (unsigned __int8)v12 > 0x30u )
    {
      if ( v17 > 0x30u )
        goto LABEL_86;
    }
    else if ( v17 <= 0x30u )
    {
LABEL_86:
      v62 = v61 + 9000;
      goto LABEL_87;
    }
    v61 = 50;
    goto LABEL_86;
  }
  v62 = 8000;
LABEL_87:
  *((_DWORD *)this + 46) += v62;
  if ( (unsigned int)MAPPER::bNoMatch(this, v4) )
    return 0LL;
LABEL_19:
  v18 = *((_BYTE *)this + 284);
  if ( v18 == 1 || (v13 & 0x8000000) != 0 )
  {
    v19 = v122;
    v20 = *(_QWORD *)(*(_QWORD *)v122 + 32LL);
    if ( *(_DWORD *)(v20 + 40) )
    {
      if ( v18 == 1 )
      {
        v21 = SGDGetSessionState(v12);
        v19 = v122;
        v18 = *(_BYTE *)(*(_QWORD *)(v21 + 32) + 19528LL);
      }
      v22 = -2;
      if ( v18 != 0xFE )
      {
        v23 = (unsigned __int8 *)(v20 + *(int *)(v20 + 40));
        v22 = *v23;
        v24 = v23 + 16;
        while ( v23 < v24 )
        {
          if ( *v23 == v18 )
          {
LABEL_27:
            v22 = v18;
            goto LABEL_28;
          }
          if ( *v23 == 1 )
            break;
          ++v23;
        }
        if ( *(_QWORD *)(*(_QWORD *)v19 + 120LL) )
        {
          for ( i = PFEOBJ::pGetLinkedFontList(v19)->Flink; i != PFEOBJ::pGetLinkedFontList(v122); i = i->Flink )
          {
            Flink = i[2].Flink[2].Flink;
            Blink_low = SLODWORD(Flink[2].Blink);
            if ( (_DWORD)Blink_low )
            {
              v78 = (char *)Flink + Blink_low;
              v79 = v78 + 16;
              while ( v78 < v79 )
              {
                if ( *v78 == v18 )
                  goto LABEL_27;
                if ( *v78 == 1 )
                  break;
                ++v78;
              }
            }
            else if ( BYTE4(Flink[2].Blink) == v18 )
            {
              goto LABEL_27;
            }
          }
        }
      }
    }
    else
    {
      v22 = *(_BYTE *)(v20 + 44);
    }
LABEL_28:
    v25 = *((_BYTE *)this + 284) == 1;
    *a3 = v22;
    if ( !v25 || (*((_DWORD *)this + 63) & 0x8000000) != 0 )
    {
      v4 = v119;
    }
    else
    {
      v25 = *(_BYTE *)(v9 + 19528) == v22;
      v4 = v119;
      if ( !v25 )
      {
        *((_DWORD *)this + 46) += 2;
        if ( (unsigned int)MAPPER::bNoMatch(this, v4) )
          return 0LL;
        v26 = v122;
        goto LABEL_32;
      }
    }
    v26 = v122;
    goto LABEL_32;
  }
  v26 = v122;
  v51 = jMapCharset(*((_BYTE *)this + 284), v122);
  *a3 = v51;
  if ( *((_BYTE *)this + 284) != v51 )
  {
    if ( (*((_DWORD *)this + 63) & 0x4000000) == 0 )
      goto LABEL_291;
    *((_DWORD *)this + 46) += 65000;
    if ( (unsigned int)MAPPER::bNoMatch(this, v4) )
      return 0LL;
  }
LABEL_32:
  if ( v123 )
  {
    v80 = (const unsigned __int16 *)*((_QWORD *)this + 2);
    v121 = 0;
    if ( (unsigned int)PFEOBJ::bCheckFamilyName(v26, v80, 0, (unsigned int *)&v121) )
    {
      if ( v121 )
        ++*((_DWORD *)this + 46);
    }
    else
    {
      *((_DWORD *)this + 46) += !v8
                             || _wcsicmp(
                                  (const wchar_t *)(*(_QWORD *)(*(_QWORD *)v26 + 32LL)
                                                  + *(int *)(*(_QWORD *)(*(_QWORD *)v26 + 32LL) + 8LL)),
                                  v8)
                              ? 10000
                              : 9000;
    }
    if ( (unsigned int)MAPPER::bNoMatch(this, v4) )
      return 0LL;
  }
  v27 = *((_DWORD *)this + 63);
  v28 = (char *)this + 256;
  v29 = *((_QWORD *)this + 32);
  v30 = *(int *)(v29 + 8);
  if ( (v27 & 0x2000000) != 0 )
  {
    if ( *(_WORD *)(v30 + v29) != 64 )
      goto LABEL_291;
  }
  else if ( *(_WORD *)(v30 + v29) == 64 )
  {
    goto LABEL_291;
  }
  if ( (*(_DWORD *)(v29 + 48) & 0x3000010) == 0 )
  {
    if ( (v27 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
      goto LABEL_291;
    v67 = *(_QWORD *)v28;
    if ( (*((_DWORD *)this + 63) & 2) != 0 )
      v68 = *(__int16 *)(v67 + 56);
    else
      v68 = *(__int16 *)(v67 + 60) + *(__int16 *)(v67 + 62);
    v69 = *((_DWORD *)this + 41);
    if ( v68 < v69
      && (LOBYTE(v67) = (*(_DWORD *)(v67 + 48) & 0x100000) != 0,
          ((unsigned __int8)v67 & ((*((_DWORD *)this + 63) & 0x8000) == 0)) != 0)
      && v69 > 7 * v68 / 4 )
    {
      v121 = 0;
      if ( !(unsigned int)MAPPER::bWin31BitmapHeightScaling((MAPPER *)v67, v69, v68, &v121) )
        return 0LL;
      v70 = v121;
      if ( (unsigned int)v121 > 8 )
        v70 = 8;
    }
    else
    {
      v70 = 1;
    }
    *((_DWORD *)this + 49) = v70;
    v71 = 0;
    if ( v70 > 1 )
    {
      if ( (*((_DWORD *)this + 63) & 0x800) == 0 && v70 + 2 >= v68 )
        return 0LL;
      v68 *= v70;
      v71 = (20 * v70) | (5 * (v70 - 1));
    }
    v72 = *((_DWORD *)this + 41);
    if ( v72 >= v68 )
    {
      v71 += 150 * (v72 - v68);
LABEL_110:
      if ( v71 )
      {
        *((_DWORD *)this + 46) += v71;
        if ( (unsigned int)MAPPER::bNoMatch(this, v4) || v83 >= 0x2710 && (*((_DWORD *)this + 63) & 0x4800) == 0 )
          return 0LL;
      }
      goto LABEL_36;
    }
    v81 = v68 - v72;
    if ( (*((_DWORD *)this + 63) & 0x1080) == 0x1080 )
    {
      if ( v81 <= 1 )
        goto LABEL_110;
      v82 = v81 + 20;
    }
    else
    {
      v82 = v81 + 4;
    }
    v71 += 150 * v82;
    goto LABEL_110;
  }
LABEL_36:
  v31 = *(_QWORD *)this;
  v32 = *(Gre::Base **)(**(_QWORD **)this + 976LL);
  if ( (*((_DWORD *)v32 + 59) & 1) != 0 )
  {
    v32 = *(Gre::Base **)v28;
    v84 = *(_DWORD *)(*(_QWORD *)v28 + 48LL);
    if ( (v84 & 1) == 0 && (v84 & 2) != 0 && (*((_DWORD *)this + 63) & 0x4000) == 0 )
    {
      v85 = *((_DWORD *)this + 61);
      v86 = *((_DWORD *)v32 + 32);
      if ( (v85 != v86 || *((_DWORD *)this + 62) != *((_DWORD *)v32 + 33))
        && *((_DWORD *)v32 + 33) * v85 != *((_DWORD *)this + 62) * v86 )
      {
        goto LABEL_291;
      }
    }
  }
  v33 = *((_QWORD *)this + 1);
  v34 = *(_QWORD *)v28;
  v35 = *(_WORD *)(*(_QWORD *)v28 + 52LL);
  if ( *(_BYTE *)(v33 + 20) )
  {
    if ( (v35 & 1) != 0 )
      goto LABEL_39;
    if ( (unsigned int)IFIOBJ::bSimItalic((MAPPER *)((char *)this + 256)) )
    {
      *((_DWORD *)this + 47) |= 0x4000u;
      v88 = 1;
    }
    else
    {
      v88 = v87;
    }
    *((_DWORD *)this + 46) += v88;
LABEL_90:
    if ( (unsigned int)MAPPER::bNoMatch(this, v4) )
      return 0LL;
    goto LABEL_39;
  }
  if ( (v35 & 1) != 0 )
  {
    *((_DWORD *)this + 46) += 4;
    goto LABEL_90;
  }
LABEL_39:
  v36 = *(unsigned __int16 *)(v34 + 46) - *((_DWORD *)this + 43);
  v37 = *((_DWORD *)this + 63);
  if ( (v37 & 0x200000) != 0 )
  {
    *((_DWORD *)this + 46) += (int)(19 * abs32(v36)) >> 7;
    if ( (unsigned int)MAPPER::bNoMatch(this, v4) )
      return 0LL;
  }
  else if ( v36 )
  {
    if ( v36 < 0 )
    {
      v36 = *((_DWORD *)this + 43) - *(unsigned __int16 *)(v34 + 46);
      if ( v36 > 150 )
      {
        if ( IFIOBJ::pvSimBold((MAPPER *)((char *)this + 256)) )
        {
          *((_DWORD *)this + 47) |= 0x2000u;
          v36 -= 120;
        }
      }
    }
    v50 = *((_DWORD *)this + 46) + ((73 * v36) >> 8);
    *((_DWORD *)this + 46) = v50;
    if ( v50 >= *((_DWORD *)this + 45)
      && (v50 != *((_DWORD *)this + 45) || (v37 & 0x1000080) != 0 || *((_DWORD *)v4 + 20) >= *((_DWORD *)this + 52)) )
    {
      return 0LL;
    }
  }
  if ( (v37 & 0x80u) != 0 )
    goto LABEL_45;
  v38 = *(_DWORD *)(v34 + 48);
  v32 = (Gre::Base *)(v38 & 2);
  if ( (v38 & 1) == 0
    && (v38 & 2) != 0
    && ((v37 & 0x10000) != 0
     || *(int *)(*(_QWORD *)v31 + 72LL) < 0
     || ((v37 & 0x100) == 0 || *((_DWORD *)this + 61) != *((_DWORD *)this + 62)) && (v38 & 0x40000000) == 0) )
  {
    goto LABEL_291;
  }
  v39 = *(_BYTE *)(v33 + 24);
  if ( v39 == 7 )
  {
    if ( (*(_DWORD *)(v34 + 48) & 1) == 0 && ((v38 & 2) != 0 || (v38 & 4) != 0 || (v38 & 8) == 0) )
      goto LABEL_291;
    goto LABEL_46;
  }
  if ( v39 == 10 )
  {
    if ( v38 >= 0 )
      goto LABEL_291;
  }
  else
  {
LABEL_45:
    if ( *(_BYTE *)(v33 + 24) == 9 )
      goto LABEL_48;
  }
LABEL_46:
  if ( *(_DWORD *)(*((_QWORD *)Gre::Base::Globals(v32) + 241) + 1573012LL)
    && ((v40 = *(_BYTE *)(*((_QWORD *)this + 1) + 24LL), ((v40 - 5) & 0xFA) != 0) || v40 == 9)
    || (v41 = **(MAPPER ***)this, (*((_DWORD *)v41 + 18) & 0x20000000) != 0) )
  {
LABEL_48:
    if ( (*((_DWORD *)this + 63) & 0x80u) != 0
      || (v41 = (MAPPER *)*(unsigned int *)(*(_QWORD *)v28 + 48LL), ((unsigned __int8)v41 & 1) == 0)
      && (((unsigned __int8)v41 & 2) != 0 || ((unsigned __int8)v41 & 4) != 0 || ((unsigned __int8)v41 & 8) == 0) )
    {
      *((_DWORD *)this + 46) += 2;
      if ( (unsigned int)MAPPER::bNoMatch(this, v4) )
        return 0LL;
    }
  }
  v42 = *(_QWORD *)v28;
  if ( (*(_DWORD *)(*(_QWORD *)v28 + 48LL) & 0x2000010) == 0 )
  {
    v52 = *((_QWORD *)this + 1);
    v53 = *(__int16 *)(v42 + 76);
    *((_DWORD *)this + 48) = 1;
    if ( *(_DWORD *)(v52 + 4) )
    {
      if ( (*((_DWORD *)this + 63) & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
        goto LABEL_291;
      v54 = *(_QWORD *)v28;
      v55 = (int *)((char *)this + 168);
      v56 = *(_DWORD *)(*(_QWORD *)v28 + 48LL);
      LOBYTE(v41) = (v56 & 0x100000) != 0;
      if ( ((unsigned __int8)v41 & ((*((_DWORD *)this + 63) & 0x8000) == 0)) != 0 && (v90 = *v55, *v55 > v53) )
      {
        v121 = 0;
        if ( !(unsigned int)MAPPER::bWin31BitmapWidthScaling(v41, v90, v53, &v121) )
          return 0LL;
        v91 = v121;
        if ( (unsigned int)v121 > 5 )
          v91 = 5;
        *((_DWORD *)this + 48) = v91;
      }
      else if ( (v56 & 0x1000000) != 0 )
      {
        v92 = *(__int16 *)(v54 + 62);
        v93 = *(__int16 *)(v54 + 60);
        v121 = *((_DWORD *)this + 41) * v53;
        if ( (unsigned int)SafeDivide<long,long,long>((unsigned int)v121, (unsigned int)(v93 + v92), &v121) )
          return 0LL;
        v53 = v121;
      }
      v57 = *((_DWORD *)this + 48);
      v58 = 0;
      if ( v57 > 1 )
      {
        v53 *= v57;
        v58 = (v57 - 1) | (20 * v57);
      }
      if ( *v55 - v53 < 0 )
        v59 = v53 - *v55;
      else
        v59 = *v55 - v53;
      v60 = 50 * v59 + v58;
      if ( v60 )
      {
        *((_DWORD *)this + 46) += v60;
        if ( (unsigned int)MAPPER::bNoMatch(this, v4) )
          return 0LL;
      }
      goto LABEL_51;
    }
    if ( (*(_DWORD *)(v42 + 48) & 0x100000) != 0 && (*((_DWORD *)this + 63) & 0x8000) == 0 )
    {
      v95 = *((_DWORD *)this + 62);
      v96 = *((_DWORD *)this + 61);
      v117 = 0;
      v118 = 0;
      v121 = 0;
      if ( (unsigned int)SafeDivide<unsigned long,unsigned long,unsigned long>((unsigned int)(100 * v95), v96, &v117) )
        return 0LL;
      v99 = *(_DWORD *)(v98 + 128);
      v100 = *(_DWORD *)(v98 + 132);
      if ( (unsigned int)SafeDivide<long,long,long>((unsigned int)(100 * v99), v100, &v121)
        || (unsigned int)SafeDivide<long,long,long>((unsigned int)v121, *((unsigned int *)this + 49), &v118) )
      {
        return 0LL;
      }
      v103 = v117;
      v104 = 0;
      if ( v99 == v100 && v96 == v95 )
      {
        v104 = 1;
        if ( v101 == 1 )
        {
          v43 = v119;
LABEL_257:
          v28 = (char *)this + 256;
          goto LABEL_52;
        }
        v105 = v101;
      }
      else
      {
        if ( v117 <= (3 * v118) >> 1 )
        {
          v105 = 1;
LABEL_251:
          if ( !v104 || (v105 = *((_DWORD *)this + 48), v105 != v101) )
          {
            if ( !v101 )
              goto LABEL_291;
            v102 += 30 * abs32(v103 - v121 * v105 / v101);
          }
          v43 = v119;
          if ( v102 )
          {
            *((_DWORD *)this + 46) += v102;
            if ( (unsigned int)MAPPER::bNoMatch(this, v43) )
              return 0LL;
          }
          goto LABEL_257;
        }
        if ( !v118 )
          goto LABEL_291;
        v105 = v117 / v118;
      }
      if ( v105 > 5 )
        v105 = 5;
      *((_DWORD *)this + 48) = v105;
      v102 = 20 * v105;
      goto LABEL_251;
    }
  }
LABEL_51:
  v43 = v119;
LABEL_52:
  v44 = *((_DWORD *)this + 48);
  if ( v44 <= 1 && *((int *)this + 49) <= 1 )
    goto LABEL_54;
  v106 = *((_DWORD *)this + 49);
  v107 = *((_DWORD *)this + 46) + 50;
  *((_DWORD *)this + 46) = v107;
  if ( v44 > v106 )
  {
    if ( v106 )
    {
      v108 = 100 * v44;
      if ( v106 != 1 )
      {
        v109 = (v108 + v106 / 2) / v106;
LABEL_266:
        v108 = v109;
        goto LABEL_267;
      }
      goto LABEL_267;
    }
LABEL_291:
    *((_DWORD *)this + 46) = -2;
    return 0LL;
  }
  if ( v44 >= v106 )
    goto LABEL_268;
  if ( !v44 )
    goto LABEL_291;
  v108 = 100 * v106;
  if ( v44 != 1 )
  {
    v109 = (v108 + v44 / 2) / v44;
    goto LABEL_266;
  }
LABEL_267:
  *((_DWORD *)this + 46) = v107 + 4 * v108;
LABEL_268:
  if ( !(unsigned int)MAPPER::bNoMatch(this, v43) )
  {
LABEL_54:
    if ( (*(_DWORD *)(*(_QWORD *)v28 + 48LL) & 0x10) != 0 )
      goto LABEL_55;
    v64 = *((_DWORD *)this + 63);
    if ( (v64 & 0x41000) == 0x41000 )
      goto LABEL_55;
    if ( (v64 & 0x80000) != 0 || (unsigned int)MAPPER::bCalcOrientation(this) )
    {
      v65 = *((_DWORD *)this + 44);
      v66 = v65 - *(_DWORD *)(*(_QWORD *)v122 + 68LL);
      if ( v66 && (*((_DWORD *)this + 63) & 0x480) == 0x480 )
      {
        v110 = *(_DWORD *)(*(_QWORD *)v122 + 68LL) - *((_DWORD *)this + 44);
        if ( v66 <= v65 )
          v110 = *((_DWORD *)this + 44) - *(_DWORD *)(*(_QWORD *)v122 + 68LL);
        v66 = v110 % 0x384;
      }
      if ( !v66 )
        goto LABEL_55;
      if ( (*(_DWORD *)(*(_QWORD *)v28 + 48LL) & 0x200000) != 0 )
      {
        v111 = -v66;
        if ( v66 <= v65 )
          v111 = v66;
        if ( v111 == 900 * (v111 / 0x384) )
        {
LABEL_55:
          v45 = *((_DWORD *)this + 63);
          if ( (v45 & 0x400000) != 0 )
          {
            ++*((_DWORD *)this + 46);
            if ( (unsigned int)MAPPER::bNoMatch(this, v43) )
              return 0LL;
          }
          if ( v45 < 0 )
          {
            v47 = (char *)this + 100;
            v48 = (_DWORD *)((char *)this + 96);
          }
          else
          {
            v46 = *((_QWORD *)this + 1);
            v47 = (char *)(v46 + 356);
            v48 = (_DWORD *)(v46 + 352);
          }
          if ( !*v48 )
            return 1LL;
          v112 = *(_QWORD *)v28;
          if ( *(_DWORD *)(*(_QWORD *)v28 + 4LL) >= 0x10u )
          {
            v113 = *(int *)(v112 + 204);
            if ( (_DWORD)v113 )
            {
              v114 = v112 + v113;
              if ( v114 )
              {
                v115 = *(_DWORD *)(v114 + 4);
                if ( v115 && *v48 == v115 && *((_DWORD *)this + 46) <= 0x88B8u )
                  *((_QWORD *)this + 36) = v43;
                v116 = *(unsigned int *)(v114 + 4);
                if ( *v48 == (_DWORD)v116 && !memcmp(v47, (const void *)(v114 + 8), 4 * v116) )
                  return 1LL;
              }
            }
          }
        }
      }
    }
    goto LABEL_291;
  }
  return 0LL;
}
