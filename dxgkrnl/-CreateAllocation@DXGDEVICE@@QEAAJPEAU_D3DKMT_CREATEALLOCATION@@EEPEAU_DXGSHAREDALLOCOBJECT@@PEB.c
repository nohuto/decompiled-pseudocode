__int64 __fastcall DXGDEVICE::CreateAllocation(
        struct _KTHREAD **this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        unsigned __int8 a3,
        char a4,
        struct _DXGSHAREDALLOCOBJECT *a5,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a6,
        struct COREDEVICEACCESS *a7,
        unsigned int a8,
        struct _EPROCESS *a9,
        unsigned int *a10,
        unsigned __int64 *a11,
        unsigned __int64 *a12,
        struct _D3DKMT_CREATESTANDARDALLOCATION *a13,
        void *a14,
        UINT a15)
{
  struct _KTHREAD **v17; // rbx
  char *v18; // r12
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v23; // rdi
  struct DXGPROCESS *v24; // rax
  D3DKMT_CREATEALLOCATIONFLAGS *p_Flags; // r14
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // r8d
  void **v27; // r8
  struct _PAGED_LOOKASIDE_LIST *v28; // rcx
  UINT *p_NumAllocations; // rbx
  unsigned __int64 NumAllocations; // rax
  char *v31; // rax
  struct _D3DDDI_ALLOCATIONINFO2 *v32; // rdi
  void **v33; // rdx
  UINT v34; // ecx
  unsigned __int64 v35; // r15
  size_t v36; // r8
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // rdx
  UINT v38; // edi
  UINT v39; // edi
  struct _D3DKMT_CREATEALLOCATION *v40; // r13
  struct DXGRESOURCE *v41; // rdi
  unsigned int v42; // edx
  __int64 v43; // rcx
  char v44; // cl
  struct _DXGK_ALLOCATIONINFO *v45; // rdx
  struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D v46; // ecx
  unsigned int v47; // ecx
  D3DKMT_HANDLE v48; // eax
  D3DKMT_HANDLE v49; // ecx
  UINT v50; // ecx
  struct DXGALLOCATION *v51; // r11
  __int64 v52; // r8
  D3DKMT_HANDLE *v53; // rdx
  struct _KTHREAD **v54; // r10
  UINT v55; // edi
  struct DXGALLOCATION *v56; // r13
  ADAPTER_RENDER **v57; // rdx
  char v58; // cl
  KPROCESSOR_MODE v59; // r13
  struct _D3DKM_CREATESTANDARDALLOCATION *v60; // r13
  ADAPTER_RENDER **v61; // r10
  ADAPTER_RENDER *v62; // r14
  __int64 v63; // rcx
  struct _KTHREAD **v64; // r13
  char v65; // dl
  UINT v66; // edi
  void **v67; // r12
  __int64 v68; // rcx
  struct _D3DDDI_ALLOCATIONINFO2 *v69; // rax
  struct _KTHREAD **v70; // rdx
  struct DXGRESOURCE *v71; // rcx
  int v72; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v73; // eax
  struct _D3DDDI_ALLOCATIONINFO2 *v74; // r13
  unsigned __int64 PrivateDriverDataSize; // rcx
  char *v76; // rcx
  __int64 v77; // rdx
  char *v78; // rcx
  size_t v79; // r8
  char *pPrivateDriverData; // rdx
  unsigned int v81; // edx
  PVOID v82; // r12
  struct DXGTHREAD *DxgThread; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  struct _KTHREAD *v87; // rax
  struct _KTHREAD *v88; // r13
  __int64 v89; // rcx
  __int64 v90; // r8
  unsigned int v91; // edx
  __int64 v92; // rax
  __int64 v93; // r8
  __int64 v94; // rdi
  struct DXGALLOCATION *v95; // r9
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rcx
  size_t v99; // r8
  char *pPrivateRuntimeData; // rdx
  void *v101; // r9
  UINT v102; // ecx
  struct DXGALLOCATION *k; // rax
  struct _D3DDDI_ALLOCATIONINFO2 *v104; // rax
  __int64 v105; // rax
  struct DXGALLOCATION *v106; // rdx
  void *v107; // rcx
  size_t v108; // r8
  const void *v109; // rdx
  UINT v110; // eax
  unsigned int *p_hDevice; // rdx
  ADAPTER_RENDER **v112; // r13
  int v113; // r15d
  int v114; // ecx
  int v115; // eax
  struct DXGGLOBAL *v116; // rax
  struct _KTHREAD *v117; // rax
  __int64 v118; // rcx
  DXGADAPTER ***v119; // r8
  struct _KTHREAD **v120; // rdx
  unsigned int v121; // r9d
  UINT v122; // eax
  void *v123; // r9
  size_t v124; // r8
  D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation; // rdx
  UINT v126; // eax
  __int64 v127; // rcx
  __int64 v128; // rax
  void *v129; // rdx
  unsigned __int8 v130; // al
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  unsigned __int64 v134; // rdx
  unsigned __int64 v135; // rax
  __int64 v136; // rcx
  unsigned __int64 v137; // rax
  struct _DXGK_ALLOCATIONINFO *v138; // r9
  unsigned __int64 v139; // rdx
  unsigned __int64 v140; // rax
  unsigned __int64 v141; // rdx
  unsigned __int64 v142; // rax
  unsigned __int64 v143; // rdx
  struct DXGALLOCATION *v144; // rcx
  unsigned __int64 v145; // rax
  unsigned __int64 v146; // rax
  unsigned int v147; // r14d
  __int64 v148; // r9
  UINT Value; // r8d
  __int64 v150; // r8
  unsigned __int64 v151; // rcx
  SIZE_T v152; // rdx
  __int64 v153; // r8
  __int64 i; // rcx
  unsigned __int64 v155; // rax
  __int64 v156; // rax
  void *v157; // rcx
  unsigned int v158; // eax
  ADAPTER_RENDER *v159; // rax
  struct COREDEVICEACCESS *v160; // r9
  unsigned int *v161; // rcx
  struct DXGALLOCATION *v162; // rax
  UINT v163; // edx
  __int64 v164; // r8
  __int64 v165; // rax
  unsigned int v166; // edx
  __int64 PrivateRuntimeDataSize; // r8
  __int64 v168; // r9
  __int64 v169; // r9
  __int64 v170; // r8
  int v171; // eax
  __int64 v172; // r8
  unsigned int v173; // eax
  const void *v174; // r11
  void *v175; // r10
  void **v176; // rdx
  unsigned int v177; // r9d
  signed int v178; // eax
  unsigned __int8 *v179; // r13
  __int64 v180; // rdi
  int v181; // eax
  struct DXGALLOCATION *v182; // rdi
  UINT v183; // r15d
  struct _D3DDDI_ALLOCATIONINFO2 *v184; // r8
  struct _D3DKMT_CREATEALLOCATION *v185; // r12
  int v186; // ecx
  struct _D3DKMT_CREATEALLOCATION *v187; // r9
  int v188; // eax
  __int64 v189; // r8
  HANDLE v190; // r9
  struct _DXGSHAREDALLOCOBJECT *v191; // r9
  UINT v192; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v193; // r10d
  struct COREDEVICEACCESS *v194; // rdx
  unsigned int *v195; // r11
  struct COREDEVICEACCESS *v196; // r10
  __int64 v197; // rdx
  int v198; // ecx
  struct _DXGK_ALLOCATIONINFO *v199; // r11
  int v200; // eax
  unsigned int *v201; // rcx
  NTSTATUS v202; // eax
  __int64 v203; // rdi
  __int64 *v204; // r14
  int v205; // eax
  struct COREDEVICEACCESS *v206; // r8
  __int64 v207; // r10
  struct COREDEVICEACCESS *v208; // r11
  int Resident; // eax
  __int64 v210; // rdx
  struct _D3DKMT_CREATEALLOCATION *v211; // rcx
  size_t v212; // rcx
  const void *v213; // rdx
  char *v214; // r9
  size_t v215; // r8
  char *v216; // rcx
  void **v217; // rax
  struct _D3DKMT_CREATEALLOCATION *v218; // rcx
  UINT v219; // eax
  ADAPTER_RENDER **v220; // r12
  __int64 v221; // rax
  HANDLE CurrentProcessId; // rax
  int v223; // eax
  struct _D3DKMT_CREATEALLOCATION *v224; // r8
  D3DKMT_CREATEALLOCATIONFLAGS v225; // eax
  D3DDDI_ALLOCATIONINFO *v226; // rax
  struct _D3DKMT_CREATEALLOCATION *v227; // rcx
  __int64 v228; // rax
  HANDLE hSection; // rcx
  NTSTATUS v230; // eax
  __int64 v231; // rdi
  struct _D3DDDI_ALLOCATIONINFO2 *v232; // r14
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v233; // eax
  int v234; // ecx
  DXG_GUEST_VIRTUALGPU_VMBUS *v235; // rcx
  __int64 v236; // rcx
  __int64 v237; // rcx
  int v238; // r9d
  UINT v239; // ecx
  struct DXGALLOCATION *m; // r14
  __int64 v241; // rax
  int v242; // eax
  char *v243; // r14
  struct DXGALLOCATION *n; // rax
  struct DXGALLOCATION *v245; // rcx
  _QWORD *v246; // rcx
  __int64 v247; // rax
  __int64 v248; // r8
  _QWORD *v249; // rdx
  __int64 v250; // rcx
  int v251; // eax
  __int64 v252; // rcx
  char v253; // r14
  unsigned int Count; // r8d
  __int64 v255; // rax
  __int64 v256; // r9
  int v257; // edx
  int Object; // [rsp+20h] [rbp-3F8h]
  __int64 Objecta; // [rsp+20h] [rbp-3F8h]
  int v260; // [rsp+40h] [rbp-3D8h]
  int v261; // [rsp+48h] [rbp-3D0h]
  int v262; // [rsp+50h] [rbp-3C8h]
  int v263; // [rsp+60h] [rbp-3B8h]
  int v264; // [rsp+68h] [rbp-3B0h]
  int v265; // [rsp+70h] [rbp-3A8h]
  int v266; // [rsp+78h] [rbp-3A0h]
  int v267; // [rsp+88h] [rbp-390h]
  int v268; // [rsp+E0h] [rbp-338h]
  int v269; // [rsp+E8h] [rbp-330h]
  char v270; // [rsp+100h] [rbp-318h]
  char v272; // [rsp+102h] [rbp-316h]
  char v273; // [rsp+102h] [rbp-316h]
  struct DXGALLOCATION *v275; // [rsp+110h] [rbp-308h]
  unsigned __int8 v276[8]; // [rsp+120h] [rbp-2F8h] BYREF
  ADAPTER_RENDER **v277; // [rsp+128h] [rbp-2F0h]
  unsigned int v278; // [rsp+130h] [rbp-2E8h]
  UINT v279; // [rsp+134h] [rbp-2E4h]
  struct _D3DDDI_ALLOCATIONINFO2 *v280; // [rsp+138h] [rbp-2E0h]
  char v281; // [rsp+140h] [rbp-2D8h]
  char v282; // [rsp+141h] [rbp-2D7h]
  struct _D3DKMT_CREATEALLOCATION *v283; // [rsp+148h] [rbp-2D0h]
  struct DXGALLOCATION *v284; // [rsp+150h] [rbp-2C8h] BYREF
  struct _DXGK_ALLOCATIONINFO *v285; // [rsp+158h] [rbp-2C0h]
  void **v286; // [rsp+160h] [rbp-2B8h]
  struct COREDEVICEACCESS *v287; // [rsp+168h] [rbp-2B0h]
  void **v288; // [rsp+170h] [rbp-2A8h]
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // [rsp+178h] [rbp-2A0h]
  struct DXGRESOURCE *v290; // [rsp+180h] [rbp-298h]
  char v291; // [rsp+188h] [rbp-290h]
  unsigned __int8 v292; // [rsp+190h] [rbp-288h]
  struct DXGPROCESS *v293; // [rsp+198h] [rbp-280h]
  PVOID v294; // [rsp+1A0h] [rbp-278h]
  struct _DXGSHAREDALLOCOBJECT *v295; // [rsp+1A8h] [rbp-270h]
  unsigned __int64 *p_hAllocation; // [rsp+1B0h] [rbp-268h]
  unsigned __int64 v297; // [rsp+1B8h] [rbp-260h]
  size_t Size; // [rsp+1C0h] [rbp-258h]
  struct _D3DKM_CREATESTANDARDALLOCATION *v299; // [rsp+1C8h] [rbp-250h]
  struct DXGALLOCATION *j; // [rsp+1D0h] [rbp-248h]
  void *Src; // [rsp+1D8h] [rbp-240h]
  int v302; // [rsp+1E0h] [rbp-238h]
  UINT v303; // [rsp+1E4h] [rbp-234h] BYREF
  PVOID Entry; // [rsp+1E8h] [rbp-230h]
  struct DXGPROCESS *v305; // [rsp+1F0h] [rbp-228h]
  struct _EX_RUNDOWN_REF *v306; // [rsp+1F8h] [rbp-220h] BYREF
  struct DXGRESOURCE *v307; // [rsp+200h] [rbp-218h]
  unsigned int *v308; // [rsp+208h] [rbp-210h]
  DXGDEVICE *v309; // [rsp+210h] [rbp-208h]
  UINT *v310; // [rsp+218h] [rbp-200h]
  char *v311; // [rsp+220h] [rbp-1F8h]
  struct _DXGK_OPENALLOCATIONINFO *v312; // [rsp+228h] [rbp-1F0h]
  struct DXGRESOURCE *v313; // [rsp+230h] [rbp-1E8h] BYREF
  struct _D3DDDI_ALLOCATIONINFO2 *v314; // [rsp+238h] [rbp-1E0h]
  PVOID v315; // [rsp+240h] [rbp-1D8h] BYREF
  struct _EX_RUNDOWN_REF *v316; // [rsp+248h] [rbp-1D0h] BYREF
  struct _EX_RUNDOWN_REF *v317; // [rsp+250h] [rbp-1C8h] BYREF
  struct _D3DKMT_CREATESTANDARDALLOCATION *v318; // [rsp+258h] [rbp-1C0h]
  unsigned __int64 *v319; // [rsp+260h] [rbp-1B8h]
  unsigned __int64 *v320; // [rsp+268h] [rbp-1B0h]
  unsigned __int8 *v321; // [rsp+270h] [rbp-1A8h] BYREF
  D3DKMT_CREATEALLOCATIONFLAGS *v322; // [rsp+278h] [rbp-1A0h]
  _BYTE *v323; // [rsp+280h] [rbp-198h]
  struct DXGALLOCATION *v324; // [rsp+288h] [rbp-190h] BYREF
  struct DXGALLOCATION *v325; // [rsp+290h] [rbp-188h] BYREF
  PVOID v326; // [rsp+298h] [rbp-180h] BYREF
  struct _EX_RUNDOWN_REF *v327; // [rsp+2A0h] [rbp-178h] BYREF
  DXGFASTMUTEX *v328; // [rsp+2A8h] [rbp-170h] BYREF
  char v329; // [rsp+2B0h] [rbp-168h]
  char v330[8]; // [rsp+2B8h] [rbp-160h] BYREF
  __int64 v331; // [rsp+2C0h] [rbp-158h]
  int v332; // [rsp+2C8h] [rbp-150h]
  struct _D3DDDI_ALLOCATIONINFO2 *v333; // [rsp+2D0h] [rbp-148h]
  unsigned __int8 *v334; // [rsp+2D8h] [rbp-140h]
  struct _PAGED_LOOKASIDE_LIST *v335; // [rsp+2E0h] [rbp-138h]
  _BYTE v336[16]; // [rsp+2E8h] [rbp-130h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v337; // [rsp+2F8h] [rbp-120h] BYREF
  _BYTE v338[24]; // [rsp+328h] [rbp-F0h] BYREF
  _BYTE v339[32]; // [rsp+340h] [rbp-D8h] BYREF
  struct D3DDDI_MAPGPUVIRTUALADDRESS v340; // [rsp+360h] [rbp-B8h] BYREF

  v270 = a4;
  v283 = a2;
  v17 = this;
  v309 = (DXGDEVICE *)this;
  v292 = a3;
  v295 = a5;
  v299 = a6;
  v287 = a7;
  Size = (size_t)a9;
  v308 = a10;
  v319 = a11;
  p_hAllocation = a12;
  v318 = a13;
  v18 = (char *)(this + 2);
  v277 = this + 2;
  v311 = (char *)(this + 2);
  v19 = *((_QWORD *)this[2] + 2);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v19 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v19 + 168)) )
    {
      WdLogSingleEntry1(1LL, 4759LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
        4759LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    a4 = v270;
  }
  if ( a3 && a4 )
  {
    WdLogSingleEntry1(1LL, 4764LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!(UserMode && OpenShared)", 4764LL, 0LL, 0LL, 0LL, 0LL);
  }
  v20 = *(_QWORD *)(*(_QWORD *)v18 + 16LL);
  v272 = *(_BYTE *)(v20 + 209);
  v291 = v272;
  CurrentProcess = PsGetCurrentProcess(v20);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v23 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
    goto LABEL_10;
  Current = DXGTHREAD::GetCurrent();
  if ( !Current )
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v24 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    v293 = v24;
    if ( v24 )
    {
      v17 = this;
      goto LABEL_11;
    }
    WdLogSingleEntry1(2LL, 2923LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
    v17 = this;
LABEL_10:
    v24 = v23;
    v293 = v23;
    goto LABEL_11;
  }
  v24 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
  v293 = v24;
  if ( !v24 )
    goto LABEL_10;
LABEL_11:
  v305 = v24;
  p_Flags = &a2->Flags;
  v322 = &a2->Flags;
  Flags = a2->Flags;
  if ( (*(_WORD *)&Flags & 0x800) != 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 2284LL) & 0x10) == 0 )
    {
      WdLogSingleEntry2(3LL, v17, -1073741811LL);
      return 3221225485LL;
    }
    if ( (*(_BYTE *)&Flags & 2) == 0 )
    {
      WdLogSingleEntry3(3LL, v17, -1073741811LL, 1LL);
      return 3221225485LL;
    }
  }
  v27 = 0LL;
  v288 = 0LL;
  Src = 0LL;
  v28 = *(struct _PAGED_LOOKASIDE_LIST **)v18;
  Entry = 0LL;
  v335 = v28;
  p_NumAllocations = &a2->NumAllocations;
  v310 = &a2->NumAllocations;
  NumAllocations = a2->NumAllocations;
  if ( (unsigned int)NumAllocations > 5 )
  {
    v32 = 0LL;
    v280 = 0LL;
    v134 = NumAllocations;
    v135 = 96 * NumAllocations;
    v297 = v135;
    v136 = 0LL;
    VidPnSourceId = -1073741675;
    if ( v135 > 0xFFFFFFFF )
      v136 = 3221225621LL;
    v284 = (struct DXGALLOCATION *)v136;
    if ( v135 <= 0xFFFFFFFF )
    {
      v137 = 96 * v134;
      if ( !is_mul_ok(v134, 0x60uLL) )
        v137 = -1LL;
      v32 = (struct _D3DDDI_ALLOCATIONINFO2 *)operator new[](v137, 0x4B677844u, 256LL);
      v280 = v32;
      LODWORD(v136) = (_DWORD)v284;
      v135 = v297;
      v27 = 0LL;
    }
    v138 = 0LL;
    v285 = 0LL;
    if ( v135 <= 0xFFFFFFFF )
    {
      v139 = *p_NumAllocations;
      v136 = 0LL;
      if ( 88 * v139 > 0xFFFFFFFF )
        v136 = VidPnSourceId;
      v284 = (struct DXGALLOCATION *)v136;
      if ( 88 * v139 <= 0xFFFFFFFF )
      {
        v140 = 88 * v139;
        if ( !is_mul_ok(v139, 0x58uLL) )
          v140 = -1LL;
        v138 = (struct _DXGK_ALLOCATIONINFO *)operator new[](v140, 0x4B677844u, 258LL);
        v285 = v138;
        LODWORD(v136) = (_DWORD)v284;
        v27 = 0LL;
      }
    }
    v312 = 0LL;
    if ( (int)v136 >= 0 )
    {
      v141 = *p_NumAllocations;
      v136 = 0LL;
      if ( 32 * v141 > 0xFFFFFFFF )
        v136 = VidPnSourceId;
      v284 = (struct DXGALLOCATION *)v136;
      if ( 32 * v141 <= 0xFFFFFFFF )
      {
        v142 = 32 * v141;
        if ( !is_mul_ok(v141, 0x20uLL) )
          v142 = -1LL;
        v312 = (struct _DXGK_OPENALLOCATIONINFO *)operator new[](v142, 0x4B677844u, 256LL);
        LODWORD(v136) = (_DWORD)v284;
        v27 = 0LL;
        v138 = v285;
      }
    }
    v286 = 0LL;
    if ( (int)v136 < 0 )
      goto LABEL_291;
    v143 = *p_NumAllocations;
    v144 = 0LL;
    if ( 8 * v143 > 0xFFFFFFFF )
      v144 = (struct DXGALLOCATION *)VidPnSourceId;
    v284 = v144;
    if ( 8 * v143 > 0xFFFFFFFF )
    {
      v33 = 0LL;
    }
    else
    {
      v145 = 8 * v143;
      if ( !is_mul_ok(v143, 8uLL) )
        v145 = -1LL;
      v33 = (void **)operator new[](v145, 0x4B677844u, 256LL);
      v286 = v33;
      if ( a3 )
      {
        v146 = 8LL * *p_NumAllocations;
        if ( !is_mul_ok(*p_NumAllocations, 8uLL) )
          v146 = -1LL;
        v27 = (void **)operator new[](v146, 0x4B677844u, 256LL);
        v288 = v27;
        v33 = v286;
      }
      else
      {
        v27 = 0LL;
      }
      v138 = v285;
      LODWORD(v144) = (_DWORD)v284;
    }
    if ( (int)v144 < 0 || !v32 || !v138 || !v312 || !v33 || !v27 && a3 )
    {
LABEL_291:
      operator delete(v32);
      operator delete(v285);
      operator delete(v312);
      operator delete(v286);
      operator delete(v288);
      v147 = (unsigned int)v284;
      if ( (int)v284 >= 0 )
      {
        v147 = -1073741801;
        v148 = -1073741801LL;
      }
      else
      {
        v148 = (int)v284;
      }
      WdLogSingleEntry3(3LL, this, *p_NumAllocations, v148);
      return v147;
    }
  }
  else
  {
    v31 = (char *)ExAllocateFromPagedLookasideList(v28 + 13);
    Entry = v31;
    if ( !v31 )
    {
      WdLogSingleEntry1(6LL, this);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Device 0x%I64x: Out of memory allocating scratch data",
        (__int64)this,
        0LL,
        0LL,
        0LL,
        0LL);
      return -1073741801LL;
    }
    v32 = (struct _D3DDDI_ALLOCATIONINFO2 *)v31;
    v280 = (struct _D3DDDI_ALLOCATIONINFO2 *)v31;
    v285 = (struct _DXGK_ALLOCATIONINFO *)(v31 + 720);
    v312 = (struct _DXGK_OPENALLOCATIONINFO *)(v31 + 480);
    v33 = (void **)(v31 + 640);
    v286 = (void **)(v31 + 640);
    v27 = (void **)(v31 + 680);
    v288 = (void **)(v31 + 680);
  }
  v314 = v32;
  v333 = v32;
  v34 = 0;
  v279 = 0;
  while ( v34 < *p_NumAllocations )
  {
    v33[v34] = 0LL;
    if ( a3 )
      v27[v34] = 0LL;
    ++v34;
  }
  v279 = v34;
  v275 = 0LL;
  v284 = 0LL;
  LODWORD(v35) = 0;
  v276[0] = 0;
  v307 = 0LL;
  v282 = 0;
  v313 = 0LL;
  DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v328);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v330, 0LL, 0);
  if ( a3 )
  {
    v36 = 96LL * *p_NumAllocations;
    pAllocationInfo = a2->pAllocationInfo;
    if ( (D3DDDI_ALLOCATIONINFO *)((char *)pAllocationInfo + v36) < pAllocationInfo
      || (unsigned __int64)pAllocationInfo + v36 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v32, pAllocationInfo, v36);
  }
  else
  {
    memmove(v32, a2->pAllocationInfo, 96LL * *p_NumAllocations);
  }
  VidPnSourceId = -1;
  v302 = -1;
  if ( (*(_DWORD *)p_Flags & 0x10000) != 0 )
  {
    v32->pPrivateDriverData = a14;
    v32->PrivateDriverDataSize = a15;
  }
  v38 = 0;
  v279 = 0;
  while ( v38 < *p_NumAllocations )
  {
    v297 = v38;
    v68 = v38;
    v69 = v280;
    if ( (*(_DWORD *)p_Flags & 0x800) != 0 )
    {
      Value = v280[v68].Flags.Value;
      if ( (Value & 1) != 0 )
      {
        VidPnSourceId = v280[v68].VidPnSourceId;
        v302 = VidPnSourceId;
        v70 = this;
        if ( !this[235] )
        {
          Value &= ~1u;
          v280[v68].Flags.Value = Value;
        }
      }
      else
      {
        v70 = this;
      }
      if ( (Value & 2) != 0 )
      {
        v64 = this;
        WdLogSingleEntry2(3LL, this, -1073741811LL);
        goto LABEL_321;
      }
    }
    else
    {
      v70 = this;
    }
    v290 = (struct DXGRESOURCE *)&v69[v68];
    if ( (v69[v68].Flags.Value & 1) == 0 || v272 )
      goto LABEL_99;
    v117 = v70[235];
    v294 = v117;
    if ( !v117 )
    {
      if ( (*((_DWORD *)v70[5] + 106) & 0x100) == 0 )
      {
        v150 = *((unsigned int *)v290 + 7);
        goto LABEL_326;
      }
LABEL_99:
      v71 = v290;
      goto LABEL_100;
    }
    v118 = *((_QWORD *)v117 + 365);
    if ( !v118 || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v118 + 16)) )
    {
      WdLogSingleEntry1(1LL, 5024LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDisplayAdapter->IsDisplayAdapter() && pDisplayAdapter->GetDisplayCore()->IsCoreResourceSharedOwner()",
        5024LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v119 = (DXGADAPTER ***)v294;
    v120 = this;
    if ( *(_DWORD *)(*((_QWORD *)v294 + 365) + 96LL) != *((_DWORD *)this + 472) )
    {
      WdLogSingleEntry1(1LL, 5030LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDisplayAdapter->GetDisplayCore()->GetNumVidPnSources() == this->GetNumVidPnSources()",
        5030LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v120 = this;
      v119 = (DXGADAPTER ***)v294;
    }
    v71 = v290;
    v121 = *((_DWORD *)v290 + 7);
    if ( v121 >= *((_DWORD *)v120 + 472) )
    {
      v150 = *((unsigned int *)v290 + 7);
LABEL_326:
      v64 = this;
      WdLogSingleEntry3(3LL, this, v150, -1073741811LL);
LABEL_321:
      LODWORD(v35) = -1073741811;
LABEL_324:
      v41 = 0LL;
LABEL_139:
      v51 = 0LL;
      goto LABEL_140;
    }
    if ( !*((_DWORD *)v120 + 116) && !v270 && (*((_DWORD *)v293 + 106) & 0x100) == 0 )
    {
      if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(v119[365], (const struct DXGDEVICE *)v120, v121) )
      {
        v64 = this;
        LODWORD(v35) = -1071775744;
        WdLogSingleEntry4(3LL, -1071775744LL, this, *((unsigned int *)v290 + 7), v297);
        goto LABEL_324;
      }
      goto LABEL_99;
    }
LABEL_100:
    v72 = *((_DWORD *)v71 + 8);
    if ( (v72 & 2) != 0 && (v72 & 1) == 0 )
    {
      v64 = this;
      WdLogSingleEntry2(3LL, -1073741811LL, this);
      goto LABEL_321;
    }
    v73 = *p_Flags;
    if ( (*(_DWORD *)p_Flags & 0x10000) != 0 )
    {
      if ( (*(_BYTE *)&v73 & 0x20) != 0 && !*((_QWORD *)v71 + 1)
        || (*(_DWORD *)&v73 & 0x20000) != 0 && !*((_QWORD *)v71 + 1) )
      {
        v64 = this;
        WdLogSingleEntry2(2LL, this, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device 0x%I64x: ExistingSysMem pointer or Section Handle not specified, returning 0x%I64x",
          (__int64)this,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_321;
      }
      if ( (v151 = *((_QWORD *)v71 + 1),
            v294 = (PVOID)v151,
            v152 = a2->pStandardAllocation->ExistingHeapData.Size,
            v297 = v152,
            (*(_BYTE *)&v73 & 0x20) != 0)
        && v151 != (v151 & 0xFFFFFFFFFFFFF000uLL)
        || v152 != (v152 & 0xFFFFFFFFFFFFF000uLL) )
      {
        WdLogSingleEntry2(2LL, v151, v152);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Existing sysmem must be paged aligned and a multiple of page in size.                    pSysMem:0x%I"
                    "64x, Size:0x%I64x",
          (__int64)v294,
          v297,
          0LL,
          0LL,
          0LL);
        LODWORD(v35) = -1073741811;
        goto LABEL_319;
      }
    }
    v279 = ++v38;
  }
  v39 = 0;
  v279 = 0;
  while ( v39 < *p_NumAllocations )
  {
    v74 = &v280[v39];
    PrivateDriverDataSize = v74->PrivateDriverDataSize;
    if ( (unsigned int)PrivateDriverDataSize > 0x7FFFFFFF )
    {
      WdLogSingleEntry1(3LL, -1073741811LL);
      goto LABEL_319;
    }
    if ( v74->pPrivateDriverData && (_DWORD)PrivateDriverDataSize )
    {
      if ( a3 && (*(_DWORD *)p_Flags & 0x10000) == 0 )
        PrivateDriverDataSize = (unsigned int)(2 * PrivateDriverDataSize);
      v76 = (char *)operator new[](PrivateDriverDataSize, 0x4B677844u, 258LL);
      v77 = v39;
      v286[v77] = v76;
      if ( !v76 )
      {
        LODWORD(v35) = -1073741801;
        v153 = *p_NumAllocations;
        goto LABEL_323;
      }
      if ( a3 && (*(_DWORD *)p_Flags & 0x10000) == 0 )
      {
        v78 = &v76[v74->PrivateDriverDataSize];
        v288[v77] = v78;
        v79 = v74->PrivateDriverDataSize;
        pPrivateDriverData = (char *)v74->pPrivateDriverData;
        if ( &pPrivateDriverData[v79] < pPrivateDriverData
          || (unsigned __int64)&pPrivateDriverData[v79] > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v78, pPrivateDriverData, v79);
      }
    }
    else
    {
      v286[v39] = 0LL;
      if ( a3 )
        v288[v39] = 0LL;
    }
    v279 = ++v39;
  }
  v40 = v283;
  if ( a3 )
  {
    if ( v283->pStandardAllocation )
    {
      v122 = v283->PrivateDriverDataSize;
      if ( v122 )
      {
        v123 = (void *)operator new[](v122, 0x4B677844u, 258LL);
        Src = v123;
        if ( !v123 )
        {
          LODWORD(v35) = -1073741801;
          v153 = v283->PrivateDriverDataSize;
LABEL_323:
          v64 = this;
          WdLogSingleEntry3(3LL, this, v153, -1073741801LL);
          goto LABEL_324;
        }
        v124 = v283->PrivateDriverDataSize;
        pStandardAllocation = v283->pStandardAllocation;
        if ( (D3DKMT_CREATESTANDARDALLOCATION *)((char *)pStandardAllocation + v124) < pStandardAllocation
          || (unsigned __int64)pStandardAllocation + v124 > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v123, pStandardAllocation, v124);
      }
    }
  }
  LODWORD(v35) = DXGDEVICE::OpenResourceObject(
                   (DXGDEVICE *)this,
                   v40,
                   v280,
                   v270,
                   (struct _EPROCESS *)Size,
                   v295,
                   (struct DXGRESOURCEREFERENCE *)&v313,
                   v276,
                   v299,
                   (struct DXGAUTOMUTEX *)&v328,
                   (struct DXGAUTOPUSHLOCK *)v330);
  if ( (v35 & 0x80000000) != 0LL )
  {
LABEL_319:
    v41 = 0LL;
    v51 = 0LL;
    goto LABEL_194;
  }
  v41 = v313;
  v290 = v313;
  v307 = v313;
  if ( v313 && (*((_BYTE *)v313 + 4) & 1) == 0 && (*(_BYTE *)p_Flags & 2) != 0 )
  {
    v64 = this;
    WdLogSingleEntry3(2LL, this, v313, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: Driver asked to create a shared resource, but resource 0x%p already exists, and is non-sh"
                "ared, returning 0x%I64x",
      (__int64)this,
      (__int64)v41,
      -1073741811LL,
      0LL,
      0LL);
    LODWORD(v35) = -1073741811;
    goto LABEL_139;
  }
  v42 = v276[0];
  v278 = v276[0];
  v35 = *p_NumAllocations;
  v43 = *((_QWORD *)*v277 + 2);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v43 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v43 + 168)) )
    {
      WdLogSingleEntry1(1LL, 4679LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
        4679LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v42 = v278;
  }
  if ( v41 )
  {
    if ( !v42 )
    {
      for ( i = *((_QWORD *)v41 + 3); i; v35 = (unsigned int)(v35 + 1) )
        i = *(_QWORD *)(i + 64);
    }
    if ( (unsigned int)v35 > 0x10 )
    {
      v155 = 8 * v35;
      if ( !is_mul_ok(v35, 8uLL) )
        v155 = -1LL;
      v156 = operator new[](v155, 0x4B677844u, 256LL);
      v297 = v156;
      if ( !v156 )
      {
        v64 = this;
        WdLogSingleEntry3(3LL, this, v35, -1073741801LL);
        LODWORD(v35) = -1073741801;
        v51 = v284;
        v275 = v284;
        goto LABEL_140;
      }
      if ( !v278 )
      {
        v157 = (void *)*((_QWORD *)v41 + 8);
        if ( v157 )
        {
          operator delete(v157);
          v156 = v297;
        }
      }
      *((_QWORD *)v41 + 8) = v156;
    }
  }
  v325 = 0LL;
  LODWORD(v35) = DXGDEVICE::CreateAllocationObjects((DXGDEVICE *)this, *p_NumAllocations, &v284, v41, &v325);
  v295 = (struct _DXGSHAREDALLOCOBJECT *)(unsigned int)v35;
  if ( (v35 & 0x80000000) != 0LL )
  {
    v51 = v284;
    v275 = v284;
    goto LABEL_194;
  }
  v275 = v284;
  if ( v325 )
  {
    DXGDEVICE::AppendAllocationListToResourceOrDevice((DXGDEVICE *)this, v41, v284, v325);
    v282 = 1;
  }
  if ( (*(_DWORD *)p_Flags & 0x800) != 0 )
  {
    if ( VidPnSourceId != -1 )
    {
      *(_DWORD *)(*((_QWORD *)v41 + 7) + 12LL) |= 0x40u;
      *((_DWORD *)v41 + 1) |= 8u;
      *(_DWORD *)(*((_QWORD *)v41 + 7) + 12LL) ^= (*(_DWORD *)(*((_QWORD *)v41 + 7) + 12LL) ^ (*(unsigned int *)p_Flags >> 3)) & 0x80;
    }
  }
  else if ( (*(_DWORD *)p_Flags & 0x1000) != 0 )
  {
    if ( v299 )
    {
      if ( (*(_DWORD *)v299 & 0x80u) != 0 )
      {
        WdLogSingleEntry1(1LL, 5321LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pCreateStandardAllocation->Flags.Primary == 0",
          5321LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (*(_DWORD *)v299 & 0x100) != 0 )
LABEL_348:
        *((_DWORD *)v41 + 1) |= 8u;
    }
  }
  else if ( v41 )
  {
    v85 = *((_QWORD *)v41 + 7);
    if ( v85 )
    {
      if ( (*(_BYTE *)(v85 + 12) & 0x60) == 0x60 )
        goto LABEL_348;
    }
  }
  if ( !v272 )
  {
    memset(v285, 0, 88LL * *p_NumAllocations);
    v44 = v270;
    if ( !v270 )
    {
      LODWORD(v35) = DXGDEVICE::CreateDriverAllocations(
                       (DXGDEVICE *)this,
                       v40,
                       v280,
                       v285,
                       v275,
                       v41,
                       v286,
                       v288,
                       Src,
                       v299,
                       a3,
                       v318);
      v44 = 0;
    }
    if ( (v35 & 0x80000000) == 0LL )
    {
      LODWORD(v35) = DXGDEVICE::OpenAllocations(
                       (DXGDEVICE *)this,
                       v40,
                       v280,
                       v275,
                       v312,
                       v286,
                       v288,
                       Src,
                       a3,
                       v44,
                       a8,
                       v308,
                       v319);
      if ( (v35 & 0x80000000) == 0LL )
      {
        v45 = v285;
        if ( (*(_DWORD *)p_Flags & 8) != 0 )
          v285->Flags.Value |= 0x4000008u;
        if ( (*(_DWORD *)p_Flags & 0x100) != 0 )
        {
          v158 = v45->Flags.Value & 0xFEFFFFFB | 0x1000000;
        }
        else
        {
          if ( (*(_DWORD *)p_Flags & 0x200) == 0 )
            goto LABEL_52;
          v158 = v45->Flags.Value | 0x800004;
        }
        v45->Flags.Value = v158;
LABEL_52:
        v46 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v45->Flags.Value;
        if ( (*(_DWORD *)p_Flags & 0x8000) != 0 )
          v47 = *(_DWORD *)&v46 | 0x800;
        else
          v47 = *(_DWORD *)&v46 & 0xFFFFF7FF;
        v45->Flags.Value = v47;
        if ( (*(_DWORD *)p_Flags & 0x80000) != 0 )
          v45->Flags.Value = v47 | 0x1000;
        LODWORD(v35) = DXGDEVICE::CreateVidMmAllocations((DXGDEVICE *)this, v40, v280, v45, v275, v299, v270);
        v295 = (struct _DXGSHAREDALLOCOBJECT *)(unsigned int)v35;
        if ( (v35 & 0x80000000) == 0LL )
        {
          if ( p_hAllocation )
          {
            v159 = *v277;
            v160 = (struct COREDEVICEACCESS *)*((_QWORD *)*v277 + 96);
            v287 = v160;
            v161 = (unsigned int *)*((_QWORD *)v159 + 95);
            v308 = v161;
            v162 = v275;
            v163 = 0;
            while ( 1 )
            {
              v278 = v163;
              v294 = v162;
              if ( v163 >= *p_NumAllocations )
                break;
              v164 = *(unsigned int *)p_Flags >> 5;
              LOBYTE(v164) = (*(_DWORD *)p_Flags & 0x20) != 0;
              v165 = (*(__int64 (__fastcall **)(struct COREDEVICEACCESS *, _QWORD, __int64))(*((_QWORD *)v161 + 1)
                                                                                           + 624LL))(
                       v160,
                       *((_QWORD *)v162 + 3),
                       v164);
              v166 = v278;
              p_hAllocation[v278] = v165;
              v162 = (struct DXGALLOCATION *)*((_QWORD *)v294 + 8);
              v163 = v166 + 1;
              v160 = v287;
              v161 = v308;
            }
          }
          goto LABEL_58;
        }
      }
    }
LABEL_393:
    v51 = v275;
    goto LABEL_194;
  }
LABEL_58:
  if ( v276[0] )
  {
    if ( v41 )
    {
      if ( (*((_DWORD *)v41 + 1) & 1) != 0 )
      {
        v86 = *((_QWORD *)v41 + 7);
        if ( !*(_DWORD *)(v86 + 24) && (*(_DWORD *)(v86 + 12) & 8) == 0 )
        {
          DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v336);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v336);
          if ( (*(_DWORD *)p_Flags & 2) == 0 )
          {
            WdLogSingleEntry1(1LL, 5461LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"0 != (pCreateAllocation->Flags.CreateShared)",
              5461LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( (*((_DWORD *)v293 + 106) & 0x100) != 0 )
          {
            *(_DWORD *)(*((_QWORD *)v41 + 7) + 24LL) = DXGPROCESS::AllocHandleSafe(
                                                         *((_QWORD *)v293 + 76),
                                                         *((_QWORD *)v41 + 7),
                                                         2u);
            *(_DWORD *)(*((_QWORD *)v41 + 7) + 12LL) |= 0x2000u;
          }
          else
          {
            v116 = DXGGLOBAL::GetGlobal();
            *(_DWORD *)(*((_QWORD *)v41 + 7) + 24LL) = DXGGLOBAL::AllocHandle((__int64)v116, *((_QWORD *)v41 + 7), 2u);
          }
          if ( !*(_DWORD *)(*((_QWORD *)v41 + 7) + 24LL) )
          {
            v64 = this;
            WdLogSingleEntry2(3LL, this, -1073741801LL);
            LODWORD(v35) = -1073741801;
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v336);
            v51 = v275;
            goto LABEL_140;
          }
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v336);
        }
      }
    }
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v338, this + 30);
    v87 = this[7];
    if ( v87 )
      *((_QWORD *)v87 + 4) = v41;
    *((_QWORD *)v41 + 5) = this[7];
    this[7] = v41;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v338);
  }
  v48 = 0;
  if ( v41 )
    v48 = *((_DWORD *)v41 + 4);
  v40->hResource = v48;
  if ( ((*(_DWORD *)p_Flags & 2) != 0 || v270) && (*(_DWORD *)p_Flags & 0x40) == 0 )
    v49 = *(_DWORD *)(*((_QWORD *)v41 + 7) + 24LL);
  else
    v49 = 0;
  v40->hGlobalShare = v49;
  if ( a3 )
  {
    v50 = 0;
    v279 = 0;
    v51 = v275;
    v52 = (__int64)v275;
    j = v275;
    while ( v50 < *p_NumAllocations )
    {
      v53 = &v40->pAllocationInfo->hAllocation + 24 * v50;
      if ( (unsigned __int64)v53 >= MmUserProbeAddress )
        v53 = (D3DKMT_HANDLE *)MmUserProbeAddress;
      *v53 = *(_DWORD *)(v52 + 16);
      v279 = ++v50;
      v52 = *(_QWORD *)(v52 + 64);
      j = (struct DXGALLOCATION *)v52;
    }
  }
  else
  {
    v52 = 0LL;
    v279 = 0;
    v51 = v275;
    v95 = v275;
    j = v275;
    while ( (unsigned int)v52 < *p_NumAllocations )
    {
      *(&v40->pAllocationInfo->hAllocation + 24 * (unsigned int)v52) = *((_DWORD *)v95 + 4);
      v52 = (unsigned int)(v52 + 1);
      v95 = (struct DXGALLOCATION *)*((_QWORD *)v95 + 8);
    }
    v279 = v52;
    j = v95;
  }
  v54 = this;
  if ( (*((_DWORD *)this[5] + 106) & 0x100) == 0 || *((_DWORD *)this + 472) )
  {
    v55 = 0;
    v279 = 0;
    v56 = v51;
    for ( j = v51; ; j = v56 )
    {
      if ( v55 >= *p_NumAllocations )
      {
        v40 = v283;
        v41 = v290;
        v51 = v275;
        break;
      }
      v81 = *(_DWORD *)(*((_QWORD *)v56 + 6) + 4LL);
      if ( (v81 & 1) != 0 )
      {
        LODWORD(v35) = DXGDEVICE::AddPrimaryAllocation((DXGDEVICE *)v54, v56);
        v295 = (struct _DXGSHAREDALLOCOBJECT *)(unsigned int)v35;
        if ( (v35 & 0x80000000) != 0LL )
          goto LABEL_392;
      }
      else
      {
        if ( (v81 & 2) == 0 )
          goto LABEL_119;
        DXGDEVICE::SetDisplayedPrimary((DXGDEVICE *)v54, (v81 >> 6) & 0xF, v56, 0, 1u);
      }
      v54 = this;
LABEL_119:
      v279 = ++v55;
      v56 = (struct DXGALLOCATION *)*((_QWORD *)v56 + 8);
    }
  }
  if ( (*(_DWORD *)p_Flags & 2) != 0 )
  {
    if ( v40->pPrivateRuntimeData )
    {
      v96 = *((_QWORD *)v41 + 7);
      if ( *(_QWORD *)(v96 + 104) )
      {
        if ( *(_DWORD *)(v96 + 112) != v40->PrivateRuntimeDataSize )
        {
          LODWORD(v35) = -1073741811;
          v168 = *(unsigned int *)(v96 + 112);
          PrivateRuntimeDataSize = v40->PrivateRuntimeDataSize;
          goto LABEL_361;
        }
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)v41 + 7) + 104LL) = operator new[](v40->PrivateRuntimeDataSize, 0x4B677844u, 258LL);
        v97 = *((_QWORD *)v41 + 7);
        v98 = v40->PrivateRuntimeDataSize;
        if ( !*(_QWORD *)(v97 + 104) )
        {
LABEL_360:
          LODWORD(v35) = -1073741801;
          PrivateRuntimeDataSize = v98;
          v168 = -1073741801LL;
LABEL_361:
          v64 = this;
          WdLogSingleEntry3(3LL, this, PrivateRuntimeDataSize, v168);
          goto LABEL_363;
        }
        *(_DWORD *)(v97 + 112) = v98;
      }
      if ( a3 )
      {
        v99 = v40->PrivateRuntimeDataSize;
        pPrivateRuntimeData = (char *)v40->pPrivateRuntimeData;
        v101 = *(void **)(*((_QWORD *)v41 + 7) + 104LL);
        if ( &pPrivateRuntimeData[v99] < pPrivateRuntimeData
          || (unsigned __int64)&pPrivateRuntimeData[v99] > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v101, pPrivateRuntimeData, v99);
      }
      else
      {
        memmove(*(void **)(*((_QWORD *)v41 + 7) + 104LL), v40->pPrivateRuntimeData, v40->PrivateRuntimeDataSize);
      }
      if ( (*(_DWORD *)p_Flags & 0x100000) != 0 )
      {
        LODWORD(v35) = CheckNoKmdAccessPrivateData(
                         v40->PrivateRuntimeDataSize,
                         *(void **)(*((_QWORD *)v41 + 7) + 104LL),
                         0xFF000004);
        v295 = (struct _DXGSHAREDALLOCOBJECT *)(unsigned int)v35;
        if ( (v35 & 0x80000000) != 0LL )
          goto LABEL_393;
      }
    }
    if ( !v40->pStandardAllocation )
      goto LABEL_180;
    v126 = v40->PrivateDriverDataSize;
    if ( !v126 )
      goto LABEL_180;
    v127 = *((_QWORD *)v41 + 7);
    if ( *(_QWORD *)(v127 + 120) )
    {
      if ( *(_DWORD *)(v127 + 128) != v126 )
      {
        LODWORD(v35) = -1073741811;
        v169 = *(unsigned int *)(v127 + 128);
        v170 = v40->PrivateDriverDataSize;
        Objecta = 5714LL;
        goto LABEL_362;
      }
LABEL_233:
      if ( a3 )
        v129 = Src;
      else
        v129 = v40->pStandardAllocation;
      memmove(*(void **)(*((_QWORD *)v41 + 7) + 120LL), v129, v40->PrivateDriverDataSize);
      if ( (*(_DWORD *)p_Flags & 0x100000) != 0 )
      {
        v171 = CheckNoKmdAccessPrivateData(
                 v40->PrivateDriverDataSize,
                 *(void **)(*((_QWORD *)v41 + 7) + 120LL),
                 0xFF000001);
        LODWORD(v35) = v171;
        v295 = (struct _DXGSHAREDALLOCOBJECT *)(unsigned int)v171;
        if ( v171 < 0 )
          goto LABEL_193;
      }
LABEL_180:
      v102 = 0;
      for ( k = v275; ; k = (struct DXGALLOCATION *)*((_QWORD *)j + 8) )
      {
        j = k;
        v279 = v102;
        if ( v102 >= *p_NumAllocations )
          break;
        v287 = (struct COREDEVICEACCESS *)v102;
        v104 = &v280[v102];
        p_hAllocation = (unsigned __int64 *)&v104->hAllocation;
        if ( v104->pPrivateDriverData )
        {
          v105 = operator new[](v104->PrivateDriverDataSize, 0x4B677844u, 258LL);
          v106 = j;
          *(_QWORD *)(*((_QWORD *)j + 6) + 32LL) = v105;
          v107 = *(void **)(*((_QWORD *)v106 + 6) + 32LL);
          if ( !v107 )
          {
            LODWORD(v35) = -1073741801;
            v169 = *((unsigned int *)p_hAllocation + 6);
            v170 = v279 + 1;
            Objecta = -1073741801LL;
LABEL_362:
            v64 = this;
            WdLogSingleEntry4(3LL, this, v170, v169, Objecta);
LABEL_363:
            v51 = v275;
LABEL_140:
            v61 = v64 + 2;
            goto LABEL_84;
          }
          if ( !a3 || (*(_DWORD *)p_Flags & 0x10000) != 0 )
          {
            v108 = *((unsigned int *)p_hAllocation + 6);
            v109 = (const void *)p_hAllocation[2];
          }
          else
          {
            v108 = *((unsigned int *)p_hAllocation + 6);
            v109 = v288[(_QWORD)v287];
          }
          memmove(v107, v109, v108);
          *(_DWORD *)(*((_QWORD *)j + 6) + 40LL) = *((_DWORD *)p_hAllocation + 6);
          v102 = v279;
        }
        ++v102;
      }
      v54 = this;
      v51 = v275;
      goto LABEL_75;
    }
    *(_QWORD *)(*((_QWORD *)v41 + 7) + 120LL) = operator new[](v126, 0x4B677844u, 258LL);
    v128 = *((_QWORD *)v41 + 7);
    v98 = v40->PrivateDriverDataSize;
    if ( *(_QWORD *)(v128 + 120) )
    {
      *(_DWORD *)(v128 + 128) = v98;
      goto LABEL_233;
    }
    goto LABEL_360;
  }
