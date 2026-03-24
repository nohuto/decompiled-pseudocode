/*
 * XREFs of ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C010EC30
 * Callers:
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00F4E90 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C00FC710 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107DA0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkPresent @ 0x1C010B130 (DxgkPresent.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z @ 0x1C010E5E0 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C015B3DC (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C0272670 (DxgkSubmitPresentToHwQueue.c)
 *     DxgkPresentRedirected @ 0x1C0283740 (DxgkPresentRedirected.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004EF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0005090 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00052C4 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0005500 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C0005530 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0008BB0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000903C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     _tlgKeywordOn @ 0x1C000C284 (_tlgKeywordOn.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001DF24 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     McTemplateK0ppqqx_EtwWriteTransfer @ 0x1C0041FFC (McTemplateK0ppqqx_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U2@U1@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555AEBU?$_tlgWrapSz@G@@435555555@Z @ 0x1C0047E10 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U3@U3@U3@.c)
 *     ??1KOBJECTREF@@QEAA@XZ @ 0x1C0047FF4 (--1KOBJECTREF@@QEAA@XZ.c)
 *     McTemplateK0ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq_EtwWriteTransfer @ 0x1C0048298 (McTemplateK0ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq_EtwWriteTransfer.c)
 *     ?DxgkQueryHostCompSurfInfo@@YAJ_JAEAIAEA_K@Z @ 0x1C0065320 (-DxgkQueryHostCompSurfInfo@@YAJ_JAEAIAEA_K@Z.c)
 *     ?VmBusSendSubmitPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@PEAVDXGDEVICESYNCOBJECT@@@Z @ 0x1C00D7DAC (-VmBusSendSubmitPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONT.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01077E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C0107B00 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0109380 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C0110B50 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01252E8 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ @ 0x1C0156F48 (-GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x1C01592D0 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C0221860 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 *     ?VmBusSendSubmitVailPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@PEAVDXGSYNCOBJECT@@PEAVDXGALLOCATION_VGPU@@I_K@Z @ 0x1C024D854 (-VmBusSendSubmitVailPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXG.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C02558CC (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026962C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x1C0282C44 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 */

