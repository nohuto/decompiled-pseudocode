/*
 * XREFs of DxgkPresent @ 0x1C010B130
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0002BAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00033FC (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0003524 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004EF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004F90 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0005010 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00052C4 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C0005530 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000903C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A448 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001A6D4 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z @ 0x1C0027A78 (--0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C0027AA4 (--1CWin32kLocks@@QEAA@XZ.c)
 *     ?RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXJ_N@Z @ 0x1C0027D0C (-RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     McTemplateK0qpqqqqpp_EtwWriteTransfer @ 0x1C004730C (McTemplateK0qpqqqqpp_EtwWriteTransfer.c)
 *     McTemplateK0qqxxqq_EtwWriteTransfer @ 0x1C00473E4 (McTemplateK0qqxxqq_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01077E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107DA0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1C010D760 (-CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C010EC30 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C015BF68 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020D704 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026962C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0280184 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C0281B3C (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_.c)
 */

__int64 __fastcall DxgkPresent(char *Src)
{
  bool v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct DXGGLOBAL *Global; // rax
  char *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  PSLIST_ENTRY v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // r15
  const void *v24; // rdx
  __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct DXGCONTEXT *v29; // r14
  __int64 v30; // r13
  struct _KEVENT *v31; // rdi
  unsigned int v32; // edi
  __int64 v33; // rdi
  _QWORD *PoolWithTag; // rcx
  _QWORD *v35; // r12
  unsigned int v36; // edi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r12
  int v41; // eax
  DXGPRESENT *v42; // rax
  int v43; // edi
  __int64 v44; // rcx
  struct DXGADAPTER *v45; // r8
  struct DXGADAPTER *v46; // rdi
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // r15
  __int64 v54; // rdx
  __int64 v55; // rcx
  PSLIST_ENTRY v56; // rdi
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rcx
  int v60; // r8d
  unsigned int v62; // edx
  __int64 v63; // rcx
  int v64; // r8d
  bool v65; // al
  int v66; // edx
  int v67; // ecx
  int v68; // r8d
  unsigned int v69; // eax
  int v70; // r9d
  __int64 v71; // rdx
  __int64 Next_low; // rcx
  DXGGLOBAL **v73; // rdx
  _BYTE *v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rdx
  struct DXGGLOBAL *v79; // rax
  char *v80; // rdi
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rbx
  __int64 v90; // rax
  __int64 v91; // rbx
  PLIST_ENTRY i; // rdi
  __int64 v94; // rdx
  DXGPRESENT *PoolWithQuotaTag; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rax
  struct DXGTHREAD *Current; // rax
  __int64 v100; // rdi
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // rdx
  struct DXGGLOBAL *v109; // rax
  union _SLIST_HEADER *v110; // rdi
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // rdx
  struct DXGGLOBAL *v114; // rax
  union _SLIST_HEADER *v115; // rdi
  __int64 v116; // rcx
  __int64 v117; // r8
  struct DXGCONTEXT *v118; // rdx
  _QWORD *v119; // rdi
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rdx
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // rax
  _QWORD *v129; // rdi
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rdx
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // rdx
  struct DXGGLOBAL *v139; // rax
  union _SLIST_HEADER *v140; // rdi
  __int64 v141; // rax
  __int64 v142; // rdx
  struct _KEVENT *v143; // rcx
  __int64 v144; // rcx
  unsigned __int8 v145; // di
  __int64 v146; // r8
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // rdx
  struct DXGGLOBAL *v153; // rax
  union _SLIST_HEADER *v154; // rdi
  __int64 v155; // rax
  __int64 v156; // r9
  unsigned int v157; // ecx
  __int64 *v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // rax
  __int64 v161; // rdx
  __int64 v162; // r8
  __int64 v163; // rcx
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // r9
  __int64 v167; // rdx
  _QWORD *v168; // rax
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rdx
  __int64 v172; // rax
  _QWORD *v173; // rax
  _QWORD *v174; // rax
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // r8
  __int64 v178; // rdx
  struct DXGGLOBAL *v179; // rax
  union _SLIST_HEADER *v180; // rsi
  __int64 v181; // rax
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // rdx
  struct DXGGLOBAL *v186; // rax
  void (__fastcall *Region)(PSLIST_ENTRY, union _SLIST_HEADER *); // rax
  _QWORD *v188; // rax
  __int64 v189; // rdx
  unsigned int v190; // r14d
  __int64 v191; // rdx
  __int64 v192; // rcx
  __int64 v193; // r8
  __int64 v194; // rdx
  struct DXGGLOBAL *v195; // rax
  union _SLIST_HEADER *v196; // rdi
  __int64 v197; // rax
  __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // rdx
  struct DXGGLOBAL *v202; // rax
  void (__fastcall *v203)(PSLIST_ENTRY, union _SLIST_HEADER *); // rax
  __int64 v204; // rdx
  __int64 v205; // rcx
  __int64 v206; // r8
  __int64 v207; // rdx
  struct DXGGLOBAL *v208; // rax
  union _SLIST_HEADER *v209; // rdi
  struct DXGTHREAD *v210; // rax
  int v211; // [rsp+60h] [rbp-268h] BYREF
  __int64 v212; // [rsp+68h] [rbp-260h]
  __int64 v213; // [rsp+70h] [rbp-258h]
  int *v214; // [rsp+78h] [rbp-250h]
  char v215; // [rsp+80h] [rbp-248h]
  int AllocationInfo; // [rsp+88h] [rbp-240h] BYREF
  PVOID P; // [rsp+90h] [rbp-238h]
  _BYTE v218[32]; // [rsp+98h] [rbp-230h] BYREF
  unsigned int v219; // [rsp+B8h] [rbp-210h]
  DXGCONTEXT *v220; // [rsp+C0h] [rbp-208h] BYREF
  char v221; // [rsp+C8h] [rbp-200h]
  __int64 v222; // [rsp+D0h] [rbp-1F8h] BYREF
  int v223; // [rsp+D8h] [rbp-1F0h]
  __int64 v224; // [rsp+E0h] [rbp-1E8h] BYREF
  struct DXGADAPTER *v225; // [rsp+E8h] [rbp-1E0h]
  char v226; // [rsp+F0h] [rbp-1D8h]
  __int64 v227; // [rsp+F8h] [rbp-1D0h]
  struct DXGCONTEXT *v228; // [rsp+100h] [rbp-1C8h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+108h] [rbp-1C0h]
  __int64 v230; // [rsp+110h] [rbp-1B8h]
  __int64 v231; // [rsp+118h] [rbp-1B0h]
  struct DXGCONTEXT *v232; // [rsp+120h] [rbp-1A8h] BYREF
  char *v233; // [rsp+128h] [rbp-1A0h]
  __int64 v234; // [rsp+130h] [rbp-198h]
  struct _SLIST_ENTRY *v235[2]; // [rsp+138h] [rbp-190h] BYREF
  _QWORD v236[6]; // [rsp+148h] [rbp-180h] BYREF
  char v237; // [rsp+178h] [rbp-150h]
  _BYTE v238[16]; // [rsp+180h] [rbp-148h] BYREF
  _BYTE v239[32]; // [rsp+190h] [rbp-138h] BYREF
  _BYTE v240[64]; // [rsp+1B0h] [rbp-118h] BYREF
  char v241[8]; // [rsp+1F0h] [rbp-D8h] BYREF
  _BYTE v242[16]; // [rsp+1F8h] [rbp-D0h] BYREF
  DXGADAPTER *v243; // [rsp+208h] [rbp-C0h]
  char v244; // [rsp+210h] [rbp-B8h]
  __int64 v245; // [rsp+218h] [rbp-B0h]
  _BYTE v246[16]; // [rsp+238h] [rbp-90h] BYREF
  __int64 v247; // [rsp+248h] [rbp-80h]
  __int64 v248; // [rsp+278h] [rbp-50h]
  char v249; // [rsp+280h] [rbp-48h]

  v233 = Src;
  AllocationInfo = -1073741811;
  v2 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Global = DXGGLOBAL::GetGlobal(v4, v3);
  v6 = (char *)Global + 1024;
  ++*((_DWORD *)Global + 261);
  v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 64);
  ListEntry = v9;
  if ( !v9 )
  {
    ++*((_DWORD *)v6 + 6);
    v9 = (PSLIST_ENTRY)(*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))v6 + 6))(
                         *((unsigned int *)v6 + 9),
                         *((unsigned int *)v6 + 11),
                         *((unsigned int *)v6 + 10),
                         v6);
    ListEntry = v9;
  }
  if ( !v9 )
  {
    v98 = WdLogNewEntry5_WdLowResource(v8, v7, v10, v11);
    *(_QWORD *)(v98 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v98);
    return 3221225495LL;
  }
  memset(v9, 0, 0x5F8uLL);
  if ( bTracingEnabled )
    v13 = (__int64)v9;
  else
    v13 = 0LL;
  v212 = 0LL;
  v211 = 2020;
  v214 = &AllocationInfo;
  v215 = 0;
  v213 = v13;
  if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)&AllocationInfo, &EventProfilerEnter, v12, 2020);
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v211, 2020LL);
  CurrentProcess = PsGetCurrentProcess(v15, v14, v16, v17);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v22 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v21, v20)) == 0LL
    || (v23 = *((_QWORD *)Current + 1), (v231 = v23) == 0) )
  {
    v23 = v22;
    v231 = v22;
  }
  v230 = v23;
  if ( !v23 )
  {
    v100 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v100 + 24) = -1073741811LL;
    *(_QWORD *)(v100 + 32) = PsGetCurrentProcess(v102, v101, v103, v104);
    WdLogEvent5_WdError(v100);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v211, v105);
    v108 = v213;
    if ( v215 )
    {
      if ( v213 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v213,
          v107,
          *(_DWORD *)v213,
          *(_DWORD *)(v213 + 56),
          *(_QWORD *)(v213 + 80),
          *(_QWORD *)(v213 + 88),
          *(_DWORD *)(v213 + 1096),
          *v214);
    }
    else if ( v213 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v213,
        v107,
        *(_DWORD *)v213,
        *(_QWORD *)(v213 + 8),
        *(_DWORD *)(v213 + 16),
        *(_DWORD *)(v213 + 84),
        *(_DWORD *)(v213 + 88),
        *v214,
        *(_DWORD *)(v213 + 20),
        *(_DWORD *)(v213 + 24));
    }
    if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