LABEL_75:
  v57 = v54 + 2;
  v287 = (struct COREDEVICEACCESS *)*((_QWORD *)v54[2] + 2);
  v323 = (char *)v287 + 209;
  v58 = v270;
  if ( !*((_BYTE *)v287 + 209) || v270 )
  {
    v59 = a3;
LABEL_77:
    if ( *v323 && !v58 && bTracingEnabled )
    {
      v218 = (struct _D3DKMT_CREATEALLOCATION *)v51;
      v219 = 0;
      v220 = v277;
      while ( 1 )
      {
        v278 = v219;
        v283 = v218;
        if ( v219 >= *p_NumAllocations )
          break;
        if ( bTracingEnabled )
        {
          LODWORD(v305) = HIDWORD(v218->pPrivateRuntimeData);
          v221 = *(_QWORD *)&v218->PrivateDriverDataSize;
          v323 = (_BYTE *)v221;
          if ( v221 )
            v297 = *(_QWORD *)(v221 + 48);
          else
            v297 = 0LL;
          if ( v221 )
            v302 = *(_DWORD *)(v221 + 16);
          else
            v302 = 0;
          LODWORD(Size) = v218->pPrivateRuntimeData;
          if ( v221 )
            v314 = *(struct _D3DDDI_ALLOCATIONINFO2 **)(v221 + 56);
          else
            v314 = 0LL;
          v322 = (D3DKMT_CREATEALLOCATIONFLAGS *)*((_QWORD *)*v220 + 2);
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
            McTemplateK0ppppppppppppq_EtwWriteTransfer(
              (__int64)v322,
              &EventCreateDeviceAllocation,
              v297,
              CurrentProcessId,
              this,
              v322,
              v283);
          v219 = v278;
          v218 = v283;
        }
        ++v219;
        v218 = (struct _D3DKMT_CREATEALLOCATION *)v218->hPrivateRuntimeResourceHandle;
      }
      v59 = a3;
      v51 = v275;
      v57 = v220;
    }
    if ( (*(_DWORD *)p_Flags & 0x800) == 0 )
    {
      v60 = v299;
      if ( (*(_DWORD *)p_Flags & 0x1000) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)*v57 + 95) + 8LL) + 760LL))(
          *((_QWORD *)*v57 + 96),
          *((_QWORD *)v51 + 3),
          *((_QWORD *)v299 + 43));
        v51 = v275;
      }