__int64 __fastcall SubmitPresentHistoryToken(
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a1,
        struct COREDEVICEACCESS *a2,
        __int64 a3,
        struct CWin32kLocks *a4,
        char a5,
        union _LARGE_INTEGER *a6,
        struct DXGK_PRESENT_PARAMS *a7,
        struct VIDSCH_SUBMIT_DATA_BASE *a8,
        struct DXGCONTEXT *a9,
        struct _PRESENT_REDIRECTED_PARAMS *a10,
        char *a11)
{
  struct VIDSCH_SUBMIT_DATA_BASE *v13; // r15
  struct _PRESENT_REDIRECTED_PARAMS *v15; // rcx
  __int64 v16; // rax
  __int64 v18; // r12
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // r9d
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v31; // rdx
  PRKSEMAPHORE *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  char *v35; // rdi
  _QWORD *v36; // rax
  struct _KTHREAD **v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  union _LARGE_INTEGER *v41; // rbx
  union _LARGE_INTEGER *v42; // rax
  NTSTATUS v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  int LiveDumpWithWdLogs; // eax
  int v48; // ebx
  unsigned __int8 IsDebuggerPresent; // al
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // rax
  char *v54; // rdx
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rbx
  __int64 v58; // rax
  char *v59; // rdx
  __int64 v60; // rbx
  _QWORD *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r8
  char *v66; // rdx
  char v67; // al
  char *v68; // rax
  __int64 v69; // rax
  char *v70; // rdx
  DXGPRESENTHISTORYTOKENQUEUE *v71; // r12
  union _SLIST_HEADER *v72; // rdi
  PSLIST_ENTRY v73; // rax
  __int64 v74; // rcx
  __int64 v75; // r14
  PSLIST_ENTRY v76; // rbx
  __int64 v77; // rdx
  int v78; // r8d
  unsigned int v79; // eax
  __int64 v80; // rax
  int v81; // edx
  int v82; // r8d
  int v83; // edx
  int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rax
  const struct _D3DKMT_PRESENTHISTORYTOKEN *v90; // rdx
  unsigned __int64 v91; // r8
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // ebx
  __int64 v93; // rax
  unsigned int v94; // ebx
  __int64 v95; // rax
  int v96; // ebx
  UINT NumRects; // ebx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // ebx
  __int64 v99; // rax
  __int64 v100; // rdx
  struct CRefCountedBuffer *v101; // rbx
  int v102; // eax
  volatile signed __int32 *v103; // r12
  struct DXGK_PRESENT_PARAMS *v104; // rcx
  struct _SLIST_ENTRY *v105; // rdi
  bool v106; // cc
  unsigned int v107; // edx
  void *v108; // r8
  struct DXGK_PRESENT_PARAMS *v109; // r10
  int v110; // eax
  __int64 v111; // rcx
  __int64 v112; // rax
  int v113; // eax
  int v114; // r11d
  __int64 v115; // rax
  int v116; // r10d
  __int64 v117; // rcx
  __int64 v118; // r9
  unsigned int *v119; // rdx
  __int64 v120; // r8
  __int128 v121; // xmm1
  unsigned int v122; // ecx
  __int64 v123; // r10
  int v124; // ecx
  DXGADAPTER *v125; // rax
  unsigned int v126; // r8d
  unsigned int v127; // r12d
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // rax
  _QWORD *v131; // r9
  __int64 v132; // r12
  _BYTE *PoolWithTag; // r9
  unsigned int v134; // edx
  __int64 v135; // r8
  __int64 v136; // r10
  __int64 v137; // rcx
  int v138; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // rax
  ULONGLONG Alignment; // r9
  int v147; // edx
  __int64 v148; // rdx
  __int64 v149; // rax
  __int64 v150; // rcx
  __int64 v151; // rax
  __int64 v152; // rcx
  ULONGLONG v153; // r9
  int v154; // edx
  __int64 v155; // rdx
  __int64 v156; // rax
  DXGSYNCOBJECT *v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rdx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v162; // r9
  __int64 v163; // r10
  __int64 v164; // rdx
  __int64 v165; // rdx
  __int64 v166; // rcx
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v168; // rdx
  __int64 v169; // rcx
  unsigned int CurrentProcessSessionId; // eax
  union _SLIST_HEADER *v171; // rcx
  __int64 v172; // rax
  __int64 v173; // r9
  int v174; // edx
  __int64 v175; // rdx
  struct _EX_RUNDOWN_REF **v176; // rax
  __int64 v177; // rax
  struct _EX_RUNDOWN_REF *v178; // rdx
  __int64 v179; // rdx
  bool v180; // zf
  void *v181; // rcx
  struct DXGPROCESS *v182; // rax
  DXGPROCESS *Current; // rax
  unsigned int v184; // r14d
  __int64 v185; // r12
  int v186; // r8d
  _QWORD *v187; // r10
  __int64 v188; // rdi
  void (__fastcall *v189)(struct CRefCountedBuffer *, __int64); // rax
  __int64 v190; // rdx
  __int64 v191; // rcx
  __int64 v192; // r8
  __int64 v193; // rbx
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // r8
  __int64 v197; // r9
  __int64 v198; // rax
  __int64 v199; // rax
  BOOLEAN Alertable[8]; // [rsp+28h] [rbp-148h]
  PLARGE_INTEGER Timeout; // [rsp+30h] [rbp-140h]
  unsigned int v202; // [rsp+F0h] [rbp-80h]
  char v203; // [rsp+F4h] [rbp-7Ch]
  int v204; // [rsp+F8h] [rbp-78h]
  int v205; // [rsp+100h] [rbp-70h]
  int v206; // [rsp+100h] [rbp-70h]
  DXGSYNCOBJECT *v207; // [rsp+100h] [rbp-70h]
  unsigned int v208; // [rsp+100h] [rbp-70h]
  unsigned int v209; // [rsp+108h] [rbp-68h]
  PSLIST_HEADER ListHead; // [rsp+110h] [rbp-60h]
  PSLIST_HEADER ListHeada; // [rsp+110h] [rbp-60h]
  PSLIST_HEADER ListHeadb; // [rsp+110h] [rbp-60h]
  PSLIST_HEADER ListHeadc; // [rsp+110h] [rbp-60h]
  PSLIST_HEADER ListHeadd; // [rsp+110h] [rbp-60h]
  unsigned int ListHead_4; // [rsp+114h] [rbp-5Ch]
  DXGADAPTER *v216; // [rsp+118h] [rbp-58h]
  __int64 v217; // [rsp+120h] [rbp-50h]
  int v218; // [rsp+120h] [rbp-50h]
  _QWORD *v219; // [rsp+120h] [rbp-50h]
  char Srca; // [rsp+128h] [rbp-48h]
  unsigned int Srcb; // [rsp+128h] [rbp-48h]
  struct ADAPTER_RENDER *v223; // [rsp+138h] [rbp-38h]
  __int16 v224; // [rsp+140h] [rbp-30h] BYREF
  __int16 v225; // [rsp+142h] [rbp-2Eh] BYREF
  PRKSEMAPHORE Semaphore; // [rsp+148h] [rbp-28h]
  DXGSESSIONMGR *v227; // [rsp+150h] [rbp-20h]
  int v228; // [rsp+158h] [rbp-18h]
  unsigned int v229; // [rsp+15Ch] [rbp-14h] BYREF
  struct _SLIST_ENTRY *v230; // [rsp+160h] [rbp-10h]
  struct CRefCountedBuffer *v231; // [rsp+168h] [rbp-8h] BYREF
  DXGPRESENTHISTORYTOKENQUEUE *v232; // [rsp+170h] [rbp+0h]
  struct DXGGLOBAL *v233; // [rsp+178h] [rbp+8h] BYREF
  char v234; // [rsp+180h] [rbp+10h]
  int v235; // [rsp+188h] [rbp+18h] BYREF
  int v236; // [rsp+18Ch] [rbp+1Ch] BYREF
  int v237; // [rsp+190h] [rbp+20h] BYREF
  int v238; // [rsp+194h] [rbp+24h] BYREF
  int v239; // [rsp+198h] [rbp+28h] BYREF
  int v240; // [rsp+19Ch] [rbp+2Ch] BYREF
  int Next; // [rsp+1A0h] [rbp+30h] BYREF
  int v242; // [rsp+1A4h] [rbp+34h] BYREF
  int v243; // [rsp+1A8h] [rbp+38h] BYREF
  int v244; // [rsp+1ACh] [rbp+3Ch] BYREF
  struct _EX_RUNDOWN_REF *v245; // [rsp+1B0h] [rbp+40h] BYREF
  int v246; // [rsp+1B8h] [rbp+48h] BYREF
  int v247; // [rsp+1BCh] [rbp+4Ch] BYREF
  __int128 v248; // [rsp+1C0h] [rbp+50h]
  signed __int64 v249; // [rsp+1D0h] [rbp+60h]
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+1D8h] [rbp+68h]
  unsigned __int64 v251; // [rsp+1E0h] [rbp+70h] BYREF
  struct CRefCountedBuffer *v252; // [rsp+1E8h] [rbp+78h]
  __int128 v253; // [rsp+1F0h] [rbp+80h]
  __int128 v254; // [rsp+200h] [rbp+90h]
  PSLIST_ENTRY v255; // [rsp+210h] [rbp+A0h] BYREF
  struct ADAPTER_RENDER *v256; // [rsp+218h] [rbp+A8h]
  PRKSEMAPHORE v257; // [rsp+220h] [rbp+B0h] BYREF
  __int64 v258; // [rsp+228h] [rbp+B8h] BYREF
  __int64 v259; // [rsp+230h] [rbp+C0h] BYREF
  void *v260; // [rsp+238h] [rbp+C8h] BYREF
  PSLIST_HEADER v261; // [rsp+240h] [rbp+D0h] BYREF
  __int64 v262; // [rsp+248h] [rbp+D8h] BYREF
  PVOID Object[2]; // [rsp+250h] [rbp+E0h] BYREF
  _BYTE v264[16]; // [rsp+260h] [rbp+F0h] BYREF
  char v265[8]; // [rsp+270h] [rbp+100h] BYREF
  __int64 v266; // [rsp+278h] [rbp+108h]
  int v267; // [rsp+280h] [rbp+110h]
  PVOID P; // [rsp+290h] [rbp+120h]
  _BYTE v269[64]; // [rsp+298h] [rbp+128h] BYREF
  int v270; // [rsp+2D8h] [rbp+168h]
  _BYTE v272[64]; // [rsp+2E0h] [rbp+170h] BYREF
  _BYTE v273[64]; // [rsp+320h] [rbp+1B0h] BYREF
  char v274[64]; // [rsp+360h] [rbp+1F0h] BYREF
  _DWORD v275[16]; // [rsp+3A0h] [rbp+230h] BYREF

  v13 = a8;
  v15 = a10;
  v227 = a10;
  if ( !a9 )
  {
    if ( !a10 || !*((_DWORD *)a10 + 2) || !*(_QWORD *)a10 )
      goto LABEL_3;
LABEL_8:
    v209 = 0;
    v217 = 0LL;
    if ( a9 )
    {
      v15 = *(struct _PRESENT_REDIRECTED_PARAMS **)(*((_QWORD *)a9 + 2) + 16LL);
    }
    else
    {
      v217 = *(_QWORD *)a10;
      v209 = *((_DWORD *)a10 + 2);
    }
    v18 = *((_QWORD *)v15 + 2);
    v216 = (DXGADAPTER *)v18;
    v19 = *(_QWORD *)(v18 + 2704);
    v223 = (struct ADAPTER_RENDER *)v19;
    v20 = *(_QWORD *)(v19 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v20 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v20 + 168)) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v21, a2);
      *(_QWORD *)(v22 + 24) = 2835LL;
      WdLogEvent5_WdAssertion(v22);
    }
    v266 = v19 + 840;
    if ( v19 != -840 && *(struct _KTHREAD **)(v19 + 848) == KeGetCurrentThread() )
    {
      v23 = WdLogNewEntry5_WdAssertion(v19 + 840, a2);
      *(_QWORD *)(v23 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v23);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v266, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v28 = *(_DWORD *)(v266 + 24);
        if ( v28 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v25, &EventBlockThread, v26, v28);
      }
      ExAcquirePushLockSharedEx(v266, 0LL);
    }
    v267 = 1;
    CurrentProcess = PsGetCurrentProcess(v25, v24, v26, v27);
    ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
    if ( ProcessSessionId >= *(_DWORD *)(v19 + 872)
      || (v31 = 8LL * ProcessSessionId, !*(_QWORD *)(v31 + *(_QWORD *)(v19 + 880)))
      || (_mm_lfence(),
          v32 = *(PRKSEMAPHORE **)(v31 + *(_QWORD *)(v19 + 880)),
          (v232 = (DXGPRESENTHISTORYTOKENQUEUE *)v32) == 0LL) )
    {
      v199 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v199 + 24) = v18;
      WdLogEvent5_WdEvent(v199);
      LODWORD(a3) = -1073741811;
      goto LABEL_322;
    }
    Semaphore = v32[8];
    v257 = Semaphore;
    ObfReferenceObject(Semaphore);
    v267 = 0;
    ExReleasePushLockSharedEx(v266, 0LL);
    KeLeaveCriticalRegion();
    v35 = (char *)a2 + 8;
    if ( !*((_BYTE *)a2 + 32) )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v33);
      v36[3] = 275LL;
      v36[4] = 4LL;
      v36[5] = v35;
      v36[6] = 0LL;
      v36[7] = 0LL;
      WdLogEvent5_WdCriticalError(v36);
    }
    v37 = (struct _KTHREAD **)*((_QWORD *)a2 + 3);
    *((_BYTE *)a2 + 32) = 0;
    if ( KeGetCurrentThread() != v37[23] )
      DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v37, *((char **)a2 + 5));
    *((_QWORD *)a2 + 5) = 0LL;
    if ( *((_BYTE *)a2 + 144) )
      COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 72));
    if ( *(_BYTE *)(a3 + 16) )
    {
      v38 = *(_QWORD *)(a3 + 8) + 136LL;
      *(_BYTE *)(a3 + 16) = 0;
      ExReleasePushLockSharedEx(v38, 0LL);
      KeLeaveCriticalRegion();
      v39 = *(_QWORD *)(a3 + 8);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v39 + 16), (struct DXGADAPTER *)v39);
    }
    if ( a4 )
    {
      if ( *((_QWORD *)a4 + 2) )
      {
        (*(void (**)(void))(*((_QWORD *)a4 + 3) + 24LL))();
        *((_QWORD *)a4 + 2) = 0LL;
      }
      if ( *(_QWORD *)a4 )
      {
        v40 = *((_QWORD *)a4 + 5);
        if ( v40 )
        {
          if ( *((_DWORD *)a4 + 13) )
            (*(void (__fastcall **)(__int64, bool))(*((_QWORD *)a4 + 4) + 280LL))(v40, *((_DWORD *)a4 + 12) == 0);
          (*(void (**)(void))(*((_QWORD *)a4 + 4) + 264LL))();
          *((_QWORD *)a4 + 5) = 0LL;
          *((_QWORD *)a4 + 6) = 0LL;
        }
        (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)a4 + 3) + 288LL))(*(_QWORD *)a4, 0LL);
        (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)a4 + 3) + 64LL))(*(_QWORD *)a4, *((_QWORD *)a4 + 1));
        *(_QWORD *)a4 = 0LL;
      }
    }
    v41 = a6;
    Object[0] = (PVOID)(v18 + 2672);
    Object[1] = Semaphore;
    v42 = (union _LARGE_INTEGER *)&v258;
    if ( a6 )
      v42 = a6;
    v258 = -200000000LL;
    v230 = (struct _SLIST_ENTRY *)v42;
    v43 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, v42, 0LL);
    if ( !v43 )
      goto LABEL_57;
    if ( v43 == 258 )
    {
      if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v18 + 4496)) <= 2 )
      {
        LiveDumpWithWdLogs = DxgCreateLiveDumpWithWdLogs(0x193u, 0x814uLL, 0LL, 0LL, 0LL, 1);
        ListHead = *(PSLIST_HEADER *)(v18 + 316);
        v45 = *(unsigned int *)(v18 + 320);
        v205 = LiveDumpWithWdLogs;
        if ( (unsigned int)dword_1C00B1A90 > 5 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C00B1A90, 0x400000040000LL) )
          {
            v48 = *(unsigned __int8 *)(v18 + 209);
            LOBYTE(v45) = 1;
            IsDebuggerPresent = WdIsDebuggerPresent(v45);
            v235 = v48;
            v237 = *(_DWORD *)(v18 + 2792);
            v238 = *(unsigned __int8 *)(v18 + 2646);
            v239 = *(_DWORD *)(v18 + 4496);
            v240 = v205;
            v236 = IsDebuggerPresent;
            v262 = 0x1000000LL;
            Next = (int)v230->Next;
            v224 = *(_WORD *)(v18 + 2596);
            v259 = *(_QWORD *)(v18 + 1600);
            v260 = *(void **)(v18 + 1592);
            v242 = *(_DWORD *)(v18 + 340);
            v243 = *(_DWORD *)(v18 + 336);
            v244 = *(_DWORD *)(v18 + 332);
            v246 = *(_DWORD *)(v18 + 328);
            v247 = *(_DWORD *)(v18 + 324);
            v261 = ListHead;
            v225 = 1;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              IsDebuggerPresent,
              byte_1C007FB42,
              v50,
              v51,
              (__int64)&v225,
              (__int64)&v262,
              (__int64)&v261,
              (__int64)&v247,
              (__int64)&v246,
              (__int64)&v244,
              (__int64)&v243,
              (__int64)&v242,
              &v260,
              (__int64)&v259,
              (__int64)&v224,
              (__int64)&Next,
              (__int64)&v240,
              (__int64)&v239,
              (__int64)&v238,
              (__int64)&v237,
              (__int64)&v236,
              (__int64)&v235);
            v41 = a6;
          }
        }
      }
      if ( v41 )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v45, &EventPerformanceWarning, v46, 19);
        v55 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v55 + 24) = 258LL;
        WdLogEvent5_WdEvent(v55);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)a3);
        v56 = COREDEVICEACCESS::AcquireShared(a2, a11);
        v57 = v56;
        if ( v56 >= 0 )
        {
          LODWORD(a3) = 258;
        }
        else
        {
          v58 = WdLogNewEntry5_WdEvent();
          *(_QWORD *)(v58 + 24) = v57;
          WdLogEvent5_WdEvent(v58);
          COREDEVICEACCESS::AcquireSharedUncheck(a2, v59);
          LODWORD(a3) = -1073741130;
        }
        KOBJECTREF::~KOBJECTREF((PVOID *)&v257);
        goto LABEL_322;
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v45, &EventPerformanceWarning, v46, 19);
      v52 = WdLogNewEntry5_WdError(v45, v44);
      *(_QWORD *)(v52 + 24) = 2922LL;
      WdLogEvent5_WdError(v52);
      if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL) )
      {
LABEL_57:
        v53 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v53 + 24) = v18;
        WdLogEvent5_WdEvent(v53);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)a3);
        COREDEVICEACCESS::AcquireSharedUncheck(a2, v54);
        LODWORD(a3) = -1073741130;
        KOBJECTREF::~KOBJECTREF((PVOID *)&v257);
