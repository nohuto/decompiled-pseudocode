__int64 __fastcall DXGCONTEXT::SubmitPresentMultiPlaneOverlays3(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        const struct DXGALLOCATIONREFERENCE *a6,
        unsigned __int8 *a7,
        struct _DXGKARG_PRESENT *a8,
        struct VIDSCH_SUBMIT_DATA_BASE *a9,
        struct DXGCONTEXT **a10)
{
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v10; // r12
  unsigned __int8 v12; // r14
  int v13; // r13d
  struct DXGCONTEXT **v14; // r9
  int v15; // ebx
  __int64 v16; // rcx
  __int64 ContextCount; // r11
  __int64 v18; // rdx
  unsigned int v19; // ecx
  int v20; // r8d
  bool v21; // cc
  __int64 PresentPlaneCount; // rsi
  int v23; // ecx
  D3DKMT_MULTIPLANE_OVERLAY3 **ppPresentPlanes; // r14
  __int64 v25; // rbx
  unsigned int v26; // r9d
  D3DKMT_MULTIPLANE_OVERLAY3 **v27; // r8
  __int64 DirtyRectCount; // rdx
  UINT v29; // edi
  UINT *v30; // rax
  __int64 v31; // r12
  UINT *v32; // rdi
  UINT *v33; // rbx
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rsi
  int v35; // ecx
  _QWORD *v36; // rbx
  unsigned int v37; // eax
  __int64 v38; // rdi
  __int64 v39; // rsi
  bool v40; // zf
  struct _DXGKARG_PRESENT *v41; // r9
  DXGCONTEXT *v42; // rsi
  unsigned __int8 v43; // dl
  unsigned int v44; // ebx
  __int64 v45; // rax
  unsigned int v46; // edx
  int *v47; // r11
  __int64 v48; // r8
  D3DKMT_MULTIPLANE_OVERLAY3 *v49; // rdx
  __int64 LayerIndex; // rcx
  int v51; // edx
  int v52; // eax
  __int64 v53; // r8
  unsigned int v54; // r10d
  __int64 v55; // rax
  unsigned int v56; // r10d
  unsigned __int64 v57; // r14
  D3DKMT_MULTIPLANE_OVERLAY3 *v58; // r9
  int v59; // ebx
  unsigned int v60; // edx
  unsigned int v61; // r13d
  unsigned int v62; // r13d
  struct DXGADAPTER *v63; // rcx
  const struct _D3DKMT_MULTIPLANE_OVERLAY3 *v64; // r9
  _DWORD *v65; // r11
  char *v66; // r13
  int v67; // eax
  __int64 v68; // rsi
  struct CRefCountedBuffer *v69; // rcx
  unsigned int v70; // r14d
  char *v71; // rbx
  _DWORD *v72; // r9
  __int64 v73; // r10
  _QWORD *v74; // r11
  __int64 v75; // rax
  _QWORD *v76; // rdx
  char *v77; // r10
  __int64 v78; // rax
  struct VIDSCH_SUBMIT_DATA_BASE *v79; // r9
  int v80; // eax
  __int64 v81; // r8
  __int64 v82; // r11
  int v83; // r8d
  char *v84; // r10
  __int64 *v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  char *v88; // r8
  const struct _D3DKMT_MULTIPLANE_OVERLAY3 *v89; // rdx
  struct _VIDSCH_LAYER_ATTRIBUTE *v90; // rbx
  DXGCONTEXT *v91; // rcx
  unsigned __int64 v92; // rcx
  D3DKMT_MULTIPLANE_OVERLAY3 *v93; // rbx
  struct _DXGKARG_PRESENT *v94; // r14
  UINT v95; // ecx
  __int64 v96; // r9
  __int64 v97; // r8
  __int128 *v98; // rbx
  __int64 v99; // rcx
  __int64 v100; // r12
  __int64 v101; // r14
  __int64 v102; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v105; // rsi
  struct DXGPROCESS *v106; // r13
  char *v107; // rbx
  __int64 v108; // rcx
  __int64 v109; // r8
  KIRQL CurrentIrql; // al
  __int64 v111; // r13
  struct DXGTHREAD *v112; // rsi
  __int64 v113; // r12
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  _QWORD *v118; // rax
  struct _DXGKARG_PRESENT *v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  struct DXGGLOBAL *v122; // rax
  unsigned int v123; // ebx
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v124; // r13
  unsigned __int64 v125; // r14
  __int64 v126; // rcx
  __int64 v127; // rdx
  struct DXGSYNCOBJECTMUTEX *v128; // rax
  struct DXGSYNCOBJECTMUTEX *v129; // r12
  unsigned __int64 v130; // r14
  __int64 v131; // rcx
  __int64 v132; // rdx
  struct DXGSYNCOBJECTMUTEX *v133; // rax
  struct DXGSYNCOBJECTMUTEX *v134; // rax
  DXGCONTEXT *v135; // r14
  DXGCONTEXT **v136; // r13
  DXGCONTEXT *v137; // rcx
  DXGCONTEXT *v138; // rdx
  __int64 v139; // rax
  int v140; // eax
  struct DXGSYNCOBJECTMUTEX *v141; // r10
  unsigned int v142; // eax
  unsigned int i; // ebx
  DXGAUTOMUTEX *v144; // rcx
  struct DXGSYNCOBJECTMUTEX *v145; // r10
  unsigned int v146; // eax
  unsigned int j; // ebx
  DXGAUTOMUTEX *v148; // rcx
  void **v149; // rbx
  PLOOKASIDE_LIST_EX *v150; // rax
  __int64 v152; // rbx
  struct DXGCONTEXT **v153; // r9
  int v154; // r10d
  int v155; // r14d
  struct _DXGKARG_PRESENT *v156; // rdx
  _QWORD *v157; // rdx
  __int64 v158; // rax
  struct DXGCONTEXT **v159; // rdx
  __int64 v160; // r12
  unsigned int v161; // r14d
  __int64 v162; // r13
  __int64 v163; // rax
  char *v164; // rax
  int v165; // ecx
  int v166; // eax
  __int16 v167; // dx
  unsigned int v168; // eax
  unsigned int v169; // r12d
  int v170; // ecx
  __int64 v171; // rdx
  unsigned __int64 v172; // rcx
  char *v173; // rdx
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  int v177; // r9d
  KIRQL v178; // al
  __int64 v179; // rax
  bool v180; // cf
  unsigned __int64 v181; // rax
  __int64 v182; // rax
  struct DXGSYNCOBJECTMUTEX *v183; // rbx
  __int64 v184; // rax
  unsigned __int64 v185; // rax
  __int64 v186; // rax
  struct DXGSYNCOBJECTMUTEX *v187; // rbx
  char *v188; // rbx
  char *v189; // rbx
  __int64 v190; // r8
  unsigned __int8 v192; // [rsp+50h] [rbp-B0h]
  int v193; // [rsp+54h] [rbp-ACh]
  unsigned int v194; // [rsp+54h] [rbp-ACh]
  unsigned int v195; // [rsp+58h] [rbp-A8h]
  unsigned int v196; // [rsp+5Ch] [rbp-A4h]
  unsigned int v197; // [rsp+60h] [rbp-A0h]
  int v198; // [rsp+60h] [rbp-A0h]
  int v200; // [rsp+70h] [rbp-90h]
  int v201; // [rsp+70h] [rbp-90h]
  _QWORD *v202; // [rsp+78h] [rbp-88h]
  int *v203; // [rsp+78h] [rbp-88h]
  __int64 v204; // [rsp+80h] [rbp-80h]
  __int64 v205; // [rsp+80h] [rbp-80h]
  __int64 v206; // [rsp+80h] [rbp-80h]
  struct DXGCONTEXT **v207; // [rsp+80h] [rbp-80h]
  int v208; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v209; // [rsp+90h] [rbp-70h]
  struct _DXGKARG_PRESENT *v210; // [rsp+98h] [rbp-68h]
  char *v211; // [rsp+A0h] [rbp-60h]
  const struct _D3DKMT_MULTIPLANE_OVERLAY3 *v212; // [rsp+A8h] [rbp-58h]
  struct DXGCONTEXT **v213; // [rsp+B8h] [rbp-48h]
  unsigned int v214; // [rsp+C0h] [rbp-40h]
  char *v215; // [rsp+C8h] [rbp-38h]
  PVOID Entry; // [rsp+D0h] [rbp-30h]
  __int64 v217; // [rsp+D8h] [rbp-28h] BYREF
  struct DXGGLOBAL *v218; // [rsp+E0h] [rbp-20h] BYREF
  char v219; // [rsp+E8h] [rbp-18h]
  const struct DXGALLOCATIONREFERENCE *v220; // [rsp+F0h] [rbp-10h]
  struct DXGTHREAD *DxgThread; // [rsp+F8h] [rbp-8h] BYREF
  char *v222; // [rsp+100h] [rbp+0h]
  struct DXGCONTEXT **v223; // [rsp+108h] [rbp+8h]
  struct CRefCountedBuffer *v224; // [rsp+110h] [rbp+10h] BYREF
  char *v225; // [rsp+118h] [rbp+18h]
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v226; // [rsp+120h] [rbp+20h]
  int v227; // [rsp+128h] [rbp+28h] BYREF
  __int64 v228; // [rsp+130h] [rbp+30h]
  char v229; // [rsp+138h] [rbp+38h]
  __int64 v230; // [rsp+140h] [rbp+40h]
  __int128 v231; // [rsp+150h] [rbp+50h] BYREF
  __int128 v232; // [rsp+160h] [rbp+60h]
  __int128 v233; // [rsp+170h] [rbp+70h]
  __int128 v234; // [rsp+180h] [rbp+80h]
  __int128 v235; // [rsp+190h] [rbp+90h]
  __int128 v236; // [rsp+1A0h] [rbp+A0h]
  struct DXGSYNCOBJECTMUTEX *v237; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v238[64]; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int v239; // [rsp+1F8h] [rbp+F8h]
  struct DXGSYNCOBJECTMUTEX *v240; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v241[64]; // [rsp+208h] [rbp+108h] BYREF
  unsigned int v242; // [rsp+248h] [rbp+148h]
  PVOID P; // [rsp+250h] [rbp+150h] BYREF
  _BYTE v244[128]; // [rsp+258h] [rbp+158h] BYREF
  int v245; // [rsp+2D8h] [rbp+1D8h]
  char v246[8]; // [rsp+2E0h] [rbp+1E0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+2E8h] [rbp+1E8h] BYREF
  _DWORD v248[2]; // [rsp+320h] [rbp+220h] BYREF
  __int64 v249; // [rsp+328h] [rbp+228h]
  _BYTE v250[8]; // [rsp+330h] [rbp+230h]
  _QWORD v251[37]; // [rsp+338h] [rbp+238h]
  _QWORD v252[10]; // [rsp+460h] [rbp+360h] BYREF
  __int64 v253; // [rsp+4B0h] [rbp+3B0h] BYREF