LABEL_134:
      McTemplateK0q_EtwWriteTransfer(v106, &EventProfilerExit, v107, v211);
LABEL_135:
    v109 = DXGGLOBAL::GetGlobal(v106, v108);
    v110 = (union _SLIST_HEADER *)((char *)v109 + 1024);
    ++*((_DWORD *)v109 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v109 + 64) >= *((_WORD *)v109 + 520) )
    {
LABEL_304:
      Region = (void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v110[3].Region;
      ++LODWORD(v110[2].Alignment);
      Region(v9, v110);
      return 3221225485LL;
    }
LABEL_136:
    ExpInterlockedPushEntrySList(v110, v9);
    return 3221225485LL;
  }
  v24 = Src;
  if ( v2 )
  {
    if ( (unsigned __int64)Src >= MmUserProbeAddress )
      v24 = (const void *)MmUserProbeAddress;
    memmove(v9, v24, 0x5D8uLL);
  }
  else
  {
    memmove(v9, Src, 0x5D8uLL);
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v23 + 88) + 400LL))() && (*(_DWORD *)(&v9[5].Next + 1) & 0x8000) == 0 )
  {
    AllocationInfo = -1071775738;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v211, v25);
    v113 = v213;
    if ( v215 )
    {
      if ( v213 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v213,
          v112,
          *(_DWORD *)v213,
          *(_DWORD *)(v213 + 56),
          *(_QWORD *)(v213 + 80),
          *(_QWORD *)(v213 + 88),
          *(_DWORD *)(v213 + 1096),
          *v214);
    }
    else if ( v213 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v213,
        v112,
        *(_DWORD *)v213,
        *(_QWORD *)(v213 + 8),
        *(_DWORD *)(v213 + 16),
        *(_DWORD *)(v213 + 84),
        *(_DWORD *)(v213 + 88),
        *v214,
        *(_DWORD *)(v213 + 20),
        *(_DWORD *)(v213 + 24));
    }
    if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v111, &EventProfilerExit, v112, v211);
    v114 = DXGGLOBAL::GetGlobal(v111, v113);
    v115 = (union _SLIST_HEADER *)((char *)v114 + 1024);
    ++*((_DWORD *)v114 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v114 + 64) < *((_WORD *)v114 + 520) )
    {
      ExpInterlockedPushEntrySList(v115, v9);
    }
    else
    {
      ++LODWORD(v115[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v115[3].Region)(v9, v115);
    }
    return 3223191558LL;
  }
  if ( (*(_DWORD *)(&v9[5].Next + 1) & 0x10000000) != 0 )
  {
    v232 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
      (DXGCONTEXTBYHANDLE *)v238,
      (unsigned int)v9->Next,
      (struct DXGPROCESS *)v23,
      &v232,
      0);
    v118 = v232;
    if ( v232 )
    {
      LODWORD(v9->Next) = *((_DWORD *)&v9[90].Next + 2);
      AllocationInfo = PreIndirectPresentReadAllocationInfo(
                         (struct DXGPROCESS *)v23,
                         *((struct DXGDEVICE **)v118 + 2),
                         HIDWORD(v9[1].Next),
                         (struct INDIRECT_RESOURCE_INFO *)((char *)&v9[94].Next + 12));
      if ( AllocationInfo < 0 )
      {
        v128 = WdLogNewEntry5_WdWarning(v126, v125, v127);
        *(_QWORD *)(v128 + 24) = HIDWORD(v9[1].Next);
        WdLogEvent5_WdWarning(v128);
      }
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v238);
      goto LABEL_18;
    }
    v119 = (_QWORD *)WdLogNewEntry5_WdWarning(v116, 0LL, v117);
    v119[3] = -1073741811LL;
    v119[4] = PsGetCurrentProcess(v121, v120, v122, v123);
    v119[5] = *((unsigned int *)&v9[90].Next + 2);
    WdLogEvent5_WdWarning(v119);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v238);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v211, v124);
    v108 = v213;
    if ( v215 )
      goto LABEL_161;
    if ( v213 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      goto LABEL_157;
LABEL_158:
    if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      goto LABEL_134;
    goto LABEL_135;
  }