LABEL_322:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v265);
        return (unsigned int)a3;
      }
    }
    if ( !*(_BYTE *)(a3 + 16) )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a3 + 8) + 24LL));
      v60 = *(_QWORD *)(a3 + 8);
      *(_QWORD *)a3 = -1LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v60 + 136, 0LL);
      *(_BYTE *)(a3 + 16) = 1;
    }
    if ( *((_BYTE *)a2 + 144) )
    {
      COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a2 + 72), 0LL);
      v44 = *(unsigned int *)(*((_QWORD *)a2 + 11) + 200LL);
      if ( (_DWORD)v44 != 1 )
        goto LABEL_90;
    }
    if ( *((_BYTE *)a2 + 32) )
    {
      v61 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v45, v44);
      LODWORD(a3) = 0;
      v61[3] = 275LL;
      v61[4] = 4LL;
      v61[5] = v35;
      v61[6] = 0LL;
      v61[7] = 0LL;
      WdLogEvent5_WdCriticalError(v61);
    }
    else
    {
      LODWORD(a3) = 0;
    }
    v62 = *((_QWORD *)a2 + 3);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v62 + 184) )
    {
      if ( !KeReadStateEvent((PRKEVENT)(v62 + 48)) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v63, &EventBlockThread, v64, 72);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)a2 + 3) + 48LL), Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a2 + 3), a11);
    }
    *((_QWORD *)a2 + 5) = 0LL;
    if ( a11 )
    {
      v65 = 17LL;
      v66 = (char *)a2 + 48;
      do
      {
        if ( v65 == -2147483629 )
          break;
        v67 = v66[a11 - ((char *)a2 + 48)];
        if ( !v67 )
          break;
        *v66++ = v67;
        --v65;
      }
      while ( v65 );
      v68 = v66 - 1;
      if ( v65 )
        v68 = v66;
      *v68 = 0;
      if ( v65 )
        *((_QWORD *)a2 + 5) = (char *)a2 + 48;
    }
    *((_BYTE *)a2 + 32) = 1;
    if ( *(_DWORD *)(*((_QWORD *)a2 + 17) + 576LL) != 1 )
    {
      COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 8));
      if ( !*((_BYTE *)a2 + 144) )
      {
LABEL_91:
        KeReleaseSemaphore(Semaphore, 0, 1, 0);
        v69 = WdLogNewEntry5_WdEvent();
        LODWORD(a3) = -1073741130;
        *(_QWORD *)(v69 + 24) = -1073741130LL;
        WdLogEvent5_WdEvent(v69);
        COREDEVICEACCESS::AcquireSharedUncheck(a2, v70);
        KOBJECTREF::~KOBJECTREF((PVOID *)&v257);
        goto LABEL_322;
      }