  v10 = a2;
  v12 = a5;
  v210 = a8;
  v13 = a4;
  v14 = a10;
  v15 = a3;
  v220 = a6;
  v226 = a2;
  v213 = a10;
  if ( !a3 && !(_BYTE)v13 && !a5 )
  {
    WdLogSingleEntry1(1LL, 1647LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"cEnablingLayers || cUpdatingLayers || cDisablingLayers",
      1647LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v14 = v213;
  }
  if ( (unsigned int)a5 + v15 + v13 > v10->PresentPlaneCount )
  {
    WdLogSingleEntry1(1LL, 1650LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(static_cast<UINT>(cEnablingLayers)+ static_cast<UINT>(cUpdatingLayers)+ static_cast<UINT>(cDisablingLaye"
                "rs)) <= pArgs->PresentPlaneCount",
      1650LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v14 = v213;
  }
  v16 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 168)) )
    {
      WdLogSingleEntry1(1LL, 1651LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
        1651LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v14 = v213;
  }
  ContextCount = v10->ContextCount;
  v195 = ContextCount;
  if ( (unsigned int)ContextCount > 0x40 )
  {
    LODWORD(v68) = -1073741811;
    v152 = v10->ContextCount;
    WdLogSingleEntry4(2LL, this, ContextCount, 64LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x trying to broadcast to %I64d when limit is %I64d, returning 0x%I64x",
      (__int64)this,
      v152,
      64LL,
      -1073741811LL,
      0LL);
    return (unsigned int)v68;
  }
  v18 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v19 = 1;
  v197 = *(_DWORD *)(v18 + 2760);
  v20 = *((_DWORD *)*v14 + 99);
  v193 = v20;
  if ( (unsigned int)ContextCount > 1 )
  {
    v153 = v14 + 1;
    do
    {
      v154 = *((_DWORD *)*v153 + 99);
      if ( (v154 & v20) != 0 )
      {
        LODWORD(v68) = -1073741811;
        WdLogSingleEntry2(2LL, this, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x failed, can't broadcast flip to multiple context on the same physical adapter returning 0x%I64x",
          (__int64)this,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v68;
      }
      v20 |= v154;
      ++v19;
      ++v153;
      v193 = v20;
    }
    while ( v19 < (unsigned int)ContextCount );
  }
  v21 = *(_DWORD *)(v18 + 2820) < 2500;
  Entry = 0LL;
  if ( v21 )
    goto LABEL_30;
  PresentPlaneCount = v10->PresentPlaneCount;
  v23 = 0;
  ppPresentPlanes = v10->ppPresentPlanes;
  v25 = 0LL;
  v26 = 0;
  Entry = 0LL;
  if ( !(_DWORD)PresentPlaneCount )
    goto LABEL_29;
  v27 = ppPresentPlanes;
  do
  {
    DirtyRectCount = (*v27)->pPlaneAttributes->DirtyRectCount;
    if ( (unsigned int)DirtyRectCount > 0xFFF )
    {
      WdLogSingleEntry1(3LL, DirtyRectCount);
      v155 = -1073741811;
      goto LABEL_196;
    }
    if ( ((*v27)->InputFlags.Value & 1) != 0 && (_DWORD)DirtyRectCount )
    {
      v23 += DirtyRectCount;
      v25 = (unsigned int)(v25 + 1);
    }
    ++v26;
    ++v27;
  }
  while ( v26 < (unsigned int)PresentPlaneCount );
  if ( !v23 || !(_DWORD)v25 )
    goto LABEL_28;
  v29 = 16 * (v25 + v23) + 8;
  v30 = (UINT *)operator new[]((unsigned int)(16 * (v25 + v23) + 24), 0x4B677844u, 64LL);
  Entry = v30;
  if ( !v30 )
  {
    WdLogSingleEntry1(6LL, 1460LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for present dirty rects data",
      1460LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v155 = -1073741801;
LABEL_196:
    WdLogSingleEntry1(2LL, v155);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to read dirty rects data. Returning 0x%I64x",
      v155,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v155;
  }
  v30[2] = v29;
  v31 = PresentPlaneCount;
  *(_QWORD *)v30 = 0LL;
  v32 = v30 + 6;
  v30[3] = 1;
  v30[4] = v25;
  v33 = &v30[4 * v25 + 6];
  do
  {
    pPlaneAttributes = (*ppPresentPlanes)->pPlaneAttributes;
    if ( ((*ppPresentPlanes)->InputFlags.Value & 1) != 0 && pPlaneAttributes->DirtyRectCount )
    {
      *v32 = (*ppPresentPlanes)->LayerIndex;
      *((_QWORD *)v32 + 1) = v33;
      v32[1] = pPlaneAttributes->DirtyRectCount;
      memmove(v33, pPlaneAttributes->pDirtyRects, 16LL * pPlaneAttributes->DirtyRectCount);
      v33 += 4 * pPlaneAttributes->DirtyRectCount;
      v32 += 4;
    }
    ++ppPresentPlanes;
    --v31;
  }
  while ( v31 );
  v10 = v226;
  LODWORD(ContextCount) = v195;
LABEL_28:
  v20 = v193;
LABEL_29:
  v12 = a5;
LABEL_30:
  if ( (unsigned int)ContextCount > 1 )
    v35 = 3072;
  else
    v35 = 2048;
  v36 = v252;
  v37 = *(_DWORD *)a9 & 0xFFFFFBFF;
  *((_DWORD *)a9 + 35) = ContextCount;
  *((_DWORD *)a9 + 34) = v20;
  v38 = 10LL;
  *(_DWORD *)a9 = v35 | v37;
  v39 = 10LL;
  do
  {
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v36++);
    --v39;
  }
  while ( v39 );
  v40 = *((_DWORD *)a9 + 30) == 5;
  *((_QWORD *)a9 + 4) = Entry;
  if ( !v40 )
  {
    WdLogSingleEntry1(1LL, 1727LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"FlipOnVSyncSwFlipQueue == pVidSchSubmitData->FlipMode",
      1727LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v41 = v210;
  if ( v210->pDmaBuffer )
  {
    WdLogSingleEntry1(1LL, 1732LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pPresentDdiArg->pDmaBuffer == NULL",
      1732LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v41 = v210;
  }
  v42 = this;
  v43 = v13 + a3;
  v192 = v13 + a3;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2866LL) )
  {
    v43 += v12;
    v192 = v43;
  }
  if ( v43 > 0xAu )
  {
    WdLogSingleEntry1(1LL, 1750LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"cLayersInSchedulerArray <= DXGK_MAX_MPO_PLANES_PER_SOURCE",
      1750LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v41 = v210;
  }
  v44 = 0;
  v196 = 0;
  if ( *((_BYTE *)a9 + 356) )
    v45 = 600LL;
  else
    v45 = 496LL;
  v46 = v10->PresentPlaneCount;
  v47 = (int *)((char *)a9 + v45);
  v48 = 0LL;
  v215 = (char *)a9 + v45;
  if ( v46 )
  {
    while ( 2 )
    {
      v49 = v10->ppPresentPlanes[v48];
      LayerIndex = v49->LayerIndex;
      if ( (v49->InputFlags.Value & 1) != 0 )
      {
        v51 = *v47;
        v52 = ((unsigned __int16)v51 ^ (unsigned __int16)(v51 | (1 << LayerIndex))) & 0x3FF;
        goto LABEL_47;
      }
      if ( a7[LayerIndex] )
      {
        v51 = *v47;
        v52 = (v51 ^ (v51 | (1024 << LayerIndex))) & 0xFFC00;
LABEL_47:
        *v47 = v51 ^ v52;
      }
      v46 = v10->PresentPlaneCount;
      v48 = (unsigned int)(v48 + 1);
      if ( (unsigned int)v48 >= v46 )
        break;
      continue;
    }
  }
  v53 = (unsigned int)*v47;
  v54 = *v47;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2866LL) )
    v54 = v53 | (v54 >> 10);
  v55 = 0LL;
  v56 = v54 & 0x3FF;
  v214 = v56;
  v200 = 0;
  if ( v46 )
  {
    while ( 2 )
    {
      v57 = 32LL * v44;
      v204 = v55;
      v58 = v10->ppPresentPlanes[v55];
      v212 = v58;
      v53 = v58->LayerIndex;
      v248[v57 / 4] = v53;
      v194 = v53;
      v248[v57 / 4 + 1] = v58->InputFlags.Value & 1;
      if ( (v58->InputFlags.Value & 1) != 0 || a7[v53] )
      {
        v59 = 1 << v53;
        if ( ((1 << v53) & v56) != 0 )
        {
          v60 = (v56 & (v59 - 1) & 0x55555555) + (((v56 & (v59 - 1)) >> 1) & 0x55555555);
          v61 = (((v60 & 0x33333333) + ((v60 >> 2) & 0x33333333)) & 0xF0F0F0F)
              + ((((v60 & 0x33333333) + ((v60 >> 2) & 0x33333333)) >> 4) & 0xF0F0F0F);
          v62 = (v61 & 0xFF00FF) + (v61 >> 8);
        }
        else
        {
          v62 = -1;
        }
        LODWORD(v209) = v62;
        if ( v62 >= v192 )
        {
          WdLogSingleEntry1(1LL, 1825LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"FlipToIndex < cLayersInSchedulerArray",
            1825LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( v62 >= 0xA )
        {
          WdLogSingleEntry1(1LL, 1832LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"FlipToIndex < DXGK_MAX_MPO_PLANES_PER_SOURCE",
            1832LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v42 + 2) + 16LL) + 16LL)) )
        {
          v224 = 0LL;
          v66 = (char *)a9 + ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8) * v62 + 600;
          v67 = ReadPresentPrivateDriverData(v63, v64, &v224);
          v68 = v67;
          if ( v67 < 0 )
          {
            WdLogSingleEntry1(2LL, v67);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to read private driver data. Returning 0x%I64x",
              v68,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_225;
          }
          v69 = v224;
          v64 = v212;
          if ( v224 )
          {
            v252[v204] = v224;
            if ( !v64->LayerIndex )
            {
              v156 = v210;
              v210->PrivateDriverDataSize = v64->DriverPrivateDataSize;
              v156->pPrivateDriverData = (char *)v69 + 16;
            }
            *((_QWORD *)v66 + 25) = v69;
          }
          v53 = v194;
          v65 = v215;
          v42 = this;
          v62 = (unsigned int)v209;
        }
        if ( (v64->InputFlags.Value & 1) != 0 )
        {
          v70 = 0;
          if ( v195 )
          {
            v71 = (char *)a9 + 608;
            v223 = v213;
            v72 = (_DWORD *)((char *)a9 + 604);
            v230 = 80LL * v62;
            v73 = v230;
            while ( 1 )
            {
              v222 = v71;
              v209 = v72;
              v205 = v73;
              v74 = (_QWORD *)*((_QWORD *)v220 + (unsigned int)v53 + v197 * v70);
              v202 = v74;
              if ( !v74 )
              {
                WdLogSingleEntry1(1LL, 1886LL);
                DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDxgAlloc", 1886LL, 0LL, 0LL, 0LL, 0LL);
                v73 = v230;
                v74 = 0LL;
                v72 = (_DWORD *)((char *)a9 + 604);
                v71 = (char *)a9 + 608;
                v222 = (char *)a9 + 608;
                v209 = (_DWORD *)((char *)a9 + 604);
                v205 = v230;
              }
              v40 = *((_BYTE *)a9 + 356) == 0;
              v75 = v74[6];
              v225 = v71;
              if ( v40 )
              {
                v77 = (char *)a9 + v73;
                v76 = v77 + 512;
              }
              else
              {
                v76 = (_QWORD *)((char *)a9
                               + 64 * (unsigned __int64)(v62 + v70 * *v72)
                               + *v72 * ((8 * *(_DWORD *)v71 + 231) & 0xFFFFFFF8)
                               + 624);
                v77 = (char *)a9 + v73;
              }
              *v76 = *(_QWORD *)(v75 + 16);
              v78 = *((_QWORD *)v42 + 2);
              v211 = v77;
              if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v78 + 16) + 16LL) + 2874LL) )
              {
                if ( *((_BYTE *)a9 + 356) )
                  v157 = (_QWORD *)((char *)a9
                                  + 64 * (unsigned __int64)(v62 + v70 * *v72)
                                  + *v72 * ((8 * *(_DWORD *)v71 + 231) & 0xFFFFFFF8)
                                  + 616);
                else
                  v157 = v77 + 568;
                *v157 = *((_QWORD *)*v223 + 23);
              }
              v79 = *((_BYTE *)a9 + 356)
                  ? (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a9
                                                     + 64 * (unsigned __int64)(v62 + v70 * *v72)
                                                     + *v72 * ((8 * *(_DWORD *)v71 + 231) & 0xFFFFFFF8)
                                                     + 648)
                  : (struct VIDSCH_SUBMIT_DATA_BASE *)(v211 + 504);
              v80 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v42 + 2) + 16LL) + 760LL) + 8LL)
                                                                                                + 408LL))(
                      *(_QWORD *)(*((_QWORD *)v42 + 2) + 792LL),
                      v74[3],
                      v79);
              v68 = v80;
              if ( v80 < 0 )
                break;
              v42 = this;
              v208 = 0;
              v217 = 0LL;
              if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
              {
                v83 = 0xFFFF;
                v217 = -1LL;
                v208 = 0xFFFF;
              }
              else
              {
                (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v82 + 760)
                                                                                              + 8LL)
                                                                                  + 208LL))(
                  *(_QWORD *)(v82 + 768),
                  *(_QWORD *)(v202[6] + 8LL),
                  &v208,
                  &v217,
                  v81);
                v83 = v208;
              }
              v72 = v209;
              v84 = v211;
              if ( *((_BYTE *)a9 + 356) )
                *(_WORD *)((char *)a9
                         + 64 * (unsigned __int64)(v62 + v70 * *v209)
                         + ((8 * *(_DWORD *)v71 + 231) & 0xFFFFFFF8) * *v209
                         + 632) = v83;
              else
                *((_DWORD *)v211 + 139) ^= (*((_DWORD *)v211 + 139) ^ (v83 << 17)) & 0x3E0000;
              if ( *((_BYTE *)a9 + 356) )
                v85 = (__int64 *)((char *)a9
                                + 64 * (unsigned __int64)(v62 + v70 * *v72)
                                + *v72 * ((8 * *(_DWORD *)v71 + 231) & 0xFFFFFFF8)
                                + 640);
              else
                v85 = (__int64 *)(v84 + 520);
              *v85 = v217;
              v86 = v202[5];
              if ( v86 && (*(_DWORD *)(v86 + 4) & 8) != 0 )
                v87 = *(_QWORD *)(*(_QWORD *)(v86 + 56) + 184LL);
              else
                v87 = 0LL;
              if ( *((_BYTE *)a9 + 356) )
              {
                *(_QWORD *)((char *)a9
                          + 64 * (unsigned __int64)(v62 + v70 * *v72)
                          + ((8 * *(_DWORD *)v71 + 231) & 0xFFFFFFF8) * *v72
                          + 656) = v87;
              }
              else
              {
                v71 = (char *)a9 + 608;
                *((_QWORD *)v84 + 72) = v87;
                v72 = (_DWORD *)((char *)a9 + 604);
                v222 = (char *)a9 + 608;
                v209 = (_DWORD *)((char *)a9 + 604);
              }
              if ( !v70 )
              {
                v88 = v225;
                v89 = v212;
                if ( *((_BYTE *)a9 + 356)
                  && (*(_DWORD *)((char *)a9 + v62 * ((8 * *(_DWORD *)v225 + 231) & 0xFFFFFFF8) + 640) = v212->MaxImmediateFlipLine,
                      *((_BYTE *)a9 + 356)) )
                {
                  v90 = (struct VIDSCH_SUBMIT_DATA_BASE *)((char *)a9
                                                         + v62 * ((8 * *(_DWORD *)v88 + 231) & 0xFFFFFFF8)
                                                         + 760);
                }
                else
                {
                  v90 = (struct _VIDSCH_LAYER_ATTRIBUTE *)(v84 + 528);
                }
                if ( v89->pPlaneAttributes->SrcRect.right <= v89->pPlaneAttributes->SrcRect.left )
                {
                  WdLogSingleEntry1(1LL, 1976LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"pPlane->pPlaneAttributes->SrcRect.right > pPlane->pPlaneAttributes->SrcRect.left",
                    1976LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v89 = v212;
                }
                v91 = (DXGCONTEXT *)v89->pPlaneAttributes;
                if ( *((_DWORD *)v91 + 4) <= *((_DWORD *)v91 + 2) )
                {
                  WdLogSingleEntry1(1LL, 1977LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"pPlane->pPlaneAttributes->SrcRect.bottom > pPlane->pPlaneAttributes->SrcRect.top",
                    1977LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v89 = v212;
                }
                DXGCONTEXT::ConvertThunkOverlayToPackedAttributes3(v91, v90, v89->pPlaneAttributes);
                v71 = v222;
                v72 = v209;
                v92 = 32LL * v196;
                *(_QWORD *)&v250[v92 - 8] = v202[4];
                *(_DWORD *)&v250[v92] ^= (*(_DWORD *)&v250[v92] ^ v208) & 0x1F;
                ++v196;
                v251[v92 / 8] = v217;
              }
              ++v223;
              ++v70;
              v73 = v205;
              v53 = v194;
              if ( v70 >= v195 )
                goto LABEL_95;
            }
            v135 = this;
            WdLogSingleEntry3(2LL, this, v202, v80);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"0x%I64x failed to reference allocation for FlipToAllocation %I64x, returning 0x%I64x",
              (__int64)this,
              (__int64)v202,
              v68,
              0LL,
              0LL);
            goto LABEL_185;
          }
