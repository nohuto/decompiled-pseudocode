/*
 * XREFs of ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0106B60
 * Callers:
 *     NtGdiFlushUserBatch @ 0x1C0106B30 (NtGdiFlushUserBatch.c)
 * Callees:
 *     GreMaskBlt @ 0x1C001C9BC (GreMaskBlt.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C001DEC4 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@KAEBUTag@RFONTOBJ@@@Z @ 0x1C001DF4C (-GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@KAEBUTag@RFONTOBJ@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001E590 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C002C4E0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C002C900 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00311EC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C00AB168 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00DC2A8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     bCvtPts1 @ 0x1C00F7380 (bCvtPts1.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1C00F8AA8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C00FA9A0 (--0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C0108194 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@KAEBUTag@RFONTOBJ@@@Z @ 0x1C0108568 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@KAEBUTag@RFONTOBJ@@@Z.c)
 *     GreSelectFontInternal @ 0x1C0119F34 (GreSelectFontInternal.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C011C124 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     GreEnableAppContainerRestriction @ 0x1C026BD8C (GreEnableAppContainerRestriction.c)
 */

void __fastcall NtGdiFlushUserBatchInternal(PVOID Parameter)
{
  struct _NT_TIB *Self; // rdx
  PVOID *p_ArbitraryUserPointer; // r13
  unsigned int v3; // ebx
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // r8
  int v12; // edi
  int v13; // ebx
  PVOID v14; // rcx
  int v15; // eax
  int v16; // r9d
  _DWORD *v17; // rdx
  int v18; // r8d
  int v19; // ecx
  int v20; // eax
  PVOID v21; // rax
  int v22; // r9d
  __int64 v23; // rcx
  int v24; // edi
  unsigned int v25; // r10d
  unsigned int v26; // r11d
  unsigned int v27; // esi
  unsigned int v28; // r14d
  unsigned int v29; // r15d
  int v30; // edx
  __int64 v31; // r8
  unsigned int v32; // ebx
  int v33; // rax^4
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // edx
  int v37; // esi
  int v38; // edi
  __int64 v39; // rcx
  __int64 v40; // rdx
  int v41; // r14d
  int v42; // r8d
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // r8
  int v46; // rax^4
  int v47; // r8d
  int v48; // edx
  struct EXFORMOBJ *v49; // rdx
  struct SURFACE *v50; // rcx
  _DWORD *v51; // rcx
  int v52; // edi
  int v53; // esi
  int v54; // r14d
  int v55; // r15d
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  _DWORD *v59; // rax
  int v60; // ecx
  __int64 v61; // rbx
  int v62; // ecx
  PVOID v63; // rcx
  char v64; // [rsp+70h] [rbp-288h]
  int v65; // [rsp+74h] [rbp-284h]
  int StackLimit; // [rsp+90h] [rbp-268h]
  unsigned int v67; // [rsp+94h] [rbp-264h]
  unsigned int v68; // [rsp+94h] [rbp-264h]
  _QWORD v69[6]; // [rsp+98h] [rbp-260h] BYREF
  int v70; // [rsp+C8h] [rbp-230h]
  ULONG64 p_Self; // [rsp+D0h] [rbp-228h]
  int v72; // [rsp+D8h] [rbp-220h]
  int v73; // [rsp+DCh] [rbp-21Ch]
  unsigned int v74; // [rsp+E0h] [rbp-218h]
  unsigned int v75; // [rsp+E4h] [rbp-214h]
  unsigned int v76; // [rsp+E8h] [rbp-210h]
  unsigned int v77; // [rsp+ECh] [rbp-20Ch]
  int v78; // [rsp+F0h] [rbp-208h]
  int v79; // [rsp+F4h] [rbp-204h]
  int v80; // [rsp+F8h] [rbp-200h]
  int v81; // [rsp+FCh] [rbp-1FCh]
  int v82; // [rsp+100h] [rbp-1F8h]
  int v83; // [rsp+104h] [rbp-1F4h]
  PVOID v84; // [rsp+108h] [rbp-1F0h]
  HDC FiberData; // [rsp+110h] [rbp-1E8h]
  PVOID v86; // [rsp+118h] [rbp-1E0h]
  int v87; // [rsp+120h] [rbp-1D8h]
  int v88; // [rsp+124h] [rbp-1D4h]
  int v89; // [rsp+128h] [rbp-1D0h]
  int v90; // [rsp+12Ch] [rbp-1CCh]
  _DWORD v91[2]; // [rsp+130h] [rbp-1C8h] BYREF
  _DWORD *p_SubSystemTib; // [rsp+138h] [rbp-1C0h]
  PVOID v93; // [rsp+140h] [rbp-1B8h]
  PVOID v94; // [rsp+148h] [rbp-1B0h]
  PVOID v95; // [rsp+150h] [rbp-1A8h]
  PVOID v96; // [rsp+158h] [rbp-1A0h]
  PVOID v97; // [rsp+160h] [rbp-198h]
  PVOID *p_StackLimit; // [rsp+168h] [rbp-190h]
  struct _NT_TIB *v99; // [rsp+170h] [rbp-188h]
  unsigned int v100; // [rsp+178h] [rbp-180h]
  unsigned int v101; // [rsp+17Ch] [rbp-17Ch]
  unsigned int v102; // [rsp+180h] [rbp-178h]
  unsigned int v103; // [rsp+184h] [rbp-174h]
  int v104; // [rsp+188h] [rbp-170h]
  int v105; // [rsp+18Ch] [rbp-16Ch]
  int v106; // [rsp+190h] [rbp-168h]
  int v107; // [rsp+194h] [rbp-164h]
  int v108; // [rsp+198h] [rbp-160h]
  unsigned int v109; // [rsp+19Ch] [rbp-15Ch]
  unsigned int v110; // [rsp+1A0h] [rbp-158h]
  unsigned int v111; // [rsp+1A4h] [rbp-154h]
  unsigned int v112; // [rsp+1A8h] [rbp-150h]
  unsigned int v113; // [rsp+1ACh] [rbp-14Ch]
  unsigned int v114; // [rsp+1B0h] [rbp-148h]
  int v115; // [rsp+1B4h] [rbp-144h]
  int v116; // [rsp+1B8h] [rbp-140h]
  unsigned int v117; // [rsp+1BCh] [rbp-13Ch]
  int v118; // [rsp+1C0h] [rbp-138h]
  int v119; // [rsp+1C4h] [rbp-134h]
  int v120; // [rsp+1C8h] [rbp-130h]
  PVOID v121; // [rsp+1D0h] [rbp-128h]
  __int64 v122; // [rsp+1D8h] [rbp-120h]
  __int64 v123; // [rsp+1E0h] [rbp-118h]
  int v124; // [rsp+1E8h] [rbp-110h]
  __int64 v125; // [rsp+1F0h] [rbp-108h] BYREF
  int v126; // [rsp+1FCh] [rbp-FCh]
  PVOID v127; // [rsp+200h] [rbp-F8h]
  _BYTE v128[56]; // [rsp+208h] [rbp-F0h] BYREF
  _BYTE v129[112]; // [rsp+240h] [rbp-B8h] BYREF
  int v130[2]; // [rsp+2B0h] [rbp-48h] BYREF
  int v131; // [rsp+2B8h] [rbp-40h]
  int v132; // [rsp+2BCh] [rbp-3Ch]
  struct _RECTL v133; // [rsp+2C0h] [rbp-38h] BYREF

  Self = KeGetPcr()->NtTib.Self;
  v99 = Self;
  v82 = 1;
  p_StackLimit = &Self[106].StackLimit;
  StackLimit = (int)Self[106].StackLimit;
  p_ArbitraryUserPointer = &Self[13].ArbitraryUserPointer;
  LODWORD(Self[106].StackLimit) = 0;
  p_SubSystemTib = &Self[13].SubSystemTib;
  v3 = (__int64)Self[13].SubSystemTib & 0x80000000;
  LODWORD(Self[13].SubSystemTib) = v3;
  p_Self = (ULONG64)&Self[35].Self;
  if ( (unsigned int)(StackLimit - 1) <= 0x134 )
  {
    FiberData = 0LL;
    FiberData = (HDC)v99[13].FiberData;
    v4 = v3 >> 31;
    v99[13].FiberData = 0LL;
    *p_SubSystemTib = 0;
    if ( FiberData )
    {
      DCOBJ::DCOBJ((DCOBJ *)v69, FiberData);
      if ( v69[0] )
      {
        v6 = SGDGetSessionState(v5);
        EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v128, *(struct Gre::Full::SESSION_GLOBALS **)(v6 + 32));
        v7 = *(unsigned __int16 *)(v69[0] + 12LL);
        v91[0] = 23;
        v91[1] = v7;
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v129);
        v64 = 0;
        if ( (unsigned int)UserIsCurrentProcessImmersiveAppContainer(v8) && !(_BYTE)v4 )
        {
          v64 = 1;
          GreEnableAppContainerRestriction(0LL);
        }
        if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v129, (struct XDCOBJ *)v69, 0) )
        {
          v82 = 0;
          v123 = *(_QWORD *)(*(_QWORD *)(v69[0] + 976LL) + 160LL);
          do
          {
            v9 = 1LL;
            v10 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
            v108 = v10;
            v11 = *(unsigned __int16 *)p_ArbitraryUserPointer;
            v65 = *(unsigned __int16 *)p_ArbitraryUserPointer;
            if ( (unsigned __int64)p_ArbitraryUserPointer + v11 > p_Self )
              break;
            switch ( v10 )
            {
              case 0:
                if ( (unsigned int)v11 >= 0x48 && !v64 )
                {
                  v37 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                  v89 = v37;
                  v118 = v37;
                  v80 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                  v119 = v80;
                  v79 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                  v120 = v79;
                  v78 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                  v124 = v78;
                  v87 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                  v74 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                  v100 = v74;
                  v75 = *((_DWORD *)p_ArbitraryUserPointer + 10);
                  v101 = v75;
                  v76 = *((_DWORD *)p_ArbitraryUserPointer + 15);
                  v102 = v76;
                  v77 = *((_DWORD *)p_ArbitraryUserPointer + 16);
                  v103 = v77;
                  v38 = (BYTE2(v87) << 8) | BYTE2(v87);
                  v88 = v38;
                  v87 = v38;
                  if ( (((unsigned __int8)v38 ^ (unsigned __int8)(4 * v38)) & 0xCC) == 0 )
                  {
                    v122 = *(_QWORD *)(*(_QWORD *)(v69[0] + 976LL) + 160LL);
                    v70 = 0;
                    v68 = 0;
                    v121 = 0LL;
                    v127 = p_ArbitraryUserPointer[3];
                    GreDCSelectBrush(v69[0], v127);
                    v39 = v69[0];
                    v40 = *(_QWORD *)(v69[0] + 976LL);
                    v90 = *(_DWORD *)(v40 + 192);
                    v41 = v90;
                    LODWORD(v84) = *(_DWORD *)(v40 + 196);
                    v104 = *((_DWORD *)p_ArbitraryUserPointer + 11);
                    v42 = *((_DWORD *)p_ArbitraryUserPointer + 17);
                    v105 = v42;
                    if ( v90 != v104 )
                    {
                      *(_DWORD *)(v40 + 192) = v104;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 196LL) = v42;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 152LL) |= 1u;
                      v39 = v69[0];
                    }
                    if ( (*(_DWORD *)(v39 + 120) & 1) != 0 )
                    {
                      v43 = *(_QWORD *)(v39 + 976);
                      if ( *(_QWORD *)(v43 + 248) )
                      {
                        v68 = *(_DWORD *)(v43 + 152) & 0x40000;
                        *(_DWORD *)(v43 + 152) |= 0x40000u;
                        v39 = v69[0];
                        v44 = *(_QWORD *)(v69[0] + 976LL);
                        v70 = *(_DWORD *)(v44 + 256);
                        v106 = *((_DWORD *)p_ArbitraryUserPointer + 12);
                        if ( v70 != v106 )
                        {
                          *(_DWORD *)(v44 + 256) = v106;
                          *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 152LL) |= 1u;
                          v39 = v69[0];
                        }
                      }
                    }
                    v45 = *(_QWORD *)(v39 + 976);
                    v86 = *(PVOID *)(v45 + 324);
                    v32 = (unsigned int)v86;
                    v121 = *(PVOID *)((char *)p_ArbitraryUserPointer + 52);
                    v46 = HIDWORD(v121);
                    if ( v86 != v121 )
                    {
                      *(_DWORD *)(v45 + 324) = (_DWORD)v121;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 328LL) = v46;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 340LL) |= 0x2010u;
                    }
                    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v125, (struct XDCOBJ *)v69, 516);
                    v47 = *(_DWORD *)(v125 + 32);
                    if ( (v47 & 1) != 0 )
                    {
                      v130[0] = v37;
                      v130[1] = v80;
                      v48 = v37 + v79;
                      v131 = v37 + v79;
                      v132 = v78 + v80;
                      if ( (v47 & 0x43) != 0x43 )
                      {
                        bCvtPts1(v125, v130, 2LL);
                        v48 = v131;
                        v37 = v130[0];
                      }
                      if ( v126 )
                      {
                        v130[0] = v37 + 1;
                        v131 = v48 + 1;
                      }
                      ERECTL::vOrder((ERECTL *)v130);
                      if ( !ERECTL::bEmpty((ERECTL *)v130) )
                      {
                        if ( (*(_DWORD *)(v69[0] + 36LL) & 0xE0) != 0 )
                          XDCOBJ::vAccumulate((XDCOBJ *)v69, (struct ERECTL *)v130);
                        v50 = *(struct SURFACE **)(v69[0] + 496LL);
                        if ( v50 )
                          GrePatBltLockedDC(
                            (struct XDCOBJ *)v69,
                            v49,
                            (struct ERECTL *)v130,
                            v38,
                            v50,
                            v74,
                            v75,
                            v76,
                            v77);
                      }
                    }
                    else
                    {
                      v51 = *(_DWORD **)(v69[0] + 976LL);
                      v52 = v51[46];
                      v53 = v51[44];
                      v54 = v51[47];
                      v55 = v51[45];
                      v51[46] = v74;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 176LL) = v75;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 188LL) = v76;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 180LL) = v77;
                      GreMaskBlt(FiberData, v89, v80, v79, v78, 0LL, 0, 0, 0LL, 0, 0, v88 << 16, 0);
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 184LL) = v52;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 176LL) = v53;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 188LL) = v54;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 180LL) = v55;
                      v41 = v90;
                    }
                    v56 = *(_QWORD *)(v69[0] + 976LL);
                    if ( *(_QWORD *)(v56 + 160) != v122 )
                    {
                      *(_QWORD *)(v56 + 160) = v122;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 152LL) |= 0x1000u;
                    }
                    v57 = *(_QWORD *)(v69[0] + 976LL);
                    if ( v41 != *(_DWORD *)(v57 + 192) )
                    {
                      *(_DWORD *)(v57 + 192) = v41;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 196LL) = (_DWORD)v84;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 152LL) |= 1u;
                    }
                    if ( (*(_DWORD *)(v69[0] + 120LL) & 1) != 0 )
                    {
                      v58 = *(_QWORD *)(v69[0] + 976LL);
                      if ( *(_QWORD *)(v58 + 248) )
                      {
                        if ( v70 != *(_DWORD *)(v58 + 256) )
                        {
                          *(_DWORD *)(v58 + 256) = v70;
                          *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 152LL) |= 1u;
                        }
                        if ( !v68 )
                          *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 152LL) &= ~0x40000u;
                      }
                    }
                    v35 = *(_QWORD *)(v69[0] + 976LL);
                    v36 = HIDWORD(v86);
                    if ( __PAIR64__(HIDWORD(v86), v32) != *(_QWORD *)(v35 + 324) )
                      goto LABEL_63;
                  }
                }
                goto LABEL_97;
              case 1:
                v86 = 0LL;
                if ( !v64 && (unsigned int)v11 >= 0x38 )
                {
                  if ( (PVOID *)p_Self != p_ArbitraryUserPointer )
                  {
                    if ( ((unsigned __int8)p_ArbitraryUserPointer & 7) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( p_Self > MmUserProbeAddress || p_Self < (unsigned __int64)p_ArbitraryUserPointer )
                      *(_BYTE *)MmUserProbeAddress = 0;
                  }
                  v109 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                  v22 = v109;
                  if ( v109 < 0xAAAAAAA && 24 * (unsigned __int64)v109 <= (unsigned int)(v11 - 48) )
                  {
                    v23 = *(_QWORD *)(v69[0] + 976LL);
                    v24 = *(_DWORD *)(v23 + 192);
                    v70 = *(_DWORD *)(v23 + 196);
                    v25 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                    v110 = v25;
                    v26 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                    v111 = v26;
                    v27 = *((_DWORD *)p_ArbitraryUserPointer + 5);
                    v112 = v27;
                    v28 = *((_DWORD *)p_ArbitraryUserPointer + 7);
                    v113 = v28;
                    v29 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                    v114 = v29;
                    v115 = *((_DWORD *)p_ArbitraryUserPointer + 6);
                    v30 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                    v116 = v30;
                    v67 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                    v117 = v67;
                    if ( v24 != v115 )
                    {
                      *(_DWORD *)(v23 + 192) = v115;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 196LL) = v30;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 152LL) |= 1u;
                    }
                    v31 = *(_QWORD *)(v69[0] + 976LL);
                    v84 = *(PVOID *)(v31 + 324);
                    v32 = (unsigned int)v84;
                    v86 = p_ArbitraryUserPointer[5];
                    v33 = HIDWORD(v86);
                    if ( v84 != v86 )
                    {
                      *(_DWORD *)(v31 + 324) = (_DWORD)v86;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 328LL) = v33;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 340LL) |= 0x2010u;
                    }
                    GrePolyPatBltInternal(
                      (struct XDCOBJ *)v69,
                      v67,
                      (struct _POLYPATBLT *)(p_ArbitraryUserPointer + 6),
                      v22,
                      v25,
                      v26,
                      v27,
                      v28,
                      v29);
                    v34 = *(_QWORD *)(v69[0] + 976LL);
                    if ( v24 != *(_DWORD *)(v34 + 192) )
                    {
                      *(_DWORD *)(v34 + 192) = v24;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 196LL) = v70;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 152LL) |= 1u;
                    }
                    v35 = *(_QWORD *)(v69[0] + 976LL);
                    v36 = HIDWORD(v84);
                    if ( __PAIR64__(HIDWORD(v84), v32) != *(_QWORD *)(v35 + 324) )
                    {
LABEL_63:
                      *(_DWORD *)(v35 + 324) = v32;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 328LL) = v36;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 340LL) |= 0x2010u;
                    }
                  }
                }
                goto LABEL_97;
              case 2:
                if ( !v64 )
                  GreBatchTextOut(
                    (struct XDCOBJ *)v69,
                    (struct _BATCHTEXTOUT *)p_ArbitraryUserPointer,
                    v11,
                    (const struct RFONTOBJ::Tag *)v91);
                goto LABEL_97;
              case 3:
                if ( !v64 )
                  GreBatchTextOutRect(
                    (struct XDCOBJ *)v69,
                    (struct tagRECT *)p_ArbitraryUserPointer,
                    v11,
                    (const struct RFONTOBJ::Tag *)v91);
                goto LABEL_97;
              case 4:
                v15 = 0;
                v73 = 0;
                v16 = 0;
                v81 = 0;
                if ( (unsigned int)v11 >= 0xC )
                {
                  v15 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                  v73 = v15;
                  v16 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                  v81 = v16;
                }
                else
                {
                  LODWORD(v9) = 0;
                }
                v13 = v65;
                if ( (_DWORD)v9 )
                {
                  v17 = (_DWORD *)v69[0];
                  *(_DWORD *)(v69[0] + 124LL) = v15;
                  v17[32] = v16;
                  v18 = v17[10] & 1;
                  if ( v18 )
                    v19 = v17[256];
                  else
                    v19 = v17[254];
                  v17[298] = v15 + v19;
                  if ( v18 )
                    v20 = v17[257];
                  else
                    v20 = v17[255];
                  v17[299] = v16 + v20;
                }
                break;
              case 5:
                v133 = 0LL;
                v12 = 0;
                v72 = 0;
                if ( (unsigned int)v11 >= 0x18 )
                {
                  v133 = *(struct _RECTL *)(p_ArbitraryUserPointer + 1);
                  v12 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                  v72 = v12;
                }
                else
                {
                  LODWORD(v9) = 0;
                }
                v13 = v65;
                if ( (_DWORD)v9 )
                {
                  DEVLOCKOBJ::vFlushSpriteUpdates((DEVLOCKOBJ *)v129, 0);
                  GreExtSelectClipRgnLocked((struct XDCOBJ *)v69, &v133, v12);
                }
                break;
              case 6:
                v21 = 0LL;
                v95 = 0LL;
                if ( (unsigned int)v11 >= 0x10 )
                {
                  v21 = p_ArbitraryUserPointer[1];
                  v95 = v21;
                }
                else
                {
                  LODWORD(v9) = 0;
                }
                v13 = v65;
                if ( (_DWORD)v9 )
                  GreSelectFontInternal(FiberData, v21, 1LL);
                break;
              case 7:
                v14 = 0LL;
                v93 = 0LL;
                if ( (unsigned int)v11 >= 0x10 )
                {
                  v14 = p_ArbitraryUserPointer[1];
                  v93 = v14;
                }
                else
                {
                  v9 = 0LL;
                }
                v13 = v65;
                goto LABEL_24;
              case 8:
                v14 = 0LL;
                v94 = 0LL;
                if ( (unsigned int)v11 >= 0x10 )
                {
                  v14 = p_ArbitraryUserPointer[1];
                  v94 = v14;
                }
                else
                {
                  v9 = 0LL;
                }
                v13 = v65;