LABEL_90:
      COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 72));
      goto LABEL_91;
    }
    v71 = v232;
    v204 = 0;
    v72 = (union _SLIST_HEADER *)((char *)v232 + 48);
    ListHeada = (PSLIST_HEADER)((char *)v232 + 48);
    v73 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v232 + 3);
    if ( !v73
      && (!DXGPRESENTHISTORYTOKENQUEUE::GrowPresentHistoryBuffer(v71) || (v73 = ExpInterlockedPopEntrySList(v72)) == 0LL)
      || (v75 = (__int64)&v73[1], v73 == (PSLIST_ENTRY)-16LL) )
    {
      LODWORD(a3) = -1073741801;
      KeReleaseSemaphore(Semaphore, 0, 1, 0);
      v198 = WdLogNewEntry5_WdLowResource(v195, v194, v196, v197);
      *(_QWORD *)(v198 + 24) = v71;
      *(_QWORD *)(v198 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v198);
      KOBJECTREF::~KOBJECTREF((PVOID *)&v257);
      goto LABEL_322;
    }
    if ( a8 )
    {
      v76 = 0LL;
      v255 = 0LL;
      v256 = v223;
    }
    else
    {
      v256 = v223;
      ++*((_DWORD *)v223 + 317);
      v76 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v223 + 78);
      if ( !v76 )
      {
        ++*((_DWORD *)v223 + 318);
        v76 = (PSLIST_ENTRY)(*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))v223 + 162))(
                              *((unsigned int *)v223 + 321),
                              *((unsigned int *)v223 + 323),
                              *((unsigned int *)v223 + 322),
                              (__int64)v223 + 1248);
      }
      v255 = v76;
      if ( !v76 )
      {
        KeReleaseSemaphore(Semaphore, 0, 1, 0);
        v89 = WdLogNewEntry5_WdLowResource(v86, v85, v87, v88);
        *(_QWORD *)(v89 + 24) = 2980LL;
        WdLogEvent5_WdLowResource(v89);
        CVidSchSubmitData::~CVidSchSubmitData(&v255);
        LODWORD(a3) = -1073741801;
        KOBJECTREF::~KOBJECTREF((PVOID *)&v257);
        goto LABEL_322;
      }
      v77 = *((_QWORD *)v223 + 2);
      if ( *(int *)(v77 + 2328) < 0x2000 )
        v78 = 1;
      else
        v78 = *(_DWORD *)(v77 + 280);
      if ( *(int *)(v77 + 2328) >= 0x2000 || *(_BYTE *)(v77 + 2628) )
        v79 = *(_DWORD *)(v77 + 2536) * ((v78 << 6) + ((8 * v78 + 199) & 0xFFFFFFF8)) + 8 * (v78 + 74);
      else
        v79 = 1288;
      memset(v76, 0, v79);
      v80 = *((_QWORD *)v223 + 2);
      if ( *(int *)(v80 + 2328) < 0x2000 )
        v81 = 1;
      else
        v81 = *(_DWORD *)(v80 + 280);
      LOBYTE(v74) = *(int *)(v80 + 2328) >= 0x2000 || *(_BYTE *)(v80 + 2628);
      v82 = *(_DWORD *)(v80 + 2536);
      v72 = ListHeada;
      v71 = v232;
      *((_BYTE *)&v76[21].Next + 12) = v74;
      if ( (_BYTE)v74 )
      {
        v74 = (unsigned int)(8 * v81);
        *((_DWORD *)&v76[36].Next + 2) = v81;
        v83 = v81 << 6;
        HIDWORD(v76[36].Next) = v82;
        *((_DWORD *)&v76[36].Next + 3) = v82 * (v83 + ((v74 + 199) & 0xFFFFFFF8)) + 16;
        v84 = v82 * (v83 + ((v74 + 199) & 0xFFFFFFF8)) + 592;
        *((_DWORD *)&v76[33].Next + 2) = v84;
        *((_DWORD *)&v76[33].Next + 3) = v74 + v84;
      }
    }
    v90 = a1;
    v91 = 0x1C0000000uLL;
    v202 = 1;
    if ( !a8 )
      v13 = (struct VIDSCH_SUBMIT_DATA_BASE *)v76;
    switch ( a1->Model )
    {
      case D3DKMT_PM_REDIRECTED_GDI:
        FlipInterval = a1->Token.Flip.FlipInterval;
        if ( (unsigned int)FlipInterval > 0x10 )
        {
          v93 = WdLogNewEntry5_WdAssertion(v74, a1);
          *(_QWORD *)(v93 + 24) = 53LL;
          goto LABEL_123;
        }
        v96 = 16 * FlipInterval + 67;
        goto LABEL_135;
      case D3DKMT_PM_REDIRECTED_FLIP:
        NumRects = a1->Token.Flip.DirtyRegions.NumRects;
        if ( NumRects > 0x10 )
        {
          v93 = WdLogNewEntry5_WdAssertion(v74, a1);
          *(_QWORD *)(v93 + 24) = 63LL;
          goto LABEL_123;
        }
        v96 = 16 * NumRects + 831;
        goto LABEL_135;
      case D3DKMT_PM_REDIRECTED_BLT:
        VidPnSourceId = a1->Token.Flip.VidPnSourceId;
        if ( VidPnSourceId > 0x10 )
        {
          v93 = WdLogNewEntry5_WdAssertion(v74, a1);
          *(_QWORD *)(v93 + 24) = 73LL;
LABEL_123:
          WdLogEvent5_WdAssertion(v93);
          v94 = 0;
LABEL_124:
          v95 = WdLogNewEntry5_WdWarning(v74, v90, v91);
          *(_QWORD *)(v95 + 24) = v94;
          WdLogEvent5_WdWarning(v95);
          KeReleaseSemaphore(Semaphore, 0, 1, 0);
          CVidSchSubmitData::~CVidSchSubmitData(&v255);
          LODWORD(a3) = -1073741811;
          KOBJECTREF::~KOBJECTREF((PVOID *)&v257);
          goto LABEL_322;
        }
        v96 = 16 * VidPnSourceId + 51;
LABEL_135:
        v94 = v96 & 0xFFFFFFF8;
        if ( v94 - 1 > 0x437 )
          goto LABEL_124;
        break;
      case D3DKMT_PM_REDIRECTED_VISTABLT:
      case D3DKMT_PM_SCREENCAPTUREFENCE:
      case D3DKMT_PM_REDIRECTED_COMPOSITION:
      case D3DKMT_PM_SURFACECOMPLETE:
        v96 = 31;
        goto LABEL_135;
      case D3DKMT_PM_FLIPMANAGER:
        v96 = 47;
        goto LABEL_135;
      default:
        v99 = WdLogNewEntry5_WdAssertion(v74, a1);
        *(_QWORD *)(v99 + 24) = 96LL;
        WdLogEvent5_WdAssertion(v99);
        v90 = a1;
        v96 = 7;
        goto LABEL_135;
    }
    memmove((void *)v75, v90, v94);
    v100 = 0x1C0000000uLL;
    switch ( *(_DWORD *)v75 )
    {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 7:
      case 8:
      case 9:
        v101 = 0LL;
        v102 = *(_DWORD *)v13;
        *((_QWORD *)v13 + 12) = v71;
        *((_QWORD *)v13 + 13) = v75;
        *(_DWORD *)v13 = v102 & 0xFFFFFFDF | (32 * (a5 & 1 | 0x2000));
        v103 = 0LL;
        v104 = v216;
        v105 = 0LL;
        *((_DWORD *)v13 + 29) = -1;
        v231 = 0LL;
        v252 = 0LL;
        v106 = *((_DWORD *)v216 + 582) < 0x2000;
        v230 = 0LL;
        if ( v106 && !*((_BYTE *)v216 + 2628) )
        {
          v109 = a7;
          goto LABEL_149;
        }
        if ( a9 )
        {
          v109 = a7;
          if ( !a7 || ((a1->Model - 1) & 0xFFFFFFFD) == 0 )
            goto LABEL_149;
          v107 = *((_DWORD *)a7 + 368);
          v108 = (void *)*((_QWORD *)a7 + 185);
        }
        else
        {
          v107 = *(_DWORD *)(v217 + 1104);
          v108 = *(void **)(v217 + 1112);
        }
        v110 = ReadPresentPrivateDriverData(v216, v107, v108, &v231);
        a3 = v110;
        v204 = v110;
        if ( v110 < 0 )
        {
          v112 = WdLogNewEntry5_WdError(v111, v100);
          *(_QWORD *)(v112 + 24) = a3;
          WdLogEvent5_WdError(v112);
          v204 = a3;
          goto LABEL_294;
        }
        v103 = (volatile signed __int32 *)v231;
        v104 = v216;
        v109 = a7;
        if ( v231 )
        {
          v101 = v231;
          *((_QWORD *)v13 + 97) = v231;
          *((_DWORD *)v13 + 1) |= 4u;
          v252 = (struct CRefCountedBuffer *)v103;
          v204 = v110;
        }
LABEL_149:
        if ( !*((_BYTE *)v104 + 209) )
        {
          LODWORD(a3) = 0;
          v204 = 0;
          if ( !a9 && !*((_BYTE *)v104 + 2650) )
            goto LABEL_154;
          v113 = PrepareIndependentFlipToken(
                   (struct _D3DKMT_PRESENTHISTORYTOKEN *)v75,
                   v109,
                   v13,
                   a9,
                   v227,
                   (struct CRefCountedBuffer *)v103);
          v105 = (struct _SLIST_ENTRY *)*((_QWORD *)v13 + 4);
          LODWORD(a3) = v113;
          v204 = v113;
          v230 = v105;
        }
        if ( (int)a3 < 0 )
          goto LABEL_295;
LABEL_154:
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v114 = *(_DWORD *)v75;
          LOBYTE(v115) = 0;
          v116 = *(_DWORD *)(v75 + 4);
          v248 = 0LL;
          ListHead_4 = 0;
          LOBYTE(v218) = 0;
          v228 = 0;
          Srca = v116;
          v254 = 0LL;
          v253 = 0LL;
          v117 = v114 - 1;
          switch ( v114 )
          {
            case 1:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
              v118 = *(_QWORD *)(v75 + 16);
              break;
            case 2:
              v118 = *(_QWORD *)(v75 + 24);
              break;
            default:
              v118 = 0LL;
              break;
          }
          switch ( v114 )
          {
            case 1:
              v119 = (unsigned int *)(v75 + 56);
              break;
            case 2:
              v119 = (unsigned int *)(v75 + 820);
              break;
            case 3:
              v119 = (unsigned int *)(v75 + 40);
              break;
            default:
              v119 = 0LL;
              break;
          }
          v120 = (unsigned int)(v114 - 1);
          if ( v114 == 1 )
          {
            v115 = *(_QWORD *)(v75 + 48);
            ListHead_4 = HIDWORD(v115);
            v248 = *(_OWORD *)(v75 + 32);
          }
          else if ( v114 == 2 )
          {
            v115 = *(_QWORD *)(v75 + 116);
            ListHead_4 = HIDWORD(v115);
            v248 = *(_OWORD *)(v75 + 100);
            v218 = *(_DWORD *)(v75 + 756);
            v121 = *(_OWORD *)(v75 + 764);
            v117 = *(unsigned int *)(v75 + 760);
            v254 = *(_OWORD *)(v75 + 740);
            v228 = v117;
            v253 = v121;
          }
          if ( v119 )
          {
            v122 = *v119;
            v206 = *v119;
            if ( *v119 >= 0x10 )
            {
              v122 = 16;
              v206 = 16;
            }
            else if ( !v122 )
            {
LABEL_179:
              McTemplateK0ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq_EtwWriteTransfer(
                ListHead_4,
                (__int64)v119,
                v120,
                (__int64)v223,
                v75,
                v114,
                v116,
                v118,
                v248,
                SBYTE8(v248),
                SBYTE4(v248),
                SBYTE12(v248),
                v115,
                ListHead_4,
                v206,
                (__int64)v275,
                (__int64)v274,
                (__int64)v273,
                (__int64)v272,
                v254,
                SBYTE8(v254),
                SBYTE4(v254),
                SBYTE12(v254),
                v218,
                v228,
                v253,
                SBYTE8(v253),
                SBYTE4(v253),
                SBYTE12(v253));
              goto LABEL_181;
            }
            v119 += 3;
            v123 = v122;
            v120 = 0LL;
            do
            {
              v124 = *(v119 - 2);
              v119 += 4;
              *(_DWORD *)((char *)v275 + v120) = v124;
              v120 += 4LL;
              *(_DWORD *)&v273[v120 + 60] = *(v119 - 4);
              *(_DWORD *)&v272[v120 + 60] = *(v119 - 5);
              *(_DWORD *)&v272[v120 - 4] = *(v119 - 3);
              --v123;
            }
            while ( v123 );
            LOBYTE(v116) = Srca;
            goto LABEL_179;
          }
          LODWORD(Timeout) = v116;
          *(_DWORD *)Alertable = v114;
          McTemplateK0ppqqx_EtwWriteTransfer(
            v117,
            &EventSubmitPresentHistory,
            v120,
            v223,
            v75,
            *(_QWORD *)Alertable,
            Timeout,
            v118);
        }
