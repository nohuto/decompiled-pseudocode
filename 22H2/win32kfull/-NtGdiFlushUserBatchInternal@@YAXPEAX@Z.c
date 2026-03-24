/*
 * XREFs of ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C008EF50
 * Callers:
 *     NtGdiFlushUserBatch @ 0x1C008EF20 (NtGdiFlushUserBatch.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008E8E0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C0091EE0 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00A9A2C (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B12D0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2890 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C00B30B0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C00B34A4 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ?GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x1C00B471C (-GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00B496C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C00B5770 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00B7698 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00B76C4 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FD8F4 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C00FEEB4 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z.c)
 *     GreMaskBlt @ 0x1C010941C (GreMaskBlt.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     GreSelectFontInternal @ 0x1C016C948 (GreSelectFontInternal.c)
 *     GreEnableAppContainerRestriction @ 0x1C0273230 (GreEnableAppContainerRestriction.c)
 */

void __fastcall NtGdiFlushUserBatchInternal(PVOID Parameter)
{
  struct _NT_TIB *Self; // rdx
  PVOID *p_ArbitraryUserPointer; // r13
  unsigned int SubSystemTib; // r8d
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // ecx
  __int64 v7; // r8
  int v8; // edi
  int v9; // ebx
  int v10; // eax
  int v11; // r9d
  _DWORD *v12; // rdx
  int v13; // r8d
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // r9d
  __int64 v17; // rcx
  int v18; // edi
  unsigned int v19; // r10d
  unsigned int v20; // r11d
  unsigned int v21; // esi
  unsigned int v22; // r14d
  unsigned int v23; // r15d
  int v24; // edx
  __int64 v25; // r8
  unsigned int v26; // ebx
  int v27; // rax^4
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // edx
  int v31; // r15d
  unsigned int v32; // edi
  __int64 v33; // rcx
  __int64 v34; // rdx
  int v35; // esi
  int v36; // r8d
  __int64 v37; // rdx
  __int64 v38; // rdx
  int v39; // r14d
  __int64 v40; // r8
  int v41; // rax^4
  struct EXFORMOBJ *v42; // rdx
  struct SURFACE *v43; // rcx
  _DWORD *v44; // rcx
  int v45; // edi
  int v46; // esi
  int v47; // r14d
  int v48; // r15d
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  struct _NT_TIB *v52; // rdx
  int v53; // ecx
  __int64 v54; // rbx
  int v55; // ecx
  PVOID v56; // rcx
  struct _NT_TIB *v57; // rdx
  char v58; // [rsp+70h] [rbp-238h]
  int v59; // [rsp+74h] [rbp-234h]
  int StackLimit; // [rsp+90h] [rbp-218h]
  unsigned int v61; // [rsp+94h] [rbp-214h]
  unsigned int v62; // [rsp+94h] [rbp-214h]
  int v63; // [rsp+98h] [rbp-210h]
  int v64; // [rsp+98h] [rbp-210h]
  _QWORD v65[6]; // [rsp+A0h] [rbp-208h] BYREF
  ULONG64 p_Self; // [rsp+D0h] [rbp-1D8h]
  int v67; // [rsp+D8h] [rbp-1D0h]
  int v68; // [rsp+DCh] [rbp-1CCh]
  unsigned int v69; // [rsp+E0h] [rbp-1C8h]
  unsigned int v70; // [rsp+E4h] [rbp-1C4h]
  unsigned int v71; // [rsp+E8h] [rbp-1C0h]
  unsigned int v72; // [rsp+ECh] [rbp-1BCh]
  int v73; // [rsp+F0h] [rbp-1B8h]
  int v74; // [rsp+F4h] [rbp-1B4h]
  int v75; // [rsp+F8h] [rbp-1B0h]
  int v76; // [rsp+FCh] [rbp-1ACh]
  int v77; // [rsp+100h] [rbp-1A8h]
  int v78; // [rsp+104h] [rbp-1A4h]
  PVOID v79; // [rsp+108h] [rbp-1A0h]
  HDC FiberData; // [rsp+110h] [rbp-198h]
  struct _NT_TIB *v81; // [rsp+118h] [rbp-190h]
  PVOID v82; // [rsp+120h] [rbp-188h]
  unsigned int v83; // [rsp+128h] [rbp-180h]
  unsigned int v84; // [rsp+12Ch] [rbp-17Ch]
  int v85; // [rsp+130h] [rbp-178h]
  int v86; // [rsp+134h] [rbp-174h]
  PVOID v87; // [rsp+138h] [rbp-170h]
  PVOID v88; // [rsp+140h] [rbp-168h]
  PVOID v89; // [rsp+148h] [rbp-160h]
  PVOID v90; // [rsp+150h] [rbp-158h]
  PVOID v91; // [rsp+158h] [rbp-150h]
  int v92; // [rsp+160h] [rbp-148h]
  int v93; // [rsp+164h] [rbp-144h]
  int v94; // [rsp+168h] [rbp-140h]
  unsigned int v95; // [rsp+16Ch] [rbp-13Ch]
  unsigned int v96; // [rsp+170h] [rbp-138h]
  unsigned int v97; // [rsp+174h] [rbp-134h]
  unsigned int v98; // [rsp+178h] [rbp-130h]
  int v99; // [rsp+17Ch] [rbp-12Ch]
  int v100; // [rsp+180h] [rbp-128h]
  int v101; // [rsp+184h] [rbp-124h]
  int v102; // [rsp+188h] [rbp-120h]
  int v103; // [rsp+18Ch] [rbp-11Ch]
  unsigned int v104; // [rsp+190h] [rbp-118h]
  unsigned int v105; // [rsp+194h] [rbp-114h]
  unsigned int v106; // [rsp+198h] [rbp-110h]
  unsigned int v107; // [rsp+19Ch] [rbp-10Ch]
  unsigned int v108; // [rsp+1A0h] [rbp-108h]
  unsigned int v109; // [rsp+1A4h] [rbp-104h]
  int v110; // [rsp+1A8h] [rbp-100h]
  int v111; // [rsp+1ACh] [rbp-FCh]
  unsigned int v112; // [rsp+1B0h] [rbp-F8h]
  PVOID v113; // [rsp+1B8h] [rbp-F0h]
  __int64 v114; // [rsp+1C0h] [rbp-E8h]
  __int64 v115; // [rsp+1C8h] [rbp-E0h]
  int v116; // [rsp+1D0h] [rbp-D8h]
  _QWORD v117[2]; // [rsp+1D8h] [rbp-D0h] BYREF
  PVOID v118; // [rsp+1E8h] [rbp-C0h]
  _BYTE v119[112]; // [rsp+1F0h] [rbp-B8h] BYREF
  _DWORD v120[4]; // [rsp+260h] [rbp-48h] BYREF
  struct _RECTL v121; // [rsp+270h] [rbp-38h] BYREF

  Self = KeGetPcr()->NtTib.Self;
  v81 = Self;
  v78 = 1;
  StackLimit = (int)Self[106].StackLimit;
  p_ArbitraryUserPointer = &Self[13].ArbitraryUserPointer;
  LODWORD(Self[106].StackLimit) = 0;
  LODWORD(Self[13].SubSystemTib) &= 0x80000000;
  SubSystemTib = (unsigned int)Self[13].SubSystemTib;
  p_Self = (ULONG64)&Self[35].Self;
  if ( (unsigned int)(StackLimit - 1) <= 0x134 )
  {
    FiberData = 0LL;
    FiberData = (HDC)v81[13].FiberData;
    v4 = SubSystemTib >> 31;
    v81[13].FiberData = 0LL;
    LODWORD(Self[13].SubSystemTib) = SubSystemTib & 0x7FFFFFFF;
    if ( FiberData )
    {
      DCOBJ::DCOBJ((DCOBJ *)v65, FiberData);
      if ( v65[0] )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v119);
        v58 = 0;
        if ( (unsigned int)UserIsCurrentProcessImmersiveAppContainer() && !(_BYTE)v4 )
        {
          v58 = 1;
          GreEnableAppContainerRestriction(0LL);
        }
        if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v119, (struct XDCOBJ *)v65, 0) )
        {
          v78 = 0;
          v115 = *(_QWORD *)(*(_QWORD *)(v65[0] + 976LL) + 160LL);
          do
          {
            v5 = 1;
            v6 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
            v103 = v6;
            v7 = *(unsigned __int16 *)p_ArbitraryUserPointer;
            v59 = *(unsigned __int16 *)p_ArbitraryUserPointer;
            if ( (unsigned __int64)p_ArbitraryUserPointer + v7 > p_Self )
              break;
            switch ( v6 )
            {
              case 0:
                if ( (unsigned int)v7 >= 0x48 && !v58 )
                {
                  v31 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                  v85 = v31;
                  v116 = v31;
                  v75 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                  v92 = v75;
                  v74 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                  v93 = v74;
                  v73 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                  v94 = v73;
                  v83 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                  v69 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                  v95 = v69;
                  v70 = *((_DWORD *)p_ArbitraryUserPointer + 10);
                  v96 = v70;
                  v71 = *((_DWORD *)p_ArbitraryUserPointer + 15);
                  v97 = v71;
                  v72 = *((_DWORD *)p_ArbitraryUserPointer + 16);
                  v98 = v72;
                  v32 = (BYTE2(v83) << 8) | BYTE2(v83);
                  v84 = v32;
                  v83 = v32;
                  if ( (((unsigned __int8)v32 ^ (unsigned __int8)(4 * v32)) & 0xCC) == 0 )
                  {
                    v114 = *(_QWORD *)(*(_QWORD *)(v65[0] + 976LL) + 160LL);
                    v64 = 0;
                    v62 = 0;
                    v113 = 0LL;
                    v118 = p_ArbitraryUserPointer[3];
                    GreDCSelectBrush(v65[0], v118);
                    v33 = v65[0];
                    v34 = *(_QWORD *)(v65[0] + 976LL);
                    v86 = *(_DWORD *)(v34 + 192);
                    v35 = v86;
                    LODWORD(v79) = *(_DWORD *)(v34 + 196);
                    v99 = *((_DWORD *)p_ArbitraryUserPointer + 11);
                    v36 = *((_DWORD *)p_ArbitraryUserPointer + 17);
                    v100 = v36;
                    if ( v86 != v99 )
                    {
                      *(_DWORD *)(v34 + 192) = v99;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 196LL) = v36;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 152LL) |= 1u;
                      v33 = v65[0];
                    }
                    if ( (*(_DWORD *)(v33 + 120) & 1) != 0 )
                    {
                      v37 = *(_QWORD *)(v33 + 976);
                      if ( *(_QWORD *)(v37 + 248) )
                      {
                        v62 = *(_DWORD *)(v37 + 152) & 0x40000;
                        *(_DWORD *)(v37 + 152) |= 0x40000u;
                        v33 = v65[0];
                        v38 = *(_QWORD *)(v65[0] + 976LL);
                        v39 = *(_DWORD *)(v38 + 256);
                        v64 = v39;
                        v101 = *((_DWORD *)p_ArbitraryUserPointer + 12);
                        if ( v39 != v101 )
                        {
                          *(_DWORD *)(v38 + 256) = v101;
                          *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 152LL) |= 1u;
                          v33 = v65[0];
                        }
                      }
                    }
                    v40 = *(_QWORD *)(v33 + 976);
                    v82 = *(PVOID *)(v40 + 324);
                    v26 = (unsigned int)v82;
                    v113 = *(PVOID *)((char *)p_ArbitraryUserPointer + 52);
                    v41 = HIDWORD(v113);
                    if ( v82 != v113 )
                    {
                      *(_DWORD *)(v40 + 324) = (_DWORD)v113;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 328LL) = v41;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 340LL) |= 0x2010u;
                    }
                    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v117, (struct XDCOBJ *)v65, 0x204u);
                    if ( (*(_DWORD *)(v117[0] + 32LL) & 1) != 0 )
                    {
                      v120[0] = v31;
                      v120[1] = v75;
                      v120[2] = v31 + v74;
                      v120[3] = v75 + v73;
                      EXFORMOBJ::bXform((EXFORMOBJ *)v117, (struct ERECTL *)v120);
                      ERECTL::vOrder((ERECTL *)v120);
                      if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v120) )
                      {
                        if ( (*(_DWORD *)(v65[0] + 36LL) & 0xE0) != 0 )
                          XDCOBJ::vAccumulate((XDCOBJ *)v65, (struct ERECTL *)v120);
                        v43 = *(struct SURFACE **)(v65[0] + 496LL);
                        if ( v43 )
                          GrePatBltLockedDC(
                            (struct XDCOBJ *)v65,
                            v42,
                            (struct ERECTL *)v120,
                            v32,
                            v43,
                            v69,
                            v70,
                            v71,
                            v72);
                      }
                    }
                    else
                    {
                      v44 = *(_DWORD **)(v65[0] + 976LL);
                      v45 = v44[46];
                      v46 = v44[44];
                      v47 = v44[47];
                      v48 = v44[45];
                      v44[46] = v69;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 176LL) = v70;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 188LL) = v71;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 180LL) = v72;
                      GreMaskBlt(FiberData, v73, 0LL, 0, 0, 0LL, 0, 0, v84 << 16, 0);
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 184LL) = v45;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 176LL) = v46;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 188LL) = v47;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 180LL) = v48;
                      v35 = v86;
                    }
                    v49 = *(_QWORD *)(v65[0] + 976LL);
                    if ( *(_QWORD *)(v49 + 160) != v114 )
                    {
                      *(_QWORD *)(v49 + 160) = v114;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 152LL) |= 0x1000u;
                    }
                    v50 = *(_QWORD *)(v65[0] + 976LL);
                    if ( v35 != *(_DWORD *)(v50 + 192) )
                    {
                      *(_DWORD *)(v50 + 192) = v35;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 196LL) = (_DWORD)v79;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 152LL) |= 1u;
                    }
                    if ( (*(_DWORD *)(v65[0] + 120LL) & 1) != 0 )
                    {
                      v51 = *(_QWORD *)(v65[0] + 976LL);
                      if ( *(_QWORD *)(v51 + 248) )
                      {
                        if ( v64 != *(_DWORD *)(v51 + 256) )
                        {
                          *(_DWORD *)(v51 + 256) = v64;
                          *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 152LL) |= 1u;
                        }
                        if ( !v62 )
                          *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 152LL) &= ~0x40000u;
                      }
                    }
                    v29 = *(_QWORD *)(v65[0] + 976LL);
                    v30 = HIDWORD(v82);
                    if ( __PAIR64__(HIDWORD(v82), v26) != *(_QWORD *)(v29 + 324) )
                      goto LABEL_63;
                  }
                }
                goto LABEL_93;
              case 1:
                v82 = 0LL;
                if ( !v58 && (unsigned int)v7 >= 0x38 )
                {
                  if ( (PVOID *)p_Self != p_ArbitraryUserPointer )
                  {
                    if ( ((unsigned __int8)p_ArbitraryUserPointer & 7) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( p_Self > MmUserProbeAddress || p_Self < (unsigned __int64)p_ArbitraryUserPointer )
                      *(_BYTE *)MmUserProbeAddress = 0;
                  }
                  v104 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                  v16 = v104;
                  if ( v104 < 0xAAAAAAA && 24 * (unsigned __int64)v104 <= (unsigned int)(v7 - 48) )
                  {
                    v17 = *(_QWORD *)(v65[0] + 976LL);
                    v18 = *(_DWORD *)(v17 + 192);
                    v63 = *(_DWORD *)(v17 + 196);
                    v19 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                    v105 = v19;
                    v20 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                    v106 = v20;
                    v21 = *((_DWORD *)p_ArbitraryUserPointer + 5);
                    v107 = v21;
                    v22 = *((_DWORD *)p_ArbitraryUserPointer + 7);
                    v108 = v22;
                    v23 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                    v109 = v23;
                    v110 = *((_DWORD *)p_ArbitraryUserPointer + 6);
                    v24 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                    v111 = v24;
                    v61 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                    v112 = v61;
                    if ( v18 != v110 )
                    {
                      *(_DWORD *)(v17 + 192) = v110;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 196LL) = v24;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 152LL) |= 1u;
                    }
                    v25 = *(_QWORD *)(v65[0] + 976LL);
                    v79 = *(PVOID *)(v25 + 324);
                    v26 = (unsigned int)v79;
                    v82 = p_ArbitraryUserPointer[5];
                    v27 = HIDWORD(v82);
                    if ( v79 != v82 )
                    {
                      *(_DWORD *)(v25 + 324) = (_DWORD)v82;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 328LL) = v27;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 340LL) |= 0x2010u;
                    }
                    GrePolyPatBltInternal(
                      (struct XDCOBJ *)v65,
                      v61,
                      (struct _POLYPATBLT *)(p_ArbitraryUserPointer + 6),
                      v16,
                      v19,
                      v20,
                      v21,
                      v22,
                      v23);
                    v28 = *(_QWORD *)(v65[0] + 976LL);
                    if ( v18 != *(_DWORD *)(v28 + 192) )
                    {
                      *(_DWORD *)(v28 + 192) = v18;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 196LL) = v63;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 152LL) |= 1u;
                    }
                    v29 = *(_QWORD *)(v65[0] + 976LL);
                    v30 = HIDWORD(v79);
                    if ( __PAIR64__(HIDWORD(v79), v26) != *(_QWORD *)(v29 + 324) )
                    {
LABEL_63:
                      *(_DWORD *)(v29 + 324) = v26;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 328LL) = v30;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 340LL) |= 0x2010u;
                    }
                  }
                }
                goto LABEL_93;
              case 2:
                if ( !v58 )
                  GreBatchTextOut((struct XDCOBJ *)v65, (struct _BATCHTEXTOUT *)p_ArbitraryUserPointer, v7);
                goto LABEL_93;
              case 3:
                if ( !v58 )
                  GreBatchTextOutRect((struct XDCOBJ *)v65, (struct _BATCHTEXTOUTRECT *)p_ArbitraryUserPointer, v7);
                goto LABEL_93;
              case 4:
                v10 = 0;
                v68 = 0;
                v11 = 0;
                v77 = 0;
                if ( (unsigned int)v7 >= 0xC )
                {
                  v10 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                  v68 = v10;
                  v11 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                  v77 = v11;
                }
                else
                {
                  v5 = 0;
                }
                v9 = v59;
                if ( v5 )
                {
                  v12 = (_DWORD *)v65[0];
                  *(_DWORD *)(v65[0] + 124LL) = v10;
                  v12[32] = v11;
                  v13 = v12[10] & 1;
                  if ( v13 )
                    v14 = v12[256];
                  else
                    v14 = v12[254];
                  v12[300] = v10 + v14;
                  if ( v13 )
                    v15 = v12[257];
                  else
                    v15 = v12[255];
                  v12[301] = v11 + v15;
                }
                break;
              case 5:
                v121 = 0LL;
                v8 = 0;
                v67 = 0;
                if ( (unsigned int)v7 >= 0x18 )
                {
                  v121 = *(struct _RECTL *)(p_ArbitraryUserPointer + 1);
                  v8 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                  v67 = v8;
                }
                else
                {
                  v5 = 0;
                }
                v9 = v59;
                if ( v5 )
                {
                  DEVLOCKOBJ::vFlushSpriteUpdates((DEVLOCKOBJ *)v119, 0);
                  GreExtSelectClipRgnLocked((struct XDCOBJ *)v65, &v121, v8);
                }
                break;
              case 6:
                v89 = 0LL;
                if ( (unsigned int)v7 >= 0x10 )
                  v89 = p_ArbitraryUserPointer[1];
                else
                  v5 = 0;
                v9 = v59;
                if ( v5 )
                  GreSelectFontInternal(FiberData);
                break;
              case 7:
                v87 = 0LL;
                if ( (unsigned int)v7 >= 0x10 )
                  v87 = p_ArbitraryUserPointer[1];
                else
                  v5 = 0;
                v9 = v59;
                goto LABEL_24;
              case 8:
                v88 = 0LL;
                if ( (unsigned int)v7 >= 0x10 )
                  v88 = p_ArbitraryUserPointer[1];
                else
                  v5 = 0;
                v9 = v59;