LABEL_18:
  v228 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)&v220,
    (unsigned int)v9->Next,
    (struct DXGPROCESS *)v23,
    &v228,
    0);
  v29 = v228;
  if ( !v228 )
  {
    v129 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
    v129[3] = -1073741811LL;
    v129[4] = PsGetCurrentProcess(v131, v130, v132, v133);
    v129[5] = LODWORD(v9->Next);
    WdLogEvent5_WdWarning(v129);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v220);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v211, v134);
    v108 = v213;
    if ( v215 )
      goto LABEL_161;
    goto LABEL_168;
  }
  if ( *((_BYTE *)v228 + 457) && *((_DWORD *)&v9[5].Next + 3) )
  {
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v220);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v211, v135);
    v138 = v213;
    if ( v215 )
    {
      if ( v213 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v213,
          v137,
          *(_DWORD *)v213,
          *(_DWORD *)(v213 + 56),
          *(_QWORD *)(v213 + 80),
          *(_QWORD *)(v213 + 88),
          *(_DWORD *)(v213 + 1096),
          *v214);
    }
    else if ( v213 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v213,
        v137,
        *(_DWORD *)v213,
        *(_QWORD *)(v213 + 8),
        *(_DWORD *)(v213 + 16),
        *(_DWORD *)(v213 + 84),
        *(_DWORD *)(v213 + 88),
        *v214,
        *(_DWORD *)(v213 + 20),
        *(_DWORD *)(v213 + 24));
    }
    if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v136, &EventProfilerExit, v137, v211);
    v139 = DXGGLOBAL::GetGlobal(v136, v138);
    v140 = (union _SLIST_HEADER *)((char *)v139 + 1024);
    ++*((_DWORD *)v139 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v139 + 64) < *((_WORD *)v139 + 520) )
    {
      ExpInterlockedPushEntrySList(v140, v9);
    }
    else
    {
      ++LODWORD(v140[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v140[3].Region)(v9, v140);
    }
    return 3221225474LL;
  }
  if ( (*((_DWORD *)v228 + 105) & 8) != 0 )
  {
    v141 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    *(_QWORD *)(v141 + 24) = 1215LL;
    WdLogEvent5_WdWarning(v141);
    goto LABEL_187;
  }
  v30 = *((_QWORD *)v228 + 2);
  v234 = v30;
  v222 = v30;
  v223 = 0;
  if ( v30 )
  {
    v31 = *(struct _KEVENT **)(v30 + 16);
    if ( *(_DWORD *)(v30 + 432) == 2 )
    {
      if ( KeReadStateEvent(v31 + 5) )
        goto LABEL_24;
      v143 = v31 + 5;
    }
    else
    {
      if ( KeReadStateEvent(v31 + 4) )
      {
LABEL_24:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v30 + 136), 0) )
        {
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v30 + 16) + 16LL) + 104LL));
          v145 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v30 + 16) + 16LL));
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v144, &EventBlockThread, v146, 40);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v30 + 136), 1u);
          if ( v145 )
            DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v30 + 16) + 16LL));
          ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v30 + 16) + 16LL) + 104LL, 0LL);
          KeLeaveCriticalRegion();
        }
        v223 = 1;
        goto LABEL_26;
      }
      v143 = v31 + 4;
    }
    KeWaitForSingleObject(v143, Executive, 0, 0, 0LL);
    goto LABEL_24;
  }