LABEL_181:
        if ( !a9 )
          goto LABEL_222;
        v104 = a7;
        if ( !a7 )
        {
          if ( !*((_BYTE *)v216 + 209) && (*((_DWORD *)a9 + 105) & 0x10) != 0 )
            DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(a9, 0LL, 0, 1, v13, 0);
          v202 = 1;
          goto LABEL_222;
        }
        *((_BYTE *)a7 + 1512) = (*((_BYTE *)v13 + 3) & 1) == 0;
        v125 = v216;
        if ( !*((_BYTE *)v216 + 209) )
        {
          if ( (*((_DWORD *)a9 + 105) & 0x10) != 0 )
          {
            v126 = *((_DWORD *)a7 + 23);
            v202 = v126 + 1;
            DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(
              a9,
              *((struct DXGCONTEXT ***)a7 + 187),
              v126,
              1,
              v13,
              0);
            goto LABEL_222;
          }
          v125 = v216;
        }
        v100 = *((unsigned int *)a7 + 23);
        if ( !(_DWORD)v100 || !DXGADAPTER::IsDxgmms2(v125) )
          goto LABEL_222;
        v127 = v100 + 1;
        v202 = v100 + 1;
        v249 = _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a9 + 2) + 1896LL));
        BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(*((DXGDEVICE **)a9 + 2));
        if ( !BroadcastPresentSyncObject )
        {
          v130 = WdLogNewEntry5_WdError(v129, v128);
          *(_QWORD *)(v130 + 24) = -1073741801LL;
          *(_QWORD *)(v130 + 32) = 3131LL;
          WdLogEvent5_WdError(v130);
          LODWORD(a3) = -1073741801;
          v204 = -1073741801;
LABEL_296:
          KeReleaseSemaphore(Semaphore, 0, 1, 0);
          if ( (*(_DWORD *)v13 & 0x1000000) != 0 )
          {
            v184 = 0;
            if ( v127 )
            {
              v185 = 0LL;
              do
              {
                if ( a9 )
                  v186 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a7 + 187) + v185) + 416LL);
                else
                  LOBYTE(v186) = 0;
                if ( *((_BYTE *)v13 + 348) )
                  v187 = (_QWORD *)((char *)v13
                                  + 64 * (unsigned __int64)(v184 * *((_DWORD *)v13 + 145))
                                  + *((_DWORD *)v13 + 145) * ((8 * *((_DWORD *)v13 + 146) + 199) & 0xFFFFFFF8)
                                  + 624);
                else
                  v187 = (_QWORD *)((char *)v13 + 488);
                (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v223 + 80) + 8LL)
                                                                       + 432LL))(
                  *((_QWORD *)v223 + 81),
                  (unsigned int)(1 << v186),
                  *v187,
                  0LL);
                ++v184;
                v185 += 8LL;
              }
              while ( v184 < v202 );
              v101 = v252;
              v105 = v230;
              LODWORD(a3) = v204;
            }
          }
          goto LABEL_308;
        }
        v131 = 0LL;
        P = 0LL;
        v270 = 0;
        v132 = *((unsigned int *)a7 + 23);
        if ( (unsigned int)v132 <= 8 )
        {
          PoolWithTag = v269;
          P = v269;
        }
        else
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v132 < 8 )
          {
LABEL_201:
            if ( !v131 )
              goto LABEL_202;
            v127 = v202;
            v134 = 1;
            if ( v202 > 1 )
            {
              v135 = 8LL;
              while ( 1 )
              {
                v136 = *(_QWORD *)(v135 + *((_QWORD *)a7 + 187));
                if ( (*(_DWORD *)(v136 + 420) & 0x10) != 0 )
                  break;
                v137 = v134++ - 1;
                v131[v137] = *(_QWORD *)(v136 + 272);
                v135 += 8LL;
                if ( v134 >= v202 )
                  goto LABEL_207;
              }
              LODWORD(a3) = -1073741811;
              v204 = -1073741811;
              if ( P != v269 && P )
                ExFreePoolWithTag(P, 0);
              goto LABEL_296;
            }
LABEL_207:
            LODWORD(a3) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v223 + 77) + 8LL)
                                                                            + 640LL))(
                            0LL,
                            0LL,
                            *((unsigned int *)a7 + 23));
            v204 = a3;
            if ( (int)a3 < 0 )
            {
              v104 = (struct DXGK_PRESENT_PARAMS *)P;
              if ( P == v269 || !P )
                goto LABEL_294;
              goto LABEL_210;
            }
            v138 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, signed __int64))(*(_QWORD *)(*((_QWORD *)v223 + 77) + 8LL) + 624LL))(
                     *((_QWORD *)a9 + 34),
                     BroadcastPresentSyncObject,
                     v249);
            v104 = (struct DXGK_PRESENT_PARAMS *)P;
            LODWORD(a3) = v138;
            v204 = v138;
            if ( v138 < 0 )
            {
              if ( P == v269 || !P )
                goto LABEL_294;
LABEL_210:
              ExFreePoolWithTag(v104, 0);
              goto LABEL_294;
            }
            if ( P != v269 && P )
              ExFreePoolWithTag(P, 0);
            v103 = (volatile signed __int32 *)v231;
