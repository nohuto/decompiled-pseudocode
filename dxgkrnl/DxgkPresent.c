/*
 * XREFs of DxgkPresent @ 0x1C01C8120
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1C0001064 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00012E4 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000138C (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C00037CC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0003AE4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00073CC (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0007444 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007980 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000E280 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00163C0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ?RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXJ_N@Z @ 0x1C001B820 (-RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXJ_N@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0024424 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00250B4 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C00250DC (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z @ 0x1C002622C (--0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C00262D4 (--1CWin32kLocks@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     McTemplateK0qpqqqqpp_EtwWriteTransfer @ 0x1C0051C34 (McTemplateK0qpqqqqpp_EtwWriteTransfer.c)
 *     McTemplateK0qqxxqq_EtwWriteTransfer @ 0x1C0051D0C (McTemplateK0qqxxqq_EtwWriteTransfer.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C017FBC8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0180304 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01957D0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01C8C80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C01C94F0 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01C9880 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C01CADE8 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1C01E38B0 (-CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C030D83C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0338E58 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C033B15C (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_.c)
 */

__int64 __fastcall DxgkPresent(char *Src)
{
  bool v2; // r15
  struct DXGGLOBAL *Global; // rax
  struct DXGCONTEXT *v4; // rax
  struct DXGCONTEXT *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v11; // r14
  __int64 v12; // rcx
  struct DXGPROCESS *v13; // rdi
  const void *v14; // rdx
  __int64 v15; // rcx
  struct DXGCONTEXT *v16; // r14
  __int64 v17; // r13
  struct _KEVENT *v18; // rdx
  struct _KEVENT *v19; // rdi
  unsigned int v20; // edi
  __int64 v21; // rdi
  _QWORD *Pool2; // rcx
  _QWORD *v23; // r15
  unsigned int v24; // edi
  __int64 v25; // r9
  __int64 v26; // r15
  int v27; // eax
  int v28; // edi
  int v29; // ecx
  struct DXGADAPTER *v30; // r8
  struct DXGADAPTER *v31; // rdi
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r14
  PVOID v36; // rdi
  __int64 v37; // rax
  int v38; // edx
  unsigned int v39; // eax
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  bool v43; // al
  int v44; // ecx
  int v45; // r8d
  unsigned int v46; // eax
  int v47; // edx
  __int64 v48; // rcx
  char *v49; // rcx
  DXGGLOBAL **v50; // rdx
  _BYTE *v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // r8
  struct DXGGLOBAL *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  struct DXGPROCESS *v58; // rdi
  struct DXGPROCESS *v59; // rax
  __int64 v60; // rbx
  PLIST_ENTRY i; // rdi
  DXGPRESENT *v63; // rax
  __int64 v64; // rax
  DXGPRESENT *v65; // rax
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // r8
  __int64 v73; // rcx
  struct DXGGLOBAL *v74; // rax
  __int64 v75; // r8
  struct DXGGLOBAL *v76; // rax
  __int64 v77; // rcx
  struct DXGCONTEXT *v78; // rdx
  unsigned int v79; // edi
  __int64 v80; // rax
  __int64 v81; // rdx
  unsigned int v82; // edi
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // r8
  struct DXGGLOBAL *v86; // rax
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // rcx
  __int64 v90; // r8
  struct DXGGLOBAL *v91; // rax
  __int64 v92; // r9
  unsigned int v93; // ecx
  __int64 v94; // r8
  unsigned int v95; // ecx
  int v96; // ecx
  __int64 v97; // rdx
  __int64 v98; // r8
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r9
  __int64 v102; // rdx
  struct DXGPROCESS *v103; // rdi
  __int64 v104; // rcx
  __int64 v105; // r8
  struct DXGGLOBAL *v106; // rax
  __int64 v107; // rdx
  struct DXGCONTEXT *v108; // r14
  __int64 v109; // rcx
  __int64 v110; // r8
  struct DXGGLOBAL *v111; // rax
  struct DXGTHREAD *v112; // rax
  struct _ETHREAD *v113; // rbx
  KSPIN_LOCK *v114; // rax
  int v115; // [rsp+60h] [rbp-268h] BYREF
  __int64 v116; // [rsp+68h] [rbp-260h]
  __int64 v117; // [rsp+70h] [rbp-258h]
  int *v118; // [rsp+78h] [rbp-250h]
  char v119; // [rsp+80h] [rbp-248h]
  int AllocationInfo; // [rsp+88h] [rbp-240h] BYREF
  PVOID P; // [rsp+90h] [rbp-238h]
  _BYTE v122[32]; // [rsp+98h] [rbp-230h] BYREF
  unsigned int v123; // [rsp+B8h] [rbp-210h]
  DXGCONTEXT *v124; // [rsp+C0h] [rbp-208h] BYREF
  char v125; // [rsp+C8h] [rbp-200h]
  __int64 v126; // [rsp+D0h] [rbp-1F8h] BYREF
  int v127; // [rsp+D8h] [rbp-1F0h]
  struct DXGPROCESS *v128; // [rsp+E0h] [rbp-1E8h]
  struct DXGCONTEXT *v129; // [rsp+E8h] [rbp-1E0h] BYREF
  __int64 v130; // [rsp+F0h] [rbp-1D8h] BYREF
  struct DXGADAPTER *v131; // [rsp+F8h] [rbp-1D0h]
  char v132; // [rsp+100h] [rbp-1C8h]
  struct DXGPROCESS *v133; // [rsp+108h] [rbp-1C0h]
  __int64 v134; // [rsp+110h] [rbp-1B8h]
  struct DXGCONTEXT *v135[2]; // [rsp+118h] [rbp-1B0h] BYREF
  _QWORD v136[6]; // [rsp+128h] [rbp-1A0h] BYREF
  char v137; // [rsp+158h] [rbp-170h]
  char *v138; // [rsp+160h] [rbp-168h]
  __int64 v139; // [rsp+168h] [rbp-160h]
  _QWORD v140[2]; // [rsp+170h] [rbp-158h] BYREF
  _BYTE v141[16]; // [rsp+180h] [rbp-148h] BYREF
  _BYTE v142[32]; // [rsp+190h] [rbp-138h] BYREF
  _BYTE v143[64]; // [rsp+1B0h] [rbp-118h] BYREF
  char v144[8]; // [rsp+1F0h] [rbp-D8h] BYREF
  _BYTE v145[16]; // [rsp+1F8h] [rbp-D0h] BYREF
  DXGADAPTER *v146; // [rsp+208h] [rbp-C0h]
  char v147; // [rsp+210h] [rbp-B8h]
  __int64 v148; // [rsp+218h] [rbp-B0h]
  _BYTE v149[16]; // [rsp+238h] [rbp-90h] BYREF
  __int64 v150; // [rsp+248h] [rbp-80h]
  __int64 v151; // [rsp+278h] [rbp-50h]
  char v152; // [rsp+280h] [rbp-48h]

  v138 = Src;
  AllocationInfo = -1073741811;
  v2 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Global = DXGGLOBAL::GetGlobal();
  v4 = (struct DXGCONTEXT *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 1136));
  v5 = v4;
  v135[1] = v4;
  if ( !v4 )
  {
    WdLogSingleEntry1(6LL, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for present parameters. Returing 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  memset(v4, 0, 0x5F8uLL);
  if ( bTracingEnabled )
    v7 = (__int64)v5;
  else
    v7 = 0LL;
  v116 = 0LL;
  v115 = 2020;
  v118 = &AllocationInfo;
  v119 = 0;
  v117 = v7;
  if ( (qword_1C013A870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)&AllocationInfo, &EventProfilerEnter, v6, 2020);
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v115, 2020);
  CurrentProcess = PsGetCurrentProcess(v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    v12 = *(_DWORD *)(ProcessDxgProcess + 424) >> 7;
    if ( (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
      goto LABEL_7;
  }
  Current = DXGTHREAD::GetCurrent();
  if ( !Current )
  {
    CurrentThread = KeGetCurrentThread();
    v68 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v13 = DXGGLOBAL::SearchDxgThreadList(v68, CurrentThread);
    v128 = v13;
    if ( v13 )
      goto LABEL_8;
    WdLogSingleEntry1(2LL, 2923LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    v13 = v11;
    v128 = v11;
    goto LABEL_8;
  }
  v13 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
  v128 = v13;
  if ( !v13 )
    goto LABEL_7;
LABEL_8:
  v133 = v13;
  if ( !v13 )
  {
    v69 = PsGetCurrentProcess(v12);
    WdLogSingleEntry2(2LL, -1073741811LL, v69);
    v71 = PsGetCurrentProcess(v70);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting from unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v71,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v115);
    if ( v119 )
    {
      if ( v117 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v117,
          v72,
          *(_DWORD *)v117,
          *(_DWORD *)(v117 + 56),
          *(_QWORD *)(v117 + 80),
          *(_QWORD *)(v117 + 88),
          *(_DWORD *)(v117 + 1096),
          *v118);
    }
    else if ( v117 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v117,
        v72,
        *(_DWORD *)v117,
        *(_QWORD *)(v117 + 8),
        *(_DWORD *)(v117 + 16),
        *(_DWORD *)(v117 + 84),
        *(_DWORD *)(v117 + 88),
        *v118,
        *(_DWORD *)(v117 + 20),
        *(_DWORD *)(v117 + 24));
    }
    if ( (qword_1C013A870 & 2) == 0 )
      goto LABEL_122;
    v73 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      goto LABEL_122;
    goto LABEL_121;
  }
  v14 = Src;
  if ( v2 )
  {
    if ( (unsigned __int64)Src >= MmUserProbeAddress )
      v14 = (const void *)MmUserProbeAddress;
    memmove(v5, v14, 0x5D8uLL);
  }
  else
  {
    memmove(v5, Src, 0x5D8uLL);
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)v13 + 11) + 400LL))() && (*((_DWORD *)v5 + 22) & 0x8000) == 0 )
  {
    AllocationInfo = -1071775738;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v115);
    if ( v119 )
    {
      if ( v117 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v117,
          v75,
          *(_DWORD *)v117,
          *(_DWORD *)(v117 + 56),
          *(_QWORD *)(v117 + 80),
          *(_QWORD *)(v117 + 88),
          *(_DWORD *)(v117 + 1096),
          *v118);
    }
    else if ( v117 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v117,
        v75,
        *(_DWORD *)v117,
        *(_QWORD *)(v117 + 8),
        *(_DWORD *)(v117 + 16),
        *(_DWORD *)(v117 + 84),
        *(_DWORD *)(v117 + 88),
        *v118,
        *(_DWORD *)(v117 + 20),
        *(_DWORD *)(v117 + 24));
    }
    if ( (qword_1C013A870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v75, v115);
    v76 = DXGGLOBAL::GetGlobal();
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v76 + 1136), v5);
    return 3223191558LL;
  }
  if ( (*((_DWORD *)v5 + 22) & 0x10000000) != 0 )
  {
    v135[0] = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141, *(_DWORD *)v5, v13, v135, 0, 1);
    v78 = v135[0];
    if ( v135[0] )
    {
      *(_DWORD *)v5 = *((_DWORD *)v5 + 362);
      AllocationInfo = PreIndirectPresentReadAllocationInfo(
                         v13,
                         *((struct DXGDEVICE **)v78 + 2),
                         *((_DWORD *)v5 + 5),
                         (struct DXGCONTEXT *)((char *)v5 + 1516));
      if ( AllocationInfo < 0 )
        WdLogSingleEntry1(3LL, *((unsigned int *)v5 + 5));
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141);
      goto LABEL_16;
    }
    v79 = *((_DWORD *)v5 + 362);
    v80 = PsGetCurrentProcess(v77);
    WdLogSingleEntry3(3LL, -1073741811LL, v80, v79);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v141);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v115);
    v81 = v117;
    if ( v119 )
      goto LABEL_143;
    if ( v117 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      goto LABEL_139;
LABEL_140:
    if ( (qword_1C013A870 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
    {
LABEL_122:
      v74 = DXGGLOBAL::GetGlobal();
      ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v74 + 1136), v5);
      return 3221225485LL;
    }
LABEL_121:
    McTemplateK0q_EtwWriteTransfer(v73, &EventProfilerExit, v72, v115);
    goto LABEL_122;
  }