LABEL_26:
  v32 = *((_DWORD *)&v9[5].Next + 3);
  if ( v32 > 0x40 )
  {
    v147 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    *(_QWORD *)(v147 + 24) = v29;
    *(_QWORD *)(v147 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v147);
    goto LABEL_202;
  }
  v33 = v32 + 1;
  PoolWithTag = 0LL;
  P = 0LL;
  v219 = 0;
  if ( (unsigned int)v33 > 4 )
  {
    v26 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v33;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v33 < 8 )
      goto LABEL_31;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v33, 0x4B677844u);
    P = PoolWithTag;
  }
  else
  {
    PoolWithTag = v218;
    P = v218;
  }
  v219 = v33;
  if ( !PoolWithTag )
  {
LABEL_206:
    v148 = WdLogNewEntry5_WdWarning(PoolWithTag, v26, v28);
    *(_QWORD *)(v148 + 24) = 1241LL;
    WdLogEvent5_WdWarning(v148);
    if ( P != v218 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v219 = 0;
    if ( v30 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v222);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v220);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v211, v149);
    v152 = v213;
    if ( v215 )
    {
      if ( v213 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v213,
          v151,
          *(_DWORD *)v213,
          *(_DWORD *)(v213 + 56),
          *(_QWORD *)(v213 + 80),
          *(_QWORD *)(v213 + 88),
          *(_DWORD *)(v213 + 1096),
          *v214);
    }
    else if ( v213 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v213,
        v151,
        *(_DWORD *)v213,
        *(_QWORD *)(v213 + 8),
        *(_DWORD *)(v213 + 16),
        *(_DWORD *)(v213 + 84),
        *(_DWORD *)(v213 + 88),
        *v214,
        *(_DWORD *)(v213 + 20),
        *(_DWORD *)(v213 + 24));
    }
    if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
LABEL_220:
      McTemplateK0q_EtwWriteTransfer(v150, &EventProfilerExit, v151, v211);
LABEL_221:
    v153 = DXGGLOBAL::GetGlobal(v150, v152);
    v154 = (union _SLIST_HEADER *)((char *)v153 + 1024);
    ++*((_DWORD *)v153 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v153 + 64) >= *((_WORD *)v153 + 520) )
    {
LABEL_370:
      v203 = (void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v154[3].Region;
      ++LODWORD(v154[2].Alignment);
      v203(v9, v154);
      return 3221225495LL;
    }
    goto LABEL_222;
  }
  memset(PoolWithTag, 0, 8 * v33);
  PoolWithTag = P;