LABEL_95:
          v44 = v196;
        }
        else
        {
          if ( (v59 & (*v65 >> 10) & 0x3FF) == 0 )
          {
            WdLogSingleEntry1(1LL, 2001LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pFlipOverlayData->ToDisableLayers & (1 << LayerIndex)",
              2001LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v42 + 2) + 1880LL) + 216LL) + 64LL)
                                     + 40LL)
                         + 28LL) < 0x4002u )
            goto LABEL_95;
          *(_DWORD *)&v250[v57] &= 0xFFFFFFE0;
          v44 = v196 + 1;
          *(_QWORD *)&v250[v57 - 8] = 0LL;
          ++v196;
          v251[v57 / 8] = 0LL;
        }
      }
      v55 = (unsigned int)(v200 + 1);
      v200 = v55;
      if ( (unsigned int)v55 >= v10->PresentPlaneCount )
      {
        v41 = v210;
        break;
      }
      v56 = v214;
      continue;
    }
  }
  v231 = 0LL;
  P = 0LL;
  v232 = 0LL;
  v245 = 0;
  v233 = 0LL;
  v234 = 0LL;
  v235 = 0LL;
  v236 = 0LL;
  if ( v197 >= 2 )
  {
    v99 = (__int64)v41;
    LODWORD(v231) = v10->VidPnSourceId;
    DWORD1(v231) = v44;
    v98 = &v231;
    *((_QWORD *)&v231 + 1) = v248;
    goto LABEL_108;
  }
  _mm_lfence();
  v93 = *v10->ppPresentPlanes;
  if ( (v93->InputFlags.Value & 1) == 0 )
  {
    WdLogSingleEntry1(1LL, 2031LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pPlane->InputFlags.Enabled", 2031LL, 0LL, 0LL, 0LL, 0LL);
  }
  v94 = v210;
  v210->Flags.Value &= ~0x1000u;
  v95 = v93->pPlaneAttributes->DirtyRectCount;
  v94->SubRectCnt = v95;
  if ( v95 )
    v94->pDstSubRects = v93->pPlaneAttributes->pDirtyRects;
  if ( v195 > 1 )
  {
    v158 = PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements(&P, v195);
    v98 = (__int128 *)v158;
    if ( v158 )
    {
      v159 = v213;
      v160 = v158 + 16;
      v207 = v213;
      v211 = (char *)a9 + 608;
      v161 = 0;
      v203 = (int *)((char *)a9 + 604);
      while ( 1 )
      {
        v162 = *((_QWORD *)v220 + v197 * v161);
        if ( ((*(_DWORD *)(v162 + 72) >> 12) & 0x3F) != *((_DWORD *)*v159 + 100) )
          break;
        *(_QWORD *)(v160 - 16) = *(_QWORD *)(v162 + 32);
        v163 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v42 + 2) + 16LL)
                                                                                                 + 760LL)
                                                                                     + 8LL)
                                                                         + 240LL))(
                 *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v42 + 2) + 16LL) + 768LL),
                 *(_QWORD *)(v162 + 24),
                 *((unsigned __int8 *)v42 + 439),
                 *((unsigned int *)*v159 + 100));
        v53 = (__int64)v211;
        *(_QWORD *)(v160 - 8) = v163;
        if ( *((_BYTE *)a9 + 356) )
          v164 = (char *)a9
               + 64 * (unsigned __int64)(v161 * *v203)
               + *v203 * ((8 * *(_DWORD *)v53 + 231) & 0xFFFFFFF8)
               + 640;
        else
          v164 = (char *)a9 + 520;
        *(_QWORD *)v160 = *(_QWORD *)v164;
        if ( *((_BYTE *)a9 + 356) )
        {
          v165 = *v203;
          v166 = *(_DWORD *)v53;
          v211 = (char *)v53;
          v167 = *(_WORD *)((char *)a9
                          + 64 * (unsigned __int64)(v161 * v165)
                          + v165 * ((8 * v166 + 231) & 0xFFFFFFF8)
                          + 632);
        }
        else
        {
          v167 = (*((_DWORD *)a9 + 139) >> 17) & 0x1F;
          v211 = (char *)a9 + 608;
          v203 = (int *)((char *)a9 + 604);
        }
        ++v161;
        *(_WORD *)(v160 + 8) = v167;
        v160 += 32LL;
        v159 = ++v207;
        if ( v161 >= v195 )
        {
          v94 = v210;
          v210->NumSrcAllocations = v195;
          goto LABEL_107;
        }
      }
      WdLogSingleEntry1(2LL, *((_QWORD *)v220 + v197 * v161));
      v123 = 0;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Physical adapter index for context and allocation must be the same. DXGALLOCATION 0x%I64x",
        v162,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v68) = -1073741811;
      if ( P != v244 && P )
        ExFreePoolWithTag(P, 0);
      v135 = this;
    }
    else
    {
      LODWORD(v68) = -1073741801;
      if ( P != v244 && P )
        ExFreePoolWithTag(P, 0);
LABEL_225:
      v135 = this;
LABEL_185:
      v123 = 0;
    }
    goto LABEL_245;
  }
  if ( *((_BYTE *)v42 + 438) )
  {
    v96 = *((unsigned int *)v42 + 100);
    v97 = *((unsigned __int8 *)v42 + 439);
    *(_QWORD *)&v233 = v249;
    *((_QWORD *)&v233 + 1) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v42 + 2) + 16LL) + 760LL) + 8LL)
                                                                                         + 240LL))(
                               *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v42 + 2) + 16LL) + 768LL),
                               *(_QWORD *)(*(_QWORD *)v220 + 24LL),
                               v97,
                               v96);
    *(_QWORD *)&v234 = v251[0];
    WORD4(v234) = v250[0] & 0x1F;
  }
  else
  {
    *((_QWORD *)&v232 + 1) = v249;
    *((_QWORD *)&v231 + 1) = 0LL;
    *(_QWORD *)&v232 = 0LL;
    *((_QWORD *)&v233 + 1) = v251[0];
    v234 = 0uLL;
    *(_QWORD *)&v235 = 0LL;
    *(_QWORD *)&v233 = 2 * (v250[0] & 0x1Fu);
  }
  v98 = &v231;