LABEL_81:
      v61 = v277;
      v62 = *v277;
      v63 = *((_QWORD *)*v277 + 2);
      if ( (*(_DWORD *)(v63 + 2284) & 0x40) == 0 )
      {
        v303 = 0;
        SysMmQueryIommuState(*(const struct SYSMM_ADAPTER **)(v63 + 224), (union SYSMM_IOMMU_STATE *)&v303);
        v51 = v275;
        v61 = v277;
        if ( (v303 & 4) == 0 )
          goto LABEL_83;
      }
      if ( !v60 || (*(_DWORD *)v60 & 0x200) != 0 )
        goto LABEL_83;
      memset(&v340, 0, sizeof(v340));
      v340.Protection.Value = 1LL;
      v110 = 0;
      p_hDevice = (unsigned int *)v275;
      v112 = v277;
      while ( 1 )
      {
        j = (struct DXGALLOCATION *)p_hDevice;
        v283 = (struct _D3DKMT_CREATEALLOCATION *)p_hDevice;
        v279 = v110;
        if ( v110 >= *p_NumAllocations )
          break;
        v113 = (p_hDevice[18] >> 12) & 0x3F;
        if ( *((_DWORD *)v299 + 4) == 4 )
        {
          v114 = *(_DWORD *)(*((_QWORD *)v299 + 3) + 12LL);
          if ( ((v114 - 1) & 0xFFFFFFFC) != 0 || v114 == 2 )
          {
            v130 = DXGADAPTER::ReplicateGdiContent(*((DXGADAPTER **)*v112 + 2));
            p_hDevice = &v283->hDevice;
            if ( v130 )
              v113 = -1;
          }
        }
        if ( v272 )
        {
          v235 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)*v112 + 2) + 4472LL);
          v64 = this;
          v115 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                   v235,
                   *((_DWORD *)v293 + 126),
                   (const struct DXGDEVICE *)this,
                   0,
                   p_hDevice[5],
                   &v340);
        }
        else
        {
          LOBYTE(Object) = 0;
          v115 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct D3DDDI_MAPGPUVIRTUALADDRESS *, int, int))(*(_QWORD *)(*((_QWORD *)v62 + 95) + 8LL) + 792LL))(
                   *((_QWORD *)v62 + 96),
                   0LL,
                   *((_QWORD *)p_hDevice + 3),
                   &v340,
                   Object,
                   v113);
          v64 = this;
        }
        LODWORD(v35) = v115;
        if ( v115 < 0 )
        {
          WdLogSingleEntry1(3LL, v115);
          v51 = v275;
          v61 = v277;
          goto LABEL_84;
        }
        v112 = v277;
        if ( DXGADAPTER::ReplicateGdiContent(*((DXGADAPTER **)*v277 + 2)) )
          v340.BaseAddress = v340.VirtualAddress;
        v340.VirtualAddress = 0LL;
        v110 = v279 + 1;
        p_hDevice = (unsigned int *)v283->hPrivateRuntimeResourceHandle;
      }