LABEL_16:
  v129 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v124, *(_DWORD *)v5, v13, &v129, 0, 1);
  v16 = v129;
  if ( !v129 )
  {
    v82 = *(_DWORD *)v5;
    v83 = PsGetCurrentProcess(v15);
    WdLogSingleEntry3(3LL, -1073741811LL, v83, v82);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v124);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v115);
    v81 = v117;
    if ( v119 )
      goto LABEL_143;
    goto LABEL_150;
  }
  if ( *((_BYTE *)v129 + 442) && *((_DWORD *)v5 + 23) )
  {
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v124);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v115);
    if ( v119 )
    {
      if ( v117 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v117,
          v85,
          *(_DWORD *)v117,
          *(_DWORD *)(v117 + 56),
          *(_QWORD *)(v117 + 80),
          *(_QWORD *)(v117 + 88),
          *(_DWORD *)(v117 + 1096),
          *v118);
    }
    else if ( v117 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v117,
        v85,
        *(_DWORD *)v117,
        *(_QWORD *)(v117 + 8),
        *(_DWORD *)(v117 + 16),
        *(_DWORD *)(v117 + 84),
        *(_DWORD *)(v117 + 88),
        *v118,
        *(_DWORD *)(v117 + 20),
        *(_DWORD *)(v117 + 24));
    }
    if ( (qword_1C013A870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v84, &EventProfilerExit, v85, v115);
    v86 = DXGGLOBAL::GetGlobal();
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v86 + 1136), v5);
    return 3221225474LL;
  }
  if ( (*((_DWORD *)v129 + 101) & 8) != 0 )
  {
    WdLogSingleEntry1(3LL, 1384LL);
    goto LABEL_166;
  }
  v17 = *((_QWORD *)v129 + 2);
  v18 = *(struct _KEVENT **)(v17 + 16);
  if ( ((__int64)v18->Header.WaitListHead.Blink[174].Blink & 8) != 0 )
  {
    WdLogSingleEntry1(2LL, *(unsigned int *)v5);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Present is not supported on MCDM adapter context 0x%I64x",
      *(unsigned int *)v5,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_166;
  }
  v139 = *((_QWORD *)v129 + 2);
  v126 = v17;
  v127 = 0;
  if ( v17 )
  {
    if ( *(_DWORD *)(v17 + 464) == 2 )
    {
      v19 = v18 + 5;
      if ( KeReadStateEvent(v18 + 5) )
        goto LABEL_23;
    }
    else
    {
      v19 = v18 + 4;
      if ( KeReadStateEvent(v18 + 4) )
      {
LABEL_23:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v17 + 136), 0) )
        {
          DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v17 + 16) + 16LL));
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v87, (const EVENT_DESCRIPTOR *)"g", v88, 40);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v17 + 136), 1u);
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v17 + 16) + 16LL));
        }
        v127 = 1;
        goto LABEL_25;
      }
    }
    KeWaitForSingleObject(v19, Executive, 0, 0, 0LL);
    goto LABEL_23;
  }