LABEL_222:
            v207 = 0LL;
            v219 = 0LL;
            Global = DXGGLOBAL::GetGlobal((__int64)v104, v100);
            v233 = Global;
            v234 = 0;
            if ( !Global )
            {
              v142 = WdLogNewEntry5_WdAssertion(v141, v140);
              *(_QWORD *)(v142 + 24) = 2427LL;
              WdLogEvent5_WdAssertion(v142);
              Global = v233;
            }
            if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 65)) )
            {
              v145 = WdLogNewEntry5_WdAssertion(v144, v143);
              *(_QWORD *)(v145 + 24) = 2432LL;
              WdLogEvent5_WdAssertion(v145);
            }
            if ( !v209 )
            {
              v152 = 0LL;
              goto LABEL_252;
            }
            DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)&v233, v143);
            v208 = (v209 >> 6) & 0xFFFFFF;
            if ( *((int *)v216 + 649) >= 2000 )
            {
              ListHeadb = (PSLIST_HEADER)DXGPROCESS::GetCurrent();
              DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)&ListHeadb[13]);
              if ( v208 < LODWORD(ListHeadb[16].Alignment) )
              {
                Alignment = ListHeadb[15].Alignment;
                v147 = *(_DWORD *)(Alignment + 16LL * v208 + 8);
                if ( ((v209 >> 25) & 0x60) == (v147 & 0x60) && (v147 & 0x2000) == 0 && (v147 & 0x1F) != 0 )
                {
                  v148 = v147 & 0x1F;
                  if ( (_BYTE)v148 == 11 )
                  {
                    v219 = *(_QWORD **)(Alignment + 16LL * v208);
                    goto LABEL_235;
                  }
                  v149 = WdLogNewEntry5_WdError((v209 >> 25) & 0x60, v148);
                  *(_QWORD *)(v149 + 24) = 316LL;
                  WdLogEvent5_WdError(v149);
                }
              }
              v219 = 0LL;