LABEL_193:
      v51 = v275;
      goto LABEL_194;
    }
    memset(&v337.Width, 0, 40);
    v337.hAllocation = *(HANDLE *)(*((_QWORD *)v51 + 6) + 16LL);
    v223 = ADAPTER_RENDER::DdiDescribeAllocation(*v57, &v337, v52);
    LODWORD(v35) = v223;
    if ( v223 < 0 )
    {
      v64 = this;
      WdLogSingleEntry4(3LL, v223, this, *((unsigned int *)v275 + 4), v275);
      v51 = v275;
      v61 = v277;
      goto LABEL_84;
    }
    if ( v337.Format == D3DDDIFMT_UNKNOWN && v337.Height != 1 )
    {
      v64 = this;
      WdLogSingleEntry3(3LL, -1073741811LL, this, v337.Height);
      LODWORD(v35) = -1073741811;
      v51 = v275;
      v61 = v277;
      goto LABEL_84;
    }
    v51 = v275;
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v275 + 5) + 56LL) + 12LL) & 0x20) == 0 )
    {
      WdLogSingleEntry1(1LL, 6159LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pAllocationObjectList->m_pOwningResource->m_pSharedResource->m_CrossAdapter",
        6159LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v51 = v275;
    }
    v224 = *(struct _D3DKMT_CREATEALLOCATION **)(*((_QWORD *)v51 + 5) + 56LL);
    v283 = v224;
    LODWORD(v224[2].hPrivateRuntimeResourceHandle) = v337.Width;
    HIDWORD(v224[2].hPrivateRuntimeResourceHandle) = v337.Height;
    v224[3].hDevice = v337.Format;
    v225 = *p_Flags;
    if ( (*((_BYTE *)this + 1901) & 1) != 0 )
    {
      if ( (*(_DWORD *)&v225 & 0x20000) != 0 )
      {
        hSection = v280->hSection;
        v315 = 0LL;
        v230 = ObReferenceObjectByHandle(hSection, 0x20000u, MmSectionObjectType, v59, &v315, 0LL);
        v224 = v283;
        v283[2].pAllocationInfo = (D3DDDI_ALLOCATIONINFO *)v315;
        LODWORD(v35) = v230;
        if ( v230 < 0 )
        {
          v231 = v230;
          v232 = v280;
          WdLogSingleEntry2(2LL, v280->hSection, v230);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to take a reference on hSection:0x%I64x, returning 0x%I64x",
            (__int64)v232->hSection,
            v231,
            0LL,
            0LL,
            0LL);
          v41 = v290;
          v51 = v275;
          goto LABEL_194;
        }
      }
      else
      {
        if ( *((_BYTE *)this + 1901) & 1 || (*(_BYTE *)&v225 & 0x20) != 0 )
          goto LABEL_497;
        v324 = (struct DXGALLOCATION *)*((unsigned int *)v51 + 30);
        LODWORD(v35) = MmCreateSection(
                         &v224[2].pAllocationInfo,
                         0LL,
                         0LL,
                         &v324,
                         4,
                         ~(*(_DWORD *)(*((_QWORD *)v51 + 6) + 4LL) << 11) & 0x40000000 | 0x8000000u,
                         0LL,
                         0LL);
        if ( (v35 & 0x80000000) != 0LL )
        {
          WdLogSingleEntry1(2LL, 6221LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to create section for cross adapter paravirtualized allocation",
            6221LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v51 = v275;
          goto LABEL_194;
        }
        v224 = v283;
      }
      *(&v224->hGlobalShare + 1) |= 0x400u;
    }
    else
    {
      if ( (*(_BYTE *)&v225 & 0x20) == 0 )
      {
        v226 = (D3DDDI_ALLOCATIONINFO *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)*v277 + 95)
                                                                                              + 8LL)
                                                                                  + 680LL))(
                                          *((_QWORD *)*v277 + 96),
                                          *((_QWORD *)v51 + 3));
        v227 = v283;
        v283[2].pAllocationInfo = v226;
        *(&v227->hGlobalShare + 1) |= 0x400u;
        v51 = v275;
      }
      v228 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)*v277 + 95) + 8LL) + 752LL))(
               *((_QWORD *)*v277 + 96),
               *((_QWORD *)v51 + 3));
      v224 = v283;
      *(_QWORD *)&v283[3].hGlobalShare = v228;
    }
    v51 = v275;