LABEL_25:
  v20 = *((_DWORD *)v5 + 23);
  if ( v20 > 0x40 )
  {
    WdLogSingleEntry2(3LL, v16, -1073741811LL);
    goto LABEL_177;
  }
  v21 = v20 + 1;
  Pool2 = 0LL;
  P = 0LL;
  v123 = 0;
  if ( (unsigned int)v21 <= 4 )
  {
    Pool2 = v122;
    P = v122;
    if ( (_DWORD)v21 )
    {
      memset(v122, 0, 8LL * (unsigned int)v21);
      Pool2 = P;
    }
    goto LABEL_29;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v21 >= 8 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v21, 1265072196LL);
    P = Pool2;
LABEL_29:
    v123 = v21;
  }
  if ( !Pool2 )
  {
    WdLogSingleEntry1(3LL, 1416LL);
    if ( P != v122 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v123 = 0;
    if ( v17 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v126);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v124);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v115);
    if ( v119 )
    {
      if ( v117 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v117,
          v90,
          *(_DWORD *)v117,
          *(_DWORD *)(v117 + 56),
          *(_QWORD *)(v117 + 80),
          *(_QWORD *)(v117 + 88),
          *(_DWORD *)(v117 + 1096),
          *v118);
    }
    else if ( v117 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v117,
        v90,
        *(_DWORD *)v117,
        *(_QWORD *)(v117 + 8),
        *(_DWORD *)(v117 + 16),
        *(_DWORD *)(v117 + 84),
        *(_DWORD *)(v117 + 88),
        *v118,
        *(_DWORD *)(v117 + 20),
        *(_DWORD *)(v117 + 24));
    }
    if ( (qword_1C013A870 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      goto LABEL_196;
LABEL_195:
    McTemplateK0q_EtwWriteTransfer(v89, &EventProfilerExit, v90, v115);
LABEL_196:
    v91 = DXGGLOBAL::GetGlobal();
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v91 + 1136), v5);
    return 3221225495LL;
  }
  *Pool2 = v16;
  v23 = P;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v142, v128);
  v24 = 0;
  if ( *((_DWORD *)v5 + 23) )
  {
    do
    {
      v92 = v24;
      v134 = v24;
      v93 = (*((_DWORD *)v5 + v24 + 24) >> 6) & 0xFFFFFF;
      if ( v93 < *((_DWORD *)v128 + 74) )
      {
        v94 = *((_QWORD *)v128 + 35) + 16LL * v93;
        v95 = *(_DWORD *)(v94 + 8);
        if ( *((_DWORD *)v5 + v24 + 24) >> 30 == ((v95 >> 5) & 3) && (v95 & 0x2000) == 0 )
        {
          v96 = v95 & 0x1F;
          if ( v96 )
          {
            if ( v96 == 7 )
            {
              v97 = *(_QWORD *)v94;
              goto LABEL_204;
            }
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
            v92 = v24;
          }
        }
      }
      v97 = 0LL;
LABEL_204:
      v98 = v24 + 1;
      *((_QWORD *)P + v98) = v97;
      v99 = *((_QWORD *)P + v98);
      if ( !v99 || (*(_DWORD *)(v99 + 404) & 8) != 0 || (v100 = *((_QWORD *)v16 + 2), *(_QWORD *)(v99 + 16) != v100) )
      {
        WdLogSingleEntry4(2LL, v16, *((unsigned int *)v5 + v92 + 24), v92, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
          (__int64)v16,
          *((unsigned int *)v5 + v134 + 24),
          v134,
          -1073741811LL,
          0LL);
LABEL_215:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v142);
LABEL_218:
        if ( P != v122 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v123 = 0;
LABEL_177:
        if ( v17 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v126);
LABEL_166:
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v124);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v115);
        v81 = v117;
        if ( v119 )
        {
LABEL_143:
          if ( v81 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0qqxxqq_EtwWriteTransfer(
              (REGHANDLE *)&DxgkControlGuid_Context,
              v81,
              v72,
              *(_DWORD *)v81,
              *(_DWORD *)(v81 + 56),
              *(_QWORD *)(v81 + 80),
              *(_QWORD *)(v81 + 88),
              *(_DWORD *)(v81 + 1096),
              *v118);
          goto LABEL_140;
        }
LABEL_150:
        if ( !v81 || (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0LL )
          goto LABEL_140;
LABEL_139:
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v81,
          v72,
          *(_DWORD *)v81,
          *(_QWORD *)(v81 + 8),
          *(_DWORD *)(v81 + 16),
          *(_DWORD *)(v81 + 84),
          *(_DWORD *)(v81 + 88),
          *v118,
          *(_DWORD *)(v81 + 20),
          *(_DWORD *)(v81 + 24));
        goto LABEL_140;
      }
      if ( v24
        && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v100 + 16) + 16LL))
        && *(_DWORD *)(v23[v101] + 400LL) <= *(_DWORD *)(v23[v24 - 1] + 400LL) )
      {
        WdLogSingleEntry1(2LL, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Context physical adapters must be in the increasing adapter ordinal order, returning 0x%I64x",
          -1073741811LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_215;
      }
      v24 = v98;
    }
    while ( (unsigned int)v98 < *((_DWORD *)v5 + 23) );
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v142);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v136,
    P,
    v123,
    v25,
    1);
  if ( v137 )
  {
    if ( v136[0] )
    {
      WdLogSingleEntry1(3LL, 1486LL);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v136);
      goto LABEL_218;
    }
    WdLogSingleEntry1(3LL, 1481LL);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v136);
    if ( P != v122 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v123 = 0;
    if ( v17 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v126);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v124);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v115);
    v102 = v117;
    if ( !v119 )
    {
      if ( v117 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
        goto LABEL_230;
      goto LABEL_231;
    }
LABEL_234:
    if ( v102 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqxxqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v102,
        v90,
        *(_DWORD *)v102,
        *(_DWORD *)(v102 + 56),
        *(_QWORD *)(v102 + 80),
        *(_QWORD *)(v102 + 88),
        *(_DWORD *)(v102 + 1096),
        *v118);
    goto LABEL_231;
  }
  *((_QWORD *)v5 + 187) = P;
  *((_BYTE *)v5 + 1512) = 1;
  v26 = *(_QWORD *)(*((_QWORD *)v16 + 2) + 1880LL);
  v27 = *((_DWORD *)v5 + 22);
  if ( (v27 & 0x8000) != 0 )
  {
    if ( (v27 & 0x400000) != 0 || *((_QWORD *)v5 + 180) )
    {
      WdLogSingleEntry4(2LL, -1073741811LL, v16, *((unsigned int *)v5 + 22), *((_QWORD *)v5 + 180));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"ret = 0x%I64x 0x%I64x 0x%I64x 0x%I64x RedirectedFlip doesn't support Present regions.",
        -1073741811LL,
        (__int64)v16,
        *((unsigned int *)v5 + 22),
        *((_QWORD *)v5 + 180),
        0LL);
      v28 = -1073741811;
    }
    else
    {
      v28 = 0;
    }
  }
  else
  {
    v63 = (DXGPRESENT *)*((_QWORD *)v16 + 19);
    if ( v63
      || ((v65 = (DXGPRESENT *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(1648LL)) == 0LL
        ? (v63 = 0LL)
        : (v63 = DXGPRESENT::DXGPRESENT(v65, *(_DWORD *)(*((_QWORD *)v16 + 2) + 1888LL))),
          (*((_QWORD *)v16 + 19) = v63) != 0LL) )
    {
      *((_BYTE *)v16 + 443) = 1;
      v28 = DXGPRESENT::CopyPresentArgs(v63, v16, (struct _D3DKMT_PRESENT *)v5);
    }
    else
    {
      v103 = v128;
      WdLogSingleEntry4(6LL, -1073741801LL, *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 16LL), v128, v16);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"0x%I64x Out of memory allocating DXGPRESENT, 0x%I64x 0x%I64x 0x%I64x",
        -1073741801LL,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 16LL),
        (__int64)v103,
        (__int64)v16,
        0LL);
      v28 = -1073741801;
    }
  }
  AllocationInfo = v28;
  if ( v28 < 0 )
  {
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v136);
    if ( P != v122 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v123 = 0;
    if ( v17 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v126);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v124);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v115);
    if ( v119 )
    {
      if ( v117 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v117,
          v105,
          *(_DWORD *)v117,
          *(_DWORD *)(v117 + 56),
          *(_QWORD *)(v117 + 80),
          *(_QWORD *)(v117 + 88),
          *(_DWORD *)(v117 + 1096),
          *v118);
    }
    else if ( v117 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v117,
        v105,
        *(_DWORD *)v117,
        *(_QWORD *)(v117 + 8),
        *(_DWORD *)(v117 + 16),
        *(_DWORD *)(v117 + 84),
        *(_DWORD *)(v117 + 88),
        *v118,
        *(_DWORD *)(v117 + 20),
        *(_DWORD *)(v117 + 24));
    }
    if ( (qword_1C013A870 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      goto LABEL_254;
    goto LABEL_253;
  }
  v29 = *((_DWORD *)v5 + 22);
  if ( (v29 & 0x10000000) != 0 )
  {
    if ( v26 )
    {
      if ( (*(_DWORD *)(v26 + 436) & 0x100) != 0 )
        goto LABEL_41;
      WdLogSingleEntry1(2LL, 1513LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Indirect Display present can only be used with a indirect display Dod driver",
        1513LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL, 1507LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Indirect Display present has to be on a context associated with Dod",
        1507LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
LABEL_217:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v136);
    goto LABEL_218;
  }
  if ( !v26 )
  {
    v30 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 16LL);
    goto LABEL_42;
  }
  if ( (*(_DWORD *)(v26 + 436) & 0x100) != 0 && (v29 & 0x18000) == 0 )
  {
    WdLogSingleEntry1(2LL, 1523LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"No non-direct display presents can go to indirect display device",
      1523LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_217;
  }
LABEL_41:
  v30 = (struct DXGADAPTER *)v26;
LABEL_42:
  CWin32kLocks::CWin32kLocks((CWin32kLocks *)v143, *((const struct _DXGKWIN32KENG_INTERFACE *const *)v128 + 11), v30);
  v131 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v131 + 3);
  v130 = -1LL;
  v31 = v131;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v31 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)v31 + 38);
  v132 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v144, *((_QWORD *)v16 + 2), 2, v32, 0);
  if ( !v152 || (COREACCESS::AcquireShared((COREACCESS *)v149, 0LL), *(_DWORD *)(v150 + 200) == 1) )
  {
    if ( v147 )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v145, 0LL, 0LL);
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v146 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v146 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v33, (const EVENT_DESCRIPTOR *)"g", v34, 72);
        KeWaitForSingleObject((char *)v146 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v146, 0LL);
    }
    v148 = 0LL;
    v147 = 1;
    if ( *(_DWORD *)(v151 + 608) == 1 )
    {
      v28 = 0;
    }
    else
    {
      COREACCESS::Release((COREACCESS *)v145);
      if ( v152 )
        COREACCESS::Release((COREACCESS *)v149);
      v28 = -1073741130;
    }
  }
  else
  {
    COREACCESS::Release((COREACCESS *)v149);
    v28 = -1073741130;
  }
  AllocationInfo = v28;
  if ( v28 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v144);
    if ( v132 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v130);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v143);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v136);
    if ( P != v122 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v123 = 0;
    if ( v17 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v126);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v124);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v115);
    v107 = v117;
    if ( !v119 )
    {
      if ( v117 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
        goto LABEL_279;
      goto LABEL_280;
    }
LABEL_283:
    if ( v107 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqxxqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v107,
        v105,
        *(_DWORD *)v107,
        *(_DWORD *)(v107 + 56),
        *(_QWORD *)(v107 + 80),
        *(_QWORD *)(v107 + 88),
        *(_DWORD *)(v107 + 1096),
        *v118);
    goto LABEL_280;
  }
  if ( (*((_DWORD *)v5 + 22) & 0x200000) != 0 )
  {
    v108 = v129;
    v28 = SubmitPresentHistoryTokenPreparation(
            (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v130,
            (struct COREDEVICEACCESS *)v144,
            *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v129 + 2) + 16LL) + 16LL),
            (struct _D3DKMT_PRESENTHISTORYTOKEN *)((char *)v5 + 360),
            *((void **)v5 + 44),
            (*((_DWORD *)v5 + 22) & 0x10) != 0);
    AllocationInfo = v28;
    if ( v28 < 0 )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v144);
      if ( v132 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v130);
      CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v143);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v136);
      if ( P != v122 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v123 = 0;
      if ( v17 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v126);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v124);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v115);
      v107 = v117;
      if ( !v119 )
      {
        if ( v117 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
LABEL_279:
          McTemplateK0qpqqqqpp_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            v107,
            v105,
            *(_DWORD *)v107,
            *(_QWORD *)(v107 + 8),
            *(_DWORD *)(v107 + 16),
            *(_DWORD *)(v107 + 84),
            *(_DWORD *)(v107 + 88),
            *v118,
            *(_DWORD *)(v107 + 20),
            *(_DWORD *)(v107 + 24));
LABEL_280:
        if ( (qword_1C013A870 & 2) == 0 )
          goto LABEL_254;
        v104 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
          goto LABEL_254;
        goto LABEL_253;
      }
      goto LABEL_283;
    }
    v28 = SubmitPresentHistoryToken(
            (const struct _D3DKMT_PRESENTHISTORYTOKEN *)((char *)v5 + 360),
            (struct COREDEVICEACCESS *)v144,
            (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v130,
            (struct CWin32kLocks *)v143,
            0,
            0LL,
            v5,
            0LL,
            v108,
            0LL,
            0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v144);
    if ( v132 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v130);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v143);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v136);
    if ( P != v122 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v123 = 0;
    if ( v17 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v126);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v124);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v115);
    if ( v119 )
    {
      if ( v117 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v117,
          v105,
          *(_DWORD *)v117,
          *(_DWORD *)(v117 + 56),
          *(_QWORD *)(v117 + 80),
          *(_QWORD *)(v117 + 88),
          *(_DWORD *)(v117 + 1096),
          *v118);
    }
    else if ( v117 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v117,
        v105,
        *(_DWORD *)v117,
        *(_QWORD *)(v117 + 8),
        *(_DWORD *)(v117 + 16),
        *(_DWORD *)(v117 + 84),
        *(_DWORD *)(v117 + 88),
        *v118,
        *(_DWORD *)(v117 + 20),
        *(_DWORD *)(v117 + 24));
    }
    if ( (qword_1C013A870 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      goto LABEL_254;
LABEL_253:
    McTemplateK0q_EtwWriteTransfer(v104, &EventProfilerExit, v105, v115);
LABEL_254:
    v106 = DXGGLOBAL::GetGlobal();
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v106 + 1136), v5);
    return (unsigned int)v28;
  }
  v35 = *(_QWORD *)(*((_QWORD *)v129 + 2) + 16LL);
  v140[1] = v35;
  v36 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(v35 + 1424));
  v140[0] = v36;
  if ( v36 )
  {
    v37 = *(_QWORD *)(v35 + 16);
    v38 = *(int *)(v37 + 2552) < 0x2000 ? 1 : *(_DWORD *)(v37 + 288);
    v39 = *(int *)(v37 + 2552) >= 0x2000 || *(_BYTE *)(v37 + 2852)
        ? 8 * v38 + *(_DWORD *)(v37 + 2760) * ((v38 << 6) + ((8 * v38 + 231) & 0xFFFFFFF8)) + 616
        : 1304;
    memset(v36, 0, v39);
    v40 = *(_QWORD *)(v35 + 16);
    v41 = *(int *)(v40 + 2552) < 0x2000 ? 1 : *(_DWORD *)(v40 + 288);
    v42 = *(_DWORD *)(v40 + 2760);
    v43 = *(int *)(v40 + 2552) >= 0x2000 || *(_BYTE *)(v40 + 2852);
    *((_BYTE *)v36 + 356) = v43;
    if ( v43 )
    {
      *((_DWORD *)v36 + 151) = v42;
      *((_DWORD *)v36 + 152) = v41;
      v44 = 8 * v41;
      v45 = v41 << 6;
      *((_DWORD *)v36 + 153) = v42 * (v45 + ((v44 + 231) & 0xFFFFFFF8)) + 16;
      v46 = v42 * (v45 + ((v44 + 231) & 0xFFFFFFF8)) + 616;
      *((_DWORD *)v36 + 138) = v46;
      *((_DWORD *)v36 + 139) = v44 + v46;
    }
  }
  if ( !v36 )
  {
    WdLogSingleEntry1(6LL, 1578LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate VidSchSubmitData",
      1578LL,
      0LL,
      0LL,
      0LL,
      0LL);
    CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v140);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v144);
    if ( v132 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v130);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v143);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v136);
    if ( P != v122 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v123 = 0;
    if ( v17 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v126);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v124);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v115);
    v102 = v117;
    if ( !v119 )
    {
      if ( v117 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
LABEL_230:
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v102,
          v90,
          *(_DWORD *)v102,
          *(_QWORD *)(v102 + 8),
          *(_DWORD *)(v102 + 16),
          *(_DWORD *)(v102 + 84),
          *(_DWORD *)(v102 + 88),
          *v118,
          *(_DWORD *)(v102 + 20),
          *(_DWORD *)(v102 + 24));
LABEL_231:
      if ( (qword_1C013A870 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        goto LABEL_196;
      goto LABEL_195;
    }
    goto LABEL_234;
  }
  v47 = DXGCONTEXT::Present(
          v129,
          (struct _D3DKMT_PRESENT *)v5,
          (struct COREDEVICEACCESS *)v144,
          (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v130,
          (struct CWin32kLocks *)v143,
          (struct DXGCONTEXT **)P,
          (struct VIDSCH_SUBMIT_DATA_BASE *)v36);
  AllocationInfo = v47;
  if ( v47 != -1071775482 )
  {
LABEL_65:
    if ( v26 )
    {
      v48 = *(_QWORD *)(v26 + 2920);
      if ( v48 )
      {
        if ( (*((_DWORD *)v5 + 22) & 4) != 0 )
        {
          v64 = *((unsigned int *)v5 + 4);
          if ( (unsigned int)v64 < *(_DWORD *)(v48 + 96) )
            DISPLAY_SOURCE::RecordPresentDiagHistory(
              (DISPLAY_SOURCE *)(*(_QWORD *)(v48 + 128) + 4000 * v64),
              v47,
              (*((_DWORD *)v128 + 106) & 4) != 0);
        }
      }
    }
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v35 + 1424), v36);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v144);
    if ( v132 )
    {
      v132 = 0;
      v49 = (char *)v131 + 136;
      _InterlockedDecrement((volatile signed __int32 *)v131 + 38);
      ExReleasePushLockSharedEx(v49, 0LL);
      KeLeaveCriticalRegion();
      v50 = (DXGGLOBAL **)v131;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v131 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(v50[2], (struct DXGADAPTER *)v50);
    }
    if ( AllocationInfo >= 0 )
    {
      v51 = v138 + 1488;
      if ( (unsigned __int64)(v138 + 1488) >= MmUserProbeAddress )
        v51 = (_BYTE *)MmUserProbeAddress;
      *v51 = *((_BYTE *)v5 + 1512);
    }
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v143);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v136);
    if ( P != v122 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v123 = 0;
    if ( v17 && v127 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v17 + 136));
      KeLeaveCriticalRegion();
    }
    if ( v124 && !v125 )
      DXGCONTEXT::ReleaseReference(v124);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v115);
    if ( v119 )
    {
      if ( v117 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v117,
          v53,
          *(_DWORD *)v117,
          *(_DWORD *)(v117 + 56),
          *(_QWORD *)(v117 + 80),
          *(_QWORD *)(v117 + 88),
          *(_DWORD *)(v117 + 1096),
          *v118);
    }
    else if ( v117 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v117,
        v53,
        *(_DWORD *)v117,
        *(_QWORD *)(v117 + 8),
        *(_DWORD *)(v117 + 16),
        *(_DWORD *)(v117 + 84),
        *(_DWORD *)(v117 + 88),
        *v118,
        *(_DWORD *)(v117 + 20),
        *(_DWORD *)(v117 + 24));
    }
    if ( (qword_1C013A870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v52, &EventProfilerExit, v53, v115);
    v54 = DXGGLOBAL::GetGlobal();
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v54 + 1136), v5);
    v56 = PsGetCurrentProcess(v55);
    v57 = PsGetProcessDxgProcess(v56);
    v58 = (struct DXGPROCESS *)v57;
    if ( !v57 || (*(_DWORD *)(v57 + 424) & 0x80) != 0 )
    {
      v112 = DXGTHREAD::GetCurrent();
      if ( v112 )
      {
        v59 = (struct DXGPROCESS *)*((_QWORD *)v112 + 3);
        if ( v59 )
          goto LABEL_90;
      }
      else
      {
        v113 = KeGetCurrentThread();
        v114 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
        v59 = DXGGLOBAL::SearchDxgThreadList(v114, v113);
        if ( v59 )
          goto LABEL_90;
        WdLogSingleEntry1(2LL, 2923LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v59 = v58;
LABEL_90:
    v60 = *((_QWORD *)v59 + 8);
    for ( i = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v60 + 104), (PKSPIN_LOCK)(v60 + 120));
          i;
          i = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v60 + 104), (PKSPIN_LOCK)(v60 + 120)) )
    {
      ((void (__fastcall *)(struct _LIST_ENTRY *))i[1].Flink)(i[1].Blink);
      operator delete(i);
    }
    return (unsigned int)AllocationInfo;
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(v146)
    || (LODWORD(v134) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v144, 0LL), (int)v134 >= 0) )
  {
    DXGDEVICE::CloseInternalCddPrimaryHandle(*((DXGDEVICE **)v129 + 2), (struct COREDEVICEACCESS *)v144);
    v47 = AllocationInfo;
    goto LABEL_65;
  }
  CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v140);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v144);
  if ( v132 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v130);
  CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v143);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v136);
  if ( P != v122 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v123 = 0;
  if ( v17 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v126);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v124);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v115);
  if ( v119 )
  {
    if ( v117 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqxxqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v117,
        v110,
        *(_DWORD *)v117,
        *(_DWORD *)(v117 + 56),
        *(_QWORD *)(v117 + 80),
        *(_QWORD *)(v117 + 88),
        *(_DWORD *)(v117 + 1096),
        *v118);
  }
  else if ( v117 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
  {
    McTemplateK0qpqqqqpp_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      v117,
      v110,
      *(_DWORD *)v117,
      *(_QWORD *)(v117 + 8),
      *(_DWORD *)(v117 + 16),
      *(_DWORD *)(v117 + 84),
      *(_DWORD *)(v117 + 88),
      *v118,
      *(_DWORD *)(v117 + 20),
      *(_DWORD *)(v117 + 24));
  }
  if ( (qword_1C013A870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v109, &EventProfilerExit, v110, v115);
  v111 = DXGGLOBAL::GetGlobal();
  ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v111 + 1136), v5);
  return (unsigned int)v134;
}
