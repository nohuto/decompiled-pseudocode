/*
 * XREFs of ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00F4E90
 * Callers:
 *     DxgkRender @ 0x1C00F3920 (DxgkRender.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C00F4480 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025FCF4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C00031B4 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C00034C8 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ @ 0x1C00034F4 (-DisableDdiRenderAllocationList@DXGCONTEXT@@QEAAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0004C60 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0004D20 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0004DC0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004EF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0005090 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00052C4 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0005500 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C0005530 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0008BB0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0008C04 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0039FEC (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x1C00420A4 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     TraceDxgkPatchLocationList @ 0x1C0044CC8 (TraceDxgkPatchLocationList.c)
 *     McTemplateK0ppxppttqddddddddq_EtwWriteTransfer @ 0x1C0048520 (McTemplateK0ppxppttqddddddddq_EtwWriteTransfer.c)
 *     McTemplateK0ppqx_EtwWriteTransfer @ 0x1C0049028 (McTemplateK0ppqx_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01077E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C0107B00 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C010EC30 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C011A458 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z @ 0x1C011DBF4 (-DdiRenderKm@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDER@@@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01252E8 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0159A00 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C015C100 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z @ 0x1C028FD8C (-SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Render(
        DXGCONTEXT *this,
        struct _D3DKMT_RENDER *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct DXGCONTEXT **a5,
        struct DXGALLOCATION **a6,
        struct DXGHWQUEUE **a7)
{
  struct _D3DKMT_RENDER *v8; // r15
  int v9; // eax
  D3DKMT_RENDERFLAGS Flags; // ecx
  unsigned int v11; // eax
  unsigned __int8 v12; // r12
  char *pNewCommandBuffer; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // rbx
  bool v18; // zf
  __int64 v19; // r9
  unsigned int v20; // esi
  __int64 v21; // rsi
  int v22; // eax
  __int64 v23; // r14
  D3DKMT_RENDERFLAGS v24; // eax
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  PSLIST_ENTRY v29; // rsi
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  int v33; // r8d
  unsigned int v34; // eax
  __int64 v35; // rcx
  int v36; // edx
  bool v37; // al
  int v38; // r8d
  int v39; // ecx
  int v40; // edx
  unsigned int v41; // eax
  D3DKMT_RENDERFLAGS v42; // eax
  unsigned __int64 *v43; // rdx
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // r11
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  char v49; // di
  __int64 v50; // r8
  __int64 v51; // rcx
  struct DXGADAPTER *v52; // rdi
  __int64 v53; // rdx
  struct DXGGLOBAL *v54; // rax
  __int64 AllocationListSize; // rcx
  unsigned int v56; // edi
  struct DXGALLOCATION **v57; // rbx
  __int64 v58; // rax
  __int64 v59; // r12
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v66; // rdx
  __int64 v67; // rdi
  __int64 v68; // r14
  __int64 v69; // rcx
  int v70; // r15d
  __int64 v71; // rdi
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rdx
  __int64 v75; // rcx
  struct DXGTHREAD *ThreadProperty; // rdi
  struct _KTHREAD *CurrentThread; // r14
  int CurrentProcessSessionId; // edi
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rax
  __int64 v84; // r15
  void *v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  _QWORD *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  DXGK_ALLOCATIONLIST *v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  bool v102; // r15
  __int64 v103; // rdi
  UINT AllocationCount; // r15d
  int v105; // eax
  int v106; // r12d
  int v107; // r9d
  __int64 v108; // rax
  __int64 v109; // rax
  int v110; // eax
  int v111; // r15d
  struct DXGCONTEXT **v112; // rdi
  struct DXGCONTEXT *v113; // rcx
  int v114; // eax
  int v115; // r12d
  struct _SLIST_ENTRY *v116; // rsi
  __int64 v117; // rdi
  union _SLIST_HEADER *v118; // rcx
  __int64 v120; // rax
  __int64 v121; // r12
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rdi
  __int64 v130; // r14
  __int64 v131; // rcx
  int v132; // r15d
  __int64 v133; // rdi
  __int64 v134; // r8
  struct DXGADAPTER *v135; // rdi
  struct DXGGLOBAL *v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rcx
  struct DXGTHREAD *DxgThread; // rdi
  struct _KTHREAD *v140; // r14
  int v141; // edi
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 v146; // rax
  __int64 v147; // r15
  void *v148; // rax
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // r9
  __int64 v153; // rax
  __int64 v154; // rdx
  __int64 v155; // rcx
  _QWORD *v156; // rax
  __int64 v157; // rdx
  __int64 v158; // rcx
  DXGK_ALLOCATIONLIST *v159; // rcx
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // rcx
  char *v163; // rdi
  struct _KTHREAD **v164; // rcx
  COREACCESS *v165; // r15
  int v166; // eax
  __int64 v167; // rcx
  COREDEVICEACCESS *v168; // rsi
  __int64 v169; // rcx
  __int64 v170; // rcx
  __int64 v171; // r8
  int v172; // r9d
  int v173; // r9d
  __int64 v174; // rax
  __int64 v175; // rax
  int v176; // eax
  __int64 v177; // rbx
  __int64 v178; // rax
  int v179; // r15d
  __int64 v180; // rax
  __int64 v181; // rcx
  __int64 v182; // r8
  __int64 v183; // rax
  __int64 v184; // r8
  DXGDEVICESYNCOBJECT *v185; // rcx
  __int64 v186; // rax
  __int64 v187; // rcx
  int v188; // eax
  PERESOURCE *Global; // rax
  __int64 v190; // rdx
  __int64 v191; // r14
  __int64 v192; // rcx
  unsigned int v193; // esi
  __int64 v194; // r15
  __int64 v195; // rdx
  struct DXGGLOBAL *v196; // rax
  int SyncObject; // eax
  __int64 v198; // rcx
  __int64 v199; // r8
  __int64 v200; // rax
  _QWORD *v201; // rax
  _QWORD *v202; // rax
  __int64 v203; // rax
  const EVENT_DESCRIPTOR *v204; // rdx
  int v205; // eax
  __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // r8
  size_t v209; // r8
  void *v210; // rcx
  struct DXGTHREAD *v211; // rax
  __int64 v212; // rax
  __int64 v213; // rax
  __int64 v214; // rax
  int v215; // edi
  __int64 v216; // rax
  _QWORD *v217; // rax
  __int64 v218; // rcx
  _QWORD *v219; // rax
  __int64 v220; // rax
  DXGK_ALLOCATIONLIST *v221; // rdx
  struct DXGTHREAD *Current; // rax
  __int64 v223; // rax
  __int64 v224; // rax
  __int64 v225; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  _QWORD *v228; // rax
  __int64 v229; // rcx
  _QWORD *v230; // rax
  __int64 v231; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  struct DXGHWQUEUE **v233; // r12
  __int64 v234; // rdx
  int v235; // eax
  __int64 v236; // rdx
  __int64 v237; // rcx
  __int64 v238; // r8
  __int64 v239; // rax
  int v240; // eax
  unsigned int v241; // ecx
  int v242; // eax
  unsigned int v243; // ecx
  __int64 v244; // rax
  struct DXGHWQUEUE **v245; // rax
  __int64 v246; // rax
  char *v247; // rdx
  __int64 v248; // rax
  __int64 v249; // rdx
  _QWORD *v250; // rax
  __int64 v251; // rax
  __int64 v252; // rax
  __int64 v253; // rbx
  struct DXGCONTEXT **v254; // r12
  int v255; // esi
  __int64 v256; // rbx
  __int64 v257; // rax
  UINT64 PresentHistoryToken; // rax
  int v259; // eax
  __int64 v260; // rdx
  __int64 v261; // r8
  __int64 v262; // rax
  __int64 v263; // rax
  __int64 v264; // rax
  __int64 v265; // rbx
  __int64 v266; // rbx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-100h]
  union _LARGE_INTEGER *v268; // [rsp+28h] [rbp-F8h]
  struct DXGK_PRESENT_PARAMS *v269; // [rsp+30h] [rbp-F0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v270; // [rsp+38h] [rbp-E8h]
  bool v271; // [rsp+A0h] [rbp-80h]
  char v272; // [rsp+A1h] [rbp-7Fh]
  char v273; // [rsp+A2h] [rbp-7Eh]
  signed int v274; // [rsp+A4h] [rbp-7Ch]
  __int64 v275; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v276; // [rsp+B0h] [rbp-70h]
  struct _D3DKMT_RENDER *v277; // [rsp+B8h] [rbp-68h]
  unsigned __int64 v278; // [rsp+C0h] [rbp-60h] BYREF
  UINT v279; // [rsp+C8h] [rbp-58h] BYREF
  int v280; // [rsp+CCh] [rbp-54h]
  PSLIST_ENTRY ListEntry; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v282; // [rsp+D8h] [rbp-48h]
  COREDEVICEACCESS *v283; // [rsp+E0h] [rbp-40h]
  void *v284; // [rsp+E8h] [rbp-38h] BYREF
  __int64 CurrentIrql; // [rsp+F0h] [rbp-30h]
  struct DXGHWQUEUE **v286; // [rsp+F8h] [rbp-28h]
  _QWORD v287[2]; // [rsp+100h] [rbp-20h] BYREF
  struct _DXGKARG_RENDER Src; // [rsp+110h] [rbp-10h] BYREF
  struct DXGALLOCATION **v289; // [rsp+180h] [rbp+60h]
  struct DXGCONTEXT **v290; // [rsp+188h] [rbp+68h]
  char v291[8]; // [rsp+190h] [rbp+70h] BYREF
  char v292; // [rsp+198h] [rbp+78h]
  __int64 v293; // [rsp+1A8h] [rbp+88h]
  int v294; // [rsp+1B0h] [rbp+90h]
  int v295; // [rsp+1B8h] [rbp+98h] BYREF
  __int64 v296; // [rsp+1C0h] [rbp+A0h]
  char v297; // [rsp+1C8h] [rbp+A8h]
  __int64 v298; // [rsp+1D8h] [rbp+B8h]
  int v299; // [rsp+1E0h] [rbp+C0h]
  int v300; // [rsp+1E8h] [rbp+C8h] BYREF
  __int64 v301; // [rsp+1F0h] [rbp+D0h]
  char v302; // [rsp+1F8h] [rbp+D8h]
  LARGE_INTEGER v303[2]; // [rsp+200h] [rbp+E0h] BYREF
  char *v304; // [rsp+210h] [rbp+F0h] BYREF
  UINT CommandLength; // [rsp+218h] [rbp+F8h]
  int v306; // [rsp+21Ch] [rbp+FCh]
  void *pDmaBuffer; // [rsp+220h] [rbp+100h]
  unsigned __int64 v308; // [rsp+228h] [rbp+108h]
  __int64 DmaSize; // [rsp+230h] [rbp+110h]
  void *pDmaBufferPrivateData; // [rsp+238h] [rbp+118h]
  __int64 DmaBufferPrivateDataSize; // [rsp+240h] [rbp+120h]
  DXGK_ALLOCATIONLIST *pAllocationList; // [rsp+248h] [rbp+128h]
  int v313; // [rsp+250h] [rbp+130h]
  UINT MultipassOffset; // [rsp+254h] [rbp+134h]
  int v315; // [rsp+260h] [rbp+140h]
  unsigned __int64 v316; // [rsp+268h] [rbp+148h]
  _BYTE v317[16]; // [rsp+270h] [rbp+150h] BYREF
  struct DXGADAPTERSTOPRESETLOCKSHARED *v318; // [rsp+280h] [rbp+160h]
  _QWORD v319[2]; // [rsp+290h] [rbp+170h] BYREF
  __int128 v320; // [rsp+2A0h] [rbp+180h]
  __int128 v321; // [rsp+2B0h] [rbp+190h]
  __int128 v322; // [rsp+2C0h] [rbp+1A0h]
  __int128 v323; // [rsp+2D0h] [rbp+1B0h]
  char v324[8]; // [rsp+2E0h] [rbp+1C0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+2E8h] [rbp+1C8h] BYREF
  char v326[8]; // [rsp+318h] [rbp+1F8h] BYREF
  struct _KAPC_STATE v327; // [rsp+320h] [rbp+200h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN v328; // [rsp+350h] [rbp+230h] BYREF

  v8 = a2;
  v290 = a5;
  v289 = a6;
  v9 = *((_DWORD *)this + 105);
  v318 = a4;
  v283 = a3;
  v277 = a2;
  v286 = a7;
  if ( (v9 & 0x10) != 0 && !a7 )
  {
    v174 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v174 + 24) = 470LL;
    WdLogEvent5_WdError(v174);
    return 3221225473LL;
  }
  if ( (v9 & 8) != 0 )
  {
    v175 = WdLogNewEntry5_WdWarning(a7, a2, a3);
    *(_QWORD *)(v175 + 24) = 477LL;
    WdLogEvent5_WdWarning(v175);
    return 3221225485LL;
  }
  Flags = a2->Flags;
  v11 = (*(_BYTE *)&Flags & 8) << 12;
  v274 = a2->BroadcastContextCount + 1;
  v280 = v11 | 0x100;
  v12 = 1;
  v278 = v11 | 0x100LL;
  if ( (*(_BYTE *)&Flags & 0x10) != 0 )
  {
    v280 = v11 | 0x1A0;
    LODWORD(v278) = v11 | 0x1A0;
    v176 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, 1u, a3);
    v177 = v176;
    if ( v176 < 0 )
    {
      v178 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v178 + 24) = this;
      *(_QWORD *)(v178 + 32) = v177;
      WdLogEvent5_WdEvent(v178);
      return (unsigned int)v177;
    }
  }
  if ( (*(_DWORD *)&v8->Flags & 0x20) != 0 )
    pNewCommandBuffer = (char *)v8->pNewCommandBuffer;
  else
    pNewCommandBuffer = (char *)*((_QWORD *)this + 7);
  Src.pCommand = &pNewCommandBuffer[v8->CommandOffset];
  Src.CommandLength = v8->CommandLength;
  memset(&Src.CommandLength + 1, 0, 0x64uLL);
  v17 = v278;
  v284 = 0LL;
  v272 = 0;
  v271 = 1;
  v316 = v278;
  while ( 1 )
  {
    v18 = *((_BYTE *)this + 457) == 0;
    v19 = 0LL;
    v275 = 0LL;
    if ( !v18 )
      goto LABEL_17;
    v20 = *((_DWORD *)this + 18);
    if ( v20 <= 3 )
      v20 = 3;
    if ( *((_QWORD *)this + 29) )
      goto LABEL_11;
    v179 = *((_DWORD *)this + 26);
    LODWORD(v270) = v179;
    LODWORD(v269) = v20;
    LOBYTE(Timeout) = 1;
    v180 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, _DWORD, _DWORD, struct DXGK_PRESENT_PARAMS *, struct VIDSCH_SUBMIT_DATA_BASE *, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL) + 440LL))(
             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
             *((unsigned int *)this + 104),
             *(_QWORD *)(*((_QWORD *)this + 2) + 760LL),
             this,
             (_DWORD)Timeout,
             *((_DWORD *)this + 50),
             v269,
             v270,
             *((_DWORD *)this + 51),
             *((_DWORD *)this + 52));
    *((_QWORD *)this + 29) = v180;
    if ( v180 )
    {
      LODWORD(v23) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                            + 16LL)
                                                                                + 640LL)
                                                                    + 8LL)
                                                        + 448LL))(v180);
      if ( (int)v23 >= 0 )
      {
        v188 = *((_DWORD *)this + 105);
        *((_DWORD *)this + 53) = v20;
        *((_DWORD *)this + 54) = v179;
        if ( (v188 & 0x10) == 0 )
          goto LABEL_232;
        v319[0] = 5LL;
        *((_QWORD *)this + 31) = 0LL;
        v320 = 0LL;
        v321 = 0LL;
        v322 = 0LL;
        v323 = 0LL;
        v319[1] = 0LL;
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v187, v14);
        DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v291, Global, 0);
        DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v291, v190);
        v191 = *((_QWORD *)this + 2);
        v192 = *((unsigned int *)this + 104);
        v315 = 4;
        v193 = 1 << v192;
        v194 = *(_QWORD *)(v191 + 16);
        v196 = DXGGLOBAL::GetGlobal(v192, v195);
        LOBYTE(v269) = 0;
        SyncObject = DXGGLOBAL::CreateSyncObject(
                       v196,
                       v194,
                       v191,
                       v193,
                       v319,
                       4,
                       (_DWORD)v269,
                       0LL,
                       0LL,
                       (char *)this + 240,
                       0LL,
                       0LL);
        v23 = SyncObject;
        if ( SyncObject >= 0 )
        {
          if ( v292 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v291);
LABEL_232:
          v8 = v277;
LABEL_11:
          v21 = *((_QWORD *)this + 29);
LABEL_12:
          LOBYTE(v14) = 1;
          v22 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                                                           + 8LL)
                                                                               + 496LL))(
                  v21,
                  v14,
                  0LL,
                  &v275);
          v23 = v22;
          if ( v22 == -1071775486 )
          {
            v14 = (__int64)v283;
            if ( v283 )
            {
              v163 = (char *)v283 + 8;
              if ( !*((_BYTE *)v283 + 32) )
              {
                v201 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v283);
                v201[3] = 275LL;
                v201[4] = 4LL;
                v201[5] = v163;
                v201[6] = 0LL;
                v201[7] = 0LL;
                WdLogEvent5_WdCriticalError(v201);
                v14 = (__int64)v283;
              }
              v164 = (struct _KTHREAD **)*((_QWORD *)v163 + 2);
              v163[24] = 0;
              if ( KeGetCurrentThread() != v164[23] )
              {
                DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v164, *((char **)v163 + 4));
                v14 = (__int64)v283;
              }
              *((_QWORD *)v163 + 4) = 0LL;
              v165 = (COREACCESS *)(v14 + 72);
              if ( *(_BYTE *)(v14 + 144) )
                COREACCESS::Release((COREACCESS *)(v14 + 72));
              v166 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                                                               + 8LL)
                                                                                   + 496LL))(
                       v21,
                       0LL,
                       0LL,
                       &v275);
              v168 = v283;
              LODWORD(v23) = v166;
              if ( *((_BYTE *)v283 + 144) )
              {
                COREACCESS::AcquireShared(v165, 0LL);
                v167 = *(unsigned int *)(*((_QWORD *)v168 + 11) + 200LL);
                if ( (_DWORD)v167 != 1 )
                  goto LABEL_323;
              }
              if ( v163[24] )
              {
                v202 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v167, v14);
                v202[3] = 275LL;
                v202[4] = 4LL;
                v202[5] = v163;
                v202[6] = 0LL;
                v202[7] = 0LL;
                WdLogEvent5_WdCriticalError(v202);
              }
              v169 = *((_QWORD *)v163 + 2);
              if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v169 + 184) )
              {
                if ( !KeReadStateEvent((PRKEVENT)(v169 + 48)) )
                {
                  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    McTemplateK0q_EtwWriteTransfer(v170, &EventBlockThread, v171, 72);
                  KeWaitForSingleObject((PVOID)(*((_QWORD *)v163 + 2) + 48LL), Executive, 0, 0, 0LL);
                }
                DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)v163 + 2), 0LL);
              }
              v163[24] = 1;
              *((_QWORD *)v163 + 4) = 0LL;
              v15 = *(unsigned int *)(*((_QWORD *)v168 + 17) + 576LL);
              if ( (_DWORD)v15 != 1 )
              {
                COREACCESS::Release((COREACCESS *)v163);
                if ( *((_BYTE *)v168 + 144) )
LABEL_323:
                  COREACCESS::Release(v165);
                v246 = WdLogNewEntry5_WdEvent();
                *(_QWORD *)(v246 + 24) = this;
                *(_QWORD *)(v246 + 32) = -1073741130LL;
                WdLogEvent5_WdEvent(v246);
                COREDEVICEACCESS::AcquireSharedUncheck(v168, v247);
                LODWORD(v23) = -1073741130;
LABEL_325:
                v248 = WdLogNewEntry5_WdEvent();
                *(_QWORD *)(v248 + 32) = (int)v23;
                *(_QWORD *)(v248 + 24) = this;
                WdLogEvent5_WdEvent(v248);
LABEL_344:
                v49 = 0;
LABEL_345:
                v255 = v274;
                goto LABEL_346;
              }
              v8 = v277;
            }
          }
          else if ( v22 < 0 )
          {
            v203 = WdLogNewEntry5_WdEvent();
            *(_QWORD *)(v203 + 24) = this;
            *(_QWORD *)(v203 + 32) = v23;
            WdLogEvent5_WdEvent(v203);
          }
          goto LABEL_15;
        }
        v200 = WdLogNewEntry5_WdWarning(v198, v14, v199);
        *(_QWORD *)(v200 + 24) = this;
        *(_QWORD *)(v200 + 32) = v23;
        WdLogEvent5_WdWarning(v200);
        if ( v292 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v291);
      }
    }
    else
    {
      v183 = WdLogNewEntry5_WdWarning(v181, 0LL, v182);
      *(_QWORD *)(v183 + 24) = this;
      *(_QWORD *)(v183 + 32) = -1073741801LL;
      WdLogEvent5_WdWarning(v183);
      LODWORD(v23) = -1073741801;
    }
    v185 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
    if ( v185 )
    {
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v185);
      *((_QWORD *)this + 30) = 0LL;
    }
    v21 = *((_QWORD *)this + 29);
    if ( v21 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL)
                                     + 456LL))(*((_QWORD *)this + 29));
      *((_QWORD *)this + 29) = 0LL;
      v21 = 0LL;
    }
    if ( (int)v23 >= 0 )
    {
      v8 = v277;
      goto LABEL_12;
    }
    v186 = WdLogNewEntry5_WdWarning(v185, v14, v184);
    *(_QWORD *)(v186 + 24) = this;
    WdLogEvent5_WdWarning(v186);
    v8 = v277;
LABEL_15:
    if ( (int)v23 < 0 )
      goto LABEL_325;
    v19 = v275;
LABEL_17:
    if ( !bTracingEnabled )
      goto LABEL_21;
    v24 = v8->Flags;
    if ( (*(_BYTE *)&v24 & 0x10) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
      {
        HIDWORD(v270) = 0;
        HIDWORD(v269) = 0;
        McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(v15, v14, v16, 0LL, v19);
      }
    }
    else
    {
      if ( (*(_BYTE *)&v24 & 0x20) != 0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_21;
        v204 = (const EVENT_DESCRIPTOR *)&EventRenderKm;
      }
      else
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_21;
        v204 = (const EVENT_DESCRIPTOR *)&EventRender;
      }
      McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v204, v16, v19);
    }
LABEL_21:
    v25 = *((_QWORD *)this + 2);
    v279 = 0;
    v303[0].QuadPart = 0LL;
    v278 = 0LL;
    v287[0] = 0LL;
    v26 = *(_QWORD *)(v25 + 16);
    v282 = v26;
    ++*(_DWORD *)(v26 + 1268);
    v29 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v26 + 1248));
    if ( !v29 )
    {
      ++*(_DWORD *)(v26 + 1272);
      v29 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v26 + 1296))(
                            *(unsigned int *)(v26 + 1284),
                            *(unsigned int *)(v26 + 1292),
                            *(unsigned int *)(v26 + 1288),
                            v26 + 1248);
    }
    ListEntry = v29;
    if ( !v29 )
    {
      v264 = WdLogNewEntry5_WdLowResource(v28, v27, v30, v31);
      *(_QWORD *)(v264 + 24) = 589LL;
      WdLogEvent5_WdLowResource(v264);
      LODWORD(v23) = -1073741801;
      goto LABEL_343;
    }
    v32 = *(_QWORD *)(v26 + 16);
    if ( *(int *)(v32 + 2328) < 0x2000 )
      v33 = 1;
    else
      v33 = *(_DWORD *)(v32 + 280);
    if ( *(int *)(v32 + 2328) >= 0x2000 || *(_BYTE *)(v32 + 2628) )
      v34 = *(_DWORD *)(v32 + 2536) * ((v33 << 6) + ((8 * v33 + 199) & 0xFFFFFFF8)) + 8 * (v33 + 74);
    else
      v34 = 1288;
    memset(v29, 0, v34);
    v35 = *(_QWORD *)(v282 + 16);
    if ( *(int *)(v35 + 2328) < 0x2000 )
      v36 = 1;
    else
      v36 = *(_DWORD *)(v35 + 280);
    v37 = *(int *)(v35 + 2328) >= 0x2000 || *(_BYTE *)(v35 + 2628);
    v38 = *(_DWORD *)(v35 + 2536);
    *((_BYTE *)&v29[21].Next + 12) = v37;
    if ( v37 )
    {
      v39 = 8 * v36;
      *((_DWORD *)&v29[36].Next + 2) = v36;
      v40 = v36 << 6;
      HIDWORD(v29[36].Next) = v38;
      *((_DWORD *)&v29[36].Next + 3) = v38 * (v40 + ((v39 + 199) & 0xFFFFFFF8)) + 16;
      v41 = v38 * (v40 + ((v39 + 199) & 0xFFFFFFF8)) + 592;
      *((_DWORD *)&v29[33].Next + 2) = v41;
      *((_DWORD *)&v29[33].Next + 3) = v39 + v41;
    }
    if ( (*((_DWORD *)this + 56) & 1) != 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2624LL) & 2) != 0 )
    {
      v42 = v8->Flags;
      if ( (*(_BYTE *)&v42 & 0x20) == 0 )
      {
        LODWORD(v23) = 0;
        v49 = 0;
        goto LABEL_43;
      }
    }
    else
    {
      v42 = v8->Flags;
    }
    v43 = &v278;
    if ( !*((_BYTE *)this + 454) )
      v43 = 0LL;
    if ( (*(_BYTE *)&v42 & 0x20) != 0 )
      pNewAllocationList = v8->pNewAllocationList;
    else
      pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)*((_QWORD *)this + 11);
    LODWORD(Timeout) = v274;
    v45 = (*(__int64 (__fastcall **)(__int64, D3DDDI_ALLOCATIONLIST *, _QWORD, _QWORD, PLARGE_INTEGER, UINT *, LARGE_INTEGER *, unsigned __int64 *, _QWORD *, PSLIST_ENTRY, struct DXGALLOCATION **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL) + 576LL))(
            v275,
            pNewAllocationList,
            v8->AllocationCount,
            v12,
            Timeout,
            &v279,
            v303,
            v43,
            v287,
            v29 + 12,
            v289);
    v23 = v45;
    if ( v45 < 0 )
    {
      v263 = WdLogNewEntry5_WdWarning(v47, v46, v48);
      *(_QWORD *)(v263 + 24) = this;
      *(_QWORD *)(v263 + 32) = v23;
      WdLogEvent5_WdWarning(v263);
LABEL_343:
      CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
      goto LABEL_344;
    }
    v49 = 1;
LABEL_43:
    v273 = v49;
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                         + 8LL)
                                             + 512LL))(
      v275,
      &v284);
    Src.pDmaBuffer = v284;
    Src.DmaSize = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                             + 640LL)
                                                                 + 8LL)
                                                     + 536LL))(v275);
    Src.pDmaBufferPrivateData = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                                                       + 8LL)
                                                                           + 568LL))(v275);
    Src.DmaBufferPrivateDataSize = *((_DWORD *)this + 52);
    if ( v272 )
    {
      v205 = DXGCONTEXT::SignalRenderKmMonitoredFence(&Src, this, *v286, v278);
      v23 = v205;
      if ( v205 == -1071775743 )
      {
        v250 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v207, v206);
        v250[3] = 275LL;
        v250[4] = 40LL;
        v250[5] = this;
        v250[6] = 0LL;
        v250[7] = 0LL;
        WdLogEvent5_WdCriticalError(v250);
LABEL_327:
        v251 = WdLogNewEntry5_WdWarning(v207, v206, v208);
        *(_QWORD *)(v251 + 24) = this;
        *(_QWORD *)(v251 + 32) = v23;
        WdLogEvent5_WdWarning(v251);
        CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
        goto LABEL_345;
      }
      if ( v205 < 0 )
        goto LABEL_327;
      v272 = 0;
    }
    if ( !v271 )
      goto LABEL_103;
    if ( !DXGCONTEXT::DisableDdiRenderAllocationList(this) || (*(_DWORD *)&v8->Flags & 0x20) != 0 )
    {
      Src.pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                                                                  + 8LL)
                                                                                      + 560LL))(v275);
      Src.AllocationListSize = v8->AllocationCount;
      Src.pPatchLocationListIn = (D3DDDI_PATCHLOCATIONLIST *)*((_QWORD *)this + 15);
      Src.PatchLocationListInSize = v8->PatchLocationCount;
      Src.pPatchLocationListOut = (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL)
                                                                                                 + 552LL))(v275);
      Src.PatchLocationListOutSize = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 640LL)
                                                                                    + 8LL)
                                                                        + 544LL))(v275);
      v51 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v52 = *(struct DXGADAPTER **)(v51 + 16);
      v54 = DXGGLOBAL::GetGlobal(v51, v53);
      if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)v54 + 1548), v52) )
      {
        memmove(*((void **)this + 8), Src.pCommand, *((_QWORD *)this + 6));
        v209 = *((_QWORD *)this + 14);
        v210 = (void *)*((_QWORD *)this + 16);
        Src.pCommand = (const void *)*((_QWORD *)this + 8);
        memmove(v210, Src.pPatchLocationListIn, v209);
        Src.pPatchLocationListIn = (D3DDDI_PATCHLOCATIONLIST *)*((_QWORD *)this + 16);
      }
      AllocationListSize = Src.AllocationListSize;
      LODWORD(v23) = 0;
    }
    else
    {
      LODWORD(v23) = 0;
      AllocationListSize = 0LL;
      Src.pAllocationList = 0LL;
      Src.AllocationListSize = 0;
      Src.pPatchLocationListIn = 0LL;
      Src.PatchLocationListInSize = 0;
      Src.pPatchLocationListOut = 0LL;
      Src.PatchLocationListOutSize = 0;
    }
    Src.DmaBufferSegmentId = v279;
    Src.DmaBufferPhysicalAddress = v303[0];
    if ( (*(_DWORD *)&v8->Flags & 0x20) != 0 )
    {
      if ( *((_BYTE *)this + 454) )
      {
        v304 = (char *)v8->pNewCommandBuffer + v8->CommandOffset;
        CommandLength = v8->CommandLength;
        v313 = AllocationListSize;
        v306 = 0;
        pDmaBuffer = Src.pDmaBuffer;
        DmaSize = Src.DmaSize;
        pDmaBufferPrivateData = Src.pDmaBufferPrivateData;
        DmaBufferPrivateDataSize = Src.DmaBufferPrivateDataSize;
        pAllocationList = Src.pAllocationList;
        MultipassOffset = Src.MultipassOffset;
        v308 = v278;
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v268) = AllocationListSize;
            McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &RenderGdi, v50, this, v278, v268);
            AllocationListSize = Src.AllocationListSize;
          }
          v56 = 0;
          if ( (_DWORD)AllocationListSize )
          {
            v57 = v289;
            do
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                v221 = &Src.pAllocationList[v56];
                LODWORD(v268) = *(_DWORD *)&v221->8 & 1;
                McTemplateK0ppqx_EtwWriteTransfer(
                  (REGHANDLE *)&DxgkControlGuid_Context,
                  (__int64)v221,
                  v50,
                  v57[v56],
                  v221->hDeviceSpecificAllocation,
                  v268,
                  v221->PhysicalAddress.QuadPart);
                AllocationListSize = Src.AllocationListSize;
              }
              ++v56;
            }
            while ( v56 < (unsigned int)AllocationListSize );
            v17 = v316;
          }
        }
        v276 = *((_QWORD *)this + 23);
        v58 = *((_QWORD *)this + 2);
        v300 = -1;
        v301 = 0LL;
        v59 = *(_QWORD *)(v58 + 16);
        if ( (qword_1C00B19B0 & 2) != 0 )
        {
          v302 = 1;
          v300 = 5066;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(AllocationListSize, &EventProfilerEnter, v50, 5066);
        }
        else
        {
          v302 = 0;
        }
        DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v300, 5066LL);
        CurrentProcess = PsGetCurrentProcess(v61, v60, v62, v63);
        ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
        v67 = ProcessDxgProcess;
        if ( (!ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) != 0)
          && (Current = DXGTHREAD::GetCurrent()) != 0LL
          && (v68 = *((_QWORD *)Current + 1)) != 0
          || (v68 = v67) != 0 )
        {
          v69 = v68 + 112;
          v70 = 0;
        }
        else
        {
          v70 = 0;
          v69 = 0LL;
        }
        v298 = v69;
        v299 = 0;
        if ( v69 && *(struct _KTHREAD **)(v69 + 8) == KeGetCurrentThread() )
        {
          v223 = WdLogNewEntry5_WdAssertion(v69, v66);
          *(_QWORD *)(v223 + 24) = 1571LL;
          WdLogEvent5_WdAssertion(v223);
        }
        if ( v68 )
        {
          v71 = v298;
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v71, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v173 = *(_DWORD *)(v71 + 24);
              if ( v173 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q_EtwWriteTransfer(v72, &EventBlockThread, v73, v173);
            }
            ExAcquirePushLockExclusiveEx(v71, 0LL);
          }
          *(_QWORD *)(v71 + 8) = KeGetCurrentThread();
          v299 = 2;
        }
        DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v59 + 16), 1);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v59 + 16) + 4364LL));
        CurrentIrql = KeGetCurrentIrql();
        ThreadProperty = 0LL;
        if ( (unsigned __int8)CurrentIrql < 2u )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v224 = WdLogNewEntry5_WdAssertion(v75, v74);
            *(_QWORD *)(v224 + 24) = 507LL;
            WdLogEvent5_WdAssertion(v224);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          v83 = PsGetCurrentProcess(v80, v79, v81, v82);
          v84 = PsGetProcessDxgProcess(v83);
          if ( CurrentProcessSessionId )
          {
            if ( (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
            {
              if ( v84 )
              {
                v85 = *(void **)(v84 + 88);
                if ( v85 )
                {
                  if ( v85 != &gDxgkWin32kEngInterface )
                  {
                    if ( !(unsigned __int8)KeIsAttachedProcess()
                      || (v225 = PsGetCurrentProcess(v87, v86, v88, v89),
                          ProcessSessionId = PsGetProcessSessionIdEx(v225),
                          CurrentThreadProcess = PsGetCurrentThreadProcess(),
                          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
                    {
                      ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
                      if ( ThreadWin32Thread )
                      {
                        if ( *(_QWORD *)ThreadWin32Thread )
                        {
                          ThreadProperty = *(struct DXGTHREAD **)(*(_QWORD *)ThreadWin32Thread + 80LL);
                          goto LABEL_84;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          ThreadProperty = (struct DXGTHREAD *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
          if ( ThreadProperty || (ThreadProperty = DxgkThreadObjectCreateDxgThread()) != 0LL )
          {
            ObfDereferenceObject(ThreadProperty);
LABEL_84:
            if ( ThreadProperty )
              v70 = *((_DWORD *)ThreadProperty + 8);
            else
              v70 = 0;
          }
          else
          {
            v70 = 0;
            ThreadProperty = 0LL;
          }
        }
        DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
          (DXGVALIDATIONPROCESSATTACH *)v326,
          *(struct DXGADAPTER **)(v59 + 16));
        v23 = (*(int (__fastcall **)(__int64, char **))(*(_QWORD *)(v59 + 16) + 832LL))(v276, &v304);
        if ( v326[0] )
          KeUnstackDetachProcess(&v327);
        if ( (_BYTE)CurrentIrql != KeGetCurrentIrql() )
        {
          v228 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v92, v91);
          v229 = (unsigned __int8)CurrentIrql;
          v228[3] = 275LL;
          v228[4] = 16LL;
          v228[5] = v59;
          v228[6] = v229;
          LOBYTE(v229) = KeGetCurrentIrql();
          v228[7] = (unsigned __int8)v229;
          WdLogEvent5_WdCriticalError(v228);
        }
        if ( ThreadProperty && *((_DWORD *)ThreadProperty + 8) != v70 )
        {
          v230 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v92, v91);
          v230[3] = 275LL;
          v230[4] = 38LL;
          v230[5] = *((int *)ThreadProperty + 8);
          v230[6] = v70;
          v230[7] = 0LL;
          WdLogEvent5_WdCriticalError(v230);
        }
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v59 + 16) + 4364LL));
        v93 = (_QWORD *)WdLogNewEntry5_WdTrace(v92, v91);
        v95 = v276;
        v93[3] = v23;
        v93[4] = v95;
        v93[5] = pDmaBuffer;
        v93[6] = (unsigned int)DmaSize;
        v96 = pAllocationList;
        v93[7] = pAllocationList;
        if ( (_DWORD)v23
          && (_DWORD)v23 != -1071775743
          && (_DWORD)v23 != -1073741816
          && (_DWORD)v23 != -1073741811
          && (_DWORD)v23 != -1073741801
          && (_DWORD)v23 != -1073741592
          && (_DWORD)v23 != -1071775232 )
        {
          v231 = WdLogNewEntry5_WdError(v96, v94);
          *(_QWORD *)(v231 + 24) = v23;
          WdLogEvent5_WdError(v231);
        }
        DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v59 + 16));
        if ( v299 == 1 )
        {
          v299 = 0;
          ExReleasePushLockSharedEx(v298, 0LL);
LABEL_97:
          KeLeaveCriticalRegion();
        }
        else if ( v299 == 2 )
        {
          v98 = v298;
          v299 = 0;
          *(_QWORD *)(v298 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v98, 0LL);
          goto LABEL_97;
        }
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v300, v97);
        if ( v302 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v100, &EventProfilerExit, v101, v300);
        Src.pDmaBuffer = pDmaBuffer;
        Src.pDmaBufferPrivateData = pDmaBufferPrivateData;
        Src.MultipassOffset = MultipassOffset;
        if ( (*((_DWORD *)this + 105) & 0x10) != 0 )
        {
          Src.DmaBufferPrivateDataSize = DmaBufferPrivateDataSize;
          Src.DmaSize = DmaSize;
        }
      }
      else
      {
        LODWORD(v23) = ADAPTER_RENDER::DdiRenderKm(
                         *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                         *((void **)this + 23),
                         &Src);
      }
LABEL_101:
      if ( (int)(v23 + 0x80000000) >= 0 && (_DWORD)v23 != -1071775743 )
      {
        v252 = WdLogNewEntry5_WdWarning(0x80000000LL, v99, v101);
        *(_QWORD *)(v252 + 32) = (int)v23;
LABEL_328:
        *(_QWORD *)(v252 + 24) = this;
        WdLogEvent5_WdWarning(v252);
        CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
        v49 = v273;
        goto LABEL_345;
      }
      goto LABEL_102;
    }
    if ( (*((_DWORD *)this + 56) & 1) == 0
      || (AllocationListSize = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2624LL),
          (AllocationListSize & 4) == 0) )
    {
      CurrentIrql = *((_QWORD *)this + 23);
      v120 = *((_QWORD *)this + 2);
      v295 = -1;
      v296 = 0LL;
      v121 = *(_QWORD *)(v120 + 16);
      if ( (qword_1C00B19B0 & 2) != 0 )
      {
        v297 = 1;
        v295 = 5030;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(AllocationListSize, &EventProfilerEnter, v50, 5030);
      }
      else
      {
        v297 = 0;
      }
      DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v295, 5030LL);
      v126 = PsGetCurrentProcess(v123, v122, v124, v125);
      v127 = PsGetProcessDxgProcess(v126);
      v129 = v127;
      if ( (!v127 || (*(_BYTE *)(v127 + 347) & 0x10) != 0)
        && (v211 = DXGTHREAD::GetCurrent()) != 0LL
        && (v130 = *((_QWORD *)v211 + 1)) != 0
        || (v130 = v129) != 0 )
      {
        v131 = v130 + 112;
        v132 = 0;
      }
      else
      {
        v132 = 0;
        v131 = 0LL;
      }
      v293 = v131;
      v294 = 0;
      if ( v131 && *(struct _KTHREAD **)(v131 + 8) == KeGetCurrentThread() )
      {
        v212 = WdLogNewEntry5_WdAssertion(v131, v128);
        *(_QWORD *)(v212 + 24) = 1571LL;
        WdLogEvent5_WdAssertion(v212);
      }
      if ( v130 )
      {
        v133 = v293;
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v133, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v172 = *(_DWORD *)(v133 + 24);
            if ( v172 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer(v131, &EventBlockThread, v134, v172);
          }
          ExAcquirePushLockExclusiveEx(v133, 0LL);
        }
        *(_QWORD *)(v133 + 8) = KeGetCurrentThread();
        v294 = 2;
      }
      v135 = *(struct DXGADAPTER **)(v121 + 16);
      v136 = DXGGLOBAL::GetGlobal(v131, v128);
      if ( *((_BYTE *)v136 + 1553)
        && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)v136 + 1548), v135) )
      {
        LODWORD(v23) = -1073741637;
LABEL_180:
        if ( v294 == 1 )
        {
          v294 = 0;
          ExReleasePushLockSharedEx(v293, 0LL);
LABEL_183:
          KeLeaveCriticalRegion();
        }
        else if ( v294 == 2 )
        {
          v161 = v293;
          v294 = 0;
          *(_QWORD *)(v293 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v161, 0LL);
          goto LABEL_183;
        }
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v295, v160);
        if ( v297 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v162, &EventProfilerExit, v101, v295);
        goto LABEL_101;
      }
      DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v121 + 16), 1);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v121 + 16) + 4364LL));
      v276 = KeGetCurrentIrql();
      DxgThread = 0LL;
      if ( (unsigned __int8)v276 < 2u )
      {
        v140 = KeGetCurrentThread();
        if ( !v140 )
        {
          v213 = WdLogNewEntry5_WdAssertion(v138, v137);
          *(_QWORD *)(v213 + 24) = 507LL;
          WdLogEvent5_WdAssertion(v213);
        }
        v141 = PsGetCurrentProcessSessionId();
        v146 = PsGetCurrentProcess(v143, v142, v144, v145);
        v147 = PsGetProcessDxgProcess(v146);
        if ( v141
          && (unsigned int)PsGetThreadSessionId(v140) == v141
          && v147
          && (v148 = *(void **)(v147 + 88)) != 0LL
          && v148 != &gDxgkWin32kEngInterface
          && (!(unsigned __int8)KeIsAttachedProcess()
           || (v214 = PsGetCurrentProcess(v150, v149, v151, v152),
               v215 = PsGetProcessSessionIdEx(v214),
               v216 = PsGetCurrentThreadProcess(),
               v215 == (unsigned int)PsGetProcessSessionIdEx(v216)))
          && (v153 = PsGetThreadWin32Thread(v140)) != 0
          && *(_QWORD *)v153 )
        {
          DxgThread = *(struct DXGTHREAD **)(*(_QWORD *)v153 + 80LL);
LABEL_169:
          if ( DxgThread )
            v132 = *((_DWORD *)DxgThread + 8);
          else
            v132 = 0;
        }
        else
        {
          DxgThread = (struct DXGTHREAD *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
          if ( DxgThread || (DxgThread = DxgkThreadObjectCreateDxgThread()) != 0LL )
          {
            ObfDereferenceObject(DxgThread);
            goto LABEL_169;
          }
          v132 = 0;
          DxgThread = 0LL;
        }
      }
      DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
        (DXGVALIDATIONPROCESSATTACH *)v324,
        *(struct DXGADAPTER **)(v121 + 16));
      v23 = (*(int (__fastcall **)(__int64, struct _DXGKARG_RENDER *))(*(_QWORD *)(v121 + 16) + 640LL))(
              CurrentIrql,
              &Src);
      if ( v324[0] )
        KeUnstackDetachProcess(&ApcState);
      if ( (_BYTE)v276 != KeGetCurrentIrql() )
      {
        v217 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v155, v154);
        v218 = (unsigned __int8)v276;
        v217[3] = 275LL;
        v217[4] = 16LL;
        v217[5] = v121;
        v217[6] = v218;
        LOBYTE(v218) = KeGetCurrentIrql();
        v217[7] = (unsigned __int8)v218;
        WdLogEvent5_WdCriticalError(v217);
      }
      if ( DxgThread && *((_DWORD *)DxgThread + 8) != v132 )
      {
        v219 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v155, v154);
        v219[3] = 275LL;
        v219[4] = 38LL;
        v219[5] = *((int *)DxgThread + 8);
        v219[6] = v132;
        v219[7] = 0LL;
        WdLogEvent5_WdCriticalError(v219);
      }
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v121 + 16) + 4364LL));
      v156 = (_QWORD *)WdLogNewEntry5_WdTrace(v155, v154);
      v158 = CurrentIrql;
      v156[3] = v23;
      v156[4] = v158;
      v156[5] = Src.pDmaBuffer;
      v156[6] = Src.DmaSize;
      v159 = Src.pAllocationList;
      v156[7] = Src.pAllocationList;
      if ( (_DWORD)v23 )
      {
        if ( (int)v23 > -1073741674 )
        {
          if ( (_DWORD)v23 == -1073741592 || (_DWORD)v23 == -1071775743 || (_DWORD)v23 == -1071775232 )
            goto LABEL_179;
        }
        else if ( (_DWORD)v23 == -1073741674
               || (_DWORD)v23 == -1073741816
               || (_DWORD)v23 == -1073741811
               || (_DWORD)v23 == -1073741801
               || (_DWORD)v23 == -1073741795 )
        {
          goto LABEL_179;
        }
        v220 = WdLogNewEntry5_WdError(v159, v157);
        *(_QWORD *)(v220 + 24) = v23;
        WdLogEvent5_WdError(v220);
      }
LABEL_179:
      DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v121 + 16));
      goto LABEL_180;
    }
LABEL_102:
    v102 = (_DWORD)v23 == -1071775743;
    v271 = v102;
    if ( (*((_DWORD *)this + 105) & 0x10) != 0 )
    {
      if ( *((_QWORD *)this + 31) )
      {
        v233 = v286;
      }
      else
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX(
          (DXGAUTOMUTEX *)v317,
          (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 30) + 32LL) + 32LL),
          0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v317);
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             *(DXGSYNCOBJECT **)(*((_QWORD *)this + 30) + 32LL),
                             *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 30) + 16LL) + 16LL));
        v233 = v286;
        (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL)
                                                                                         + 8LL)
                                                                             + 272LL))(
          *((_QWORD *)*v286 + 5),
          VidSchSyncObject,
          0LL);
        if ( v317[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v317, v234);
      }
      ++*((_QWORD *)this + 31);
      v271 = (_DWORD)v23 == -1071775743;
      if ( !*((_BYTE *)this + 312) )
      {
        v235 = DXGCONTEXT::SignalRenderKmMonitoredFence(&Src, this, *v233, v278);
        v23 = v235;
        v271 = v102;
        if ( v235 == -1071775743 )
        {
          v272 = 1;
        }
        else if ( v235 < 0 )
        {
          v252 = WdLogNewEntry5_WdWarning(v237, v236, v238);
          *(_QWORD *)(v252 + 32) = v23;
          goto LABEL_328;
        }
      }
    }
LABEL_103:
    LODWORD(v103) = 0;
    AllocationCount = 0;
    v105 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                          + 8LL)
                                              + 568LL))(v275);
    v106 = LODWORD(Src.pDmaBufferPrivateData) - v105;
    LODWORD(v276) = LODWORD(Src.pDmaBuffer) - (_DWORD)v284;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL)
                                    + 520LL))(v275);
    v284 = 0LL;
    if ( !DXGCONTEXT::DisableDdiRenderAllocationList(this) )
    {
      v108 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 640LL)
                                                            + 8LL)
                                                + 552LL))(v275);
      v14 = (unsigned __int128)(((__int128)Src.pPatchLocationListOut - v108) * 0x2AAAAAAAAAAAAAABLL) >> 64;
      v103 = ((__int64)Src.pPatchLocationListOut - v108) / 24;
      AllocationCount = v277->AllocationCount;
      if ( (qword_1C00B19B0 & 0x10) != 0 )
      {
        v239 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                          + 640LL)
                                                              + 8LL)
                                                  + 552LL))(v275);
        TraceDxgkPatchLocationList((__int64)this, v275, v103, v239);
      }
      v107 = 0;
    }
    v29->Next = (struct _SLIST_ENTRY *)v17;
    if ( *((_BYTE *)this + 454) )
    {
      LODWORD(v29->Next) |= 0x8000000u;
      *((_QWORD *)&v29[2].Next + 1) = v278;
    }
    if ( (v280 & 0x20) != 0 )
    {
      if ( v271 || (v240 = v107, v272) )
        v240 = 64;
      v16 = (unsigned int)v274;
      v241 = v240 | (__int64)v29->Next & 0xFFFFFFBF;
      v242 = 2048;
      v243 = v241 & 0xFFFFFBFF;
      if ( v274 > 1 )
        v242 = 3072;
      LODWORD(v29->Next) = v242 | v243;
      v14 = *((_QWORD *)this + 2);
      if ( *(_QWORD *)(v14 + 1848) != *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) )
        HIDWORD(v29[7].Next) = v107;
    }
    else
    {
      v16 = (unsigned int)v274;
    }
    v109 = v275;
    HIDWORD(v29[4].Next) = v103;
    *((_QWORD *)&v29->Next + 1) = v109;
    HIDWORD(v29[3].Next) = v276;
    LODWORD(v29[4].Next) = 0;
    *((_DWORD *)&v29[4].Next + 2) = 0;
    LODWORD(v29[3].Next) = v107;
    *((_DWORD *)&v29[3].Next + 3) = AllocationCount;
    *((_DWORD *)&v29[3].Next + 2) = v107;
    *((_DWORD *)&v29[4].Next + 3) = v106;
    if ( v287[0] )
    {
      v110 = 1;
      v15 = (__int64)v287;
    }
    else
    {
      v110 = 0;
      v15 = 0LL;
    }
    v29[21].Next = (struct _SLIST_ENTRY *)v15;
    v111 = 0;
    *((_DWORD *)&v29[21].Next + 2) = v110;
    if ( (int)v16 > 0 )
      break;
LABEL_121:
    v116 = ListEntry;
    v12 = 0;
    v275 = 0LL;
    if ( ListEntry )
    {
      v117 = v282 + 1248;
      v118 = (union _SLIST_HEADER *)(v282 + 1248);
      ++*(_DWORD *)(v282 + 1276);
      if ( ExQueryDepthSList(v118) >= *(_WORD *)(v117 + 16) )
      {
        ++*(_DWORD *)(v117 + 32);
        (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v117 + 56))(v116, v117);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v117, v116);
      }
    }
    if ( !v272 && !v271 )
    {
      if ( (*(_DWORD *)&v277->Flags & 0x10) != 0 )
      {
        memset(&v328, 0, sizeof(v328));
        PresentHistoryToken = v277->PresentHistoryToken;
        v328.Model = D3DKMT_PM_REDIRECTED_VISTABLT;
        v328.Token.Flip.FenceValue = PresentHistoryToken;
        v259 = SubmitPresentHistoryToken(&v328, v283, v318, 0LL, 0, 0LL, 0LL, 0LL, this, 0LL, 0LL);
        v23 = v259;
        if ( (int)(v259 + 0x80000000) >= 0 && v259 != -1073741130 )
        {
          v262 = WdLogNewEntry5_WdWarning(0x80000000LL, v260, v261);
          *(_QWORD *)(v262 + 24) = this;
          *(_QWORD *)(v262 + 32) = v23;
          WdLogEvent5_WdWarning(v262);
          LODWORD(v23) = 0;
        }
      }
      return (unsigned int)v23;
    }
    v8 = v277;
  }
  v112 = v290;
  while ( 1 )
  {
    v113 = *v112;
    if ( *((struct _KTHREAD **)*v112 + 59) != KeGetCurrentThread() )
    {
      v244 = WdLogNewEntry5_WdAssertion(v113, v14);
      *(_QWORD *)(v244 + 24) = 924LL;
      WdLogEvent5_WdAssertion(v244);
      v113 = *v112;
    }
    if ( (*((_DWORD *)v113 + 105) & 0x10) != 0 )
    {
      v29[30].Next = (struct _SLIST_ENTRY *)*((_QWORD *)this + 31);
      *((_DWORD *)&v29[30].Next + 2) = 0;
      *((_QWORD *)&v29[31].Next + 1) = *(_QWORD *)(*((_QWORD *)this + 30) + 64LL);
      v245 = v286;
      v29[31].Next = *(struct _SLIST_ENTRY **)(*((_QWORD *)this + 30) + 48LL);
      v114 = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 16LL)
                                                                                     + 616LL)
                                                                         + 8LL)
                                                             + 432LL))(
               *((_QWORD *)*v245 + 5),
               v29);
    }
    else
    {
      v114 = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 16LL)
                                                                                     + 616LL)
                                                                         + 8LL)
                                                             + 424LL))(
               *((_QWORD *)v113 + 34),
               v29);
    }
    LODWORD(v276) = v114;
    v115 = v114;
    if ( v114 < 0 )
      break;
    LODWORD(v29->Next) &= ~0x800u;
    ++v111;
    ++v112;
    if ( v111 >= v274 )
      goto LABEL_121;
  }
  if ( (*((_DWORD *)this + 105) & 0x10) == 0 )
  {
    v253 = v111;
    if ( v111 >= 0 )
    {
      v254 = v290;
      do
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 616LL)
                                                           + 8LL)
                                               + 440LL))(
          *((_QWORD *)v254[v253--] + 34),
          0LL);
      while ( v253 >= 0 );
      v115 = v276;
    }
  }
  v255 = v274;
  if ( v111 < v274 )
  {
    v256 = (unsigned int)(v274 - v111);
    do
    {
      LOBYTE(v14) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 640LL)
                                                           + 8LL)
                                               + 584LL))(
        v275,
        v14);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                          + 8LL)
                                              + 504LL))(
        v275,
        0LL);
      --v256;
    }
    while ( v256 );
  }
  v49 = 0;
  v275 = 0LL;
  v257 = WdLogNewEntry5_WdWarning(v15, v14, v16);
  *(_QWORD *)(v257 + 32) = v115;
  *(_QWORD *)(v257 + 24) = this;
  WdLogEvent5_WdWarning(v257);
  CVidSchSubmitData::~CVidSchSubmitData(&ListEntry);
LABEL_346:
  if ( !v275 )
    return (unsigned int)v23;
  if ( v284 )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL) + 520LL))();
  if ( v49 )
  {
    if ( v255 <= 0 )
      return (unsigned int)v23;
    v265 = (unsigned int)v255;
    do
    {
      LOBYTE(v249) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 640LL)
                                                           + 8LL)
                                               + 584LL))(
        v275,
        v249);
      --v265;
    }
    while ( v265 );
  }
  if ( v255 > 0 )
  {
    v266 = (unsigned int)v255;
    do
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                          + 8LL)
                                              + 504LL))(
        v275,
        0LL);
      --v266;
    }
    while ( v266 );
  }
  return (unsigned int)v23;
}