LABEL_497:
    v233 = VidPnSourceId;
    LODWORD(v224[3].pPrivateRuntimeData) = VidPnSourceId;
    v60 = v299;
    if ( v233 != -1 )
    {
      v234 = *(&v224->hGlobalShare + 1) | 0x40;
      *(&v224->hGlobalShare + 1) = v234;
      *(&v224->hGlobalShare + 1) = v234 ^ ((unsigned __int8)v234 ^ (unsigned __int8)(*(unsigned int *)p_Flags >> 3)) & 0x80;
    }
    goto LABEL_81;
  }
  LODWORD(Size) = DXGPROCESS::GetHostProcess(v54[5]);
  if ( !(_DWORD)Size )
  {
    WdLogSingleEntry1(2LL, -1073741823LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get host adapter process, returning 0x%I64x",
      -1073741823LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v35) = -1073741823;
    v51 = v275;
    goto LABEL_194;
  }
  v321 = 0LL;
  if ( !DXGDEVICE::UmdManagesResidency((DXGDEVICE *)this)
    || !v299
    || (v173 = *((_DWORD *)v299 + 4) - 1, v281 = 1, v173 > 2) )
  {
    v281 = 0;
  }
  v287 = (struct COREDEVICEACCESS *)((char *)v287 + 4472);
  if ( (*(_DWORD *)p_Flags & 2) != 0 )
    v174 = *(const void **)(*((_QWORD *)v41 + 7) + 104LL);
  else
    v174 = 0LL;
  v175 = Src;
  if ( !a3 )
  {
    v175 = v40->pStandardAllocation;
    goto LABEL_386;
  }
  v176 = v288;
  if ( (*(_DWORD *)p_Flags & 0x10000) != 0 )