LABEL_31:
  if ( !PoolWithTag )
    goto LABEL_206;
  *PoolWithTag = v29;
  v35 = P;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v239, (struct _KTHREAD **)v23);
  v36 = 0;
  if ( *((_DWORD *)&v9[5].Next + 3) )
  {
    do
    {
      v155 = (*((_DWORD *)&v9[6].Next + v36) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v155 < *(_DWORD *)(v23 + 256) )
      {
        v156 = *(_QWORD *)(v23 + 240);
        v157 = *(_DWORD *)(v156 + 16 * v155 + 8);
        if ( *((_DWORD *)&v9[6].Next + v36) >> 30 == ((v157 >> 5) & 3) && (v157 & 0x2000) == 0 && (v157 & 0x1F) != 0 )
        {
          v158 = (__int64 *)(v156 + 16LL * (unsigned int)v155);
          v159 = v157 & 0x1F;
          if ( (_BYTE)v159 == 7 )
          {
            v161 = *v158;
            goto LABEL_230;
          }
          v160 = WdLogNewEntry5_WdError(v159, v158);
          *(_QWORD *)(v160 + 24) = 316LL;
          WdLogEvent5_WdError(v160);
        }
      }
      v161 = 0LL;
LABEL_230:
      v162 = v36 + 1;
      v163 = 8 * v162;
      *((_QWORD *)P + v162) = v161;
      v164 = *((_QWORD *)P + v162);
      if ( !v164 || (*(_DWORD *)(v164 + 420) & 8) != 0 || (v163 = *((_QWORD *)v29 + 2), *(_QWORD *)(v164 + 16) != v163) )
      {
        v168 = (_QWORD *)WdLogNewEntry5_WdError(v163, v164);
        v168[3] = v29;
        v168[4] = *((unsigned int *)&v9[6].Next + v36);
        v168[5] = v36;
        v168[6] = -1073741811LL;
LABEL_241:
        WdLogEvent5_WdError(v168);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v239);
LABEL_244:
        if ( P != v218 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v219 = 0;
LABEL_202:
        if ( v30 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v222);
LABEL_187:
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v220);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v211, v142);
        v108 = v213;
        if ( v215 )
        {
LABEL_161:
          if ( v108 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0qqxxqq_EtwWriteTransfer(
              (REGHANDLE *)&DxgkControlGuid_Context,
              v108,
              v107,
              *(_DWORD *)v108,
              *(_DWORD *)(v108 + 56),
              *(_QWORD *)(v108 + 80),
              *(_QWORD *)(v108 + 88),
              *(_DWORD *)(v108 + 1096),
              *v214);
          goto LABEL_158;
        }
LABEL_168:
        if ( !v108 || (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_158;
LABEL_157:
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v108,
          v107,
          *(_DWORD *)v108,
          *(_QWORD *)(v108 + 8),
          *(_DWORD *)(v108 + 16),
          *(_DWORD *)(v108 + 84),
          *(_DWORD *)(v108 + 88),
          *v214,
          *(_DWORD *)(v108 + 20),
          *(_DWORD *)(v108 + 24));
        goto LABEL_158;
      }
      if ( v36 )
      {
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v163 + 16) + 16LL)) )
        {
          v167 = *(unsigned int *)(v35[v166] + 416LL);
          if ( (unsigned int)v167 <= *(_DWORD *)(v35[v36 - 1] + 416LL) )
          {
            v168 = (_QWORD *)WdLogNewEntry5_WdError(v165, v167);
            v168[3] = -1073741811LL;
            goto LABEL_241;
          }
        }
      }
      v36 = v162;
    }
    while ( (unsigned int)v162 < *((_DWORD *)&v9[5].Next + 3) );
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v239);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v236,
    P,
    v219);
  if ( v237 )
  {
    if ( v236[0] )
    {
      v172 = WdLogNewEntry5_WdWarning(v38, v37, v39);
      *(_QWORD *)(v172 + 24) = 1311LL;
      WdLogEvent5_WdWarning(v172);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v236);
      goto LABEL_244;
    }
    v170 = WdLogNewEntry5_WdWarning(v38, v37, v39);
    *(_QWORD *)(v170 + 24) = 1306LL;
    WdLogEvent5_WdWarning(v170);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v236);
    if ( P != v218 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v219 = 0;
    if ( v30 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v222);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v220);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v211, v171);
    v152 = v213;
    if ( v215 )
    {
      if ( v213 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v213,
          v151,
          *(_DWORD *)v213,
          *(_DWORD *)(v213 + 56),
          *(_QWORD *)(v213 + 80),
          *(_QWORD *)(v213 + 88),
          *(_DWORD *)(v213 + 1096),
          *v214);
    }
    else if ( v213 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v213,
        v151,
        *(_DWORD *)v213,
        *(_QWORD *)(v213 + 8),
        *(_DWORD *)(v213 + 16),
        *(_DWORD *)(v213 + 84),
        *(_DWORD *)(v213 + 88),
        *v214,
        *(_DWORD *)(v213 + 20),
        *(_DWORD *)(v213 + 24));
    }
    if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      goto LABEL_220;
    goto LABEL_221;
  }
  *((_QWORD *)&v9[93].Next + 1) = P;
  *((_BYTE *)&v9[94].Next + 8) = 1;
  v40 = *(_QWORD *)(*((_QWORD *)v29 + 2) + 1848LL);
  v41 = *((_DWORD *)&v9[5].Next + 2);
  if ( (v41 & 0x8000) != 0 )
  {
    if ( (v41 & 0x400000) != 0 || v9[90].Next )
    {
      v173 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37);
      v173[3] = -1073741811LL;
      v173[4] = v29;
      v173[5] = *((unsigned int *)&v9[5].Next + 2);
      v173[6] = v9[90].Next;
      WdLogEvent5_WdError(v173);
      v43 = -1073741811;
    }
    else
    {
      v43 = 0;
    }
  }
  else
  {
    v42 = (DXGPRESENT *)*((_QWORD *)v29 + 19);
    if ( v42
      || ((PoolWithQuotaTag = (DXGPRESENT *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x670uLL, 0x4B677844u)) == 0LL
        ? (v42 = 0LL)
        : (v42 = DXGPRESENT::DXGPRESENT(PoolWithQuotaTag, *(_DWORD *)(*((_QWORD *)v29 + 2) + 1856LL))),
          (*((_QWORD *)v29 + 19) = v42) != 0LL) )
    {
      *((_BYTE *)v29 + 458) = 1;
      v43 = DXGPRESENT::CopyPresentArgs(v42, v29, (struct _D3DKMT_PRESENT *)v9);
    }
    else
    {
      v174 = (_QWORD *)WdLogNewEntry5_WdLowResource(PoolWithQuotaTag, v94, v96, v97);
      v174[3] = -1073741801LL;
      v174[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v29 + 2) + 16LL) + 16LL);
      v174[5] = v23;
      v174[6] = v29;
      WdLogEvent5_WdLowResource(v174);
      v43 = -1073741801;
    }
  }
  AllocationInfo = v43;
  if ( v43 < 0 )
  {
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v236);
    if ( P != v218 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v219 = 0;
    if ( v30 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v222);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v220);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v211, v175);
    v178 = v213;
    if ( v215 )
    {
      if ( v213 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v213,
          v177,
          *(_DWORD *)v213,
          *(_DWORD *)(v213 + 56),
          *(_QWORD *)(v213 + 80),
          *(_QWORD *)(v213 + 88),
          *(_DWORD *)(v213 + 1096),
          *v214);
    }
    else if ( v213 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v213,
        v177,
        *(_DWORD *)v213,
        *(_QWORD *)(v213 + 8),
        *(_DWORD *)(v213 + 16),
        *(_DWORD *)(v213 + 84),
        *(_DWORD *)(v213 + 88),
        *v214,
        *(_DWORD *)(v213 + 20),
        *(_DWORD *)(v213 + 24));
    }
    if ( (qword_1C00B19B0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      goto LABEL_280;
LABEL_279:
    McTemplateK0q_EtwWriteTransfer(v176, &EventProfilerExit, v177, v211);
LABEL_280:
    v179 = DXGGLOBAL::GetGlobal(v176, v178);
    v180 = (union _SLIST_HEADER *)((char *)v179 + 1024);
    ++*((_DWORD *)v179 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v179 + 64) < *((_WORD *)v179 + 520) )
    {
      ExpInterlockedPushEntrySList(v180, v9);
    }
    else
    {
      ++LODWORD(v180[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v180[3].Region)(v9, v180);
    }
    return (unsigned int)v43;
  }
  v44 = *((unsigned int *)&v9[5].Next + 2);
  if ( (v44 & 0x10000000) != 0 )
  {
    if ( v40 )
    {
      if ( (*(_DWORD *)(v40 + 348) & 0x100) != 0 )
        goto LABEL_41;
      v169 = WdLogNewEntry5_WdError(v44, v37);
      *(_QWORD *)(v169 + 24) = 1338LL;
    }
    else
    {
      v169 = WdLogNewEntry5_WdError(v44, v37);
      *(_QWORD *)(v169 + 24) = 1332LL;
    }
    WdLogEvent5_WdError(v169);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v236);
    goto LABEL_244;
  }
  if ( !v40 )
  {
    v45 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v29 + 2) + 16LL) + 16LL);
    goto LABEL_42;
  }
  if ( (*(_DWORD *)(v40 + 348) & 0x100) != 0 && (v44 & 0x18000) == 0 )
  {
    v181 = WdLogNewEntry5_WdError(v44, v37);
    *(_QWORD *)(v181 + 24) = 1348LL;
    WdLogEvent5_WdError(v181);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v236);
    if ( P != v218 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v219 = 0;
    if ( v30 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v222);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v220);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v211, v182);
    v185 = v213;
    if ( v215 )
    {
      if ( v213 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v213,
          v184,
          *(_DWORD *)v213,
          *(_DWORD *)(v213 + 56),
          *(_QWORD *)(v213 + 80),
          *(_QWORD *)(v213 + 88),
          *(_DWORD *)(v213 + 1096),
          *v214);
    }
    else if ( v213 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v213,
        v184,
        *(_DWORD *)v213,
        *(_QWORD *)(v213 + 8),
        *(_DWORD *)(v213 + 16),
        *(_DWORD *)(v213 + 84),
        *(_DWORD *)(v213 + 88),
        *v214,
        *(_DWORD *)(v213 + 20),
        *(_DWORD *)(v213 + 24));
    }
    if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v183, &EventProfilerExit, v184, v211);
    v186 = DXGGLOBAL::GetGlobal(v183, v185);
    v110 = (union _SLIST_HEADER *)((char *)v186 + 1024);
    ++*((_DWORD *)v186 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v186 + 64) >= *((_WORD *)v186 + 520) )
      goto LABEL_304;
    goto LABEL_136;
  }