LABEL_24:
                if ( (_DWORD)v9 )
                  NtGdiDeleteObjectApp(v14, v9);
                break;
              default:
LABEL_97:
                v13 = v65;
                break;
            }
            --StackLimit;
            p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + ((v13 + 7) & 0xFFFFFFF8));
            if ( !StackLimit )
              break;
          }
          while ( (unsigned __int64)p_ArbitraryUserPointer + 4 < p_Self );
          *(_DWORD *)p_StackLimit = 0;
          v59 = p_SubSystemTib;
          *p_SubSystemTib &= 0x80000000;
          *v59 = 0;
          *(_QWORD *)(*(_QWORD *)(v69[0] + 976LL) + 160LL) = v123;
          *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 152LL) |= 0x1000u;
        }
        if ( v64 )
          GreEnableAppContainerRestriction(1LL);
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v129);
        EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v128);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v69);
    }
    if ( v82 )
    {
      while ( 1 )
      {
        v60 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
        v107 = v60;
        v61 = *(unsigned __int16 *)p_ArbitraryUserPointer;
        v83 = *(unsigned __int16 *)p_ArbitraryUserPointer;
        if ( (unsigned __int64)p_ArbitraryUserPointer + v61 > p_Self )
        {
LABEL_114:
          *(_DWORD *)p_StackLimit = 0;
          *p_SubSystemTib &= 0x80000000;
          break;
        }
        v62 = v60 - 7;
        if ( v62 )
        {
          if ( v62 != 1 )
            goto LABEL_112;
          v96 = 0LL;
          v63 = p_ArbitraryUserPointer[1];
          v96 = v63;
        }
        else
        {
          v97 = 0LL;
          v63 = p_ArbitraryUserPointer[1];
          v97 = v63;
        }
        NtGdiDeleteObjectApp(v63, 1LL);
LABEL_112:
        --StackLimit;
        p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + (((_DWORD)v61 + 7) & 0xFFFFFFF8));
        if ( !StackLimit || (unsigned __int64)p_ArbitraryUserPointer + 4 >= p_Self )
          goto LABEL_114;
      }
    }
  }
  v99[13].FiberData = 0LL;
}
