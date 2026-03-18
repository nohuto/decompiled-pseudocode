/*
 * XREFs of ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0034690
 * Callers:
 *     NtGdiFlushUserBatch @ 0x1C0034660 (NtGdiFlushUserBatch.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x1C002C7F8 (-GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002CE30 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C002F5C4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C0032A40 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003FD30 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0042444 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C0043168 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     GreMaskBlt @ 0x1C0087168 (GreMaskBlt.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C0088D44 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C008AE30 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C008DA1C (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     GreSelectFontInternal @ 0x1C00BFA08 (GreSelectFontInternal.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C00E9D58 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     GreEnableAppContainerRestriction @ 0x1C02714B4 (GreEnableAppContainerRestriction.c)
 */

void __fastcall NtGdiFlushUserBatchInternal(PVOID Parameter, __int64 a2, __int64 a3, __int64 a4)
{
  struct _NT_TIB *Self; // rdx
  PVOID *p_ArbitraryUserPointer; // r13
  unsigned int SubSystemTib; // ebx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // r8
  int v11; // edi
  int v12; // ebx
  PVOID v13; // rcx
  int v14; // eax
  int v15; // r10d
  _DWORD *v16; // rdx
  int v17; // r8d
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // r10d
  __int64 v21; // rcx
  int v22; // edi
  unsigned int v23; // r9d
  unsigned int v24; // r11d
  unsigned int v25; // esi
  unsigned int v26; // r14d
  unsigned int v27; // r15d
  int v28; // edx
  __int64 v29; // r8
  unsigned int v30; // ebx
  int v31; // rax^4
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // edx
  int v35; // r15d
  unsigned int v36; // edi
  __int64 v37; // rcx
  __int64 v38; // rdx
  int v39; // esi
  int v40; // r8d
  __int64 v41; // rdx
  __int64 v42; // rdx
  int v43; // r14d
  __int64 v44; // r8
  int v45; // rax^4
  _DWORD *v46; // rcx
  int v47; // edi
  int v48; // esi
  int v49; // r14d
  int v50; // r15d
  struct EXFORMOBJ *v51; // rdx
  struct SURFACE *v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  struct _NT_TIB *v56; // rdx
  int v57; // ecx
  __int64 v58; // rbx
  int v59; // ecx
  PVOID v60; // rcx
  struct _NT_TIB *v61; // rdx
  char v62; // [rsp+70h] [rbp-238h]
  int v63; // [rsp+74h] [rbp-234h]
  int StackLimit; // [rsp+90h] [rbp-218h]
  unsigned int v65; // [rsp+94h] [rbp-214h]
  unsigned int v66; // [rsp+94h] [rbp-214h]
  int v67; // [rsp+98h] [rbp-210h]
  int v68; // [rsp+98h] [rbp-210h]
  _QWORD v69[6]; // [rsp+A0h] [rbp-208h] BYREF
  ULONG64 p_Self; // [rsp+D0h] [rbp-1D8h]
  int v71; // [rsp+D8h] [rbp-1D0h]
  int v72; // [rsp+DCh] [rbp-1CCh]
  int v73; // [rsp+E0h] [rbp-1C8h]
  int v74; // [rsp+E4h] [rbp-1C4h]
  int v75; // [rsp+E8h] [rbp-1C0h]
  unsigned int v76; // [rsp+ECh] [rbp-1BCh]
  unsigned int v77; // [rsp+F0h] [rbp-1B8h]
  unsigned int v78; // [rsp+F4h] [rbp-1B4h]
  unsigned int v79; // [rsp+F8h] [rbp-1B0h]
  int v80; // [rsp+FCh] [rbp-1ACh]
  int v81; // [rsp+100h] [rbp-1A8h]
  int v82; // [rsp+104h] [rbp-1A4h]
  PVOID v83; // [rsp+108h] [rbp-1A0h]
  HDC FiberData; // [rsp+110h] [rbp-198h]
  struct _NT_TIB *v85; // [rsp+118h] [rbp-190h]
  PVOID v86; // [rsp+120h] [rbp-188h]
  unsigned int v87; // [rsp+128h] [rbp-180h]
  unsigned int v88; // [rsp+12Ch] [rbp-17Ch]
  int v89; // [rsp+130h] [rbp-178h]
  int v90; // [rsp+134h] [rbp-174h]
  PVOID v91; // [rsp+138h] [rbp-170h]
  PVOID v92; // [rsp+140h] [rbp-168h]
  PVOID v93; // [rsp+148h] [rbp-160h]
  PVOID v94; // [rsp+150h] [rbp-158h]
  PVOID v95; // [rsp+158h] [rbp-150h]
  int v96; // [rsp+160h] [rbp-148h]
  int v97; // [rsp+164h] [rbp-144h]
  int v98; // [rsp+168h] [rbp-140h]
  unsigned int v99; // [rsp+16Ch] [rbp-13Ch]
  unsigned int v100; // [rsp+170h] [rbp-138h]
  unsigned int v101; // [rsp+174h] [rbp-134h]
  unsigned int v102; // [rsp+178h] [rbp-130h]
  int v103; // [rsp+17Ch] [rbp-12Ch]
  int v104; // [rsp+180h] [rbp-128h]
  int v105; // [rsp+184h] [rbp-124h]
  int v106; // [rsp+188h] [rbp-120h]
  int v107; // [rsp+18Ch] [rbp-11Ch]
  unsigned int v108; // [rsp+190h] [rbp-118h]
  unsigned int v109; // [rsp+194h] [rbp-114h]
  unsigned int v110; // [rsp+198h] [rbp-110h]
  unsigned int v111; // [rsp+19Ch] [rbp-10Ch]
  unsigned int v112; // [rsp+1A0h] [rbp-108h]
  unsigned int v113; // [rsp+1A4h] [rbp-104h]
  int v114; // [rsp+1A8h] [rbp-100h]
  int v115; // [rsp+1ACh] [rbp-FCh]
  unsigned int v116; // [rsp+1B0h] [rbp-F8h]
  PVOID v117; // [rsp+1B8h] [rbp-F0h]
  __int64 v118; // [rsp+1C0h] [rbp-E8h]
  __int64 v119; // [rsp+1C8h] [rbp-E0h]
  int v120; // [rsp+1D0h] [rbp-D8h]
  _QWORD v121[2]; // [rsp+1D8h] [rbp-D0h] BYREF
  PVOID v122; // [rsp+1E8h] [rbp-C0h]
  _BYTE v123[112]; // [rsp+1F0h] [rbp-B8h] BYREF
  _DWORD v124[4]; // [rsp+260h] [rbp-48h] BYREF
  struct _RECTL v125; // [rsp+270h] [rbp-38h] BYREF

  Self = KeGetPcr()->NtTib.Self;
  v85 = Self;
  v82 = 1;
  StackLimit = (int)Self[106].StackLimit;
  p_ArbitraryUserPointer = &Self[13].ArbitraryUserPointer;
  LODWORD(Self[106].StackLimit) = 0;
  LODWORD(Self[13].SubSystemTib) &= 0x80000000;
  SubSystemTib = (unsigned int)Self[13].SubSystemTib;
  p_Self = (ULONG64)&Self[35].Self;
  if ( (unsigned int)(StackLimit - 1) <= 0x134 )
  {
    FiberData = 0LL;
    FiberData = (HDC)v85[13].FiberData;
    v7 = SubSystemTib >> 31;
    v85[13].FiberData = 0LL;
    LODWORD(Self[13].SubSystemTib) = 0;
    if ( FiberData )
    {
      DCOBJ::DCOBJ((DCOBJ *)v69, FiberData);
      if ( v69[0] )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v123);
        v62 = 0;
        if ( (unsigned int)UserIsCurrentProcessImmersiveAppContainer() && !(_BYTE)v7 )
        {
          v62 = 1;
          GreEnableAppContainerRestriction(0LL);
        }
        if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v123, (struct XDCOBJ *)v69, 0) )
        {
          v82 = 0;
          v119 = *(_QWORD *)(*(_QWORD *)(v69[0] + 976LL) + 160LL);
          do
          {
            v8 = 1LL;
            v9 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
            v107 = v9;
            v10 = *(unsigned __int16 *)p_ArbitraryUserPointer;
            v63 = *(unsigned __int16 *)p_ArbitraryUserPointer;
            if ( (unsigned __int64)p_ArbitraryUserPointer + v10 > p_Self )
              break;
            switch ( v9 )
            {
              case 0:
                if ( (unsigned int)v10 >= 0x48 && !v62 )
                {
                  v35 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                  v89 = v35;
                  v120 = v35;
                  v73 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                  v96 = v73;
                  v74 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                  v97 = v74;
                  v75 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                  v98 = v75;
                  v87 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                  v79 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                  v99 = v79;
                  v78 = *((_DWORD *)p_ArbitraryUserPointer + 10);
                  v100 = v78;
                  v77 = *((_DWORD *)p_ArbitraryUserPointer + 15);
                  v101 = v77;
                  v76 = *((_DWORD *)p_ArbitraryUserPointer + 16);
                  v102 = v76;
                  v36 = (BYTE2(v87) << 8) | BYTE2(v87);
                  v88 = v36;
                  v87 = v36;
                  if ( (((unsigned __int8)v36 ^ (unsigned __int8)(4 * v36)) & 0xCC) == 0 )
                  {
                    v118 = *(_QWORD *)(*(_QWORD *)(v69[0] + 976LL) + 160LL);
                    v68 = 0;
                    v66 = 0;
                    v117 = 0LL;
                    v122 = p_ArbitraryUserPointer[3];
                    GreDCSelectBrush(v69[0], v122);
                    v37 = v69[0];
                    v38 = *(_QWORD *)(v69[0] + 976LL);
                    v90 = *(_DWORD *)(v38 + 192);
                    v39 = v90;
                    LODWORD(v83) = *(_DWORD *)(v38 + 196);
                    v103 = *((_DWORD *)p_ArbitraryUserPointer + 11);
                    v40 = *((_DWORD *)p_ArbitraryUserPointer + 17);
                    v104 = v40;
                    if ( v90 != v103 )
                    {
                      *(_DWORD *)(v38 + 192) = v103;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 196LL) = v40;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 152LL) |= 1u;
                      v37 = v69[0];
                    }
                    if ( (*(_DWORD *)(v37 + 120) & 1) != 0 )
                    {
                      v41 = *(_QWORD *)(v37 + 976);
                      if ( *(_QWORD *)(v41 + 248) )
                      {
                        v66 = *(_DWORD *)(v41 + 152) & 0x40000;
                        *(_DWORD *)(v41 + 152) |= 0x40000u;
                        v37 = v69[0];
                        v42 = *(_QWORD *)(v69[0] + 976LL);
                        v43 = *(_DWORD *)(v42 + 256);
                        v68 = v43;
                        v105 = *((_DWORD *)p_ArbitraryUserPointer + 12);
                        if ( v43 != v105 )
                        {
                          *(_DWORD *)(v42 + 256) = v105;
                          *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 152LL) |= 1u;
                          v37 = v69[0];
                        }
                      }
                    }
                    v44 = *(_QWORD *)(v37 + 976);
                    v86 = *(PVOID *)(v44 + 324);
                    v30 = (unsigned int)v86;
                    v117 = *(PVOID *)((char *)p_ArbitraryUserPointer + 52);
                    v45 = HIDWORD(v117);
                    if ( v86 != v117 )
                    {
                      *(_DWORD *)(v44 + 324) = (_DWORD)v117;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 328LL) = v45;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 340LL) |= 0x2010u;
                    }
                    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v121, (struct XDCOBJ *)v69, 0x204u);
                    if ( (*(_DWORD *)(v121[0] + 32LL) & 1) != 0 )
                    {
                      v124[0] = v35;
                      v124[1] = v73;
                      v124[2] = v35 + v74;
                      v124[3] = v73 + v75;
                      EXFORMOBJ::bXform((EXFORMOBJ *)v121, (struct ERECTL *)v124);
                      ERECTL::vOrder((ERECTL *)v124);
                      if ( !ERECTL::bEmpty((ERECTL *)v124) )
                      {
                        if ( (*(_DWORD *)(v69[0] + 36LL) & 0xE0) != 0 )
                          XDCOBJ::vAccumulate((XDCOBJ *)v69, (struct ERECTL *)v124);
                        v52 = *(struct SURFACE **)(v69[0] + 496LL);
                        if ( v52 )
                          GrePatBltLockedDC(
                            (struct XDCOBJ *)v69,
                            v51,
                            (struct ERECTL *)v124,
                            v36,
                            v52,
                            v79,
                            v78,
                            v77,
                            v76);
                      }
                    }
                    else
                    {
                      v46 = *(_DWORD **)(v69[0] + 976LL);
                      v47 = v46[46];
                      v48 = v46[44];
                      v49 = v46[47];
                      v50 = v46[45];
                      v46[46] = v79;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 176LL) = v78;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 188LL) = v77;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 180LL) = v76;
                      GreMaskBlt(FiberData, v75, 0LL, 0, 0, 0LL, 0, 0, v88 << 16, 0);
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 184LL) = v47;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 176LL) = v48;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 188LL) = v49;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 180LL) = v50;
                      v39 = v90;
                    }
                    v53 = *(_QWORD *)(v69[0] + 976LL);
                    if ( *(_QWORD *)(v53 + 160) != v118 )
                    {
                      *(_QWORD *)(v53 + 160) = v118;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 152LL) |= 0x1000u;
                    }
                    v54 = *(_QWORD *)(v69[0] + 976LL);
                    if ( v39 != *(_DWORD *)(v54 + 192) )
                    {
                      *(_DWORD *)(v54 + 192) = v39;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 196LL) = (_DWORD)v83;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 152LL) |= 1u;
                    }
                    if ( (*(_DWORD *)(v69[0] + 120LL) & 1) != 0 )
                    {
                      v55 = *(_QWORD *)(v69[0] + 976LL);
                      if ( *(_QWORD *)(v55 + 248) )
                      {
                        if ( v68 != *(_DWORD *)(v55 + 256) )
                        {
                          *(_DWORD *)(v55 + 256) = v68;
                          *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 152LL) |= 1u;
                        }
                        if ( !v66 )
                          *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 152LL) &= ~0x40000u;
                      }
                    }
                    v33 = *(_QWORD *)(v69[0] + 976LL);
                    v34 = HIDWORD(v86);
                    if ( __PAIR64__(HIDWORD(v86), v30) != *(_QWORD *)(v33 + 324) )
                      goto LABEL_63;
                  }
                }
                goto LABEL_93;
              case 1:
                v86 = 0LL;
                if ( !v62 && (unsigned int)v10 >= 0x38 )
                {
                  if ( (PVOID *)p_Self != p_ArbitraryUserPointer )
                  {
                    if ( ((unsigned __int8)p_ArbitraryUserPointer & 7) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( p_Self > MmUserProbeAddress || p_Self < (unsigned __int64)p_ArbitraryUserPointer )
                      *(_BYTE *)MmUserProbeAddress = 0;
                  }
                  v108 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                  v20 = v108;
                  if ( v108 < 0xAAAAAAA && 24 * (unsigned __int64)v108 <= (unsigned int)(v10 - 48) )
                  {
                    v21 = *(_QWORD *)(v69[0] + 976LL);
                    v22 = *(_DWORD *)(v21 + 192);
                    v67 = *(_DWORD *)(v21 + 196);
                    v23 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                    v109 = v23;
                    v24 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                    v110 = v24;
                    v25 = *((_DWORD *)p_ArbitraryUserPointer + 5);
                    v111 = v25;
                    v26 = *((_DWORD *)p_ArbitraryUserPointer + 7);
                    v112 = v26;
                    v27 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                    v113 = v27;
                    v114 = *((_DWORD *)p_ArbitraryUserPointer + 6);
                    v28 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                    v115 = v28;
                    v65 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                    v116 = v65;
                    if ( v22 != v114 )
                    {
                      *(_DWORD *)(v21 + 192) = v114;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 196LL) = v28;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 152LL) |= 1u;
                    }
                    v29 = *(_QWORD *)(v69[0] + 976LL);
                    v83 = *(PVOID *)(v29 + 324);
                    v30 = (unsigned int)v83;
                    v86 = p_ArbitraryUserPointer[5];
                    v31 = HIDWORD(v86);
                    if ( v83 != v86 )
                    {
                      *(_DWORD *)(v29 + 324) = (_DWORD)v86;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 328LL) = v31;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 340LL) |= 0x2010u;
                    }
                    GrePolyPatBltInternal(
                      (struct XDCOBJ *)v69,
                      v65,
                      (struct _POLYPATBLT *)(p_ArbitraryUserPointer + 6),
                      v20,
                      v23,
                      v24,
                      v25,
                      v26,
                      v27);
                    v32 = *(_QWORD *)(v69[0] + 976LL);
                    if ( v22 != *(_DWORD *)(v32 + 192) )
                    {
                      *(_DWORD *)(v32 + 192) = v22;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 196LL) = v67;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 152LL) |= 1u;
                    }
                    v33 = *(_QWORD *)(v69[0] + 976LL);
                    v34 = HIDWORD(v83);
                    if ( __PAIR64__(HIDWORD(v83), v30) != *(_QWORD *)(v33 + 324) )
                    {
LABEL_63:
                      *(_DWORD *)(v33 + 324) = v30;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 328LL) = v34;
                      *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 340LL) |= 0x2010u;
                    }
                  }
                }
                goto LABEL_93;
              case 2:
                if ( !v62 )
                  GreBatchTextOut((struct XDCOBJ *)v69, (struct _BATCHTEXTOUT *)p_ArbitraryUserPointer, v10);
                goto LABEL_93;
              case 3:
                if ( !v62 )
                  GreBatchTextOutRect((struct XDCOBJ *)v69, (struct tagRECT *)p_ArbitraryUserPointer, v10);
                goto LABEL_93;
              case 4:
                v14 = 0;
                v72 = 0;
                v15 = 0;
                v81 = 0;
                if ( (unsigned int)v10 >= 0xC )
                {
                  v14 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                  v72 = v14;
                  v15 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                  v81 = v15;
                }
                else
                {
                  LODWORD(v8) = 0;
                }
                v12 = v63;
                if ( (_DWORD)v8 )
                {
                  v16 = (_DWORD *)v69[0];
                  *(_DWORD *)(v69[0] + 124LL) = v14;
                  v16[32] = v15;
                  v17 = v16[10] & 1;
                  if ( v17 )
                    v18 = v16[256];
                  else
                    v18 = v16[254];
                  v16[298] = v14 + v18;
                  if ( v17 )
                    v19 = v16[257];
                  else
                    v19 = v16[255];
                  v16[299] = v15 + v19;
                }
                break;
              case 5:
                v125 = 0LL;
                v11 = 0;
                v71 = 0;
                if ( (unsigned int)v10 >= 0x18 )
                {
                  v125 = *(struct _RECTL *)(p_ArbitraryUserPointer + 1);
                  v11 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                  v71 = v11;
                }
                else
                {
                  LODWORD(v8) = 0;
                }
                v12 = v63;
                if ( (_DWORD)v8 )
                {
                  DEVLOCKOBJ::vFlushSpriteUpdates((DEVLOCKOBJ *)v123, 0);
                  GreExtSelectClipRgnLocked((struct XDCOBJ *)v69, &v125, v11);
                }
                break;
              case 6:
                v93 = 0LL;
                if ( (unsigned int)v10 >= 0x10 )
                  v93 = p_ArbitraryUserPointer[1];
                else
                  LODWORD(v8) = 0;
                v12 = v63;
                if ( (_DWORD)v8 )
                  GreSelectFontInternal(FiberData);
                break;
              case 7:
                v13 = 0LL;
                v91 = 0LL;
                if ( (unsigned int)v10 >= 0x10 )
                {
                  v13 = p_ArbitraryUserPointer[1];
                  v91 = v13;
                }
                else
                {
                  v8 = 0LL;
                }
                v12 = v63;
                goto LABEL_24;
              case 8:
                v13 = 0LL;
                v92 = 0LL;
                if ( (unsigned int)v10 >= 0x10 )
                {
                  v13 = p_ArbitraryUserPointer[1];
                  v92 = v13;
                }
                else
                {
                  v8 = 0LL;
                }
                v12 = v63;
