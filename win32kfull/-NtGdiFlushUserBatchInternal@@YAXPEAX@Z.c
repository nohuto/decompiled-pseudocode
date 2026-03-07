void __fastcall NtGdiFlushUserBatchInternal(PVOID Parameter)
{
  struct _NT_TIB *Self; // rdx
  PVOID *p_ArbitraryUserPointer; // r13
  unsigned int v3; // ebx
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  __int64 v10; // r8
  int v11; // edi
  int v12; // ebx
  int v13; // eax
  int v14; // r9d
  _DWORD *v15; // rdx
  int v16; // r8d
  int v17; // ecx
  int v18; // eax
  PVOID v19; // rax
  unsigned int v20; // r9d
  __int64 v21; // rcx
  int v22; // edi
  unsigned int v23; // r10d
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
  int v35; // esi
  unsigned int v36; // edi
  __int64 v37; // rcx
  __int64 v38; // rdx
  int v39; // r14d
  int v40; // r8d
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // r8
  int v45; // rax^4
  int v46; // r8d
  int v47; // edx
  struct EXFORMOBJ *v48; // rdx
  struct SURFACE *v49; // rcx
  _DWORD *v50; // rcx
  int v51; // edi
  int v52; // esi
  int v53; // r14d
  int v54; // r15d
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  _DWORD *v58; // rax
  int v59; // ecx
  __int64 v60; // rbx
  int v61; // ecx
  PVOID v62; // rcx
  char v63; // [rsp+70h] [rbp-248h]
  int v64; // [rsp+74h] [rbp-244h]
  _QWORD v65[2]; // [rsp+78h] [rbp-240h] BYREF
  int v66; // [rsp+88h] [rbp-230h]
  char v67; // [rsp+8Ch] [rbp-22Ch]
  int v68; // [rsp+90h] [rbp-228h]
  PVOID *v69; // [rsp+98h] [rbp-220h]
  int StackLimit; // [rsp+A0h] [rbp-218h]
  unsigned int v71; // [rsp+A4h] [rbp-214h]
  int v72; // [rsp+A8h] [rbp-210h]
  ULONG64 p_Self; // [rsp+B0h] [rbp-208h]
  int v74; // [rsp+B8h] [rbp-200h]
  unsigned int v75; // [rsp+BCh] [rbp-1FCh]
  unsigned int v76; // [rsp+C0h] [rbp-1F8h]
  unsigned int v77; // [rsp+C4h] [rbp-1F4h]
  unsigned int v78; // [rsp+C8h] [rbp-1F0h]
  int v79; // [rsp+CCh] [rbp-1ECh]
  int v80; // [rsp+D0h] [rbp-1E8h]
  int v81; // [rsp+D4h] [rbp-1E4h]
  int v82; // [rsp+D8h] [rbp-1E0h]
  int v83; // [rsp+DCh] [rbp-1DCh]
  int v84; // [rsp+E0h] [rbp-1D8h]
  int v85; // [rsp+E4h] [rbp-1D4h]
  PVOID v86; // [rsp+E8h] [rbp-1D0h]
  HDC FiberData; // [rsp+F0h] [rbp-1C8h]
  PVOID v88; // [rsp+F8h] [rbp-1C0h]
  int v89; // [rsp+100h] [rbp-1B8h]
  unsigned int v90; // [rsp+104h] [rbp-1B4h]
  int v91; // [rsp+108h] [rbp-1B0h]
  _DWORD v92[2]; // [rsp+110h] [rbp-1A8h] BYREF
  _DWORD *p_SubSystemTib; // [rsp+118h] [rbp-1A0h]
  unsigned int v94; // [rsp+120h] [rbp-198h]
  PVOID v95; // [rsp+128h] [rbp-190h]
  PVOID v96; // [rsp+130h] [rbp-188h]
  PVOID v97; // [rsp+138h] [rbp-180h]
  PVOID v98; // [rsp+140h] [rbp-178h]
  PVOID v99; // [rsp+148h] [rbp-170h]
  PVOID *p_StackLimit; // [rsp+150h] [rbp-168h]
  struct _NT_TIB *v101; // [rsp+158h] [rbp-160h]
  unsigned int v102; // [rsp+160h] [rbp-158h]
  unsigned int v103; // [rsp+164h] [rbp-154h]
  unsigned int v104; // [rsp+168h] [rbp-150h]
  unsigned int v105; // [rsp+16Ch] [rbp-14Ch]
  int v106; // [rsp+170h] [rbp-148h]
  int v107; // [rsp+174h] [rbp-144h]
  int v108; // [rsp+178h] [rbp-140h]
  int v109; // [rsp+17Ch] [rbp-13Ch]
  int v110; // [rsp+180h] [rbp-138h]
  unsigned int v111; // [rsp+184h] [rbp-134h]
  unsigned int v112; // [rsp+188h] [rbp-130h]
  unsigned int v113; // [rsp+18Ch] [rbp-12Ch]
  unsigned int v114; // [rsp+190h] [rbp-128h]
  unsigned int v115; // [rsp+194h] [rbp-124h]
  unsigned int v116; // [rsp+198h] [rbp-120h]
  int v117; // [rsp+19Ch] [rbp-11Ch]
  int v118; // [rsp+1A0h] [rbp-118h]
  unsigned int v119; // [rsp+1A4h] [rbp-114h]
  int v120; // [rsp+1A8h] [rbp-110h]
  int v121; // [rsp+1ACh] [rbp-10Ch]
  int v122; // [rsp+1B0h] [rbp-108h]
  PVOID v123; // [rsp+1B8h] [rbp-100h]
  __int64 v124; // [rsp+1C0h] [rbp-F8h]
  __int64 v125; // [rsp+1C8h] [rbp-F0h]
  int v126; // [rsp+1D0h] [rbp-E8h]
  __int64 v127; // [rsp+1D8h] [rbp-E0h] BYREF
  int v128; // [rsp+1E4h] [rbp-D4h]
  PVOID v129; // [rsp+1E8h] [rbp-D0h]
  _BYTE v130[80]; // [rsp+1F0h] [rbp-C8h] BYREF
  _BYTE v131[48]; // [rsp+240h] [rbp-78h] BYREF
  _DWORD v132[2]; // [rsp+270h] [rbp-48h] BYREF
  int v133; // [rsp+278h] [rbp-40h]
  int v134; // [rsp+27Ch] [rbp-3Ch]
  struct _RECTL v135; // [rsp+280h] [rbp-38h] BYREF

  Self = KeGetPcr()->NtTib.Self;
  v101 = Self;
  v69 = 0LL;
  v83 = 1;
  p_StackLimit = &Self[106].StackLimit;
  StackLimit = (int)Self[106].StackLimit;
  p_ArbitraryUserPointer = &Self[13].ArbitraryUserPointer;
  v69 = &Self[13].ArbitraryUserPointer;
  LODWORD(Self[106].StackLimit) = 0;
  p_SubSystemTib = &Self[13].SubSystemTib;
  v3 = (__int64)Self[13].SubSystemTib & 0x80000000;
  LODWORD(Self[13].SubSystemTib) = v3;
  p_Self = (ULONG64)&Self[35].Self;
  if ( (unsigned int)(StackLimit - 1) <= 0x134 )
  {
    FiberData = 0LL;
    v67 = 1;
    FiberData = (HDC)v101[13].FiberData;
    v4 = v3 >> 31;
    v67 = v4;
    v101[13].FiberData = 0LL;
    *p_SubSystemTib = 0;
    if ( FiberData )
    {
      DCOBJ::DCOBJ((DCOBJ *)v65, FiberData);
      if ( v65[0] )
      {
        v6 = SGDGetSessionState(v5);
        EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v131, *(struct Gre::Full::SESSION_GLOBALS **)(v6 + 32));
        v7 = *(unsigned __int16 *)(v65[0] + 12LL);
        v92[0] = 23;
        v92[1] = v7;
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v130);
        v63 = 0;
        if ( (unsigned int)UserIsCurrentProcessImmersiveAppContainer() && !(_BYTE)v4 )
        {
          v63 = 1;
          GreEnableAppContainerRestriction(0LL);
        }
        if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v130, (struct XDCOBJ *)v65, 0) )
        {
          v83 = 0;
          v125 = *(_QWORD *)(*(_QWORD *)(v65[0] + 976LL) + 160LL);
          do
          {
            v66 = 0;
            v8 = 1;
            v68 = 1;
            v9 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
            v110 = v9;
            v10 = *(unsigned __int16 *)p_ArbitraryUserPointer;
            v64 = *(unsigned __int16 *)p_ArbitraryUserPointer;
            v66 = v64;
            if ( (unsigned __int64)p_ArbitraryUserPointer + v10 > p_Self )
              break;
            switch ( v9 )
            {
              case 0:
                if ( (unsigned int)v10 >= 0x48 && !v63 )
                {
                  v35 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                  v91 = v35;
                  v120 = v35;
                  v81 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                  v121 = v81;
                  v80 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                  v122 = v80;
                  v79 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                  v126 = v79;
                  v90 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                  v75 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                  v102 = v75;
                  v76 = *((_DWORD *)p_ArbitraryUserPointer + 10);
                  v103 = v76;
                  v77 = *((_DWORD *)p_ArbitraryUserPointer + 15);
                  v104 = v77;
                  v78 = *((_DWORD *)p_ArbitraryUserPointer + 16);
                  v105 = v78;
                  v36 = (BYTE2(v90) << 8) | BYTE2(v90);
                  v94 = v36;
                  v90 = v36;
                  if ( (((unsigned __int8)v36 ^ (unsigned __int8)(4 * v36)) & 0xCC) == 0 )
                  {
                    v124 = *(_QWORD *)(*(_QWORD *)(v65[0] + 976LL) + 160LL);
                    v72 = 0;
                    v71 = 0;
                    v123 = 0LL;
                    v129 = p_ArbitraryUserPointer[3];
                    GreDCSelectBrush(v65[0], v129);
                    v37 = v65[0];
                    v38 = *(_QWORD *)(v65[0] + 976LL);
                    v89 = *(_DWORD *)(v38 + 192);
                    v39 = v89;
                    LODWORD(v86) = *(_DWORD *)(v38 + 196);
                    v106 = *((_DWORD *)p_ArbitraryUserPointer + 11);
                    v40 = *((_DWORD *)p_ArbitraryUserPointer + 17);
                    v107 = v40;
                    if ( v89 != v106 )
                    {
                      *(_DWORD *)(v38 + 192) = v106;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 196LL) = v40;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 152LL) |= 1u;
                      v37 = v65[0];
                    }
                    if ( (*(_DWORD *)(v37 + 120) & 1) != 0 )
                    {
                      v41 = *(_QWORD *)(v37 + 976);
                      if ( *(_QWORD *)(v41 + 248) )
                      {
                        v42 = *(_DWORD *)(v41 + 152);
                        v71 = v42 & 0x40000;
                        *(_DWORD *)(v41 + 152) = v42 | 0x40000;
                        v37 = v65[0];
                        v43 = *(_QWORD *)(v65[0] + 976LL);
                        v72 = *(_DWORD *)(v43 + 256);
                        v108 = *((_DWORD *)p_ArbitraryUserPointer + 12);
                        if ( v72 != v108 )
                        {
                          *(_DWORD *)(v43 + 256) = v108;
                          *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 152LL) |= 1u;
                          v37 = v65[0];
                        }
                      }
                    }
                    v44 = *(_QWORD *)(v37 + 976);
                    v88 = *(PVOID *)(v44 + 324);
                    v30 = (unsigned int)v88;
                    v123 = *(PVOID *)((char *)p_ArbitraryUserPointer + 52);
                    v45 = HIDWORD(v123);
                    if ( v88 != v123 )
                    {
                      *(_DWORD *)(v44 + 324) = (_DWORD)v123;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 328LL) = v45;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 340LL) |= 0x2010u;
                    }
                    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v127, (struct XDCOBJ *)v65, 0x204u);
                    v46 = *(_DWORD *)(v127 + 32);
                    if ( (v46 & 1) != 0 )
                    {
                      v132[0] = v35;
                      v132[1] = v81;
                      v47 = v35 + v80;
                      v133 = v35 + v80;
                      v134 = v79 + v81;
                      if ( (v46 & 0x43) != 0x43 )
                      {
                        bCvtPts1(v127, v132, 2LL);
                        v47 = v133;
                        v35 = v132[0];
                      }
                      if ( v128 )
                      {
                        v132[0] = v35 + 1;
                        v133 = v47 + 1;
                      }
                      ERECTL::vOrder((ERECTL *)v132);
                      if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v132) )
                      {
                        if ( (*(_DWORD *)(v65[0] + 36LL) & 0xE0) != 0 )
                          XDCOBJ::vAccumulate((XDCOBJ *)v65, (struct ERECTL *)v132);
                        v49 = *(struct SURFACE **)(v65[0] + 496LL);
                        if ( v49 )
                          GrePatBltLockedDC(
                            (struct XDCOBJ *)v65,
                            v48,
                            (struct ERECTL *)v132,
                            v36,
                            v49,
                            v75,
                            v76,
                            v77,
                            v78);
                      }
                    }
                    else
                    {
                      v50 = *(_DWORD **)(v65[0] + 976LL);
                      v51 = v50[46];
                      v52 = v50[44];
                      v53 = v50[47];
                      v54 = v50[45];
                      v50[46] = v75;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 176LL) = v76;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 188LL) = v77;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 180LL) = v78;
                      GreMaskBlt(FiberData, v79, 0LL, 0, 0, 0LL, 0, 0, v94 << 16, 0);
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 184LL) = v51;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 176LL) = v52;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 188LL) = v53;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 180LL) = v54;
                      v39 = v89;
                    }
                    v55 = *(_QWORD *)(v65[0] + 976LL);
                    if ( *(_QWORD *)(v55 + 160) != v124 )
                    {
                      *(_QWORD *)(v55 + 160) = v124;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 152LL) |= 0x1000u;
                    }
                    v56 = *(_QWORD *)(v65[0] + 976LL);
                    if ( v39 != *(_DWORD *)(v56 + 192) )
                    {
                      *(_DWORD *)(v56 + 192) = v39;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 196LL) = (_DWORD)v86;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 152LL) |= 1u;
                    }
                    if ( (*(_DWORD *)(v65[0] + 120LL) & 1) != 0 )
                    {
                      v57 = *(_QWORD *)(v65[0] + 976LL);
                      if ( *(_QWORD *)(v57 + 248) )
                      {
                        if ( v72 != *(_DWORD *)(v57 + 256) )
                        {
                          *(_DWORD *)(v57 + 256) = v72;
                          *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 152LL) |= 1u;
                        }
                        if ( !v71 )
                          *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 152LL) &= ~0x40000u;
                      }
                    }
                    v33 = *(_QWORD *)(v65[0] + 976LL);
                    v34 = HIDWORD(v88);
                    if ( __PAIR64__(HIDWORD(v88), v30) != *(_QWORD *)(v33 + 324) )
                      goto LABEL_63;
                  }
                }
                goto LABEL_97;
              case 1:
                v88 = 0LL;
                if ( !v63 && (unsigned int)v10 >= 0x38 )
                {
                  if ( (PVOID *)p_Self != p_ArbitraryUserPointer )
                  {
                    if ( ((unsigned __int8)p_ArbitraryUserPointer & 7) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( p_Self > MmUserProbeAddress || p_Self < (unsigned __int64)p_ArbitraryUserPointer )
                      *(_BYTE *)MmUserProbeAddress = 0;
                  }
                  v111 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                  v20 = v111;
                  if ( v111 < 0xAAAAAAA && 24 * (unsigned __int64)v111 <= (unsigned int)(v10 - 48) )
                  {
                    v21 = *(_QWORD *)(v65[0] + 976LL);
                    v22 = *(_DWORD *)(v21 + 192);
                    v72 = *(_DWORD *)(v21 + 196);
                    v23 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                    v112 = v23;
                    v24 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                    v113 = v24;
                    v25 = *((_DWORD *)p_ArbitraryUserPointer + 5);
                    v114 = v25;
                    v26 = *((_DWORD *)p_ArbitraryUserPointer + 7);
                    v115 = v26;
                    v27 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                    v116 = v27;
                    v117 = *((_DWORD *)p_ArbitraryUserPointer + 6);
                    v28 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                    v118 = v28;
                    v71 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                    v119 = v71;
                    if ( v22 != v117 )
                    {
                      *(_DWORD *)(v21 + 192) = v117;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 196LL) = v28;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 152LL) |= 1u;
                    }
                    v29 = *(_QWORD *)(v65[0] + 976LL);
                    v86 = *(PVOID *)(v29 + 324);
                    v30 = (unsigned int)v86;
                    v88 = p_ArbitraryUserPointer[5];
                    v31 = HIDWORD(v88);
                    if ( v86 != v88 )
                    {
                      *(_DWORD *)(v29 + 324) = (_DWORD)v88;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 328LL) = v31;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 340LL) |= 0x2010u;
                    }
                    GrePolyPatBltInternal(
                      (struct XDCOBJ *)v65,
                      v71,
                      (struct _POLYPATBLT *)(p_ArbitraryUserPointer + 6),
                      v20,
                      v23,
                      v24,
                      v25,
                      v26,
                      v27);
                    v32 = *(_QWORD *)(v65[0] + 976LL);
                    if ( v22 != *(_DWORD *)(v32 + 192) )
                    {
                      *(_DWORD *)(v32 + 192) = v22;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 196LL) = v72;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 152LL) |= 1u;
                    }
                    v33 = *(_QWORD *)(v65[0] + 976LL);
                    v34 = HIDWORD(v86);
                    if ( __PAIR64__(HIDWORD(v86), v30) != *(_QWORD *)(v33 + 324) )
                    {
LABEL_63:
                      *(_DWORD *)(v33 + 324) = v30;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 328LL) = v34;
                      *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 340LL) |= 0x2010u;
                    }
                  }
                }
                goto LABEL_97;
              case 2:
                if ( !v63 )
                  GreBatchTextOut(
                    (struct XDCOBJ *)v65,
                    (struct _BATCHTEXTOUT *)p_ArbitraryUserPointer,
                    v10,
                    (const struct RFONTOBJ::Tag *)v92);
                goto LABEL_97;
              case 3:
                if ( !v63 )
                  GreBatchTextOutRect(
                    (struct XDCOBJ *)v65,
                    (struct _BATCHTEXTOUTRECT *)p_ArbitraryUserPointer,
                    v10,
                    (const struct RFONTOBJ::Tag *)v92);
                goto LABEL_97;
              case 4:
                v13 = 0;
                v74 = 0;
                v14 = 0;
                v82 = 0;
                if ( (unsigned int)v10 >= 0xC )
                {
                  v13 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                  v74 = v13;
                  v14 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                  v82 = v14;
                }
                else
                {
                  v8 = 0;
                  v68 = 0;
                }
                v12 = v64;
                if ( v8 )
                {
                  v15 = (_DWORD *)v65[0];
                  *(_DWORD *)(v65[0] + 124LL) = v13;
                  v15[32] = v14;
                  v16 = v15[10] & 1;
                  if ( v16 )
                    v17 = v15[256];
                  else
                    v17 = v15[254];
                  v15[298] = v13 + v17;
                  if ( v16 )
                    v18 = v15[257];
                  else
                    v18 = v15[255];
                  v15[299] = v14 + v18;
                }
                break;
              case 5:
                v135 = 0LL;
                v11 = 0;
                v85 = 0;
                if ( (unsigned int)v10 >= 0x18 )
                {
                  v135 = *(struct _RECTL *)(p_ArbitraryUserPointer + 1);
                  v11 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                  v85 = v11;
                }
                else
                {
                  v8 = 0;
                  v68 = 0;
                }
                v12 = v64;
                if ( v8 )
                {
                  DEVLOCKOBJ::vFlushSpriteUpdates((DEVLOCKOBJ *)v130, 0);
                  GreExtSelectClipRgnLocked((struct XDCOBJ *)v65, &v135, v11);
                }
                break;
              case 6:
                v19 = 0LL;
                v97 = 0LL;
                if ( (unsigned int)v10 >= 0x10 )
                {
                  v19 = p_ArbitraryUserPointer[1];
                  v97 = v19;
                }
                else
                {
                  v8 = 0;
                  v68 = 0;
                }
                v12 = v64;
                if ( v8 )
                  GreSelectFontInternal(FiberData, v19, 1LL);
                break;
              case 7:
                v95 = 0LL;
                if ( (unsigned int)v10 >= 0x10 )
                {
                  v95 = p_ArbitraryUserPointer[1];
                }
                else
                {
                  v8 = 0;
                  v68 = 0;
                }
                v12 = v64;
                goto LABEL_24;
              case 8:
                v96 = 0LL;
                if ( (unsigned int)v10 >= 0x10 )
                {
                  v96 = p_ArbitraryUserPointer[1];
                }
                else
                {
                  v8 = 0;
                  v68 = 0;
                }
                v12 = v64;