LABEL_235:
              ExReleasePushLockSharedEx(&ListHeadb[13], 0LL);
              KeLeaveCriticalRegion();
              if ( !v219 )
              {
                v151 = WdLogNewEntry5_WdError(v150, v143);
                LODWORD(a3) = -1073741811;
                *(_QWORD *)(v151 + 24) = v209;
                *(_QWORD *)(v151 + 32) = -1073741811LL;
                WdLogEvent5_WdError(v151);
                v204 = -1073741811;
                if ( v234 )
LABEL_237:
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v233);
LABEL_295:
                v127 = v202;
                goto LABEL_296;
              }
              v152 = v219[4];
              v207 = (DXGSYNCOBJECT *)v152;
LABEL_252:
              if ( !*((_BYTE *)v216 + 209) )
              {
                if ( a9 )
                {
                  if ( *((struct _KTHREAD **)a9 + 59) != KeGetCurrentThread() )
                  {
                    v159 = WdLogNewEntry5_WdAssertion(v152, v143);
                    *(_QWORD *)(v159 + 24) = 3229LL;
                    WdLogEvent5_WdAssertion(v159);
                  }
                  v160 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a9 + 2) + 16LL) + 616LL) + 8LL);
                  if ( (*((_DWORD *)a9 + 105) & 0x10) != 0 )
                    LODWORD(a3) = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(v160 + 432))(
                                    *((_QWORD *)a9 + 38),
                                    v13);
                  else
                    LODWORD(a3) = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(v160 + 424))(
                                    *((_QWORD *)a9 + 34),
                                    v13);
                  v204 = a3;
                }
                else
                {
                  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v264, (struct DXGFASTMUTEX *const)(v152 + 32), 0);
                  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v264);
                  VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(v207, v223);
                  LODWORD(a3) = (*(__int64 (__fastcall **)(struct VIDSCH_SUBMIT_DATA_BASE *, __int64, struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(v162 + 8) + 1008LL))(
                                  v13,
                                  v163,
                                  VidSchSyncObject);
                  v204 = a3;
                  if ( v264[8] )
                    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v264, v164);
                }
LABEL_292:
                if ( v234 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v233);