LABEL_24:
                if ( (_DWORD)v8 )
                  NtGdiDeleteObjectApp(v13, v8, v10, 0x1C0000000uLL);
                break;
              default:
LABEL_93:
                v12 = v63;
                break;
            }
            --StackLimit;
            p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + ((v12 + 7) & 0xFFFFFFF8));
            if ( !StackLimit )
              break;
          }
          while ( (unsigned __int64)p_ArbitraryUserPointer + 4 < p_Self );
          v56 = v85;
          LODWORD(v85[106].StackLimit) = 0;
          LODWORD(v56[13].SubSystemTib) &= 0x80000000;
          LODWORD(v56[13].SubSystemTib) = 0;
          *(_QWORD *)(*(_QWORD *)(v69[0] + 976LL) + 160LL) = v119;
          *(_DWORD *)(*(_QWORD *)(v69[0] + 976LL) + 152LL) |= 0x1000u;
        }
        if ( v62 )
          GreEnableAppContainerRestriction(1LL);
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v123);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v69);
    }
    if ( v82 )
    {
      while ( 1 )
      {
        v57 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
        v106 = v57;
        v58 = *(unsigned __int16 *)p_ArbitraryUserPointer;
        v80 = *(unsigned __int16 *)p_ArbitraryUserPointer;
        if ( (unsigned __int64)p_ArbitraryUserPointer + v58 > p_Self )
        {
LABEL_110:
          v61 = v85;
          LODWORD(v85[106].StackLimit) = 0;
          LODWORD(v61[13].SubSystemTib) &= 0x80000000;
          break;
        }
        v59 = v57 - 7;
        if ( v59 )
        {
          if ( v59 != 1 )
            goto LABEL_108;
          v94 = 0LL;
          v60 = p_ArbitraryUserPointer[1];
          v94 = v60;
        }
        else
        {
          v95 = 0LL;
          v60 = p_ArbitraryUserPointer[1];
          v95 = v60;
        }
        NtGdiDeleteObjectApp(v60, 1LL, a3, a4);
LABEL_108:
        --StackLimit;
        p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + (((_DWORD)v58 + 7) & 0xFFFFFFF8));
        if ( !StackLimit || (unsigned __int64)p_ArbitraryUserPointer + 4 >= p_Self )
          goto LABEL_110;
      }
    }
  }
  v85[13].FiberData = 0LL;
}