LABEL_107:
  v99 = (__int64)v94;
LABEL_108:
  v100 = 0LL;
  v206 = 0LL;
  *(_QWORD *)(v99 + 32) = v98;
  v101 = *(_QWORD *)(*((_QWORD *)v42 + 2) + 16LL);
  if ( !*(_BYTE *)(*(_QWORD *)(v101 + 16) + 2874LL) )
  {
    v100 = *((_QWORD *)v42 + 23);
    v206 = v100;
  }
  v227 = -1;
  v228 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v229 = 1;
    v227 = 5031;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v99, &EventProfilerEnter, v53, 5031);
  }
  else
  {
    v229 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v227, 5031);
  CurrentProcess = PsGetCurrentProcess(v102);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v105 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v106 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( !v106 )
        goto LABEL_114;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v106 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( !v106 )
      {
        WdLogSingleEntry1(2LL, 2923LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_114;
      }
    }
LABEL_115:
    v107 = (char *)v106 + 152;
    v198 = 0;
    if ( v106 != (struct DXGPROCESS *)-152LL && *((struct _KTHREAD **)v106 + 20) == KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 1453LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1453LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v106 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v106 + 152, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v177 = *((_DWORD *)v106 + 44);
          if ( v177 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v108, (const EVENT_DESCRIPTOR *)"g", v109, v177);
        }
        ExAcquirePushLockExclusiveEx((char *)v106 + 152, 0LL);
      }
      *((_QWORD *)v106 + 20) = KeGetCurrentThread();
      v198 = 2;
    }
  }
  else
  {
LABEL_114:
    v106 = v105;
    if ( v105 )
      goto LABEL_115;
    v107 = 0LL;
    v198 = 0;
  }
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v101 + 16), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v101 + 16) + 4612LL));
  CurrentIrql = KeGetCurrentIrql();
  v111 = CurrentIrql;
  v112 = 0LL;
  if ( CurrentIrql < 2u
    && (DxgThread = 0LL, (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0)
    && ((v112 = DxgThread) != 0LL || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v112 = DxgThread) != 0LL)) )
  {
    v201 = *((_DWORD *)v112 + 12);
  }
  else
  {
    v201 = 0;
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v246,
    *(struct DXGADAPTER **)(v101 + 16));
  v113 = (*(int (__fastcall **)(__int64, struct _DXGKARG_PRESENT *))(*(_QWORD *)(v101 + 16) + 736LL))(v100, v210);
  if ( v246[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v111 != KeGetCurrentIrql() )
  {
    v178 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, v101, v111, v178);
  }
  if ( v112 )
  {
    v115 = *((int *)v112 + 12);
    if ( (_DWORD)v115 != v201 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v112 + 12), v201, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v101 + 16) + 4612LL));
  v118 = (_QWORD *)WdLogNewEntry5_WdTrace(v115, v114, v116, v117);
  v119 = v210;
  v118[3] = v113;
  v118[4] = v206;
  v118[5] = v119->SubRectCnt;
  v118[6] = v119->pDmaBuffer;
  v118[7] = v119->DmaSize;
  if ( (_DWORD)v113 )
  {
    if ( (int)v113 > -1073741670 )
    {
      if ( (_DWORD)v113 == -1071775743 || (_DWORD)v113 == -1071775736 || (_DWORD)v113 == -1071775232 )
        goto LABEL_133;
    }
    else if ( (_DWORD)v113 == -1073741670
           || (_DWORD)v113 == -1073741816
           || (_DWORD)v113 == -1073741801
           || (_DWORD)v113 == -1073741795
           || (_DWORD)v113 == -1073741674 )
    {
      goto LABEL_133;
    }
    WdLogSingleEntry1(2LL, v113);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v113,
      0LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_133:
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v101 + 16));
  if ( v198 == 2 )
  {
    *((_QWORD *)v107 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v107, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v227);
  if ( v229 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v120, &EventProfilerExit, v121, v227);
  LODWORD(v68) = v113;
  if ( (int)v113 < 0 )
  {
    v135 = this;
LABEL_176:
    if ( P != v244 && P )
      ExFreePoolWithTag(P, 0);
    if ( (int)v68 < 0 )
      goto LABEL_185;
  }
  else
  {
    v122 = DXGGLOBAL::GetGlobal();
    v218 = v122;
    v219 = 0;
    if ( v122 )
    {
      v123 = 0;
    }
    else
    {
      WdLogSingleEntry1(1LL, 2758LL);
      v123 = 0;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pGlobal != NULL", 2758LL, 0LL, 0LL, 0LL, 0LL);
      v122 = v218;
    }
    if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v122 + 75)) )
    {
      WdLogSingleEntry1(1LL, 2763LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"!m_pGlobal->IsSyncObjectLockSharedOwner() || bAllowRecursive",
        2763LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v124 = v226;
    v240 = 0LL;
    v242 = 0;
    v237 = 0LL;
    v125 = v226->PresentPlaneCount;
    v239 = 0;
    if ( (unsigned int)v125 <= 4 )
    {
      v240 = (struct DXGSYNCOBJECTMUTEX *)v241;
      if ( (_DWORD)v125 )
      {
        v126 = 0LL;
        v127 = (unsigned int)v125;
        do
        {
          v128 = v240;
          v126 += 16LL;
          *(_QWORD *)((char *)v240 + v126 - 16) = 0LL;
          *((_BYTE *)v128 + v126 - 8) = 0;
          --v127;
        }
        while ( v127 );
      }
      goto LABEL_145;
    }
    if ( 0xFFFFFFFFFFFFFFFFuLL / v125 >= 0x10 )
    {
      v179 = 16 * v125;
      if ( !is_mul_ok(v125, 0x10uLL) )
        v179 = -1LL;
      v180 = __CFADD__(v179, 8LL);
      v181 = v179 + 8;
      if ( v180 )
        v181 = -1LL;
      v182 = operator new[](v181, 0x4B677844u, 256LL);
      if ( v182 )
      {
        v183 = (struct DXGSYNCOBJECTMUTEX *)(v182 + 8);
        *(_QWORD *)v182 = v125;
        `vector constructor iterator'(
          (char *)(v182 + 8),
          16LL,
          v125,
          (void (__fastcall *)(char *))DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX);
        v240 = v183;
        v123 = 0;
      }
LABEL_145:
      v129 = v240;
      v242 = v125;
    }
    else
    {
      v129 = 0LL;
    }
    v130 = v124->PresentPlaneCount;
    if ( (unsigned int)v130 <= 4 )
    {
      v237 = (struct DXGSYNCOBJECTMUTEX *)v238;
      if ( (_DWORD)v130 )
      {
        v131 = 0LL;
        v132 = (unsigned int)v130;
        do
        {
          v133 = v237;
          v131 += 16LL;
          *(_QWORD *)((char *)v237 + v131 - 16) = 0LL;
          *((_BYTE *)v133 + v131 - 8) = 0;
          --v132;
        }
        while ( v132 );
      }
      goto LABEL_150;
    }
    if ( 0xFFFFFFFFFFFFFFFFuLL / v130 >= 0x10 )
    {
      v184 = 16 * v130;
      if ( !is_mul_ok(v130, 0x10uLL) )
        v184 = -1LL;
      v180 = __CFADD__(v184, 8LL);
      v185 = v184 + 8;
      if ( v180 )
        v185 = -1LL;
      v186 = operator new[](v185, 0x4B677844u, 256LL);
      if ( v186 )
      {
        *(_QWORD *)v186 = v130;
        v187 = (struct DXGSYNCOBJECTMUTEX *)(v186 + 8);
        `vector constructor iterator'(
          (char *)(v186 + 8),
          16LL,
          v130,
          (void (__fastcall *)(char *))DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX);
        v237 = v187;
      }
      v123 = 0;
LABEL_150:
      v134 = v237;
      v239 = v130;
    }
    else
    {
      v123 = 0;
      v134 = 0LL;
    }
    if ( v129 && v134 )
    {
      v135 = this;
      LODWORD(v68) = DXGCONTEXT::AcquireMultiPlaneOverlay3FlipFences(
                       this,
                       v124,
                       v214,
                       a9,
                       (struct DXGSYNCOBJECTLOCK *)&v218,
                       v129,
                       v134);
      if ( (int)v68 >= 0 )
      {
        if ( v195 )
        {
          v136 = v213;
          do
          {
            v137 = *v136;
            if ( *((struct _KTHREAD **)*v136 + 57) != KeGetCurrentThread() )
            {
              WdLogSingleEntry1(1LL, 2188LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pBroadcastContext[i]->GetContextLock()->IsExclusiveOwner()",
                2188LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v137 = *v136;
            }
            if ( (*((_DWORD *)this + 101) & 0x10) != 0 )
              DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(v137, 0LL, 0, 0, a9, 0);
            v138 = *v136;
            v139 = *((_QWORD *)*v136 + 2);
            if ( (*((_DWORD *)*v136 + 101) & 0x10) != 0 )
              v140 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v139 + 16) + 736LL) + 8LL)
                                                                                         + 432LL))(
                       *((_QWORD *)v138 + 36),
                       a9);
            else
              v140 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v139 + 16) + 736LL) + 8LL)
                                                                                         + 424LL))(
                       *((_QWORD *)v138 + 32),
                       a9);
            LODWORD(v68) = v140;
            if ( v140 < 0 )
              break;
            *(_DWORD *)a9 &= ~0x800u;
            ++v123;
            ++v136;
          }
          while ( v123 < v195 );
        }
        v141 = v237;
        if ( v237 == (struct DXGSYNCOBJECTMUTEX *)v238 )
        {
          v142 = v239;
          for ( i = 0; i < v142; ++i )
          {
            v144 = (struct DXGSYNCOBJECTMUTEX *)((char *)v141 + 16 * i);
            if ( *((_BYTE *)v144 + 8) )
            {
              DXGAUTOMUTEX::Release(v144);
              v142 = v239;
              v141 = v237;
            }
          }
        }
        else if ( v237 )
        {
          v188 = (char *)v237 - 8;
          `vector destructor iterator'(
            (char *)v237,
            16LL,
            *((_QWORD *)v237 - 1),
            (void (__fastcall *)(char *))DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX);
          operator delete(v188);
        }
        v145 = v240;
        if ( v240 == (struct DXGSYNCOBJECTMUTEX *)v241 )
        {
          v146 = v242;
          for ( j = 0; j < v146; ++j )
          {
            v148 = (struct DXGSYNCOBJECTMUTEX *)((char *)v145 + 16 * j);
            if ( *((_BYTE *)v148 + 8) )
            {
              DXGAUTOMUTEX::Release(v148);
              v146 = v242;
              v145 = v240;
            }
          }
        }
        else if ( v240 )
        {
          v189 = (char *)v240 - 8;
          `vector destructor iterator'(
            (char *)v240,
            16LL,
            *((_QWORD *)v240 - 1),
            (void (__fastcall *)(char *))DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX);
          operator delete(v189);
        }
        if ( v219 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v218);
        goto LABEL_176;
      }
      PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(&v237);
      PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(&v240);
      if ( v219 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v218);
      if ( P != v244 && P )
        ExFreePoolWithTag(P, 0);
