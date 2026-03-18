/*
 * XREFs of VidSchiExecuteMmIoFlip @ 0x1C000FA10
 * Callers:
 *     VidSchUnwaitFlipQueue @ 0x1C0007760 (VidSchUnwaitFlipQueue.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C00126D0 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C0014F38 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C0017F30 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0042F8C (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C004A6C0 (-VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAU.c)
 * Callees:
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C000FF20 (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@K@Z @ 0x1C0010050 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_V.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x1C00109B0 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0010C40 (VidSchiCompleteFlipEntry.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C0011CB4 (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C00121E0 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C00133DC (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C0014E2C (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C001677C (VidSchiPropagatePresentHistoryToken.c)
 *     __security_check_cookie @ 0x1C0019900 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0019BB8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001ABC0 (memset.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001BDDE (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C002EE6C (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT_AUXILIARYPRESENTINFO@@@Z @ 0x1C003462C (-GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT.c)
 *     ?VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z @ 0x1C00350A0 (-VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z.c)
 *     McTemplateK0pqqpxqqqq_EtwWriteTransfer @ 0x1C00389E4 (McTemplateK0pqqpxqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer @ 0x1C0038EAC (McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer.c)
 *     ?VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C00482F0 (-VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiKeepInterruptTargetEnabledForFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@@Z @ 0x1C0049610 (-VidSchiKeepInterruptTargetEnabledForFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@.c)
 *     ?VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C004A5E4 (-VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH.c)
 *     ?VidSchiStallingFlipEntryUnblocked@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAI@Z @ 0x1C004A65C (-VidSchiStallingFlipEntryUnblocked@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSC.c)
 *     ?VidSchiUpdateHwPresentTimeForImmediateFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@I@Z @ 0x1C004ADD4 (-VidSchiUpdateHwPresentTimeForImmediateFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiExecuteMmIoFlip(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        volatile signed __int32 *a6,
        _BYTE *a7)
{
  __int64 v8; // rdi
  LARGE_INTEGER *v9; // r15
  LARGE_INTEGER *v10; // r14
  __int64 v11; // r13
  bool v12; // zf
  bool v13; // al
  int v14; // ebx
  LARGE_INTEGER v15; // rcx
  unsigned int v16; // r12d
  unsigned int v17; // ebx
  int v18; // edx
  LARGE_INTEGER *v19; // rcx
  LARGE_INTEGER *v20; // r8
  DWORD v21; // ecx
  unsigned int *v22; // rax
  int v23; // edx
  unsigned int v24; // r13d
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rbx
  int v28; // ecx
  __int64 v29; // r14
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rbx
  void *v33; // rcx
  _DWORD *v34; // rax
  unsigned int v35; // r13d
  unsigned int v36; // r10d
  int v37; // esi
  unsigned int v38; // eax
  __int64 v39; // r11
  int v41; // eax
  int v42; // r9d
  __int64 v43; // rcx
  LARGE_INTEGER v44; // rcx
  DWORD LowPart; // eax
  struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **v46; // rbx
  struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *QuadPart; // rcx
  unsigned int v48; // edx
  unsigned int v49; // r15d
  __int16 v50; // r8
  unsigned int v51; // r8d
  unsigned int v52; // edx
  int v53; // eax
  char v54; // cl
  int v55; // eax
  unsigned int v56; // r13d
  char v57; // cl
  unsigned int v58; // edi
  char v59; // bl
  int v60; // ecx
  DWORD v61; // eax
  _QWORD *v62; // rdx
  __int64 v63; // r9
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned int v66; // r8d
  __int64 v67; // rcx
  __int64 v68; // r9
  int *v69; // rdx
  int v70; // eax
  unsigned __int8 (__fastcall *v71)(void *); // rdx
  __int64 v72; // rax
  unsigned int v73; // edx
  struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *v74; // rcx
  __int64 v75; // rbx
  __int64 v76; // r11
  unsigned __int64 v77; // r9
  int v78; // ecx
  unsigned int v79; // r8d
  int v80; // eax
  int v81; // eax
  int v82; // ecx
  char v83; // cl
  unsigned int v84; // eax
  int v85; // edx
  char v86; // cl
  int v87; // eax
  __int64 v88; // rcx
  __int64 v89; // r9
  int *v90; // rdx
  int v91; // eax
  unsigned int v92; // edx
  int v93; // r10d
  __int64 v94; // r9
  __int64 v95; // rdx
  int *v96; // r8
  int v97; // eax
  LARGE_INTEGER v98; // rcx
  __int64 v99; // rax
  unsigned int i; // r9d
  __int64 v101; // r9
  __int64 v102; // rcx
  unsigned int v103; // eax
  __int64 v104; // r9
  __int64 v105; // rcx
  DWORD v106; // r9d
  _DWORD *v107; // r15
  int v108; // r13d
  int v109; // r10d
  int v110; // r11d
  LARGE_INTEGER v111; // rcx
  __int64 v112; // rax
  unsigned int v113; // edx
  int v114; // eax
  int v115; // ecx
  __int64 v116; // rcx
  char v117; // bl
  unsigned __int64 v118; // rdx
  LONG HighPart; // eax
  DWORD v120; // ecx
  unsigned int v121; // r8d
  __int64 v122; // rcx
  LARGE_INTEGER v123; // rax
  volatile signed __int32 *v124; // rax
  LARGE_INTEGER *v125; // rcx
  LARGE_INTEGER v126; // r9
  unsigned int v127; // r15d
  int v128; // edx
  __int64 v129; // rax
  _QWORD *v130; // rbx
  int v131; // r8d
  __int64 v132; // r9
  __int64 v133; // rcx
  __int64 v134; // r14
  unsigned int v135; // ebx
  int v136; // eax
  LARGE_INTEGER *v137; // r10
  __int64 v138; // rcx
  int v139; // ecx
  int v140; // r8d
  _BYTE *v141; // rax
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *FlipManagerAuxiliaryPresentInfo; // rax
  __int64 v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rcx
  int v146; // eax
  unsigned int v147; // ebx
  LARGE_INTEGER v148; // rcx
  LARGE_INTEGER v149; // rax
  __int64 v150; // rcx
  LARGE_INTEGER v151; // rbx
  int v152; // eax
  int v153; // r8d
  __int64 v154; // rdx
  __int64 v155; // rax
  __int64 v156; // rbx
  __int64 v157; // rdx
  unsigned int v158; // edx
  unsigned int v159; // r9d
  unsigned int v160; // edx
  int v161; // eax
  char v162; // cl
  unsigned int v163; // r10d
  char v164; // cl
  int v165; // eax
  __int64 v166; // rcx
  unsigned int v167; // ecx
  __int64 v168; // rcx
  __int64 v169; // r8
  REGHANDLE EtwHandle; // rax
  char v171; // cl
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-150h]
  PEVENT_DATA_DESCRIPTOR UserDataa; // [rsp+20h] [rbp-150h]
  _BYTE v174[4]; // [rsp+F0h] [rbp-80h] BYREF
  unsigned int v175; // [rsp+F4h] [rbp-7Ch]
  unsigned int v176; // [rsp+F8h] [rbp-78h]
  unsigned int v177; // [rsp+FCh] [rbp-74h]
  unsigned int v178; // [rsp+100h] [rbp-70h]
  char v179; // [rsp+104h] [rbp-6Ch] BYREF
  char v180[3]; // [rsp+105h] [rbp-6Bh] BYREF
  LARGE_INTEGER *v181; // [rsp+108h] [rbp-68h]
  __int64 v182; // [rsp+110h] [rbp-60h]
  __int64 v183; // [rsp+118h] [rbp-58h]
  volatile signed __int32 *v184; // [rsp+120h] [rbp-50h]
  int v185; // [rsp+128h] [rbp-48h] BYREF
  _BYTE *v186; // [rsp+130h] [rbp-40h] BYREF
  LARGE_INTEGER *v187; // [rsp+138h] [rbp-38h]
  __int64 v188; // [rsp+140h] [rbp-30h]
  __int64 v189; // [rsp+148h] [rbp-28h] BYREF
  int v190; // [rsp+150h] [rbp-20h]
  int v191; // [rsp+154h] [rbp-1Ch]
  unsigned int v192; // [rsp+158h] [rbp-18h]
  int v193; // [rsp+15Ch] [rbp-14h]
  int v194; // [rsp+160h] [rbp-10h]
  __int64 v195; // [rsp+168h] [rbp-8h]
  __int64 v196; // [rsp+170h] [rbp+0h]
  _QWORD v197[2]; // [rsp+178h] [rbp+8h] BYREF
  unsigned int v198; // [rsp+188h] [rbp+18h]
  unsigned int v199; // [rsp+18Ch] [rbp+1Ch]
  int v200; // [rsp+190h] [rbp+20h]
  unsigned int v201; // [rsp+194h] [rbp+24h]
  unsigned int v202; // [rsp+198h] [rbp+28h]
  _QWORD v203[2]; // [rsp+1A0h] [rbp+30h] BYREF
  unsigned int v204; // [rsp+1B0h] [rbp+40h]
  int v205; // [rsp+1B4h] [rbp+44h]
  __int64 v206; // [rsp+1B8h] [rbp+48h]
  int v207; // [rsp+1C0h] [rbp+50h]
  int v208; // [rsp+1C4h] [rbp+54h]
  __int64 v209; // [rsp+1C8h] [rbp+58h]
  __int64 v210; // [rsp+1D0h] [rbp+60h]
  __int64 v211; // [rsp+1D8h] [rbp+68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+1E0h] [rbp+70h] BYREF
  char v213; // [rsp+1F8h] [rbp+88h] BYREF
  _QWORD v214[268]; // [rsp+200h] [rbp+90h] BYREF

  v8 = a4;
  v195 = a1;
  v9 = (LARGE_INTEGER *)(a4 + 1384LL * a5);
  v184 = a6;
  v188 = a4;
  v10 = v9 + 15;
  v176 = a3;
  v177 = a5;
  v11 = *(_QWORD *)(a2 + 8LL * a3 + 3200);
  *a7 = 0;
  v12 = *(_BYTE *)(a2 + 59) == 0;
  v186 = a7;
  v196 = a3;
  v189 = v11;
  v187 = v9;
  if ( !v12 )
  {
    if ( !v9[177].QuadPart )
      v9[177] = KeQueryPerformanceCounter(0LL);
    v44 = v9[177];
    if ( v44.QuadPart <= *(_QWORD *)(v8 + 104) )
      v44 = *(LARGE_INTEGER *)(v8 + 104);
    v9[177] = v44;
  }
  v13 = *(_DWORD *)(v11 + 4) == 3 || (v9[157].LowPart & 0x100) != 0;
  v174[0] = v13;
  v14 = 11;
  if ( !v13 )
    v14 = 5;
  v185 = v14;
  memset(v214, 0, 0x858uLL);
  if ( VidSchiCheckPendingFlipsForThisEntry(
         (struct _VIDSCH_GLOBAL *)a2,
         (struct _VIDSCH_PRESENT_INFO *)v11,
         (struct _VIDSCH_FLIP_QUEUE_ENTRY *)&v9[15],
         (struct VIDSCH_FLIP_QUEUE *)v8) )
  {
    v17 = v177;
    goto LABEL_61;
  }
  if ( *(_DWORD *)(a2 + 3012) || (v15 = v9[145], *(_BYTE *)(v15.QuadPart + 204)) )
  {
LABEL_176:
    v20 = v9 + 157;
    v181 = v9 + 157;
    *(_BYTE *)v184 = 1;
    goto LABEL_16;
  }
  v16 = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v15.QuadPart + 200), 0, 0) )
  {
    v14 = v185;
    goto LABEL_176;
  }
  if ( *(_BYTE *)(a2 + 156) )
  {
    v17 = v177;
    VidSchiExecuteMmIoFlipMultiPlaneOverlay3(
      (struct _VIDSCH_GLOBAL *)a2,
      v176,
      (struct VIDSCH_FLIP_QUEUE *)v8,
      (struct _VIDSCH_CALL_EXECUTE_FLIP *)v214,
      (enum _VIDSCH_FLIP_STATUS *)&v185,
      v177);
LABEL_13:
    v18 = v214[265];
    v19 = v10 + 147;
    v20 = v10 + 142;
    v184 = (volatile signed __int32 *)&v10[147];
    v181 = v10 + 142;
    goto LABEL_14;
  }
  LowPart = v9[157].LowPart;
  v46 = (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)&v9[162];
  QuadPart = (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)v9[162].QuadPart;
  v181 = v9 + 157;
  v184 = (volatile signed __int32 *)&v9[162];
  if ( (LowPart & 0x10) == 0 )
  {
    v117 = v176;
    LODWORD(v214[1]) = v176;
    v214[0] = a2;
    VidSchiBindFlipPhysicalAddress(QuadPart, 0, 0);
    v118 = v9[162].QuadPart;
    HIDWORD(v214[1]) = *(unsigned __int16 *)(*(_DWORD *)(v118 + 4) * ((8 * *(_DWORD *)(v118 + 8) + 231) & 0xFFFFFFF8)
                                           + v118
                                           + 32);
    v214[2] = *(_QWORD *)(*(_DWORD *)(v118 + 4) * ((8 * *(_DWORD *)(v118 + 8) + 231) & 0xFFFFFFF8) + v118 + 40);
    HighPart = v9[157].HighPart;
    v214[3] = *(_QWORD *)(*(_DWORD *)(v118 + 4) * ((8 * *(_DWORD *)(v118 + 8) + 231) & 0xFFFFFFF8) + v118 + 24);
    v120 = v9[157].LowPart;
    LODWORD(v214[265]) = -1073741823;
    v121 = v214[70] & 0xFFFFFF07 | (4 * (v120 & 0x20 | (2 * (v120 & 0xF))));
    v214[70] = __PAIR64__(HighPart, v121);
    v122 = *(_QWORD *)(v118 + 200);
    v184 = (volatile signed __int32 *)v122;
    if ( v122 )
    {
      LODWORD(v214[263]) = *(_DWORD *)(v122 + 8);
      v214[264] = v122 + 16;
    }
    v123 = v9[160];
    v181 = (LARGE_INTEGER *)v123.QuadPart;
    if ( v123.QuadPart )
    {
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v123.QuadPart + 16), &LockHandle);
      v124 = v184;
      if ( v184 )
        _InterlockedIncrement(v184 + 3);
      v125 = v181;
      if ( v181[1].QuadPart )
      {
        CRefCountedBuffer::RefCountedBufferRelease((PVOID)v181[1].QuadPart);
        v124 = v184;
        v125 = v181;
      }
      v125[1].QuadPart = (LONGLONG)v124;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v121 = v214[70];
    }
    LODWORD(v214[4]) = v9[151].LowPart;
    if ( LODWORD(v214[4]) )
    {
      v126 = v9[162];
      v127 = 0;
      do
      {
        v128 = *(_DWORD *)(v126.QuadPart + 4);
        LODWORD(v122) = v127;
        v129 = v128 * ((8 * *(_DWORD *)(v126.QuadPart + 8) + 231) & 0xFFFFFFF8);
        v118 = (unsigned __int64)(v127 * v128) << 6;
        v214[v127 + 5] = *(_QWORD *)(v118 + v126.QuadPart + v129 + 16);
        if ( v127 )
        {
          v130 = &v214[3 * v127 + 68];
          *v130 = *(_QWORD *)(((unsigned __int64)(v127 * *(_DWORD *)(v126.QuadPart + 4)) << 6)
                            + v126.QuadPart
                            + *(_DWORD *)(v126.QuadPart + 4) * ((8 * *(_DWORD *)(v126.QuadPart + 8) + 231) & 0xFFFFFFF8)
                            + 24);
          VidSchiBindFlipPhysicalAddress((struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)v126.QuadPart, 0, v127);
          v126 = v10[147];
          *((_WORD *)v130 + 4) = *(_WORD *)(((unsigned __int64)(v127 * *(_DWORD *)(v126.QuadPart + 4)) << 6)
                                          + v126.QuadPart
                                          + *(_DWORD *)(v126.QuadPart + 4)
                                          * ((8 * *(_DWORD *)(v126.QuadPart + 8) + 231) & 0xFFFFFFF8)
                                          + 32);
          v122 = *(_QWORD *)(((unsigned __int64)(v127 * *(_DWORD *)(v126.QuadPart + 4)) << 6)
                           + v126.QuadPart
                           + *(_DWORD *)(v126.QuadPart + 4) * ((8 * *(_DWORD *)(v126.QuadPart + 8) + 231) & 0xFFFFFFF8)
                           + 40);
          v130[2] = v122;
        }
        ++v127;
      }
      while ( v127 < v10[136].LowPart );
      v121 = v214[70];
      v9 = v187;
      v117 = v176;
    }
    if ( v174[0] )
      v131 = v121 | 2;
    else
      v131 = v121 | 4;
    LODWORD(v214[70]) = v131;
    if ( bTracingEnabled && Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0pqqpxqqqq_EtwWriteTransfer(
        v122,
        v118,
        v131,
        *(_QWORD *)(a2 + 16),
        v117,
        v10[131].LowPart,
        v214[3],
        v214[2],
        SBYTE4(v214[1]),
        v10[132].LowPart,
        v10[135].LowPart,
        v131);
    v132 = *(unsigned int *)(a2 + 32);
    v133 = *(_QWORD *)(a2 + 24);
    v179 = 0;
    DpSynchronizeExecution(v133, VidSchiExecuteMmIoFlipAtISR, v214, v132, &v179);
    v17 = v177;
    goto LABEL_13;
  }
  v48 = *(_DWORD *)QuadPart;
  v49 = 0;
  v50 = *(_DWORD *)QuadPart;
  v175 = 0;
  v51 = v50 & 0x3FF;
  v52 = (v48 >> 10) & 0x3FF;
  v178 = v51;
  v12 = !_BitScanForward((unsigned int *)&v53, v51);
  v54 = -1;
  LODWORD(v183) = v52;
  v190 = v53;
  if ( !v12 )
    v54 = v53;
  v12 = !_BitScanForward((unsigned int *)&v55, v52);
  v56 = v54;
  v57 = -1;
  v191 = v55;
  if ( !v12 )
    v57 = v55;
  v58 = v57;
  while ( v51 || v52 )
  {
    v182 = a2 + 120LL * v49;
    memset((void *)(v182 + 3584), 0, 0x70uLL);
    v72 = v182;
    if ( v56 >= v58 )
    {
      v85 = v183;
      v51 = v178;
      *(_DWORD *)(v182 + 3576) = v58;
      *(_DWORD *)(v72 + 3580) = 0;
      v86 = -1;
      v52 = ~(1 << v58) & v85;
      v12 = !_BitScanForward((unsigned int *)&v72, v52);
      LODWORD(v183) = v52;
      v193 = v87;
      if ( !v12 )
        v86 = v72;
      v58 = v86;
    }
    else
    {
      v73 = v175;
      *(_DWORD *)(v182 + 3576) = v56;
      *(_DWORD *)(v72 + 3580) = 1;
      v74 = *v46;
      v75 = (__int64)*v46 + v73 * ((8 * *((_DWORD *)*v46 + 2) + 231) & 0xFFFFFFF8) + 160;
      VidSchiBindFlipPhysicalAddress(v74, v73, 0);
      v76 = v182;
      v77 = (unsigned __int64)v175 << 6;
      *(_DWORD *)(v182 + 3584) = *(unsigned __int16 *)(v77
                                                     + *(_DWORD *)(v10[147].QuadPart + 4)
                                                     * ((8 * *(_DWORD *)(v10[147].QuadPart + 8) + 231) & 0xFFFFFFF8)
                                                     + v10[147].QuadPart
                                                     + 32);
      *(_QWORD *)(v76 + 3592) = *(_QWORD *)(v77
                                          + *(_DWORD *)(v10[147].QuadPart + 4)
                                          * ((8 * *(_DWORD *)(v10[147].QuadPart + 8) + 231) & 0xFFFFFFF8)
                                          + v10[147].QuadPart
                                          + 40);
      *(_QWORD *)(120 * (v49 + 30LL) + a2) = *(_QWORD *)(v77
                                                       + *(_DWORD *)(v10[147].QuadPart + 4)
                                                       * ((8 * *(_DWORD *)(v10[147].QuadPart + 8) + 231) & 0xFFFFFFF8)
                                                       + v10[147].QuadPart
                                                       + 24);
      v78 = *(_DWORD *)(v76 + 3608) ^ (*(_DWORD *)(v75 + 28) ^ *(_DWORD *)(v76 + 3608)) & 1;
      *(_DWORD *)(v76 + 3608) = v78;
      *(_DWORD *)(v76 + 3608) = v78 ^ (*(_DWORD *)(v75 + 28) ^ v78) & 2;
      *(_DWORD *)(v76 + 3612) = (unsigned __int16)*(_DWORD *)v75;
      *(_DWORD *)(v76 + 3616) = (unsigned __int16)*(_DWORD *)(v75 + 4);
      *(_DWORD *)(v76 + 3620) = *(unsigned __int16 *)(v75 + 2);
      *(_DWORD *)(v76 + 3624) = *(unsigned __int16 *)(v75 + 6);
      *(_DWORD *)(v76 + 3628) = *(__int16 *)(v75 + 8);
      *(_DWORD *)(v76 + 3632) = *(__int16 *)(v75 + 12);
      *(_DWORD *)(v76 + 3636) = *(unsigned __int16 *)(v75 + 10);
      *(_DWORD *)(v76 + 3640) = *(unsigned __int16 *)(v75 + 14);
      *(_DWORD *)(v76 + 3644) = (unsigned __int16)*(_DWORD *)(v75 + 16);
      *(_DWORD *)(v76 + 3648) = (unsigned __int16)*(_DWORD *)(v75 + 20);
      *(_DWORD *)(v76 + 3652) = *(unsigned __int16 *)(v75 + 18);
      *(_DWORD *)(v76 + 3656) = *(unsigned __int16 *)(v75 + 22);
      v79 = v178;
      v80 = ((*(_DWORD *)(v75 + 28) >> 3) & 3) + 1;
      ++v175;
      *(_DWORD *)(v76 + 3660) = v80;
      v52 = v183;
      *(_DWORD *)(v76 + 3664) ^= (*(_DWORD *)(v76 + 3664) ^ (*(_DWORD *)(v75 + 28) >> 2)) & 1;
      *(_DWORD *)(v76 + 3668) = (*(_DWORD *)(v75 + 28) >> 5) & 3;
      v81 = *(_DWORD *)(v76 + 3672) ^ (*(_DWORD *)(v76 + 3672) ^ (*(_DWORD *)(v75 + 28) >> 7)) & 1;
      *(_DWORD *)(v76 + 3672) = v81;
      v82 = v81 ^ ((unsigned __int8)v81 ^ (unsigned __int8)(*(_DWORD *)(v75 + 28) >> 7)) & 2;
      *(_DWORD *)(v76 + 3672) = v82;
      *(_DWORD *)(v76 + 3672) = v82 ^ ((unsigned __int8)v82 ^ (unsigned __int8)(*(_DWORD *)(v75 + 28) >> 7)) & 4;
      *(_DWORD *)(v76 + 3676) = (*(_DWORD *)(v75 + 28) >> 10) & 7;
      *(_DWORD *)(v76 + 3680) = (*(_DWORD *)(v75 + 28) >> 13) & 1;
      *(_DWORD *)(v76 + 3684) = (*(_DWORD *)(v75 + 28) >> 14) & 1;
      v84 = *(_DWORD *)(v75 + 28);
      v46 = (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)&v10[147];
      *(_DWORD *)(v76 + 3688) = (v84 >> 15) & 3;
      v83 = -1;
      v51 = ~(1 << v56) & v79;
      v12 = !_BitScanForward(&v84, v51);
      v178 = v51;
      v192 = v84;
      if ( !v12 )
        v83 = v84;
      v56 = v83;
    }
    ++v49;
  }
  v59 = v176;
  v8 = v188;
  v11 = v189;
  v60 = (LOBYTE(v214[67]) ^ (unsigned __int8)(8 * v10[142].LowPart)) & 0x38;
  LODWORD(v214[70]) = v10[142].HighPart;
  v61 = v10[136].LowPart;
  v175 = v49;
  v9 = v187;
  v214[0] = a2;
  HIDWORD(v214[67]) = v176;
  LODWORD(v214[67]) = LODWORD(v214[67]) ^ v60 | 4;
  LODWORD(v214[265]) = -1073741823;
  v178 = v61;
  LODWORD(v214[1]) = v61;
  if ( v61 )
  {
    v62 = &v214[2];
    v63 = v61;
    do
    {
      v64 = *(_QWORD *)((char *)v62++ + (char *)v10 - (char *)&v214[2]);
      *(v62 - 1) = *(_QWORD *)(v64 + 64);
      --v63;
    }
    while ( v63 );
    v178 = v214[1];
  }
  v65 = *(_QWORD *)(a2 + 16);
  v174[0] = 0;
  if ( *(_BYTE *)(v65 + 2834) )
  {
    v183 = v175;
    memset((void *)(a2 + 4776), 0, 112LL * v175);
    v66 = v175;
    if ( v175 )
    {
      v67 = a2 + 4780;
      v68 = v175;
      v69 = (int *)(a2 + 3580);
      do
      {
        *(_DWORD *)(v67 - 4) = *(v69 - 1);
        v70 = *v69;
        *(_DWORD *)v67 = *v69;
        if ( v70 )
        {
          *(_DWORD *)(v67 + 4) = v69[1];
          *(_QWORD *)(v67 + 12) = *(_QWORD *)(v69 + 3);
          *(_QWORD *)(v67 + 20) = *(_QWORD *)(v69 + 5);
          *(_DWORD *)(v67 + 28) = v69[7];
          *(_OWORD *)(v67 + 32) = *((_OWORD *)v69 + 2);
          *(_OWORD *)(v67 + 48) = *((_OWORD *)v69 + 3);
          *(_DWORD *)(v67 + 64) = v69[20];
          *(_DWORD *)(v67 + 68) = v69[21];
          *(_DWORD *)(v67 + 72) = 0;
          *(_QWORD *)(v67 + 76) = 0LL;
          *(_DWORD *)(v67 + 84) = v69[22];
          *(_DWORD *)(v67 + 88) = v69[23];
          *(_DWORD *)(v67 + 92) = v69[24];
          *(_DWORD *)(v67 + 96) = v69[25];
          *(_DWORD *)(v67 + 100) = v69[26];
          *(_DWORD *)(v67 + 104) = v69[27];
        }
        v69 += 30;
        v67 += 112LL;
        --v68;
      }
      while ( v68 );
    }
    goto LABEL_85;
  }
  if ( *(_BYTE *)(v65 + 2835) )
  {
    v183 = v175;
    memset((void *)(a2 + 4776), 0, (unsigned __int64)v175 << 7);
    v66 = v175;
    if ( v175 )
    {
      v88 = a2 + 4780;
      v89 = v175;
      v90 = (int *)(a2 + 3580);
      do
      {
        *(_DWORD *)(v88 - 4) = *(v90 - 1);
        v91 = *v90;
        *(_DWORD *)v88 = *v90;
        if ( v91 )
        {
          *(_DWORD *)(v88 + 4) = v90[1];
          *(_QWORD *)(v88 + 12) = *(_QWORD *)(v90 + 3);
          *(_QWORD *)(v88 + 20) = *(_QWORD *)(v90 + 5);
          *(_DWORD *)(v88 + 28) = v90[7];
          *(_OWORD *)(v88 + 32) = *((_OWORD *)v90 + 2);
          *(_OWORD *)(v88 + 48) = *((_OWORD *)v90 + 3);
          *(_OWORD *)(v88 + 64) = *((_OWORD *)v90 + 4);
          *(_DWORD *)(v88 + 80) = v90[20];
          *(_DWORD *)(v88 + 84) = v90[21];
          *(_DWORD *)(v88 + 88) = 0;
          *(_QWORD *)(v88 + 92) = 0LL;
          *(_DWORD *)(v88 + 100) = v90[22];
          *(_DWORD *)(v88 + 104) = v90[23];
          *(_DWORD *)(v88 + 108) = v90[24];
          *(_DWORD *)(v88 + 112) = v90[25];
          *(_DWORD *)(v88 + 116) = v90[26];
          *(_DWORD *)(v88 + 120) = v90[27];
        }
        v90 += 30;
        v88 += 128LL;
        --v89;
      }
      while ( v89 );
      LODWORD(v214[68]) = v66;
      v71 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR;
      goto LABEL_112;
    }
LABEL_85:
    LODWORD(v214[68]) = v66;
    v71 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR;
LABEL_112:
    v101 = *(unsigned int *)(a2 + 32);
    v102 = *(_QWORD *)(a2 + 24);
    v214[69] = a2 + 4776;
    DpSynchronizeExecution(v102, v71, v214, v101, v174);
    v103 = v175;
    goto LABEL_114;
  }
  if ( *(_BYTE *)(v65 + 2836) && *(_QWORD *)(v65 + 992) )
  {
    v183 = v175;
    memset((void *)(a2 + 4776), 0, (unsigned __int64)v175 << 7);
    v92 = v175;
    v93 = 0;
    if ( v175 )
    {
      v94 = v183;
      v95 = a2 + 4780;
      v96 = (int *)(a2 + 3580);
      do
      {
        *(_DWORD *)(v95 - 4) = *(v96 - 1);
        v97 = *v96;
        *(_DWORD *)v95 = *v96;
        if ( v97 )
        {
          *(_DWORD *)(v95 + 4) = v96[1];
          *(_QWORD *)(v95 + 12) = *(_QWORD *)(v96 + 3);
          *(_QWORD *)(v95 + 20) = *(_QWORD *)(v96 + 5);
          *(_DWORD *)(v95 + 28) = v96[7];
          *(_OWORD *)(v95 + 32) = *((_OWORD *)v96 + 2);
          *(_OWORD *)(v95 + 48) = *((_OWORD *)v96 + 3);
          *(_OWORD *)(v95 + 64) = *((_OWORD *)v96 + 4);
          *(_DWORD *)(v95 + 80) = v96[20];
          *(_DWORD *)(v95 + 84) = v96[21];
          *(_DWORD *)(v95 + 88) = v96[22];
          *(_DWORD *)(v95 + 96) = v96[24];
          *(_DWORD *)(v95 + 100) = v96[25];
          *(_DWORD *)(v95 + 104) = v96[26];
          *(_DWORD *)(v95 + 108) = v96[27];
          *(_DWORD *)(v95 + 112) = v96[28];
          *(_DWORD *)(v95 + 116) = 0;
          v98 = v10[147];
          v99 = v93 * ((8 * *(_DWORD *)(v98.QuadPart + 8) + 231) & 0xFFFFFFF8);
          ++v93;
          *(_DWORD *)(v95 + 92) = *(_DWORD *)(v99 + v98.QuadPart + 184);
        }
        v96 += 30;
        v95 += 128LL;
        --v94;
      }
      while ( v94 );
      v92 = v175;
    }
    for ( i = 0; i < v178; ++i )
      ;
    LODWORD(v214[68]) = v92;
    v71 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR2;
    goto LABEL_112;
  }
  v104 = *(unsigned int *)(a2 + 32);
  v105 = *(_QWORD *)(a2 + 24);
  LODWORD(v214[68]) = v175;
  v214[69] = a2 + 3576;
  DpSynchronizeExecution(v105, VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR, v214, v104, v174);
  v103 = v175;
  v183 = v175;
LABEL_114:
  v20 = v10 + 142;
  if ( bTracingEnabled && v103 )
  {
    v106 = v10[131].LowPart;
    v107 = (_DWORD *)(a2 + 3648);
    v108 = 0;
    do
    {
      v109 = *(v107 - 17);
      LOBYTE(v110) = 0;
      v178 = 0;
      if ( v109 )
      {
        v111 = v10[147];
        v112 = v108 * ((8 * *(_DWORD *)(v111.QuadPart + 8) + 231) & 0xFFFFFFF8);
        ++v108;
        v110 = *(_DWORD *)(v112 + v111.QuadPart + 184);
        v178 = *(_DWORD *)(v112 + v111.QuadPart + 192);
      }
      if ( (v20->LowPart & 0x10) != 0 )
        v113 = ((unsigned __int16)*(_DWORD *)v10[147].QuadPart | (unsigned __int16)(*(_DWORD *)v10[147].QuadPart >> 10)) & 0x3FF;
      else
        v113 = (1 << *(_DWORD *)(a2 + 152)) - 1;
      v12 = !_BitScanForward((unsigned int *)&v114, v113);
      v115 = -1;
      HIDWORD(v182) = v106;
      v194 = v114;
      if ( !v12 )
        v115 = v114;
      LODWORD(v182) = (char)v115;
      if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
      {
        McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer(
          v115,
          v113,
          (_DWORD)v20,
          *(_QWORD *)(a2 + 16),
          v59,
          *(v107 - 18),
          v182,
          *((_QWORD *)v107 - 6),
          *((_QWORD *)v107 - 7),
          *(v107 - 16),
          v10[132].LowPart,
          v10[135].LowPart,
          *(v107 - 9),
          *(v107 - 7),
          *(v107 - 8),
          *(v107 - 6),
          *(v107 - 5),
          *(v107 - 3),
          *(v107 - 4),
          *(v107 - 2),
          *(v107 - 1),
          v107[1],
          *v107,
          v107[2],
          v110,
          5,
          v109,
          v178,
          0);
        v106 = v10[131].LowPart;
        v20 = v10 + 142;
      }
      v107 += 30;
      --v183;
    }
    while ( v183 );
    v9 = v187;
    v11 = v189;
  }
  v18 = v214[265];
  if ( LODWORD(v214[265]) )
  {
    v116 = *(_QWORD *)(a2 + 16);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 11LL, SLODWORD(v214[265]), v214, v116);
    __debugbreak();
  }
  v17 = v177;
  v19 = v10 + 147;
LABEL_14:
  if ( v18 < 0 )
  {
    if ( v18 == -1073741811 )
    {
      if ( (v20->LowPart & 0x10) != 0 || (v214[70] & 0x40) == 0 )
      {
        WdLogSingleEntry0(1LL);
        ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Driver failed SetVidPnSourceAddress for unknown reason",
          21884LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        v134 = v196;
        WdLogSingleEntry2(
          1LL,
          *(_QWORD *)(*(_DWORD *)(v19->QuadPart + 4) * ((8 * *(_DWORD *)(v19->QuadPart + 8) + 231) & 0xFFFFFFF8)
                    + v19->QuadPart
                    + 24),
          v196);
        ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, _QWORD, __int64, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Driver failed SetVidPnSourceAddress - cannot flip to DirectFlip resource",
          *(_QWORD *)(*(_DWORD *)(*(_QWORD *)v184 + 4LL) * ((8 * *(_DWORD *)(*(_QWORD *)v184 + 8LL) + 231) & 0xFFFFFFF8)
                    + *(_QWORD *)v184
                    + 24LL),
          v134,
          0LL,
          0LL,
          0LL);
      }
      LODWORD(UserDataa) = v17;
      VidSchiUpdateFlipQueueHistory(2LL, a2, v176, v8, UserDataa);
      return 3221225485LL;
    }
    if ( v18 == -2147483631 )
    {
      v42 = v214[2];
      goto LABEL_158;
    }
    if ( *(_BYTE *)(*(_QWORD *)(a2 + 16) + 2866LL) && v18 == -1073741267 )
    {
      v42 = v214[2];
      if ( (v214[2] & 2) == 0 )
      {
        v20->LowPart |= 0x10000u;
        v43 = 1LL;
        v10[131].HighPart = 13;
LABEL_59:
        LODWORD(UserData) = v17;
        VidSchiUpdateFlipQueueHistory(v43, a2, v176, v8, UserData);
        return 259LL;
      }
LABEL_158:
      LODWORD(UserData) = v17;
      v135 = v176;
      v136 = (v20->LowPart ^ (v42 << 16)) & 0x10000;
      v10[131].HighPart = 14;
      v20->LowPart ^= v136;
      v20->LowPart ^= (v20->LowPart ^ (v42 << 15)) & 0x20000 ^ (v20->LowPart ^ (v20->LowPart ^ (v42 << 15)) & 0x20000 ^ (v42 << 15)) & 0x40000;
      VidSchiUpdateFlipQueueHistory(5LL, a2, v135, v8, UserData);
      v137 = v181;
      if ( (v181->LowPart & 0x20000) != 0 )
      {
        if ( !*(_BYTE *)(v8 + 80) )
          goto LABEL_171;
        if ( (v181->LowPart & 0x40000) != 0 )
        {
          if ( *(_DWORD *)(a2 + 40) )
          {
            do
            {
              v138 = *(_QWORD *)(a2 + 8LL * v16 + 3200);
              if ( v138 && *(_DWORD *)(v138 + 3088) )
                VidSchiCancelAndRequeueIndependentFlips((struct _VIDSCH_GLOBAL *)a2, v16);
              ++v16;
            }
            while ( v16 < *(_DWORD *)(a2 + 40) );
          }
        }
        else
        {
          VidSchiCancelAndRequeueIndependentFlips((struct _VIDSCH_GLOBAL *)a2, v135);
        }
        if ( VidSchiStallingFlipEntryUnblocked(
               (struct _VIDSCH_GLOBAL *)a2,
               (struct _VIDSCH_PRESENT_INFO *)v11,
               (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v10,
               0LL) )
        {
          v141 = v186;
          v10[131].HighPart = 4;
          *v141 = 1;
          if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
            McTemplateK0pqq_EtwWriteTransfer(
              v139,
              (unsigned int)&MmIoFlipResubmit,
              v140,
              *(_QWORD *)(a2 + 16),
              v135,
              v10[131].LowPart);
        }
        else
        {
LABEL_171:
          if ( (v137->LowPart & 0x40000) != 0 )
            *(_QWORD *)(a2 + 3552) = v10;
          else
            *(_QWORD *)(v11 + 120) = v10;
        }
      }
      VidSchiKeepInterruptTargetEnabledForFlip(
        (struct _VIDSCH_GLOBAL *)a2,
        (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v10,
        (struct _VIDSCH_PRESENT_INFO *)v11);
      return 259LL;
    }
LABEL_61:
    v43 = 2LL;
    goto LABEL_59;
  }
  v14 = v185;
LABEL_16:
  if ( *(LARGE_INTEGER **)(v11 + 120) == v10 )
    *(_QWORD *)(v11 + 120) = 0LL;
  if ( *(LARGE_INTEGER **)(a2 + 3552) == v10 )
    *(_QWORD *)(a2 + 3552) = 0LL;
  LOBYTE(v21) = v20->LowPart;
  if ( (v21 & 0x20) != 0 && v10[144].QuadPart && (v20->LowPart & 0x100000) == 0 )
  {
    FlipManagerAuxiliaryPresentInfo = GetFlipManagerAuxiliaryPresentInfo((struct _D3DKMT_AUXILIARYPRESENTINFO *)v10[166].QuadPart);
    if ( FlipManagerAuxiliaryPresentInfo )
      *((_DWORD *)FlipManagerAuxiliaryPresentInfo + 7) = 0;
    v143 = (__int64)&v10[167];
    if ( !v10[167].QuadPart )
      v143 = 0LL;
    VidSchiPropagatePresentHistoryToken(
      (struct _VIDSCH_GLOBAL *)a2,
      (PKSPIN_LOCK)v10[143].QuadPart,
      (struct _D3DKMT_PRESENTHISTORYTOKEN *)v10[144].QuadPart,
      1,
      (v181->LowPart & 0x40) != 0,
      0,
      0,
      v10[145].QuadPart,
      v10[147].QuadPart,
      0LL,
      v143,
      1);
    v20 = v181;
    v21 = v181->LowPart;
  }
  v10[131].HighPart = v14;
  if ( v14 == 11 )
  {
    v144 = 0LL;
    v145 = 1384LL * *(unsigned int *)(v8 + 68);
    v178 = 0;
    LODWORD(v186) = 0;
    v146 = *(_DWORD *)(v145 + v8 + 1172);
    if ( v146 == 5 || v146 == 15 )
    {
      v147 = v176;
      LODWORD(v189) = 0;
      v180[0] = 0;
      v207 = ((_BYTE)v177 - 1) & 0x3F;
      v209 = HIDWORD(v214[265]);
      v210 = v214[266];
      v203[1] = 0LL;
      v205 = 0;
      v208 = 0;
      v211 = 0LL;
      v203[0] = a2;
      v204 = v176;
      v206 = v8;
      VidSchiProcessVsyncCompletedFlipEntry(
        v195,
        (unsigned int)v203,
        (unsigned int)&v213,
        (unsigned int)&v189,
        (__int64)&v186,
        (__int64)v180);
      v178 = (unsigned int)v186;
    }
    else
    {
      v147 = v176;
    }
    if ( *(_BYTE *)(a2 + 59) )
      VidSchiUpdateHwPresentTimeForImmediateFlip(
        (struct _VIDSCH_GLOBAL *)a2,
        (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v10,
        v147);
    v148 = v10[163];
    v10[141].QuadPart = HIDWORD(v214[265]);
    v149 = (LARGE_INTEGER)v214[266];
    if ( v148.QuadPart )
      v149 = v148;
    v150 = v195;
    v10[139] = v149;
    VidSchiUnreferenceDisplayingAllocationsForThisEntry(v150, v144, v11, v10);
    VidSchiReferenceDisplayingAllocationsForThisEntry(v195, a2, v11, v10);
    v24 = v177;
    v151 = v10[130];
    v152 = VidSchiCompleteFlipEntry(v195, a2, v176, v8, v177, v177, 0, 0LL);
    v153 = v152 + v178;
    v154 = *(unsigned int *)(*(_QWORD *)(v151.QuadPart + 32) + 4LL);
    v155 = *(_QWORD *)(v151.QuadPart + 40);
    v156 = v196;
    v157 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v155 + 32) + 8 * v154) + 8 * v196 + 88);
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 8 * v196 + 6480) + 8LL), -v153);
    **(_DWORD **)(a2 + 8 * v156 + 6480) += v153;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v157 + 8), -v153);
    *(_DWORD *)v157 += v153;
  }
  else
  {
    v22 = (unsigned int *)v10[147].QuadPart;
    if ( *(_BYTE *)(a2 + 59) )
    {
      v158 = *v22;
      v159 = *v22 & 0x3FF;
      v197[0] = a2;
      v12 = *(_BYTE *)(a2 + 156) == 0;
      v197[1] = v22;
      v198 = v159;
      if ( v12 )
        v160 = 0;
      else
        v160 = (v158 >> 10) & 0x3FF;
      v12 = !_BitScanForward((unsigned int *)&v161, v159);
      v162 = -1;
      v199 = v160;
      LODWORD(v187) = v161;
      if ( !v12 )
        v162 = v161;
      v200 = 0;
      v163 = v162;
      v164 = -1;
      v12 = !_BitScanForward((unsigned int *)&v165, v160);
      v201 = v163;
      LODWORD(v188) = v165;
      if ( !v12 )
        v164 = v165;
      v166 = (unsigned int)v164;
      v202 = v166;
      while ( v159 || v160 )
      {
        if ( v163 < (unsigned int)v166 )
          v166 = v163;
        ++*(_DWORD *)(288 * v166 + v11 + 200);
        if ( (v20->LowPart & 0x20) != 0 )
          ++*(_DWORD *)(288 * v166 + v11 + 204);
        *(_DWORD *)(v11 + 3088) |= 1 << v166;
        VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(v197);
        v166 = v202;
        v160 = v199;
        v20 = v181;
        v163 = v201;
        v159 = v198;
      }
    }
    else
    {
      if ( (v21 & 0x10) != 0 )
        v23 = ((unsigned __int16)*v22 | (unsigned __int16)(*v22 >> 10)) & 0x3FF;
      else
        v23 = (1 << *(_DWORD *)(a2 + 152)) - 1;
      *(_DWORD *)(v11 + 3088) |= v23;
    }
    v24 = v177;
  }
  if ( *(_BYTE *)(a2 + 59) )
  {
    VidSchiSetNextFlipEarliestIdealTime(
      (struct _VIDSCH_GLOBAL *)a2,
      v176,
      (struct VIDSCH_FLIP_QUEUE *)v8,
      (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v10);
  }
  else
  {
    v10[138].QuadPart = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v8 + 112) = v10[134].LowPart;
  }
  v25 = 1384LL * *(unsigned int *)(v8 + 68);
  *(_DWORD *)(v8 + 72) = v24;
  v26 = *(_DWORD *)(v25 + v8 + 1172);
  if ( v26 != 5 && v26 != 15 )
    *(_DWORD *)(v8 + 68) = v24;
  *(_DWORD *)(v8 + 64) = ((_BYTE)v24 + 1) & 0x3F;
  v27 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 768LL);
  v28 = *(_DWORD *)(v27 + 7904);
  if ( *(_QWORD *)(v27 + 7896) > (unsigned __int64)qword_1C00763D0 )
  {
    v167 = dword_1C00763DC + v28;
    *(_DWORD *)(v27 + 7904) = v167;
    if ( v167 > dword_1C00763D8
      && MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v27 + 7912) > (unsigned __int64)qword_1C00763E0 )
    {
      if ( (unsigned __int8)WdDiagIsTracingEnabled(&Dxgk_ExcessiveMemoryTransfer) )
      {
        EtwHandle = WdDiagGetEtwHandle();
        if ( EtwHandle )
          EtwWrite(EtwHandle, &Dxgk_ExcessiveMemoryTransfer, 0LL, 0, 0LL);
      }
      v12 = bTracingEnabled == 0;
      *(_QWORD *)(v27 + 7912) = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)(v27 + 7904) = 0;
      if ( !v12 && (byte_1C0076981 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v168, &EventPerformanceWarning, v169, 5LL);
    }
  }
  else if ( v28 )
  {
    *(_DWORD *)(v27 + 7904) = v28 - 1;
  }
  v29 = v196;
  _InterlockedExchange64((volatile __int64 *)(v27 + 7896), 0LL);
  v30 = *(_QWORD *)(a2 + 8 * v29 + 3200);
  v31 = *(unsigned int *)(v30 + 144);
  v32 = *(_QWORD *)(v30 + 136) + 112 * v31;
  *(_DWORD *)(v30 + 144) = (v31 + 1) & (*(_DWORD *)(v30 + 128) - 1);
  v33 = *(void **)(v32 + 72);
  if ( v33 )
    memset(v33, 0, 8LL * *(unsigned int *)(a2 + 152));
  *(_DWORD *)v32 = 1;
  *(_DWORD *)(v32 + 16) = *(_DWORD *)v9[162].QuadPart & 0x3FF;
  *(_DWORD *)(v32 + 20) = (*(_DWORD *)v9[162].QuadPart >> 10) & 0x3FF;
  *(_BYTE *)(v32 + 24) = *(_BYTE *)(v8 + 80);
  *(_DWORD *)(v32 + 28) = v24;
  *(LARGE_INTEGER *)(v32 + 8) = KeQueryPerformanceCounter(0LL);
  v12 = *(_QWORD *)(v32 + 72) == 0LL;
  *(_BYTE *)(v32 + 36) = (v9[157].LowPart & 0x20) != 0;
  *(_DWORD *)(v32 + 40) = v9[146].HighPart;
  *(_DWORD *)(v32 + 32) = v9[147].LowPart;
  *(_DWORD *)(v32 + 44) = v9[157].HighPart;
  *(_DWORD *)(v32 + 48) = *(_DWORD *)(v30 + 3032);
  *(LARGE_INTEGER *)(v32 + 56) = v9[177];
  *(LARGE_INTEGER *)(v32 + 64) = v9[178];
  if ( !v12 )
  {
    v34 = (_DWORD *)v9[162].QuadPart;
    v35 = 0;
    v36 = *v34 & 0x3FF;
    v12 = *(_BYTE *)(a2 + 156) == 0;
    v37 = 0;
    if ( !v12 )
      v35 = (*v34 >> 10) & 0x3FF;
    v12 = !_BitScanForward(&v38, v36);
    if ( v12 )
      LOBYTE(v38) = -1;
    v39 = (unsigned int)(char)v38;
    v12 = !_BitScanForward(&v38, v35);
    if ( v12 )
      LOBYTE(v38) = -1;
    v38 = (char)v38;
    LODWORD(v186) = (char)v38;
    while ( v36 || v35 )
    {
      if ( (unsigned int)v39 >= v38 )
      {
        v171 = -1;
        v35 &= ~(1 << v38);
        v12 = !_BitScanForward(&v38, v35);
        if ( !v12 )
          v171 = v38;
        v38 = v171;
        LODWORD(v186) = v171;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v32 + 72) + 8 * v39) = *(_QWORD *)(v37
                                                                 * ((8 * *(_DWORD *)(v9[162].QuadPart + 8) + 231) & 0xFFFFFFF8)
                                                                 + v9[162].QuadPart
                                                                 + 24);
        v36 &= ~(1 << v39);
        v12 = !_BitScanForward((unsigned int *)&v41, v36);
        if ( v12 )
          LOBYTE(v41) = -1;
        v39 = (unsigned int)(char)v41;
        v38 = (unsigned int)v186;
      }
      ++v37;
    }
  }
  *(_DWORD *)(v32 + 84) = *(_DWORD *)(v30 + 3092);
  *(_DWORD *)(v32 + 80) = *(_DWORD *)(v30 + 3088);
  *(_DWORD *)(v32 + 88) = *(_DWORD *)(v8 + 56);
  *(_DWORD *)(v32 + 92) = *(_DWORD *)(v8 + 60);
  *(_DWORD *)(v32 + 96) = *(_DWORD *)(v8 + 64);
  *(_DWORD *)(v32 + 100) = *(_DWORD *)(v8 + 68);
  *(_DWORD *)(v32 + 104) = *(_DWORD *)(v8 + 72);
  *(_DWORD *)(v32 + 108) = *(_DWORD *)(v8 + 76);
  return 0LL;
}