LABEL_24:
                if ( v8 )
                  ((void (*)(void))NtGdiDeleteObjectApp)();
                break;
              default:
LABEL_97:
                v12 = v64;
                break;
            }
            --StackLimit;
            p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + ((v12 + 7) & 0xFFFFFFF8));
            v69 = p_ArbitraryUserPointer;
            if ( !StackLimit )
              break;
          }
          while ( (unsigned __int64)p_ArbitraryUserPointer + 4 < p_Self );
          *(_DWORD *)p_StackLimit = 0;
          v58 = p_SubSystemTib;
          *p_SubSystemTib &= 0x80000000;
          *v58 = 0;
          *(_QWORD *)(*(_QWORD *)(v65[0] + 976LL) + 160LL) = v125;
          *(_DWORD *)(*(_QWORD *)(v65[0] + 976LL) + 152LL) |= 0x1000u;
        }
        if ( v63 )
          GreEnableAppContainerRestriction(1LL);
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v130);
        EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v131);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v65);
    }
    if ( v83 )
    {
      while ( 1 )
      {
        v59 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
        v109 = v59;
        v60 = *(unsigned __int16 *)p_ArbitraryUserPointer;
        v84 = *(unsigned __int16 *)p_ArbitraryUserPointer;
        if ( (unsigned __int64)p_ArbitraryUserPointer + v60 > p_Self )
        {
LABEL_114:
          *(_DWORD *)p_StackLimit = 0;
          *p_SubSystemTib &= 0x80000000;
          break;
        }
        v61 = v59 - 7;
        if ( v61 )
        {
          if ( v61 != 1 )
            goto LABEL_112;
          v98 = 0LL;
          v62 = p_ArbitraryUserPointer[1];
          v98 = v62;
        }
        else
        {
          v99 = 0LL;
          v62 = p_ArbitraryUserPointer[1];
          v99 = v62;
        }
        NtGdiDeleteObjectApp(v62, 1LL);
LABEL_112:
        --StackLimit;
        p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + (((_DWORD)v60 + 7) & 0xFFFFFFF8));
        v69 = p_ArbitraryUserPointer;
        if ( !StackLimit || (unsigned __int64)p_ArbitraryUserPointer + 4 >= p_Self )
          goto LABEL_114;
      }
    }
  }
  v101[13].FiberData = 0LL;
}