LABEL_294:
                if ( (int)a3 >= 0 )
                {
LABEL_308:
                  if ( v105 )
                    CRefCountedBuffer::RefCountedBufferRelease(v105);
                  if ( !v101 || _InterlockedExchangeAdd((volatile signed __int32 *)v101 + 3, 0xFFFFFFFF) != 1 )
                    goto LABEL_316;
                  v188 = *(_QWORD *)v101;
                  if ( *(_QWORD *)v101 )
                  {
                    ++*(_DWORD *)(v188 + 28);
                    if ( ExQueryDepthSList((PSLIST_HEADER)v188) < *(_WORD *)(v188 + 16) )
                    {
                      ExpInterlockedPushEntrySList((PSLIST_HEADER)v188, (PSLIST_ENTRY)v101);
                    }
                    else
                    {
                      v189 = *(void (__fastcall **)(struct CRefCountedBuffer *, __int64))(v188 + 56);
                      ++*(_DWORD *)(v188 + 32);
                      v189(v101, v188);
                    }
                    goto LABEL_316;
                  }
                  ExFreePoolWithTag(v101, 0);
                  CVidSchSubmitData::~CVidSchSubmitData(&v255);
                  KOBJECTREF::~KOBJECTREF((PVOID *)&v257);
                  goto LABEL_322;
                }
                goto LABEL_295;
              }
              if ( v103 )
              {
                _InterlockedIncrement(v103 + 3);
                v103 = (volatile signed __int32 *)v231;
              }
              v203 = 1;
              if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v152, v143) + 408) < 0x18u )
                goto LABEL_286;
              SessionDataForSpecifiedSession = (struct DXGSESSIONDATA *)*((_QWORD *)DXGGLOBAL::GetGlobal(v166, v165)
                                                                        + 102);
              v227 = SessionDataForSpecifiedSession;
              if ( SessionDataForSpecifiedSession )
              {
                CurrentProcessSessionId = PsGetCurrentProcessSessionId(v169, v168);
                SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                   v227,
                                                   CurrentProcessSessionId);
              }
              if ( !*((_DWORD *)SessionDataForSpecifiedSession + 4730)
                || *(_DWORD *)v75 != 2
                || !a9
                || (v171 = *(union _SLIST_HEADER **)(*((_QWORD *)a9 + 2) + 40LL),
                    v227 = (DXGSESSIONMGR *)v171,
                    !*((_BYTE *)&v171[21].HeaderX64 + 10))
                || !a7
                || (Srcb = *((_DWORD *)a7 + 5)) == 0 )
              {
LABEL_286:
                a3 = 0LL;
                if ( !a9 )
                  a3 = (__int64)v219;
                Current = DXGPROCESS::GetCurrent();
                LODWORD(a3) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitPresentHistoryToken(
                                (DXGADAPTER *)((char *)v216 + 4240),
                                Current,
                                (__int64)a9,
                                *(_QWORD *)v13,
                                (__int64)v232,
                                v75,
                                (__int64)v103,
                                a3);
                v204 = a3;
LABEL_289:
                if ( (int)a3 < 0 && v103 )
                  CRefCountedBuffer::RefCountedBufferRelease((PSLIST_ENTRY)v103);
                goto LABEL_292;
              }
              ListHeadd = v171 + 13;
              DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)&v171[13]);
              v172 = (Srcb >> 6) & 0xFFFFFF;
              if ( (unsigned int)v172 < *((_DWORD *)v227 + 64) )
              {
                v173 = *((_QWORD *)v227 + 30);
                v174 = *(_DWORD *)(v173 + 16 * v172 + 8);
                if ( ((Srcb >> 25) & 0x60) == (*(_BYTE *)(v173 + 16 * v172 + 8) & 0x60)
                  && (v174 & 0x2000) == 0
                  && (v174 & 0x1F) != 0 )
                {
                  v175 = v174 & 0x1F;
                  v176 = (struct _EX_RUNDOWN_REF **)(v173 + 16LL * (unsigned int)v172);
                  if ( (_BYTE)v175 == 5 )
                  {
                    v178 = *v176;
                    goto LABEL_280;
                  }
                  v177 = WdLogNewEntry5_WdError((Srcb >> 25) & 0x60, v175);
                  *(_QWORD *)(v177 + 24) = 316LL;
                  WdLogEvent5_WdError(v177);
                }
              }
              v178 = 0LL;
LABEL_280:
              DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v245, v178);
              ExReleasePushLockSharedEx(ListHeadd, 0LL);
              KeLeaveCriticalRegion();
              if ( v245 )
              {
                v180 = *(_DWORD *)v75 == 2;
                v229 = 0;
                v251 = 0LL;
                if ( v180 )
                {
                  v181 = *(void **)(v75 + 64);
                  if ( v181 )
                  {
                    LODWORD(a3) = DxgkQueryHostCompSurfInfo(v181, &v229, &v251);
                    v204 = a3;
                    if ( (int)a3 >= 0 )
                    {
                      v182 = DXGPROCESS::GetCurrent();
                      LODWORD(a3) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitVailPresentHistoryToken(
                                      (char *)v216 + 4240,
                                      v182,
                                      a9,
                                      *(_QWORD *)v13,
                                      v232,
                                      v75,
                                      v103,
                                      v207,
                                      v245,
                                      v229,
                                      v251);
                      v203 = 0;
                      v204 = a3;
                    }
                  }
                }
              }
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v245, v179);
              if ( !v203 )
                goto LABEL_289;
              goto LABEL_286;
            }
            ListHeadc = (PSLIST_HEADER)DXGPROCESS::GetCurrent();
            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)&ListHeadc[13]);
            if ( v208 < LODWORD(ListHeadc[16].Alignment) )
            {
              v153 = ListHeadc[15].Alignment;
              v154 = *(_DWORD *)(v153 + 16LL * v208 + 8);
              if ( ((v209 >> 25) & 0x60) == (v154 & 0x60) && (v154 & 0x2000) == 0 && (v154 & 0x1F) != 0 )
              {
                v155 = v154 & 0x1F;
                if ( (_BYTE)v155 == 8 )
                {
                  v157 = *(DXGSYNCOBJECT **)(v153 + 16LL * v208);
LABEL_247:
                  v207 = v157;
                  ExReleasePushLockSharedEx(&ListHeadc[13], 0LL);
                  KeLeaveCriticalRegion();
                  v152 = (__int64)v207;
                  if ( !v207 )
                  {
                    v158 = WdLogNewEntry5_WdError(0LL, v143);
                    LODWORD(a3) = -1073741811;
                    *(_QWORD *)(v158 + 24) = v209;
                    *(_QWORD *)(v158 + 32) = -1073741811LL;
                    WdLogEvent5_WdError(v158);
                    v204 = -1073741811;
                    if ( !v234 )
                      goto LABEL_295;
                    goto LABEL_237;
                  }
                  goto LABEL_252;
                }
                v156 = WdLogNewEntry5_WdError((v209 >> 25) & 0x60, v155);
                *(_QWORD *)(v156 + 24) = 316LL;
                WdLogEvent5_WdError(v156);
              }
            }
            v157 = 0LL;
            goto LABEL_247;
          }
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v132, 0x4B677844u);
          P = PoolWithTag;
        }
        v270 = v132;
        if ( !PoolWithTag )
        {
LABEL_202:
          LODWORD(a3) = -1073741801;
          v204 = -1073741801;
          goto LABEL_295;
        }
        memset(PoolWithTag, 0, 8 * v132);
        v131 = P;
        goto LABEL_201;
      default:
        LODWORD(a3) = -1071775733;
        ExpInterlockedPushEntrySList(v72, (PSLIST_ENTRY)(v75 - 16));
        KeReleaseSemaphore(Semaphore, 0, 1, 0);
        v193 = WdLogNewEntry5_WdWarning(v191, v190, v192);
        *(_QWORD *)(v193 + 24) = DXGPROCESS::GetCurrent();
        WdLogEvent5_WdWarning(v193);
LABEL_316:
        CVidSchSubmitData::~CVidSchSubmitData(&v255);
        KOBJECTREF::~KOBJECTREF((PVOID *)&v257);
        goto LABEL_322;
    }
  }
  if ( !a10 )
    goto LABEL_8;
LABEL_3:
  v16 = WdLogNewEntry5_WdError(a10, a2);
  LODWORD(a3) = -1073741811;
  *(_QWORD *)(v16 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v16);
  return (unsigned int)a3;
}
