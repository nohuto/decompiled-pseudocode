/*
 * XREFs of ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01093D0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107DA0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C015B3DC (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C027EE24 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C027F70C (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0015390 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001DF24 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F85D0 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCAT.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01550DC (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x1C01592D0 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C015C100 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C0170F5C (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C02558CC (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0282344 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x1C0282C44 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresent(
        struct _EX_RUNDOWN_REF *this,
        struct _D3DKMT_PRESENT *a2,
        struct DXGHWQUEUE **a3,
        unsigned int a4,
        struct DXGCONTEXT **a5,
        struct DXGALLOCATION *a6,
        unsigned int a7,
        unsigned int a8,
        struct _DXGKARG_PRESENT *a9,
        struct _D3DKMT_PRESENT_RGNS *a10,
        struct _VIDMM_DMA_BUFFER *a11,
        struct VIDSCH_SUBMIT_DATA_BASE *a12,
        enum _D3DDDIFORMAT a13,
        struct COREDEVICEACCESS *a14)
{
  struct _EX_RUNDOWN_REF *v14; // r12
  ULONG_PTR Count; // rax
  __int64 v16; // rbx
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct _KTHREAD *CurrentThread; // r15
  int CurrentProcessSessionId; // r14d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rbx
  void *v33; // rax
  __int64 v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  int *ThreadProperty; // rbx
  ULONG_PTR v43; // rax
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  char v46; // al
  struct _SLIST_ENTRY *v47; // rbx
  struct _D3DKMT_PRESENT *v48; // r10
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rbx
  char v52; // r14
  int v53; // ecx
  struct _DXGKARG_PRESENT *v54; // rcx
  struct DXGCONTEXT *v55; // rcx
  unsigned int v56; // r13d
  struct DXGCONTEXT **v57; // r9
  int v58; // r8d
  __int64 v59; // rdx
  struct _D3DKMT_PRESENT_RGNS *v60; // r11
  ULONG_PTR v61; // rcx
  struct DXGALLOCATION *v62; // r15
  struct _DXGKARG_PRESENT *v63; // rax
  int v64; // ecx
  __int64 v65; // rax
  char *v66; // r8
  _QWORD *v67; // rcx
  __int64 v68; // rax
  int v69; // ecx
  char *v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  char v73; // al
  __int64 v74; // rbx
  char *v75; // rbx
  char *v76; // rdx
  char *v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // r15
  __int64 v80; // r12
  __int64 v81; // rdx
  __int64 v82; // rax
  BOOL v83; // eax
  __int64 v84; // rbx
  struct _DXGKARG_PRESENT *v85; // r8
  PVOID Ptr; // rdx
  __int64 v87; // rcx
  unsigned int v88; // ebx
  struct DXGCONTEXT **v89; // rsi
  struct _VIDMM_DMA_BUFFER *v90; // r9
  struct DXGALLOCATION *v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rcx
  struct _KTHREAD *v94; // r14
  int v95; // edi
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rax
  __int64 v101; // rbx
  void *v102; // rax
  __int64 v103; // rdi
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 *v108; // rax
  __int64 v109; // rcx
  int *v110; // rbx
  struct DXGALLOCATION *v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // rcx
  struct _KTHREAD *v114; // r14
  int v115; // edi
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rax
  __int64 v121; // rbx
  void *v122; // rax
  __int64 v123; // rdi
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 *v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rcx
  int *v131; // rbx
  struct DXGCONTEXT **v133; // r15
  struct DXGCONTEXT *v134; // r10
  __int64 v135; // rdx
  int v136; // eax
  DXGALLOCATIONREFERENCE *v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // rdx
  __int64 v141; // rcx
  struct _KTHREAD *v142; // r15
  int v143; // r14d
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 v148; // rax
  __int64 v149; // rbx
  void *v150; // rax
  __int64 v151; // r14
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  __int64 *v156; // rax
  __int64 v157; // rdx
  __int64 v158; // rcx
  int *DxgThread; // rbx
  struct DXGHWQUEUE *v160; // r8
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  _QWORD *v166; // rax
  __int64 v167; // rax
  __int64 v168; // rax
  int v169; // ebx
  __int64 v170; // rax
  _QWORD *v171; // rax
  __int64 v172; // rax
  __int64 v173; // rdx
  __int64 v174; // rdx
  int v175; // eax
  __int64 v176; // rax
  UINT v177; // eax
  struct _DXGKARG_PRESENT *v178; // rcx
  RECT *v179; // r9
  unsigned int v180; // edx
  unsigned int MoveRectCount; // r8d
  __int64 v182; // rcx
  __int64 v183; // rax
  unsigned int v184; // r14d
  struct _D3DKMT_PRESENT *v185; // r15
  struct _VIDMM_DMA_BUFFER *v186; // r9
  __int64 v187; // rbx
  unsigned int *v188; // rdx
  DXGALLOCATIONREFERENCE *v189; // rax
  __int64 v190; // rdx
  __int64 v191; // rdx
  __int64 v192; // rcx
  _QWORD *v193; // rax
  struct DXGCONTEXT **v194; // r10
  struct DXGCONTEXT **v195; // r15
  __int64 v196; // rdx
  __int64 v197; // rcx
  _QWORD *v198; // rax
  unsigned int *v199; // rdx
  DXGALLOCATIONREFERENCE *v200; // rax
  __int64 v201; // rdx
  __int64 v202; // rdx
  __int64 v203; // rcx
  _QWORD *v204; // rax
  struct DXGCONTEXT **v205; // rbx
  __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // rax
  struct DXGHWQUEUE *v209; // r8
  __int64 v210; // rcx
  _QWORD *v211; // r9
  _BYTE *PoolWithTag; // r9
  __int64 i; // rdx
  struct DXGCONTEXT *v214; // r8
  struct DXGCONTEXT **v215; // rbx
  __int64 v216; // rax
  __int64 v217; // rax
  __int64 v218; // rax
  __int64 v219; // rdx
  unsigned int v220; // edi
  __int64 v221; // rdx
  __int64 v222; // rax
  __int64 v223; // rax
  char *v224; // r8
  struct _SLIST_ENTRY *v225; // rbx
  __int64 v226; // rdi
  __int64 v227; // rax
  __int64 v228; // rax
  int v229; // ebx
  __int64 v230; // rax
  _QWORD *v231; // rax
  __int64 v232; // rax
  __int64 v233; // rax
  int v234; // ebx
  __int64 v235; // rax
  _QWORD *v236; // rax
  int v237; // [rsp+50h] [rbp-388h]
  struct _VIDMM_DMA_BUFFER *v238; // [rsp+58h] [rbp-380h]
  int v240; // [rsp+64h] [rbp-374h] BYREF
  struct DXGALLOCATION *v241; // [rsp+68h] [rbp-370h] BYREF
  struct DXGCONTEXT **v242; // [rsp+70h] [rbp-368h]
  struct DXGALLOCATION *v243[2]; // [rsp+78h] [rbp-360h] BYREF
  struct _D3DKMT_PRESENT *v244; // [rsp+88h] [rbp-350h]
  struct _DXGKARG_PRESENT *v245; // [rsp+90h] [rbp-348h]
  __int64 v246; // [rsp+98h] [rbp-340h]
  unsigned int v247; // [rsp+A0h] [rbp-338h]
  __int64 v248; // [rsp+A8h] [rbp-330h] BYREF
  int v249; // [rsp+B0h] [rbp-328h]
  unsigned int v250; // [rsp+B4h] [rbp-324h]
  unsigned int v251; // [rsp+B8h] [rbp-320h]
  struct CRefCountedBuffer *v252; // [rsp+C0h] [rbp-318h] BYREF
  struct _VIDMM_DMA_BUFFER *v253; // [rsp+C8h] [rbp-310h]
  signed __int64 v254; // [rsp+D0h] [rbp-308h]
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+D8h] [rbp-300h]
  struct DXGHWQUEUE **v256; // [rsp+E0h] [rbp-2F8h]
  struct COREDEVICEACCESS *v257; // [rsp+E8h] [rbp-2F0h]
  struct DXGALLOCATION *v258; // [rsp+F0h] [rbp-2E8h]
  PVOID v259; // [rsp+F8h] [rbp-2E0h]
  struct _EX_RUNDOWN_REF *v260; // [rsp+100h] [rbp-2D8h] BYREF
  struct _EX_RUNDOWN_REF *v261; // [rsp+108h] [rbp-2D0h] BYREF
  struct _D3DKMT_PRESENT_RGNS *v262; // [rsp+110h] [rbp-2C8h]
  struct _EX_RUNDOWN_REF *v263; // [rsp+118h] [rbp-2C0h] BYREF
  struct _EX_RUNDOWN_REF *v264[2]; // [rsp+120h] [rbp-2B8h] BYREF
  struct _EX_RUNDOWN_REF *v265; // [rsp+130h] [rbp-2A8h]
  PVOID P; // [rsp+140h] [rbp-298h]
  _BYTE v267[64]; // [rsp+148h] [rbp-290h] BYREF
  unsigned int v268; // [rsp+188h] [rbp-250h]
  __int64 v269; // [rsp+190h] [rbp-248h]
  __int64 v270; // [rsp+198h] [rbp-240h]
  __int64 v271; // [rsp+1A0h] [rbp-238h]
  __int64 v272; // [rsp+1A8h] [rbp-230h]
  __int64 v273; // [rsp+1B0h] [rbp-228h]
  __int64 v274; // [rsp+1B8h] [rbp-220h]
  __int64 v275; // [rsp+1C0h] [rbp-218h]
  __int64 v276; // [rsp+1C8h] [rbp-210h]
  __int64 v277; // [rsp+1D0h] [rbp-208h]
  __int64 v278; // [rsp+1D8h] [rbp-200h]
  __int64 v279; // [rsp+1E0h] [rbp-1F8h]
  __int64 v280; // [rsp+1E8h] [rbp-1F0h]
  _QWORD v281[12]; // [rsp+1F0h] [rbp-1E8h] BYREF
  _BYTE v282[320]; // [rsp+250h] [rbp-188h] BYREF

  v256 = a3;
  v244 = a2;
  v14 = this;
  v265 = this;
  v245 = a9;
  v264[1] = this;
  v242 = a5;
  v258 = a6;
  v251 = a7;
  v247 = a8;
  v262 = a10;
  v238 = a11;
  v253 = a11;
  v257 = a14;
  Count = this[2].Count;
  v16 = *(_QWORD *)(Count + 40);
  v246 = v16;
  v17 = *(_QWORD *)(*(_QWORD *)(Count + 16) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v17 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v17 + 168)) )
  {
    v161 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v161 + 24) = 7711LL;
    WdLogEvent5_WdAssertion(v161);
  }
  v241 = 0LL;
  v243[0] = 0LL;
  if ( a7 )
  {
    AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(v16, (DXGALLOCATIONREFERENCE *)&v260, a7);
    v241 = *AllocationSafe;
    *AllocationSafe = 0LL;
    v22 = (__int64)v260;
    if ( v260 )
      ExReleaseRundownProtection(v260 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v22, v21) + 311) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v162 = WdLogNewEntry5_WdAssertion(v24, v23);
        *(_QWORD *)(v162 + 24) = 507LL;
        WdLogEvent5_WdAssertion(v162);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v24, v23);
      CurrentProcess = PsGetCurrentProcess(v28, v27, v29, v30);
      ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
      if ( !CurrentProcessSessionId )
        goto LABEL_178;
      if ( (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId )
        goto LABEL_178;
      if ( !ProcessDxgProcess )
        goto LABEL_178;
      v33 = *(void **)(ProcessDxgProcess + 88);
      if ( !v33 || v33 == &gDxgkWin32kEngInterface )
        goto LABEL_178;
      v34 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v163 = PsGetCurrentProcess(v36, v35, v37, v38),
            ProcessSessionId = PsGetProcessSessionIdEx(v163),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v34 = *ThreadWin32Thread;
      }
      if ( v34 )
      {
        ThreadProperty = *(int **)(v34 + 80);
      }
      else
      {
LABEL_178:
        ThreadProperty = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
        if ( !ThreadProperty )
          ThreadProperty = (int *)DxgkThreadObjectCreateDxgThread();
        if ( !ThreadProperty )
          goto LABEL_23;
        ObfDereferenceObject(ThreadProperty);
      }
      if ( ThreadProperty && ThreadProperty[8] )
      {
        v166 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v41, v40);
        v166[3] = 275LL;
        v166[4] = 38LL;
        v166[5] = ThreadProperty[8];
        v166[6] = 0LL;
        v166[7] = 0LL;
        WdLogEvent5_WdCriticalError(v166);
      }
LABEL_23:
      v16 = v246;
    }
  }
  if ( v247 )
  {
    v137 = DXGPROCESS::GetAllocationSafe(v16, (DXGALLOCATIONREFERENCE *)&v261, v247);
    v243[0] = *(struct DXGALLOCATION **)v137;
    *(_QWORD *)v137 = 0LL;
    v139 = (__int64)v261;
    if ( v261 )
      ExReleaseRundownProtection(v261 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v139, v138) + 311) )
    {
      v142 = KeGetCurrentThread();
      if ( !v142 )
      {
        v167 = WdLogNewEntry5_WdAssertion(v141, v140);
        *(_QWORD *)(v167 + 24) = 507LL;
        WdLogEvent5_WdAssertion(v167);
      }
      v143 = PsGetCurrentProcessSessionId(v141, v140);
      v148 = PsGetCurrentProcess(v145, v144, v146, v147);
      v149 = PsGetProcessDxgProcess(v148);
      if ( v143 )
      {
        if ( (unsigned int)PsGetThreadSessionId(v142) == v143 )
        {
          if ( v149 )
          {
            v150 = *(void **)(v149 + 88);
            if ( v150 )
            {
              if ( v150 != &gDxgkWin32kEngInterface )
              {
                v151 = 0LL;
                if ( !(unsigned __int8)KeIsAttachedProcess()
                  || (v168 = PsGetCurrentProcess(v153, v152, v154, v155),
                      v169 = PsGetProcessSessionIdEx(v168),
                      v170 = PsGetCurrentThreadProcess(),
                      v169 == (unsigned int)PsGetProcessSessionIdEx(v170)) )
                {
                  v156 = (__int64 *)PsGetThreadWin32Thread(v142);
                  if ( v156 )
                    v151 = *v156;
                }
                if ( v151 )
                {
                  DxgThread = *(int **)(v151 + 80);
LABEL_158:
                  if ( DxgThread && DxgThread[8] )
                  {
                    v171 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v158, v157);
                    v171[3] = 275LL;
                    v171[4] = 38LL;
                    v171[5] = DxgThread[8];
                    v171[6] = 0LL;
                    v171[7] = 0LL;
                    WdLogEvent5_WdCriticalError(v171);
                  }
                  goto LABEL_25;
                }
              }
            }
          }
        }
      }
      DxgThread = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
      if ( !DxgThread )
        DxgThread = (int *)DxgkThreadObjectCreateDxgThread();
      if ( DxgThread )
      {
        ObfDereferenceObject(DxgThread);
        goto LABEL_158;
      }
    }
  }
LABEL_25:
  v43 = v14[2].Count;
  v44 = *(_QWORD *)(v43 + 1848);
  if ( v44 != *(_QWORD *)(*(_QWORD *)(v43 + 16) + 16LL)
    || ((v45 = *(_QWORD *)(v246 + 88)) != 0
     && (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v45 + 224))(0LL, 0LL, 0LL)
      ? (v46 = 1)
      : (v46 = 0),
        v46) )
  {
    *((_DWORD *)a12 + 29) = 0;
  }
  v47 = 0LL;
  v252 = 0LL;
  v48 = v244;
  if ( v244 )
  {
    v49 = ReadPresentPrivateDriverData(
            *(struct DXGADAPTER **)(*(_QWORD *)(v14[2].Count + 16) + 16LL),
            v244->PrivateDriverDataSize,
            v244->pPrivateDriverData,
            &v252);
    v51 = v49;
    if ( v49 < 0 )
    {
      v172 = WdLogNewEntry5_WdError(v50, v44);
      *(_QWORD *)(v172 + 24) = v51;
      WdLogEvent5_WdError(v172);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v243, v173);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v241, v174);
      return (unsigned int)v51;
    }
    v47 = (struct _SLIST_ENTRY *)v252;
    v48 = v244;
  }
  v259 = v47;
  v52 = 0;
  v53 = *(_DWORD *)(v17 + 2328);
  if ( (v53 >= 0x2000 || *(_BYTE *)(v17 + 2628)) && *(_DWORD *)(v17 + 1872) >= 0x5007u && v48 )
  {
    v52 = 1;
    if ( v47 )
    {
      v54 = v245;
      v245->PrivateDriverDataSize = v48->PrivateDriverDataSize;
      v54->pPrivateDriverData = &v47[1];
    }
    *((_QWORD *)a12 + 97) = v47;
    goto LABEL_39;
  }
  if ( v53 < 0x2000 && !*(_BYTE *)(v17 + 2628) )
  {
LABEL_39:
    v55 = (struct DXGCONTEXT *)a4;
    goto LABEL_40;
  }
  v55 = (struct DXGCONTEXT *)a4;
  if ( a4 )
    goto LABEL_204;
LABEL_40:
  v56 = (_DWORD)v55 + 1;
  v57 = v242;
  v58 = *((_DWORD *)*v242 + 103);
  v59 = 0LL;
  while ( (unsigned int)v59 < (unsigned int)v55 )
  {
    v59 = (unsigned int)(v59 + 1);
    v55 = v242[v59];
    v175 = *((_DWORD *)v55 + 103);
    if ( (v175 & v58) != 0 )
      goto LABEL_208;
    v58 |= v175;
    v55 = (struct DXGCONTEXT *)a4;
  }
  *((_DWORD *)a12 + 34) = v58;
  v60 = v262;
  if ( v262 )
  {
    v61 = v14[2].Count;
    v59 = *(_QWORD *)(*(_QWORD *)(v61 + 16) + 16LL);
    if ( (*(_DWORD *)(v59 + 348) & 0x10) != 0 && v59 == *(_QWORD *)(v61 + 1848) )
    {
      v177 = v262->MoveRectCount + v262->DirtyRectCount;
      if ( v177 <= 0x14 )
      {
        v178 = v245;
        v245->SubRectCnt = v177;
        v178->pDstSubRects = (const RECT *)v282;
        v179 = (RECT *)v282;
        v180 = 0;
        MoveRectCount = v60->MoveRectCount;
        while ( v180 < MoveRectCount )
          *v179++ = v60->pMoveRects[v180++].DestRect;
        memmove(v179, v60->pDirtyRects, 16LL * v60->DirtyRectCount);
        v48 = v244;
        v57 = v242;
      }
    }
    v55 = (struct DXGCONTEXT *)a4;
  }
  if ( ((*((_DWORD *)a12 + 30) - 3) & 0xFFFFFFFD) != 0 )
  {
    if ( v56 <= 1 )
    {
      if ( v256 )
        v160 = *v256;
      else
        v160 = 0LL;
      v237 = DXGCONTEXT::SubmitPresentWithDmaBuffer((DXGCONTEXT *)v14, v48, v160, v241, v243[0], v245, a11, a12, v257);
      v90 = 0LL;
LABEL_94:
      if ( v90 )
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14[2].Count + 16)
                                                                                           + 640LL)
                                                                               + 8LL)
                                                                   + 504LL))(
          v90,
          0LL);
      if ( v259 && _InterlockedExchangeAdd((volatile signed __int32 *)v259 + 3, 0xFFFFFFFF) == 1 )
      {
        v225 = (struct _SLIST_ENTRY *)v259;
        v226 = *(_QWORD *)v259;
        if ( *(_QWORD *)v259 )
        {
          ++*(_DWORD *)(v226 + 28);
          if ( ExQueryDepthSList((PSLIST_HEADER)v226) < *(_WORD *)(v226 + 16) )
          {
            ExpInterlockedPushEntrySList((PSLIST_HEADER)v226, v225);
          }
          else
          {
            ++*(_DWORD *)(v226 + 32);
            (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v226 + 56))(v225, v226);
          }
        }
        else
        {
          ExFreePoolWithTag(v259, 0);
        }
      }
      v91 = v243[0];
      if ( v243[0] )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v243[0] + 11);
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v91, v44) + 311) )
      {
        v94 = KeGetCurrentThread();
        if ( !v94 )
        {
          v227 = WdLogNewEntry5_WdAssertion(v93, v92);
          *(_QWORD *)(v227 + 24) = 507LL;
          WdLogEvent5_WdAssertion(v227);
        }
        v95 = PsGetCurrentProcessSessionId(v93, v92);
        v100 = PsGetCurrentProcess(v97, v96, v98, v99);
        v101 = PsGetProcessDxgProcess(v100);
        if ( v95 )
        {
          if ( (unsigned int)PsGetThreadSessionId(v94) == v95 )
          {
            if ( v101 )
            {
              v102 = *(void **)(v101 + 88);
              if ( v102 )
              {
                if ( v102 != &gDxgkWin32kEngInterface )
                {
                  v103 = 0LL;
                  if ( !(unsigned __int8)KeIsAttachedProcess()
                    || (v228 = PsGetCurrentProcess(v105, v104, v106, v107),
                        v229 = PsGetProcessSessionIdEx(v228),
                        v230 = PsGetCurrentThreadProcess(),
                        v229 == (unsigned int)PsGetProcessSessionIdEx(v230)) )
                  {
                    v108 = (__int64 *)PsGetThreadWin32Thread(v94);
                    if ( v108 )
                      v103 = *v108;
                  }
                  if ( v103 )
                  {
                    v110 = *(int **)(v103 + 80);
LABEL_113:
                    if ( v110 && v110[8] )
                    {
                      v231 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v109, v92);
                      v231[3] = 275LL;
                      v231[4] = 38LL;
                      v231[5] = v110[8];
                      v231[6] = 0LL;
                      v231[7] = 0LL;
                      WdLogEvent5_WdCriticalError(v231);
                    }
                    goto LABEL_116;
                  }
                }
              }
            }
          }
        }
        v110 = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
        if ( !v110 )
          v110 = (int *)DxgkThreadObjectCreateDxgThread();
        if ( v110 )
        {
          ObfDereferenceObject(v110);
          goto LABEL_113;
        }
      }
LABEL_116:
      v111 = v241;
      if ( v241 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v241 + 11);
      if ( !*((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v111, v92) + 311) )
        return (unsigned int)v237;
      v114 = KeGetCurrentThread();
      if ( !v114 )
      {
        v232 = WdLogNewEntry5_WdAssertion(v113, v112);
        *(_QWORD *)(v232 + 24) = 507LL;
        WdLogEvent5_WdAssertion(v232);
      }
      v115 = PsGetCurrentProcessSessionId(v113, v112);
      v120 = PsGetCurrentProcess(v117, v116, v118, v119);
      v121 = PsGetProcessDxgProcess(v120);
      if ( !v115 )
        goto LABEL_191;
      if ( (unsigned int)PsGetThreadSessionId(v114) != v115 )
        goto LABEL_191;
      if ( !v121 )
        goto LABEL_191;
      v122 = *(void **)(v121 + 88);
      if ( !v122 || v122 == &gDxgkWin32kEngInterface )
        goto LABEL_191;
      v123 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v233 = PsGetCurrentProcess(v125, v124, v126, v127),
            v234 = PsGetProcessSessionIdEx(v233),
            v235 = PsGetCurrentThreadProcess(),
            v234 == (unsigned int)PsGetProcessSessionIdEx(v235)) )
      {
        v128 = (__int64 *)PsGetThreadWin32Thread(v114);
        if ( v128 )
          v123 = *v128;
      }
      if ( v123 )
      {
        v131 = *(int **)(v123 + 80);
      }
      else
      {
LABEL_191:
        v131 = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
        if ( !v131 )
          v131 = (int *)DxgkThreadObjectCreateDxgThread();
        if ( !v131 )
          return (unsigned int)v237;
        ObfDereferenceObject(v131);
      }
      if ( v131 )
      {
        if ( v131[8] )
        {
          v236 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v130, v129);
          v236[3] = 275LL;
          v236[4] = 38LL;
          v236[5] = v131[8];
          v236[6] = 0LL;
          v236[7] = 0LL;
          WdLogEvent5_WdCriticalError(v236);
        }
      }
      return (unsigned int)v237;
    }
    if ( v52 )
    {
      BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject((DXGDEVICE *)v14[2].Count);
      if ( !BroadcastPresentSyncObject )
      {
        v183 = WdLogNewEntry5_WdError(v182, v44);
        *(_QWORD *)(v183 + 24) = -1073741801LL;
        *(_QWORD *)(v183 + 32) = 8094LL;
        WdLogEvent5_WdError(v183);
        v237 = -1073741801;
        goto LABEL_93;
      }
      v254 = _InterlockedIncrement64((volatile signed __int64 *)(v14[2].Count + 1896));
      *(_DWORD *)a12 |= 0xC00u;
      v184 = 0;
      v185 = v244;
      v186 = a11;
      while ( v184 < v56 )
      {
        if ( v184 )
        {
          LODWORD(v187) = 0;
          v249 = 0;
          v250 = 0;
          if ( v251 )
          {
            v188 = &v185->BroadcastSrcAllocation[v184 - 1];
            if ( v188 + 1 < v188 || (unsigned __int64)(v188 + 1) > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            v187 = *v188;
            v249 = v187;
            v189 = DXGPROCESS::GetAllocationSafe(v246, (DXGALLOCATIONREFERENCE *)&v263, v187);
            DXGALLOCATIONREFERENCE::MoveAssign(&v241, v189);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v263, v190);
            if ( !v241 )
            {
              v193 = (_QWORD *)WdLogNewEntry5_WdError(v192, v191);
              v193[3] = v187;
              v193[4] = -1073741811LL;
              v193[5] = 8120LL;
              WdLogEvent5_WdError(v193);
              v237 = -1073741811;
              v90 = v238;
              goto LABEL_94;
            }
            v194 = v242;
            v195 = &v242[v184];
            v269 = *((_QWORD *)*v195 + 2);
            v270 = *(_QWORD *)(*((_QWORD *)v241 + 1) + 16LL);
            v196 = *(_QWORD *)(v270 + 16);
            v271 = v196;
            v272 = *(_QWORD *)(v269 + 16);
            v197 = *(_QWORD *)(v272 + 16);
            v273 = v197;
            if ( v196 != v197 )
            {
              _mm_lfence();
              v198 = (_QWORD *)WdLogNewEntry5_WdError(v197, v196);
              v274 = *((_QWORD *)*v195 + 2);
              v198[3] = v274;
              v198[4] = v241;
              v198[5] = -1073741811LL;
              WdLogEvent5_WdError(v198);
              v237 = -1073741811;
              v90 = v238;
              goto LABEL_94;
            }
            v185 = v244;
            v186 = v238;
          }
          else
          {
            v194 = v242;
          }
          if ( v247 )
          {
            v199 = &v185->BroadcastDstAllocation[v184 - 1];
            if ( v199 + 1 < v199 || (unsigned __int64)(v199 + 1) > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            v250 = *v199;
            v200 = DXGPROCESS::GetAllocationSafe(v246, (DXGALLOCATIONREFERENCE *)v264, v250);
            DXGALLOCATIONREFERENCE::MoveAssign(v243, v200);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v264, v201);
            if ( !v243[0] )
            {
              v204 = (_QWORD *)WdLogNewEntry5_WdError(v203, v202);
              v204[3] = (unsigned int)v187;
              v204[4] = -1073741811LL;
              v204[5] = 8143LL;
              WdLogEvent5_WdError(v204);
              v237 = -1073741811;
              v90 = v238;
              goto LABEL_94;
            }
            v194 = v242;
            v205 = &v242[v184];
            v275 = *((_QWORD *)*v205 + 2);
            v276 = *(_QWORD *)(*((_QWORD *)v243[0] + 1) + 16LL);
            v206 = *(_QWORD *)(v276 + 16);
            v277 = v206;
            v278 = *(_QWORD *)(v275 + 16);
            v207 = *(_QWORD *)(v278 + 16);
            v279 = v207;
            if ( v206 != v207 )
            {
              _mm_lfence();
              v208 = WdLogNewEntry5_WdError(v207, v206);
              v280 = *((_QWORD *)*v205 + 2);
              *(_QWORD *)(v208 + 24) = v280;
              *(struct DXGALLOCATION **)(v208 + 32) = v243[0];
              *(_QWORD *)(v208 + 40) = -1073741811LL;
              WdLogEvent5_WdError(v208);
              v237 = -1073741811;
              v90 = v238;
              goto LABEL_94;
            }
            v186 = v238;
          }
        }
        else
        {
          v194 = v242;
        }
        if ( v256 )
          v209 = v256[v184];
        else
          v209 = 0LL;
        if ( (int)DXGCONTEXT::SubmitPresentWithDmaBuffer(v194[v184], v185, v209, v241, v243[0], v245, v186, a12, v257) < 0 )
        {
          v176 = WdLogNewEntry5_WdError(v210, v44);
          *(_QWORD *)(v176 + 24) = -1073741811LL;
          *(_QWORD *)(v176 + 32) = 8181LL;
          goto LABEL_210;
        }
        v186 = 0LL;
        v238 = 0LL;
        v253 = 0LL;
        *(_DWORD *)a12 &= ~0x800u;
        ++v184;
      }
      v211 = 0LL;
      P = 0LL;
      v268 = 0;
      if ( a4 <= 8 )
      {
        PoolWithTag = v267;
        P = v267;
      }
      else
      {
        v44 = 0xFFFFFFFFFFFFFFFFuLL % a4;
        if ( 0xFFFFFFFFFFFFFFFFuLL / a4 < 8 )
          goto LABEL_255;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a4, 0x4B677844u);
        P = PoolWithTag;
      }
      v268 = a4;
      if ( !PoolWithTag )
        goto LABEL_260;
      memset(PoolWithTag, 0, 8LL * a4);
      v211 = P;
LABEL_255:
      if ( v211 )
      {
        for ( i = 1LL; (unsigned int)i < v56; i = (unsigned int)(i + 1) )
        {
          v214 = v242[(unsigned int)i];
          v215 = &v242[(unsigned int)i];
          if ( (*((_DWORD *)v214 + 105) & 0x10) != 0 )
          {
            v216 = WdLogNewEntry5_WdError(v242, i);
            *(_QWORD *)(v216 + 24) = *v215;
            WdLogEvent5_WdError(v216);
            v237 = -1073741811;
            goto LABEL_262;
          }
          v211[(unsigned int)(i - 1)] = *((_QWORD *)v214 + 34);
        }
        v237 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14[2].Count + 16)
                                                                                         + 616LL)
                                                                             + 8LL)
                                                                 + 640LL))(
                 0LL,
                 0LL,
                 a4);
        if ( v237 >= 0 )
          v237 = (*(__int64 (__fastcall **)(ULONG_PTR, struct _VIDSCH_SYNC_OBJECT *, signed __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14[2].Count + 16) + 616LL) + 8LL) + 624LL))(
                   v14[34].Count,
                   BroadcastPresentSyncObject,
                   v254);
LABEL_262:
        if ( P != v267 && P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_93;
      }
LABEL_260:
      v237 = -1073741801;
      goto LABEL_93;
    }
LABEL_208:
    v176 = WdLogNewEntry5_WdError(v55, v59);
    *(_QWORD *)(v176 + 24) = v14;
    *(_QWORD *)(v176 + 32) = -1073741811LL;
LABEL_210:
    WdLogEvent5_WdError(v176);
LABEL_204:
    v237 = -1073741811;
LABEL_93:
    v90 = v238;
    goto LABEL_94;
  }
  v62 = v258;
  if ( !v258 )
  {
    v217 = WdLogNewEntry5_WdAssertion(v55, v59);
    *(_QWORD *)(v217 + 24) = 7858LL;
    WdLogEvent5_WdAssertion(v217);
    v48 = v244;
    v55 = (struct DXGCONTEXT *)a4;
    v57 = v242;
  }
  v63 = v245;
  if ( v245->pDmaBuffer )
  {
    v218 = WdLogNewEntry5_WdAssertion(v55, v59);
    *(_QWORD *)(v218 + 24) = 7859LL;
    WdLogEvent5_WdAssertion(v218);
    v48 = v244;
    LODWORD(v55) = a4;
    v63 = v245;
    v57 = v242;
  }
  if ( !(_DWORD)v55 || !v52 )
  {
    if ( v56 > 1 )
      v64 = 3072;
    else
      v64 = 2048;
    *(_DWORD *)a12 = v64 | *(_DWORD *)a12 & 0xFFFFFBFF;
    *((_DWORD *)a12 + 35) = v56;
    v65 = 576LL;
    if ( !*((_BYTE *)a12 + 348) )
      v65 = 480LL;
    *(_DWORD *)((char *)a12 + v65) = *(_DWORD *)((_BYTE *)a12 + v65) & 0xFFFFFC00 | 1;
    if ( *((_BYTE *)a12 + 348) )
      v66 = (char *)a12 + *((_DWORD *)a12 + 145) * ((8 * *((_DWORD *)a12 + 146) + 199) & 0xFFFFFFF8) + 624;
    else
      v66 = (char *)a12 + 488;
    v237 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14[2].Count + 16)
                                                                                     + 640LL)
                                                                         + 8LL)
                                                             + 416LL))(
             *(_QWORD *)(v14[2].Count + 760),
             *((_QWORD *)v62 + 3),
             v66);
    if ( v237 >= 0 )
    {
      v240 = 0;
      v248 = 0LL;
      v67 = *(_QWORD **)(v14[2].Count + 16);
      v68 = v67[2];
      if ( *(int *)(v68 + 2328) >= 0x2000 || *(_BYTE *)(v68 + 2628) )
      {
        v69 = 0xFFFF;
        v240 = 0xFFFF;
        v248 = -1LL;
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *, _QWORD))(*(_QWORD *)(v67[80] + 8LL) + 224LL))(
          v67[81],
          *(_QWORD *)(*((_QWORD *)v62 + 6) + 8LL),
          &v240,
          &v248,
          0LL);
        v69 = v240;
      }
      if ( *((_BYTE *)a12 + 348) )
        *(_WORD *)((char *)a12 + *((_DWORD *)a12 + 145) * ((8 * *((_DWORD *)a12 + 146) + 199) & 0xFFFFFFF8) + 608) = v69;
      else
        *((_DWORD *)a12 + 135) ^= (*((_DWORD *)a12 + 135) ^ (v69 << 17)) & 0x3E0000;
      if ( *((_BYTE *)a12 + 348) )
        v70 = (char *)a12 + *((_DWORD *)a12 + 145) * ((8 * *((_DWORD *)a12 + 146) + 199) & 0xFFFFFFF8) + 616;
      else
        v70 = (char *)a12 + 504;
      *(_QWORD *)v70 = v248;
      v71 = *((_QWORD *)v62 + 5);
      if ( v71 && (*(_DWORD *)(v71 + 4) & 8) != 0 )
        v72 = *(_QWORD *)(*(_QWORD *)(v71 + 56) + 184LL);
      else
        v72 = 0LL;
      if ( *((_BYTE *)a12 + 348) )
        *(_QWORD *)((char *)a12 + *((_DWORD *)a12 + 145) * ((8 * *((_DWORD *)a12 + 146) + 199) & 0xFFFFFFF8) + 632) = v72;
      else
        *((_QWORD *)a12 + 70) = v72;
      v73 = *((_BYTE *)a12 + 348);
      v74 = 736LL;
      if ( !v73 )
        v74 = 512LL;
      v75 = (char *)a12 + v74;
      if ( v73 )
        v76 = (char *)a12 + *((_DWORD *)a12 + 145) * ((8 * *((_DWORD *)a12 + 146) + 199) & 0xFFFFFFF8) + 600;
      else
        v76 = (char *)a12 + 496;
      *(_QWORD *)v76 = *(_QWORD *)(*((_QWORD *)v62 + 6) + 16LL);
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14[2].Count + 16) + 16LL) + 2650LL) )
      {
        v76 = (char *)v14[23].Count;
        if ( *((_BYTE *)a12 + 348) )
          v77 = (char *)a12 + *((_DWORD *)a12 + 145) * ((8 * *((_DWORD *)a12 + 146) + 199) & 0xFFFFFFF8) + 592;
        else
          v77 = (char *)a12 + 552;
        *(_QWORD *)v77 = v76;
      }
      if ( *((_BYTE *)a12 + 348) )
        *((_DWORD *)a12 + 154) = -1;
      v78 = *(_QWORD *)(v14[2].Count + 1848);
      v79 = *(_QWORD *)(v78 + 2696);
      v80 = *((unsigned int *)a12 + 29);
      if ( (unsigned int)v80 >= *(_DWORD *)(v79 + 80) )
      {
        v222 = WdLogNewEntry5_WdAssertion(v78, v76);
        *(_QWORD *)(v222 + 24) = 5525LL;
        WdLogEvent5_WdAssertion(v222);
      }
      v81 = *(_QWORD *)(v79 + 112) + 3968 * v80;
      *(_WORD *)v75 = 0;
      *((_WORD *)v75 + 1) = *(_WORD *)(v81 + 1012);
      *((_WORD *)v75 + 2) = 0;
      *((_WORD *)v75 + 3) = *(_WORD *)(v81 + 1016);
      v82 = *(_QWORD *)v75;
      *((_QWORD *)v75 + 1) = *(_QWORD *)v75;
      *((_QWORD *)v75 + 2) = v82;
      v83 = a13 == D3DDDIFMT_A16B16G16R16F || a13 == D3DDDIFMT_A32B32G32R32F;
      *((_DWORD *)v75 + 6) = v83;
      *((_DWORD *)v75 + 7) &= 0xFFFFFFE7;
      *((_DWORD *)v75 + 8) = 0;
      memset(&v281[1], 0, 0x58uLL);
      v84 = *((_QWORD *)v258 + 4);
      v14 = v265;
      if ( BYTE6(v265[56].Ptr) )
      {
        memset(v281, 0, sizeof(v281));
        v281[4] = v84;
        v281[5] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v265[2].Count + 16) + 640LL)
                                                                                        + 8LL)
                                                                            + 256LL))(
                    *(_QWORD *)(*(_QWORD *)(v265[2].Count + 16) + 648LL),
                    *((_QWORD *)v241 + 3),
                    HIBYTE(v265[56].Ptr),
                    LODWORD(v265[52].Count));
        v281[6] = v248;
        LOWORD(v281[7]) = v240;
      }
      else
      {
        memset(v281, 0, 24);
        memset(&v281[6], 0, 24);
        v281[3] = v84;
        v281[4] = 2 * (v240 & 0x1Fu);
        v281[5] = v248;
      }
      v85 = v245;
      v245->pAllocationList = (DXGK_ALLOCATIONLIST *)v281;
      Ptr = 0LL;
      if ( (v85->Flags.Value & 1) != 0 || !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14[2].Count + 16) + 16LL) + 2650LL) )
        Ptr = v14[23].Ptr;
      v237 = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(v14[2].Count + 16), Ptr, v85);
      if ( v237 >= 0 )
      {
        v88 = 0;
        v89 = v242;
        while ( v88 < v56 )
        {
          v133 = &v89[v88];
          v134 = *v133;
          if ( *((struct _KTHREAD **)*v133 + 59) != KeGetCurrentThread() )
          {
            v223 = WdLogNewEntry5_WdAssertion(v87, v44);
            *(_QWORD *)(v223 + 24) = 8042LL;
            WdLogEvent5_WdAssertion(v223);
            v134 = *v133;
          }
          if ( (HIDWORD(v14[52].Ptr) & 0x10) != 0 )
          {
            DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(v134, 0LL, 0, 0, a12, 0);
            v134 = *v133;
          }
          v135 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v134 + 2) + 16LL) + 616LL) + 8LL);
          v136 = (*((_DWORD *)v134 + 105) & 0x10) != 0
               ? (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(v135 + 432))(
                   *((_QWORD *)v134 + 38),
                   a12)
               : (*(unsigned __int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(v135 + 424))(
                   *((_QWORD *)v134 + 34),
                   a12);
          v237 = v136;
          if ( v136 < 0 )
            break;
          *(_DWORD *)a12 &= ~0x800u;
          ++v88;
        }
      }
      if ( v237 < 0 )
      {
        if ( *((_BYTE *)a12 + 348) )
          v224 = (char *)a12 + *((_DWORD *)a12 + 145) * ((8 * *((_DWORD *)a12 + 146) + 199) & 0xFFFFFFF8) + 624;
        else
          v224 = (char *)a12 + 488;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14[2].Count + 16)
                                                                                       + 640LL)
                                                                           + 8LL)
                                                               + 432LL))(
          *(_QWORD *)(*(_QWORD *)(v14[2].Count + 16) + 648LL),
          *((unsigned int *)a12 + 34),
          *(_QWORD *)v224,
          0LL);
      }
    }
    goto LABEL_93;
  }
  v220 = DXGCONTEXT::SubmitPresentLda((DXGCONTEXT *)v14, v48, (unsigned int)v55, v57, v62, v63, a12);
  if ( a11 )
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14[2].Count + 16)
                                                                                       + 640LL)
                                                                           + 8LL)
                                                               + 504LL))(
      a11,
      0LL);
  if ( v47 )
    CRefCountedBuffer::RefCountedBufferRelease(v47);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v243, v219);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v241, v221);
  return v220;
}