LABEL_41:
  v45 = (struct DXGADAPTER *)v40;
LABEL_42:
  CWin32kLocks::CWin32kLocks((CWin32kLocks *)v240, *(const struct _DXGKWIN32KENG_INTERFACE *const *)(v23 + 88), v45);
  v225 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v29 + 2) + 16LL) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v225 + 3);
  v224 = -1LL;
  v46 = v225;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v46 + 136, 0LL);
  v226 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v241, *((_QWORD *)v29 + 2), 2, v47, 0);
  if ( !v249
    || (COREACCESS::AcquireShared((COREACCESS *)v246, 0LL), v49 = *(unsigned int *)(v247 + 200), (_DWORD)v49 == 1) )
  {
    if ( v244 )
    {
      v188 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v49, v48);
      v188[3] = 275LL;
      v188[4] = 4LL;
      v188[5] = v242;
      v188[6] = 0LL;
      v188[7] = 0LL;
      WdLogEvent5_WdCriticalError(v188);
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v243 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v243 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v50, &EventBlockThread, v51, 72);
        KeWaitForSingleObject((char *)v243 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v243, 0LL);
    }
    v245 = 0LL;
    v244 = 1;
    if ( *(_DWORD *)(v248 + 576) == 1 )
    {
      v43 = 0;
    }
    else
    {
      COREACCESS::Release((COREACCESS *)v242);
      if ( v249 )
        COREACCESS::Release((COREACCESS *)v246);
      v43 = -1073741130;
    }
  }
  else
  {
    COREACCESS::Release((COREACCESS *)v246);
    v43 = -1073741130;
  }
  AllocationInfo = v43;
  if ( v43 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v241);
    if ( v226 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v224);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v240);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v236);
    if ( P != v218 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v219 = 0;
    if ( v30 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v222);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v220);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v211, v189);
    v178 = v213;
    if ( v215 )
    {
      if ( v213 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v213,
          v177,
          *(_DWORD *)v213,
          *(_DWORD *)(v213 + 56),
          *(_QWORD *)(v213 + 80),
          *(_QWORD *)(v213 + 88),
          *(_DWORD *)(v213 + 1096),
          *v214);
    }
    else if ( v213 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v213,
        v177,
        *(_DWORD *)v213,
        *(_QWORD *)(v213 + 8),
        *(_DWORD *)(v213 + 16),
        *(_DWORD *)(v213 + 84),
        *(_DWORD *)(v213 + 88),
        *v214,
        *(_DWORD *)(v213 + 20),
        *(_DWORD *)(v213 + 24));
    }
    if ( (qword_1C00B19B0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      goto LABEL_280;
    goto LABEL_279;
  }
  if ( (*(_DWORD *)(&v9[5].Next + 1) & 0x200000) != 0 )
  {
    v190 = SubmitPresentHistoryToken(
             (const struct _D3DKMT_PRESENTHISTORYTOKEN *)(&v9[22].Next + 1),
             (struct COREDEVICEACCESS *)v241,
             (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v224,
             (struct CWin32kLocks *)v240,
             0,
             0LL,
             (struct DXGK_PRESENT_PARAMS *)v9,
             0LL,
             v228,
             0LL,
             0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v241);
    if ( v226 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v224);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v240);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v236);
    if ( P != v218 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v219 = 0;
    if ( v30 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v222);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v220);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v211, v191);
    v194 = v213;
    if ( v215 )
    {
      if ( v213 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v213,
          v193,
          *(_DWORD *)v213,
          *(_DWORD *)(v213 + 56),
          *(_QWORD *)(v213 + 80),
          *(_QWORD *)(v213 + 88),
          *(_DWORD *)(v213 + 1096),
          *v214);
    }
    else if ( v213 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v213,
        v193,
        *(_DWORD *)v213,
        *(_QWORD *)(v213 + 8),
        *(_DWORD *)(v213 + 16),
        *(_DWORD *)(v213 + 84),
        *(_DWORD *)(v213 + 88),
        *v214,
        *(_DWORD *)(v213 + 20),
        *(_DWORD *)(v213 + 24));
    }
    if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v192, &EventProfilerExit, v193, v211);
    v195 = DXGGLOBAL::GetGlobal(v192, v194);
    v196 = (union _SLIST_HEADER *)((char *)v195 + 1024);
    ++*((_DWORD *)v195 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v195 + 64) < *((_WORD *)v195 + 520) )
    {
      ExpInterlockedPushEntrySList(v196, v9);
    }
    else
    {
      ++LODWORD(v196[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v196[3].Region)(v9, v196);
    }
    return v190;
  }
  v52 = *(_QWORD *)(*((_QWORD *)v29 + 2) + 16LL);
  v227 = v52;
  v235[1] = (struct _SLIST_ENTRY *)v52;
  v53 = v52 + 1248;
  ++*(_DWORD *)(v52 + 1268);
  v56 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v52 + 1248));
  if ( !v56 )
  {
    ++*(_DWORD *)(v53 + 24);
    v56 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v53 + 48))(
                          *(unsigned int *)(v53 + 36),
                          *(unsigned int *)(v53 + 44),
                          *(unsigned int *)(v53 + 40),
                          v53);
  }
  v235[0] = v56;
  if ( !v56 )
  {
    v197 = WdLogNewEntry5_WdLowResource(v55, v54, v57, v58);
    *(_QWORD *)(v197 + 24) = 1390LL;
    WdLogEvent5_WdLowResource(v197);
    CVidSchSubmitData::~CVidSchSubmitData(v235);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v241);
    if ( v226 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v224);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v240);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v236);
    if ( P != v218 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v219 = 0;
    if ( v30 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v222);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v220);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v211, v198);
    v201 = v213;
    if ( v215 )
    {
      if ( v213 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v213,
          v200,
          *(_DWORD *)v213,
          *(_DWORD *)(v213 + 56),
          *(_QWORD *)(v213 + 80),
          *(_QWORD *)(v213 + 88),
          *(_DWORD *)(v213 + 1096),
          *v214);
    }
    else if ( v213 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v213,
        v200,
        *(_DWORD *)v213,
        *(_QWORD *)(v213 + 8),
        *(_DWORD *)(v213 + 16),
        *(_DWORD *)(v213 + 84),
        *(_DWORD *)(v213 + 88),
        *v214,
        *(_DWORD *)(v213 + 20),
        *(_DWORD *)(v213 + 24));
    }
    if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v199, &EventProfilerExit, v200, v211);
    v202 = DXGGLOBAL::GetGlobal(v199, v201);
    v154 = (union _SLIST_HEADER *)((char *)v202 + 1024);
    ++*((_DWORD *)v202 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v202 + 64) >= *((_WORD *)v202 + 520) )
      goto LABEL_370;