LABEL_386:
    v176 = v286;
  if ( (*(_DWORD *)p_Flags & 2) != 0 )
    v177 = *((_DWORD *)v41 + 5);
  else
    v177 = 0;
  v318 = (struct _D3DKMT_CREATESTANDARDALLOCATION *)(v172 + 472);
  v178 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateAllocation(
           v287,
           Size,
           *(_DWORD *)(v172 + 472),
           v177,
           v40,
           v280,
           v176,
           v175,
           v174,
           a3,
           v281,
           &v321);
  v278 = v178;
  v179 = v321;
  v283 = (struct _D3DKMT_CREATEALLOCATION *)v321;
  if ( !v321 )
  {
    v180 = v178;
    WdLogSingleEntry1(2LL, v178);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBusSendCreateAllocation failed: 0x%I64x",
      v180,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v35) = v180;
LABEL_392:
    v41 = v290;
    goto LABEL_393;
  }
  v334 = v321;
  if ( v41 )
  {
    *((_DWORD *)v41 + 5) = *((_DWORD *)v321 + 1);
    if ( (*(_DWORD *)p_Flags & 2) != 0 )
    {
      v181 = *((_DWORD *)v179 + 2);
      if ( (*(_DWORD *)p_Flags & 0x40) != 0 )
      {
        if ( v181 )
        {
          WdLogSingleEntry1(1LL, 5838LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"NULL == pOutput->hGlobalSharedResource",
            5838LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else if ( !v181 )
      {
        WdLogSingleEntry1(1LL, 5842LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pOutput->hGlobalSharedResource",
          5842LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(*((_QWORD *)v41 + 7) + 28LL) = *((_DWORD *)v179 + 2);
    }
  }
  p_hAllocation = 0LL;
  v320 = 0LL;
  if ( (*(_DWORD *)p_Flags & 2) != 0 && v41 )
  {
    p_hAllocation = *(unsigned __int64 **)(*((_QWORD *)v41 + 7) + 136LL);
    v320 = p_hAllocation;
  }
  v182 = v275;
  v183 = 0;
  v64 = this;
  v184 = v280;
  v185 = v283;
  v61 = v277;
  while ( v183 < *p_NumAllocations )
  {
    v186 = *(&v185->hGlobalShare + 1);
    *((_DWORD *)v182 + 32) = v186;
    v187 = &v185[v183];
    *((_DWORD *)v182 + 5) = v187->pPrivateRuntimeData;
    *((_BYTE *)v182 + 128) = v186 | 4;
    if ( (*(_DWORD *)p_Flags & 2) != 0 && (*(_DWORD *)p_Flags & 0x20020) != 0 )
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v182 + 5) + 56LL) + 200LL) = *(&v187->PrivateRuntimeDataSize + 1);
    else
      *((_DWORD *)v182 + 31) = *(&v187->PrivateRuntimeDataSize + 1);
    if ( *(_BYTE *)(&v185->hGlobalShare + 1) & 1 | ((*(_BYTE *)(&v185->hGlobalShare + 1) & 2) != 0) )
    {
      *((_QWORD *)v182 + 13) = v184[v183].hSection;
      *((_BYTE *)v182 + 128) ^= (*((_BYTE *)v182 + 128) ^ (8 * (v187->PrivateRuntimeDataSize >> 21))) & 8;
    }
    *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^= (v187->PrivateRuntimeDataSize ^ *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL)) & 1;
    *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^= (v187->PrivateRuntimeDataSize ^ *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL)) & 2;
    *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^= (v187->PrivateRuntimeDataSize ^ *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL)) & 4;
    *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^= (v187->PrivateRuntimeDataSize ^ *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL)) & 8;
    *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^= (v187->PrivateRuntimeDataSize ^ *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL)) & 0x20;
    *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^= (v187->PrivateRuntimeDataSize ^ *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL)) & 0x800;
    *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^= (v187->PrivateRuntimeDataSize ^ *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL)) & 0x1000;
    *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^= (v187->PrivateRuntimeDataSize ^ *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL)) & 0x2000;
    *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^= (v187->PrivateRuntimeDataSize ^ *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL)) & 0x4000;
    *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^= (v187->PrivateRuntimeDataSize ^ *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL)) & 0x40000;
    *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^= (v187->PrivateRuntimeDataSize ^ *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL)) & 0x80000;
    *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^= (v187->PrivateRuntimeDataSize ^ *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL)) & 0x100000;
    *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) |= 0x20000u;
    v61 = this + 2;
    if ( (v184[v183].Flags.Value & 1) != 0 )
    {
      *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) ^ (v184[v183].VidPnSourceId << 6)) & 0x3C0;
      if ( this[235] != *((struct _KTHREAD **)*v61 + 2) )
        *(_DWORD *)(*((_QWORD *)v182 + 6) + 4LL) |= 4u;
    }
    if ( bTracingEnabled )
    {
      v188 = *((_DWORD *)v182 + 18) >> 12;
      LOWORD(v188) = v188 & 0x3F;
      LODWORD(Size) = v188;
      v287 = (struct COREDEVICEACCESS *)*((_QWORD *)v182 + 6);
      v308 = (unsigned int *)*((unsigned int *)v182 + 30);
      v319 = (unsigned __int64 *)*((_QWORD *)*v61 + 2);
      v190 = PsGetCurrentProcessId();
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
        McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
          (unsigned int)Size,
          &EventCreateAdapterAllocation,
          v189,
          (__int64)v190,
          (char)this,
          (char)v319,
          0,
          (char)v308,
          v260,
          v261,
          v262,
          0,
          v263,
          v264,
          v265,
          v266,
          (char)v287,
          v267,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          v268,
          v269,
          Size,
          0);
      v61 = this + 2;
      v184 = v280;
    }
    ++v183;
    v182 = (struct DXGALLOCATION *)*((_QWORD *)v182 + 8);
  }
  LODWORD(v35) = (_DWORD)v295;
  v41 = v290;
  if ( (v278 & 0x80000000) != 0 )
  {
    LODWORD(v35) = v278;
    v51 = v275;
    goto LABEL_84;
  }
  v191 = v275;
  v192 = 0;
  v59 = a3;
  while ( 2 )
  {
    v278 = v192;
    v297 = (unsigned __int64)v191;
    v295 = v191;
    if ( v192 < *p_NumAllocations )
    {
      LODWORD(Size) = v283[v192].pStandardAllocation;
      v193 = *p_Flags;
      if ( (*(_DWORD *)p_Flags & 0x10000) != 0 )
      {
        v194 = (struct COREDEVICEACCESS *)(&v314->hSection + 12 * v192);
        v287 = v194;
        if ( (*(_BYTE *)&v193 & 0x20) != 0 )
        {
          v195 = *(unsigned int **)v194;
          v308 = *(unsigned int **)v194;
          if ( (*((_BYTE *)this + 1901) & 1) != 0 )
          {
            v196 = (struct COREDEVICEACCESS *)(88LL * v192);
          }
          else
          {
            v287 = (struct COREDEVICEACCESS *)(88LL * v192);
            LODWORD(v35) = ProcessSysMemAttributes(
                             v195,
                             Size,
                             (struct _DXGK_ALLOCATIONINFO *)((char *)v285 + (_QWORD)v287));
            if ( (v35 & 0x80000000) != 0LL )
              goto LABEL_393;
            v184 = v280;
            v191 = v295;
            v196 = v287;
            v195 = v308;
          }
          if ( (*(_DWORD *)p_Flags & 2) != 0 )
          {
            v197 = *(_QWORD *)(*((_QWORD *)v191 + 5) + 56LL);
            v198 = *(_DWORD *)(v197 + 12) | 0x200;
            *(_DWORD *)(v197 + 12) = v198;
            *(_QWORD *)(v197 + 192) = v195;
            v199 = v285;
            *(_DWORD *)(v197 + 204) = *(UINT *)((char *)&v285->Alignment + (_QWORD)v196);
            v200 = *(UINT *)((char *)&v199->Flags.Value + (_QWORD)v196);
            goto LABEL_438;
          }
        }
        else
        {
          v201 = *(unsigned int **)v194;
          v326 = 0LL;
          v202 = ObReferenceObjectByHandle(v201, 0x20000u, MmSectionObjectType, a3, &v326, 0LL);
          v294 = v326;
          LODWORD(v35) = v202;
          if ( v202 < 0 )
          {
            v203 = v202;
            v204 = (__int64 *)v287;
            WdLogSingleEntry2(2LL, *(_QWORD *)v287, v202);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to take a reference on hSection:0x%I64x, returning 0x%I64x",
              *v204,
              v203,
              0LL,
              0LL,
              0LL);
            v41 = v290;
            v51 = v275;
            goto LABEL_194;
          }
          v287 = (struct COREDEVICEACCESS *)&v285[v278];
          v205 = ProcessSectionAttributes(v326, (struct _DXGK_ALLOCATIONINFO *)v287);
          v35 = v205;
          if ( v205 < 0 )
          {
            v64 = this;
            WdLogSingleEntry3(2LL, this, v205, 6003LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to query section attributes. Device=0x%I64x, Status=%I64X",
              (__int64)this,
              v35,
              6003LL,
              0LL,
              0LL);
            ObfDereferenceObject(v294);
            v41 = v290;
            v51 = v275;
            v61 = v277;
            goto LABEL_84;
          }
          v191 = v295;
          v197 = *(_QWORD *)(*((_QWORD *)v295 + 5) + 56LL);
          v198 = *(_DWORD *)(v197 + 12) | 0x400;
          *(_DWORD *)(v197 + 12) = v198;
          *(_QWORD *)(v197 + 192) = v294;
          v206 = v287;
          *(_DWORD *)(v197 + 204) = *((_DWORD *)v287 + 3);
          v200 = *((_DWORD *)v206 + 16);
          v184 = v280;
LABEL_438:
          *(_DWORD *)(v197 + 12) = v198 ^ ((unsigned __int16)v198 ^ (unsigned __int16)((_WORD)v200 << 9)) & 0x800;
        }
      }
      v207 = v278;
      v208 = (struct COREDEVICEACCESS *)&v184[v278];
      v287 = v208;
      if ( (*((_DWORD *)v208 + 8) & 1) != 0 )
      {
        v317 = 0LL;
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v327, v191);
        DXGALLOCATIONREFERENCE::MoveAssign(&v317, &v327);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v327);
        Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)*v277 + 2) + 4472LL),
                     *((_DWORD *)v293 + 126),
                     v318->Type,
                     0,
                     (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                     1u,
                     (const struct DXGALLOCATIONREFERENCE *)&v317,
                     0LL,
                     0LL);
        v35 = Resident;
        if ( Resident < 0 )
        {
          WdLogSingleEntry1(2LL, Resident);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"VmBusSendMakeResident failed: 0x%I64x",
            v35,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v317);
          v41 = v290;
          break;
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v317);
        v191 = v295;
        v207 = v278;
        v208 = v287;
      }
      *(_QWORD *)(*((_QWORD *)v191 + 6) + 16LL) = *((_QWORD *)v191 + 6);
      v210 = *((_QWORD *)v191 + 6);
      v211 = &v283[v207];
      *((_DWORD *)v191 + 30) = v211->pStandardAllocation;
      *(_QWORD *)(v210 + 112) = LODWORD(v211->pStandardAllocation);
      *(_OWORD *)(v210 + 64) = *(_OWORD *)&v211->PrivateDriverDataSize;
      *(_OWORD *)(v210 + 80) = *(_OWORD *)&v211->Flags;
      *(_OWORD *)(v210 + 96) = *(_OWORD *)&v211[1].hDevice;
      v212 = *((unsigned int *)v208 + 6);
      LODWORD(Size) = *((_DWORD *)v208 + 6);
      if ( !a3 || (*(_DWORD *)p_Flags & 0x10000) != 0 )
      {
        v215 = v212;
        v294 = (PVOID)(8 * v207);
        v213 = v286[v207];
        v216 = (char *)*((_QWORD *)v208 + 2);
      }
      else
      {
        v294 = (PVOID)(8 * v207);
        v213 = v288[v207];
        v214 = (char *)*((_QWORD *)v208 + 2);
        if ( (unsigned __int64)&v214[v212] > MmUserProbeAddress || &v214[v212] <= v214 )
          *(_BYTE *)MmUserProbeAddress = 0;
        v215 = v212;
        v216 = v214;
      }
      memmove(v216, v213, v215);
      if ( p_hAllocation )
      {
        if ( !a3 || (v217 = v288, (*(_DWORD *)p_Flags & 0x10000) != 0) )
          v217 = v286;
        memmove((void *)*(p_hAllocation - 2), *(const void **)((char *)v217 + (_QWORD)v294), (unsigned int)Size);
        p_hAllocation = (unsigned __int64 *)*p_hAllocation;
        v320 = p_hAllocation;
      }
      v184 = v280;
      v192 = v278 + 1;
      v191 = (struct _DXGSHAREDALLOCOBJECT *)*((_QWORD *)v295 + 8);
      continue;
    }
    break;
  }
  operator delete(v321);
  v51 = v275;
  if ( (v35 & 0x80000000) == 0LL )
  {
    v57 = v277;
    v58 = v270;
    goto LABEL_77;
  }