LABEL_24:
                if ( v5 )
                  ((void (*)(void))NtGdiDeleteObjectApp)();
                break;
              default:
LABEL_93:
                v9 = v59;
                break;
            }
            --StackLimit;
            p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + ((v9 + 7) & 0xFFFFFFF8));
            if ( !StackLimit )
              break;
          }
          while ( (unsigned __int64)p_ArbitraryUserPointer + 4 < p_Self );
          v52 = v81;
          LODWORD(v81[106].StackLimit) = 0;
          LODWORD(v52[13].SubSystemTib) &= 0x80000000;
          LODWORD(v52[13].SubSystemTib) &= ~0x80000000;
          *(_QWORD *)(*(_QWORD *)(v65[0] + 976LL) + 160LL) = v115;
          *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 152LL) |= 0x1000u;
        }
        if ( v58 )
          GreEnableAppContainerRestriction(1LL);
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v119);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v65);
    }
    if ( v78 )
    {
      while ( 1 )
      {
        v53 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
        v102 = v53;
        v54 = *(unsigned __int16 *)p_ArbitraryUserPointer;
        v76 = *(unsigned __int16 *)p_ArbitraryUserPointer;
        if ( (unsigned __int64)p_ArbitraryUserPointer + v54 > p_Self )
        {
LABEL_110:
          v57 = v81;
          LODWORD(v81[106].StackLimit) = 0;
          LODWORD(v57[13].SubSystemTib) &= 0x80000000;
          break;
        }
        v55 = v53 - 7;
        if ( v55 )
        {
          if ( v55 != 1 )
            goto LABEL_108;
          v90 = 0LL;
          v56 = p_ArbitraryUserPointer[1];
          v90 = v56;
        }
        else
        {
          v91 = 0LL;
          v56 = p_ArbitraryUserPointer[1];
          v91 = v56;
        }
        NtGdiDeleteObjectApp(v56, 1LL);
LABEL_108:
        --StackLimit;
        p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + (((_DWORD)v54 + 7) & 0xFFFFFFF8));
        if ( !StackLimit || (unsigned __int64)p_ArbitraryUserPointer + 4 >= p_Self )
          goto LABEL_110;
      }
    }
  }
  v81[13].FiberData = 0LL;
}