LABEL_245:
      if ( v192 )
      {
        v168 = v195;
        do
        {
          v169 = 0;
          if ( v168 )
          {
            do
            {
              if ( *((_BYTE *)a9 + 356) )
              {
                v170 = *((_DWORD *)a9 + 151);
                v171 = v170 * ((8 * *((_DWORD *)a9 + 152) + 231) & 0xFFFFFFF8) + 648LL;
                v172 = (unsigned __int64)(v123 + v169 * v170) << 6;
                v173 = (char *)a9 + v171;
              }
              else
              {
                v173 = (char *)a9 + 504;
                v172 = 80LL * v123;
              }
              v190 = *(_QWORD *)&v173[v172];
              if ( v190 )
                (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v135 + 2) + 16LL)
                                                                                                + 760LL)
                                                                                    + 8LL)
                                                                        + 424LL))(
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v135 + 2) + 16LL) + 768LL),
                  *((unsigned int *)a9 + 34),
                  v190,
                  0LL);
              v168 = v195;
              ++v169;
            }
            while ( v169 < v195 );
          }
          ++v123;
        }
        while ( v123 < v192 );
      }
      WdLogSingleEntry2(2LL, v135, (int)v68);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed to submit present for multi plane overlay, returning 0x%I64x",
        (__int64)v135,
        (int)v68,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL, -1073741801LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to allocate FlipToSyncObjectMutexArray or FlipAwaySyncObjectMutexArray: Status = 0x%I64x",
        -1073741801LL,
        0LL,
        0LL,
        0LL,
        0LL);
      PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(&v237);
      PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(&v240);
      if ( v219 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v218);
      if ( P != v244 && P )
        ExFreePoolWithTag(P, 0);
    }
  }
  v149 = (void **)&v253;
  do
  {
    CAutoRefCountedBuffer::~CAutoRefCountedBuffer(--v149);
    --v38;
  }
  while ( v38 );
  v150 = (PLOOKASIDE_LIST_EX *)Entry;
  if ( Entry && _InterlockedExchangeAdd((volatile signed __int32 *)Entry + 3, 0xFFFFFFFF) == 1 )
  {
    if ( *v150 )
      ExFreeToLookasideListEx(*v150, v150);
    else
      ExFreePoolWithTag(v150, 0);
  }
  return (unsigned int)v68;
}