LABEL_194:
  v61 = v277;
LABEL_83:
  v64 = this;
LABEL_84:
  v65 = v270;
  if ( v329 )
  {
    v329 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v328);
    v51 = v275;
    v61 = v277;
    v65 = v270;
  }
  if ( v332 == 1 )
  {
    v332 = 0;
    v236 = v331;
    _InterlockedDecrement((volatile signed __int32 *)(v331 + 16));
    ExReleasePushLockSharedEx(v236, 0LL);
    KeLeaveCriticalRegion();
    v51 = v284;
    v275 = v284;
  }
  else
  {
    if ( v332 != 2 )
      goto LABEL_88;
    v332 = 0;
    v237 = v331;
    *(_QWORD *)(v331 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v237, 0LL);
    KeLeaveCriticalRegion();
    v51 = v275;
  }
  v65 = v270;
  v61 = v277;
LABEL_88:
  if ( (v35 & 0x80000000) != 0LL )
  {
    if ( v51 )
    {
      v239 = 0;
      for ( m = v51; ; m = (struct DXGALLOCATION *)*((_QWORD *)m + 8) )
      {
        v303 = v239;
        if ( v239 >= *p_NumAllocations )
          break;
        v241 = *((_QWORD *)m + 6);
        if ( *(_QWORD *)(v241 + 8) && !v65 )
        {
          if ( (v242 = *(_DWORD *)(v241 + 4), (v242 & 1) != 0) && !*((_DWORD *)v64 + 116) || (v242 & 2) != 0 )
          {
            if ( (v242 & 0x10) != 0 )
            {
              WdLogSingleEntry1(1LL, 6349LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"!pAllocation->m_pAllocation->m_Invalidated",
                6349LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v61 = v277;
            }
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)*v61 + 95) + 8LL) + 184LL))(
              *((_QWORD *)*v61 + 96),
              *(_QWORD *)(*((_QWORD *)m + 6) + 8LL));
            *(_DWORD *)(*((_QWORD *)m + 6) + 4LL) |= 0x10u;
            v239 = v303;
            v61 = v277;
            v65 = v270;
          }
        }
        ++v239;
      }
      v51 = v275;
    }
    if ( v276[0] )
    {
      v306 = 0LL;
      DXGRESOURCEREFERENCE::MoveAssign(&v313, &v306);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v306);
      DXGDEVICE::RemoveResourceFromDeviceList(v64, v41);
      DXGDEVICE::DestroyResource((DXGDEVICE *)v64, v41, 0LL, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
    }
    else if ( v51 )
    {
      if ( v282 )
      {
        DXGDEVICE::RemoveAllocationsWithoutDestroy((DXGDEVICE *)v64, v41, v51, *p_NumAllocations);
        v51 = v275;
      }
      v243 = (char *)v41 + 56;
      if ( !v41 || *(_QWORD *)v243 )
      {
        for ( n = v51; n; n = v324 )
        {
          v245 = n;
          v315 = n;
          v324 = (struct DXGALLOCATION *)*((_QWORD *)n + 8);
          *((_QWORD *)n + 7) = 0LL;
          *((_QWORD *)n + 8) = 0LL;
          if ( v41 && *(_QWORD *)v243 && *(_QWORD *)(*((_QWORD *)n + 6) + 48LL) )
          {
            DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)v243 + 32LL));
            --*(_DWORD *)(*(_QWORD *)v243 + 132LL);
            v246 = v315;
            v247 = *((_QWORD *)v315 + 6) + 48LL;
            v248 = *(_QWORD *)v247;
            v249 = *(_QWORD **)(*((_QWORD *)v315 + 6) + 56LL);
            if ( *(_QWORD *)(*(_QWORD *)v247 + 8LL) != v247 || *v249 != v247 )
              __fastfail(3u);
            *v249 = v248;
            *(_QWORD *)(v248 + 8) = v249;
            *(_QWORD *)(v246[6] + 48LL) = 0LL;
            v250 = *(_QWORD *)v243 + 32LL;
            *(_QWORD *)(v250 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v250, 0LL);
            KeLeaveCriticalRegion();
            v245 = (struct DXGALLOCATION *)v315;
          }
          DXGDEVICE::DestroyAllocations(
            (DXGDEVICE *)v64,
            0LL,
            0,
            v245,
            0LL,
            (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
        }
        v51 = v275;
      }
      if ( v41 )
      {
        if ( *(_QWORD *)v243 )
        {
          v273 = 0;
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)v243 + 32LL));
          v251 = *((_DWORD *)v41 + 1);
          if ( (v251 & 0x10) == 0 )
          {
            *((_DWORD *)v41 + 1) = v251 | 0x10;
            v273 = 1;
          }
          v252 = *(_QWORD *)v243 + 32LL;
          *(_QWORD *)(v252 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v252, 0LL);
          KeLeaveCriticalRegion();
          v253 = v273;
          if ( v273 )
          {
            DXGDEVICE::RemoveResourceFromDeviceList(v64, v41);
            DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v339, v293);
            DXGPROCESS::GetResourceUnsafe((__int64)v293, (DXGRESOURCEREFERENCE *)&v316, *((_DWORD *)v41 + 4));
            if ( v316 )
            {
              Count = v316[2].Count;
              v255 = (Count >> 6) & 0xFFFFFF;
              if ( (unsigned int)v255 < *((_DWORD *)v293 + 74) )
              {
                v256 = *((_QWORD *)v293 + 35);
                v257 = *(_DWORD *)(v256 + 16 * v255 + 8);
                if ( ((Count >> 25) & 0x60) == (*(_BYTE *)(v256 + 16 * v255 + 8) & 0x60)
                  && (v257 & 0x2000) == 0
                  && (v257 & 0x1F) != 0 )
                {
                  *(_DWORD *)(v256 + 16LL * ((Count >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                }
              }
              v306 = 0LL;
              DXGRESOURCEREFERENCE::MoveAssign(&v313, &v306);
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v306);
            }
            else
            {
              v253 = 0;
            }
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v316);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v339);
            if ( v253 )
              DXGDEVICE::DestroyResource((DXGDEVICE *)v64, v41, 0LL, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
          }
        }
        else
        {
          DXGDEVICE::DestroyAllocations((DXGDEVICE *)v64, v41, 0, v51, 0LL, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
        }
      }
    }
  }
  else if ( v276[0] )
  {
    v88 = v64[5];
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v88 + 248, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v238 = *((_DWORD *)v88 + 68);
        if ( v238 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v89, (const EVENT_DESCRIPTOR *)"g", v90, v238);
      }
      ExAcquirePushLockExclusiveEx((char *)v88 + 248, 0LL);
    }
    *((_QWORD *)v88 + 32) = KeGetCurrentThread();
    v91 = *((_DWORD *)v41 + 4);
    v92 = (v91 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v92 < *((_DWORD *)v88 + 74) )
    {
      v93 = *((_QWORD *)v88 + 35);
      if ( ((v91 >> 25) & 0x60) == (*(_BYTE *)(v93 + 16 * v92 + 8) & 0x60)
        && (*(_DWORD *)(v93 + 16 * v92 + 8) & 0x1F) != 0 )
      {
        v94 = 2LL * ((v91 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v93 + 16LL * ((v91 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
        {
          WdLogSingleEntry1(1LL, 217LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
            217LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *(_DWORD *)(*((_QWORD *)v88 + 35) + 8 * v94 + 8) &= ~0x2000u;
      }
    }
    *((_QWORD *)v88 + 32) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v88 + 248, 0LL);
    KeLeaveCriticalRegion();
  }
  v66 = 0;
  v67 = v286;
  while ( v66 < *p_NumAllocations )
    operator delete(v67[v66++]);
  operator delete(Src);
  v82 = Entry;
  if ( *p_NumAllocations > 5 )
  {
    operator delete(v280);
    operator delete(v285);
    operator delete(v312);
    operator delete(v286);
    operator delete(v288);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v330);
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v328);
  if ( v313 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)v313 + 9);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
  {
    v316 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v316) >= 0 && (v316 || DxgkThreadObjectCreateDxgThread(1)) )
    {
      v306 = 0LL;
      if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v306) < 0 )
      {
        DxgThread = 0LL;
      }
      else
      {
        DxgThread = (struct DXGTHREAD *)v306;
        if ( !v306 )
        {
          DxgThread = DxgkThreadObjectCreateDxgThread(1);
          v306 = (struct _EX_RUNDOWN_REF *)DxgThread;
        }
      }
      if ( *((_DWORD *)DxgThread + 12) )
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
    }
  }
  if ( v82 )
    ExFreeToPagedLookasideList(v335 + 13, v82);
  return (unsigned int)v35;
}