LABEL_222:
    ExpInterlockedPushEntrySList(v154, v9);
    return 3221225495LL;
  }
  v59 = *(_QWORD *)(v227 + 16);
  if ( *(int *)(v59 + 2328) < 0x2000 )
    v60 = 1;
  else
    v60 = *(_DWORD *)(v59 + 280);
  if ( *(int *)(v59 + 2328) >= 0x2000 || *(_BYTE *)(v59 + 2628) )
    v62 = *(_DWORD *)(v59 + 2536) * ((v60 << 6) + ((8 * v60 + 199) & 0xFFFFFFF8)) + 8 * v60 + 592;
  else
    v62 = 1288;
  memset(v56, 0, v62);
  v63 = *(_QWORD *)(v227 + 16);
  if ( *(int *)(v63 + 2328) < 0x2000 )
    v64 = 1;
  else
    v64 = *(_DWORD *)(v63 + 280);
  v65 = *(int *)(v63 + 2328) >= 0x2000 || *(_BYTE *)(v63 + 2628);
  v66 = *(_DWORD *)(v63 + 2536);
  *((_BYTE *)&v56[21].Next + 12) = v65;
  if ( v65 )
  {
    HIDWORD(v56[36].Next) = v66;
    *((_DWORD *)&v56[36].Next + 2) = v64;
    v67 = 8 * v64;
    v68 = v64 << 6;
    *((_DWORD *)&v56[36].Next + 3) = v66 * (v68 + ((v67 + 199) & 0xFFFFFFF8)) + 16;
    v69 = v66 * (v68 + ((v67 + 199) & 0xFFFFFFF8)) + 592;
    *((_DWORD *)&v56[33].Next + 2) = v69;
    *((_DWORD *)&v56[33].Next + 3) = v67 + v69;
  }
  v70 = DXGCONTEXT::Present(
          v228,
          (struct _D3DKMT_PRESENT *)v9,
          (struct COREDEVICEACCESS *)v241,
          (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v224,
          (struct CWin32kLocks *)v240,
          (struct DXGCONTEXT **)P,
          (struct VIDSCH_SUBMIT_DATA_BASE *)v56);
  AllocationInfo = v70;
  if ( v70 != -1071775482 )
    goto LABEL_68;
  if ( DXGADAPTER::IsCoreResourceSharedOwner(v243)
    || (LODWORD(v227) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v241, 0LL), (int)v227 >= 0) )
  {
    DXGDEVICE::CloseInternalCddPrimaryHandle(*((DXGDEVICE **)v29 + 2), (struct COREDEVICEACCESS *)v241);
    v70 = AllocationInfo;
LABEL_68:
    if ( v40 )
    {
      v71 = *(_QWORD *)(v40 + 2696);
      if ( v71 )
      {
        if ( (*(_DWORD *)(&v9[5].Next + 1) & 4) != 0 )
        {
          Next_low = LODWORD(v9[1].Next);
          if ( (unsigned int)Next_low < *(_DWORD *)(v71 + 80) )
            DISPLAY_SOURCE::RecordPresentDiagHistory(
              (DISPLAY_SOURCE *)(*(_QWORD *)(v71 + 112) + 3968 * Next_low),
              v70,
              *(_BYTE *)(v231 + 346) != 0);
        }
      }
    }
    ++*(_DWORD *)(v53 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v53) >= *(_WORD *)(v53 + 16) )
    {
      ++*(_DWORD *)(v53 + 32);
      (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v53 + 56))(v56, v53);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v53, v56);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v241);
    if ( v226 )
    {
      v226 = 0;
      ExReleasePushLockSharedEx((char *)v225 + 136, 0LL);
      KeLeaveCriticalRegion();
      v73 = (DXGGLOBAL **)v225;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v225 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(v73[2], (struct DXGADAPTER *)v73);
    }
    if ( AllocationInfo >= 0 )
    {
      v74 = v233 + 1488;
      if ( (unsigned __int64)(v233 + 1488) >= MmUserProbeAddress )
        v74 = (_BYTE *)MmUserProbeAddress;
      *v74 = *((_BYTE *)&v9[94].Next + 8);
    }
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v240);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v236);
    if ( P != v218 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v219 = 0;
    if ( v30 && v223 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v30 + 136));
      KeLeaveCriticalRegion();
    }
    if ( v220 && !v221 )
      DXGCONTEXT::ReleaseReference(v220);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v211, v75);
    v78 = v213;
    if ( v215 )
    {
      if ( v213 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v213,
          v77,
          *(_DWORD *)v213,
          *(_DWORD *)(v213 + 56),
          *(_QWORD *)(v213 + 80),
          *(_QWORD *)(v213 + 88),
          *(_DWORD *)(v213 + 1096),
          *v214);
    }
    else if ( v213 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v213,
        v77,
        *(_DWORD *)v213,
        *(_QWORD *)(v213 + 8),
        *(_DWORD *)(v213 + 16),
        *(_DWORD *)(v213 + 84),
        *(_DWORD *)(v213 + 88),
        *v214,
        *(_DWORD *)(v213 + 20),
        *(_DWORD *)(v213 + 24));
    }
    if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v76, &EventProfilerExit, v77, v211);
    v79 = DXGGLOBAL::GetGlobal(v76, v78);
    v80 = (char *)v79 + 1024;
    ++*((_DWORD *)v79 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v79 + 64) >= *((_WORD *)v79 + 520) )
    {
      ++*((_DWORD *)v80 + 8);
      (*((void (__fastcall **)(PSLIST_ENTRY, char *))v80 + 7))(v9, v80);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v80, v9);
    }
    v85 = PsGetCurrentProcess(v82, v81, v83, v84);
    v86 = PsGetProcessDxgProcess(v85);
    v89 = v86;
    if ( v86 && (*(_BYTE *)(v86 + 347) & 0x10) == 0
      || (v210 = DXGTHREAD::GetCurrent(v88, v87)) == 0LL
      || (v90 = *((_QWORD *)v210 + 1)) == 0 )
    {
      v90 = v89;
    }
    v91 = *(_QWORD *)(v90 + 64);
    for ( i = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v91 + 88), (PKSPIN_LOCK)(v91 + 104));
          i;
          i = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v91 + 88), (PKSPIN_LOCK)(v91 + 104)) )
    {
      ((void (__fastcall *)(struct _LIST_ENTRY *))i[1].Flink)(i[1].Blink);
      operator delete(i);
    }
    return (unsigned int)AllocationInfo;
  }
  CVidSchSubmitData::~CVidSchSubmitData(v235);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v241);
  if ( v226 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v224);
  CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v240);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v236);
  if ( P != v218 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v219 = 0;
  if ( v30 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v222);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v220);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v211, v204);
  v207 = v213;
  if ( v215 )
  {
    if ( v213 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqxxqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v213,
        v206,
        *(_DWORD *)v213,
        *(_DWORD *)(v213 + 56),
        *(_QWORD *)(v213 + 80),
        *(_QWORD *)(v213 + 88),
        *(_DWORD *)(v213 + 1096),
        *v214);
  }
  else if ( v213 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    McTemplateK0qpqqqqpp_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      v213,
      v206,
      *(_DWORD *)v213,
      *(_QWORD *)(v213 + 8),
      *(_DWORD *)(v213 + 16),
      *(_DWORD *)(v213 + 84),
      *(_DWORD *)(v213 + 88),
      *v214,
      *(_DWORD *)(v213 + 20),
      *(_DWORD *)(v213 + 24));
  }
  if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v205, &EventProfilerExit, v206, v211);
  v208 = DXGGLOBAL::GetGlobal(v205, v207);
  v209 = (union _SLIST_HEADER *)((char *)v208 + 1024);
  ++*((_DWORD *)v208 + 263);
  if ( ExQueryDepthSList((PSLIST_HEADER)v208 + 64) < *((_WORD *)v208 + 520) )
  {
    ExpInterlockedPushEntrySList(v209, v9);
  }
  else
  {
    ++LODWORD(v209[2].Alignment);
    ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v209[3].Region)(v9, v209);
  }
  return (unsigned int)v227;
}
