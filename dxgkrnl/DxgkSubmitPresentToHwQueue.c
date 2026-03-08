/*
 * XREFs of DxgkSubmitPresentToHwQueue @ 0x1C03198F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1C0001064 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0001198 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00012E4 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0001314 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000138C (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C000148C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003634 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0024424 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00250B4 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C00250DC (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z @ 0x1C002622C (--0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C00262D4 (--1CWin32kLocks@@QEAA@XZ.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C0029716 (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x1C00298D8 (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     McTemplateK0qpqqqqpp_EtwWriteTransfer @ 0x1C0051C34 (McTemplateK0qpqqqqpp_EtwWriteTransfer.c)
 *     McTemplateK0qqxxqq_EtwWriteTransfer @ 0x1C0051D0C (McTemplateK0qqxxqq_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01C8C80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01C9880 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C02D95F0 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C0311BD4 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0338E58 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C033B15C (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_.c)
 */

__int64 __fastcall DxgkSubmitPresentToHwQueue(ULONG64 a1)
{
  struct DXGGLOBAL *Global; // rax
  _DWORD *v3; // rax
  unsigned __int64 v4; // r15
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 CurrentProcess; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  const void *v16; // rdx
  __int64 v17; // rbx
  const void **v18; // rax
  const void *v19; // rdx
  PVOID v20; // rcx
  ULONG64 v21; // r9
  __int64 v22; // rbx
  unsigned int v23; // eax
  __int64 v24; // r8
  unsigned int v25; // ecx
  int v26; // ecx
  signed __int64 v27; // rax
  signed __int64 v28; // rtt
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  struct DXGGLOBAL *v32; // rax
  _QWORD *Pool2; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct DXGGLOBAL *v36; // rax
  unsigned int v37; // r8d
  unsigned __int64 v38; // rdx
  _DWORD *v39; // rcx
  unsigned int v40; // eax
  int v41; // r9d
  __int64 v42; // r11
  unsigned int v43; // ecx
  int v44; // ecx
  __int64 v45; // rcx
  _QWORD *v46; // r9
  char *v47; // rax
  _QWORD *v48; // rcx
  __int64 v49; // rcx
  int v50; // r9d
  __int64 v51; // r9
  struct DXGK_PRESENT_PARAMS *v52; // rdi
  __int64 v53; // rax
  const wchar_t *v54; // r9
  unsigned int *v55; // rcx
  __int64 v56; // rdi
  __int64 v57; // rcx
  unsigned int *v58; // rdx
  int v59; // edx
  __int64 v60; // rcx
  __int64 v61; // r8
  struct DXGGLOBAL *v62; // rax
  struct DXGADAPTER *v63; // rcx
  __int64 v64; // r9
  unsigned int v65; // edi
  __int64 v66; // rcx
  __int64 v67; // r8
  struct DXGGLOBAL *v68; // rax
  struct VIDSCH_SUBMIT_DATA_BASE *v69; // rcx
  DXGCONTEXT *v70; // rdi
  _BYTE *v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  struct DXGGLOBAL *v74; // rax
  __int64 v75; // rcx
  struct DXGPROCESS *v76; // rax
  __int64 v77; // rcx
  __int64 v78; // r8
  struct DXGGLOBAL *v79; // rax
  __int64 v80; // rbx
  __int64 v81; // rcx
  __int64 v82; // r8
  struct DXGGLOBAL *v83; // rax
  __int64 v84; // [rsp+28h] [rbp-310h]
  struct DXGK_PRESENT_PARAMS *v85; // [rsp+30h] [rbp-308h]
  __int64 v86; // [rsp+38h] [rbp-300h]
  int v87; // [rsp+60h] [rbp-2D8h] BYREF
  __int64 v88; // [rsp+68h] [rbp-2D0h]
  unsigned __int64 v89; // [rsp+70h] [rbp-2C8h]
  int *v90; // [rsp+78h] [rbp-2C0h]
  char v91; // [rsp+80h] [rbp-2B8h]
  DXGCONTEXT *v92; // [rsp+88h] [rbp-2B0h] BYREF
  int AllocationInfo; // [rsp+90h] [rbp-2A8h] BYREF
  PVOID P; // [rsp+98h] [rbp-2A0h] BYREF
  _BYTE v95[32]; // [rsp+A0h] [rbp-298h] BYREF
  unsigned int v96; // [rsp+C0h] [rbp-278h]
  _QWORD v97[2]; // [rsp+C8h] [rbp-270h] BYREF
  PVOID v98; // [rsp+D8h] [rbp-260h]
  _BYTE v99[32]; // [rsp+E0h] [rbp-258h] BYREF
  unsigned int v100; // [rsp+100h] [rbp-238h]
  struct DXGADAPTER *v101; // [rsp+108h] [rbp-230h]
  struct DXGDEVICE *v102; // [rsp+110h] [rbp-228h] BYREF
  struct DXGPROCESS *v103; // [rsp+118h] [rbp-220h]
  unsigned int v104; // [rsp+120h] [rbp-218h]
  _BYTE v105[16]; // [rsp+128h] [rbp-210h] BYREF
  unsigned __int64 v106; // [rsp+138h] [rbp-200h]
  unsigned __int64 v107; // [rsp+140h] [rbp-1F8h]
  char v108[8]; // [rsp+148h] [rbp-1F0h] BYREF
  __int64 v109; // [rsp+150h] [rbp-1E8h]
  char v110; // [rsp+158h] [rbp-1E0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v111[2]; // [rsp+160h] [rbp-1D8h] BYREF
  ULONG64 v112; // [rsp+170h] [rbp-1C8h]
  __int64 v113; // [rsp+178h] [rbp-1C0h]
  PVOID Entry; // [rsp+180h] [rbp-1B8h]
  PVOID v115; // [rsp+188h] [rbp-1B0h]
  _QWORD v116[6]; // [rsp+190h] [rbp-1A8h] BYREF
  char v117; // [rsp+1C0h] [rbp-178h]
  _BYTE v118[24]; // [rsp+1C8h] [rbp-170h] BYREF
  _BYTE v119[32]; // [rsp+1E0h] [rbp-158h] BYREF
  _BYTE v120[64]; // [rsp+200h] [rbp-138h] BYREF
  PVOID v121; // [rsp+240h] [rbp-F8h] BYREF
  _BYTE v122[16]; // [rsp+248h] [rbp-F0h] BYREF
  unsigned int v123; // [rsp+258h] [rbp-E0h]
  _BYTE v124[24]; // [rsp+260h] [rbp-D8h] BYREF
  DXGADAPTER *v125; // [rsp+278h] [rbp-C0h]

  v112 = a1;
  AllocationInfo = -1073741811;
  Global = DXGGLOBAL::GetGlobal();
  v3 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 1136));
  v4 = (unsigned __int64)v3;
  Entry = v3;
  if ( !v3 )
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
  memset(v3, 0, 0x5F8uLL);
  v107 = v4;
  v88 = 0LL;
  v87 = 2020;
  v90 = &AllocationInfo;
  v91 = 0;
  v89 = v4 & -(__int64)(bTracingEnabled != 0);
  if ( (qword_1C013A870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v4 & -(__int64)(bTracingEnabled != 0), &EventProfilerEnter, v6, 2020);
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v87, 2020);
  Current = DXGPROCESS::GetCurrent(v7);
  v103 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v8);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    v12 = PsGetCurrentProcess(v11);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting from unexpected process 0x%I64x, returning 0x%I64x",
      v12,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v87);
    v15 = v89;
    if ( !v91 )
      goto LABEL_12;
    if ( v89 )
    {
LABEL_10:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v15,
          v14,
          *(_DWORD *)v15,
          *(_DWORD *)(v15 + 56),
          *(_QWORD *)(v15 + 80),
          *(_QWORD *)(v15 + 88),
          *(_DWORD *)(v15 + 1096),
          *v90);
    }
LABEL_15:
    if ( (qword_1C013A870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v87);
    goto LABEL_312;
  }
  v121 = 0LL;
  v123 = 0;
  P = 0LL;
  v96 = 0;
  v16 = (const void *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v16 = (const void *)MmUserProbeAddress;
  memmove((void *)v4, v16, 0x5D8uLL);
  v17 = (unsigned int)(*(_DWORD *)(v4 + 92) + 1);
  v104 = v17;
  if ( (unsigned int)(v17 - 1) > 0x40 )
  {
    v80 = v104;
    WdLogSingleEntry1(2LL, v104);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"SubmitPresentToHwQueue passed a wrong number of broadcast contexts 0x%d",
      v80,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( P != v95 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v96 = 0;
    if ( v121 != v122 && v121 )
      ExFreePoolWithTag(v121, 0);
    v121 = 0LL;
    v123 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v87);
    if ( v91 )
    {
      if ( v89 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          *(_QWORD *)(v89 + 88),
          *(_QWORD *)(v89 + 80),
          *(_DWORD *)v89,
          *(_DWORD *)(v89 + 56),
          *(_QWORD *)(v89 + 80),
          *(_QWORD *)(v89 + 88),
          *(_DWORD *)(v89 + 1096),
          *v90);
    }
    else if ( v89 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v89,
        v82,
        *(_DWORD *)v89,
        *(_QWORD *)(v89 + 8),
        *(_DWORD *)(v89 + 16),
        *(_DWORD *)(v89 + 84),
        *(_DWORD *)(v89 + 88),
        *v90,
        *(_DWORD *)(v89 + 20),
        *(_DWORD *)(v89 + 24));
    }
    if ( (qword_1C013A870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v81, &EventProfilerExit, v82, v87);
LABEL_312:
    v83 = DXGGLOBAL::GetGlobal();
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v83 + 1136), (PVOID)v4);
    return 3221225485LL;
  }
  if ( !PagedPoolZeroedArray<unsigned int,4>::AllocateElements((__int64 *)&v121, v17)
    || !PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements((__int64 *)&P, v17) )
  {
    if ( P != v95 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v96 = 0;
    if ( v121 != v122 && v121 )
      ExFreePoolWithTag(v121, 0);
    v121 = 0LL;
    v123 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v87);
    if ( v91 )
    {
      if ( v89 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          *(_QWORD *)(v89 + 88),
          *(_QWORD *)(v89 + 80),
          *(_DWORD *)v89,
          *(_DWORD *)(v89 + 56),
          *(_QWORD *)(v89 + 80),
          *(_QWORD *)(v89 + 88),
          *(_DWORD *)(v89 + 1096),
          *v90);
    }
    else if ( v89 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v89,
        v78,
        *(_DWORD *)v89,
        *(_QWORD *)(v89 + 8),
        *(_DWORD *)(v89 + 16),
        *(_DWORD *)(v89 + 84),
        *(_DWORD *)(v89 + 88),
        *v90,
        *(_DWORD *)(v89 + 20),
        *(_DWORD *)(v89 + 24));
    }
    if ( (qword_1C013A870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v77, &EventProfilerExit, v78, v87);
    v79 = DXGGLOBAL::GetGlobal();
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v79 + 1136), (PVOID)v4);
    return 3221225495LL;
  }
  v106 = 0LL;
  v18 = (const void **)v112;
  if ( v112 >= MmUserProbeAddress )
    v18 = (const void **)MmUserProbeAddress;
  v19 = *v18;
  v106 = (unsigned __int64)v19;
  v20 = v121;
  v115 = v121;
  v101 = (struct DXGADAPTER *)(unsigned int)v17;
  v21 = (ULONG64)v19 + 4 * v17;
  if ( v21 < (unsigned __int64)v19 || v21 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v20, v19, 4 * v17);
  v22 = 0LL;
  v113 = 0LL;
  if ( (*(_DWORD *)(v4 + 88) & 0x10000000) != 0 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v119, Current);
    v23 = (*(_DWORD *)(v4 + 1448) >> 6) & 0xFFFFFF;
    if ( v23 < *((_DWORD *)Current + 74) )
    {
      v24 = *((_QWORD *)Current + 35);
      v25 = *(_DWORD *)(v24 + 16LL * v23 + 8);
      if ( *(_DWORD *)(v4 + 1448) >> 30 == ((v25 >> 5) & 3) && (v25 & 0x2000) == 0 )
      {
        v26 = v25 & 0x1F;
        if ( v26 )
        {
          if ( v26 == 7 )
          {
            v22 = *(_QWORD *)(v24 + 16LL * v23);
LABEL_38:
            v113 = v22;
            if ( !v22 )
            {
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v119);
              goto LABEL_40;
            }
            _m_prefetchw((const void *)(v22 + 32));
            v27 = *(_QWORD *)(v22 + 32);
            do
            {
              if ( !v27 )
                break;
              v28 = v27;
              v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 32), v27 + 1, v27);
            }
            while ( v28 != v27 );
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v119);
            v102 = 0LL;
            DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
              (DXGDEVICEBYHANDLE *)&v92,
              *(_DWORD *)v4,
              (struct _KTHREAD **)v103,
              &v102);
            if ( !v102 )
            {
              if ( v92 && _InterlockedExchangeAdd64((volatile signed __int64 *)v92 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v92 + 2), v92);
              goto LABEL_64;
            }
            AllocationInfo = PreIndirectPresentReadAllocationInfo(
                               v103,
                               v102,
                               *(_DWORD *)(v4 + 20),
                               (struct INDIRECT_RESOURCE_INFO *)(v4 + 1516));
            if ( AllocationInfo < 0 )
              WdLogSingleEntry1(3LL, *(unsigned int *)(v4 + 20));
            if ( v92 && _InterlockedExchangeAdd64((volatile signed __int64 *)v92 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v92 + 2), v92);
            goto LABEL_61;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v22 = 0LL;
    goto LABEL_38;
  }
LABEL_61:
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v105, *(_DWORD *)v121, v103, (struct DXGHWQUEUE **)P, 0);
  if ( !*(_QWORD *)P )
  {
    WdLogSingleEntry3(2LL, v103, *(unsigned int *)v121, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed with invalid hHwQueue 0x%I64x returning 0x%I64x",
      (__int64)v103,
      *(unsigned int *)v121,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_63;
  }
  *(_QWORD *)(v4 + 1504) = P;
  if ( (*(_DWORD *)(v4 + 88) & 0x10000000) != 0 )
    v29 = v22;
  else
    v29 = *(_QWORD *)(*(_QWORD *)P + 16LL);
  v92 = (DXGCONTEXT *)v29;
  if ( *(_BYTE *)(v29 + 442) && *(_DWORD *)(v4 + 92) )
  {
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v105);
    if ( v22 )
      DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v22);
    if ( P != v95 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v96 = 0;
    if ( v121 != v122 && v121 )
      ExFreePoolWithTag(v121, 0);
    v121 = 0LL;
    v123 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v87);
    if ( v91 )
    {
      if ( v89 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v89,
          v31,
          *(_DWORD *)v89,
          *(_DWORD *)(v89 + 56),
          *(_QWORD *)(v89 + 80),
          *(_QWORD *)(v89 + 88),
          *(_DWORD *)(v89 + 1096),
          *v90);
    }
    else if ( v89 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v89,
        v31,
        *(_DWORD *)v89,
        *(_QWORD *)(v89 + 8),
        *(_DWORD *)(v89 + 16),
        *(_DWORD *)(v89 + 84),
        *(_DWORD *)(v89 + 88),
        *v90,
        *(_DWORD *)(v89 + 20),
        *(_DWORD *)(v89 + 24));
    }
    if ( (qword_1C013A870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v87);
    v32 = DXGGLOBAL::GetGlobal();
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v32 + 1136), (PVOID)v4);
    return 3221225474LL;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL) + 16LL) + 2792LL) & 8) != 0 )
  {
    WdLogSingleEntry1(2LL, v29);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Present is not supported on MCDM adapter context 0x%I64x",
      (__int64)v92,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_63;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v97,
    *(struct DXGDEVICE **)(v29 + 16));
  Pool2 = 0LL;
  v98 = 0LL;
  v100 = 0;
  if ( v104 <= 4 )
  {
    Pool2 = v99;
    v98 = v99;
    if ( v104 )
    {
      memset(v99, 0, 8LL * (_QWORD)v101);
      Pool2 = v98;
    }
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned __int64)v101 < 8 )
      goto LABEL_97;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8LL * (_QWORD)v101, 1265072196LL);
    v98 = Pool2;
  }
  v100 = v104;
LABEL_97:
  if ( !Pool2 )
  {
    WdLogSingleEntry1(3LL, 2381LL);
    goto LABEL_264;
  }
  *Pool2 = v92;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v118, v103);
  v107 = (unsigned __int64)v98;
  LODWORD(v101) = 0;
  if ( *(_DWORD *)(v4 + 92) )
  {
    v37 = 1;
    LODWORD(v102) = 1;
    while ( 1 )
    {
      v38 = v37;
      v106 = v37;
      if ( v37 >= v123 )
      {
        v39 = v121;
        v106 = v37;
      }
      else
      {
        v39 = (char *)v121 + 4 * v37;
      }
      v40 = (*v39 >> 6) & 0xFFFFFF;
      v41 = *v39 >> 30;
      if ( v40 >= *((_DWORD *)v103 + 74) )
        goto LABEL_120;
      v42 = *((_QWORD *)v103 + 35);
      v43 = *(_DWORD *)(v42 + 16LL * v40 + 8);
      if ( v41 != ((v43 >> 5) & 3) )
        goto LABEL_120;
      if ( (v43 & 0x2000) != 0 )
        goto LABEL_120;
      v44 = v43 & 0x1F;
      if ( !v44 )
        goto LABEL_120;
      if ( v44 != 15 )
        break;
      v45 = *(_QWORD *)(v42 + 16LL * v40);
LABEL_121:
      if ( v37 >= v96 )
        v46 = P;
      else
        v46 = (char *)P + 8 * v38;
      *v46 = v45;
      v47 = (char *)P;
      v48 = (char *)P + 8 * v38;
      if ( v37 >= v96 )
        v48 = P;
      if ( !*v48 )
      {
        if ( v37 >= v123 )
          v55 = (unsigned int *)v121;
        else
          v55 = (unsigned int *)((char *)v121 + 4 * v38);
        v56 = (unsigned int)((_DWORD)v101 + 1);
        v107 = (unsigned int)v56;
        WdLogSingleEntry2(2LL, *v55, v56);
        if ( (unsigned int)v56 >= v123 )
        {
          v58 = (unsigned int *)v121;
          v57 = v107;
        }
        else
        {
          v57 = (unsigned int)v56;
          v58 = (unsigned int *)((char *)v121 + 4 * v56);
        }
        v53 = *v58;
        v86 = 0LL;
        v85 = 0LL;
        v84 = v57;
        v54 = L"DxgkSubmitPresentToHwQueue failed with invalid HW queue handle 0x%x at index %d";
LABEL_145:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v54, v53, v84, (__int64)v85, v86, 0LL);
LABEL_138:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v118);
LABEL_139:
        if ( v98 != v99 && v98 )
          ExFreePoolWithTag(v98, 0);
        v98 = 0LL;
        v100 = 0;
        if ( v97[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v97);
LABEL_63:
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v105);
        if ( v22 )
LABEL_64:
          DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v22);
LABEL_40:
        if ( P != v95 && P )
          ExFreePoolWithTag(P, 0);
        v96 = 0;
        P = 0LL;
        if ( v121 != v122 && v121 )
          ExFreePoolWithTag(v121, 0);
        v121 = 0LL;
        v123 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v87);
        v15 = v89;
        if ( v91 )
        {
          if ( v89 )
            goto LABEL_10;
          goto LABEL_15;
        }
LABEL_12:
        if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
          McTemplateK0qpqqqqpp_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            v15,
            v14,
            *(_DWORD *)v15,
            *(_QWORD *)(v15 + 8),
            *(_DWORD *)(v15 + 16),
            *(_DWORD *)(v15 + 84),
            *(_DWORD *)(v15 + 88),
            *v90,
            *(_DWORD *)(v15 + 20),
            *(_DWORD *)(v15 + 24));
        goto LABEL_15;
      }
      if ( v37 < v96 )
        v47 = (char *)P + 8 * v38;
      *((_QWORD *)v98 + v38) = *(_QWORD *)(*(_QWORD *)v47 + 16LL);
      v49 = *((_QWORD *)v98 + v38);
      if ( !v49 || *(_QWORD *)(v49 + 16) != *((_QWORD *)v92 + 2) )
      {
        v52 = (struct DXGK_PRESENT_PARAMS *)(unsigned int)v101;
        WdLogSingleEntry4(
          2LL,
          v92,
          *(unsigned int *)(v4 + 4LL * (unsigned int)v101 + 96),
          (unsigned int)v101,
          -1073741811LL);
        v86 = -1073741811LL;
        v85 = v52;
        v84 = *(unsigned int *)(v4 + 4LL * (_QWORD)v52 + 96);
        v53 = (__int64)v92;
        v54 = L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x";
        goto LABEL_145;
      }
      v50 = (int)v101;
      if ( *(_DWORD *)(*(_QWORD *)(v107 + 8 * v38) + 400LL) <= *(_DWORD *)(*(_QWORD *)(v107 + 8LL * (unsigned int)v101)
                                                                         + 400LL) )
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
        goto LABEL_138;
      }
      LODWORD(v101) = (_DWORD)v101 + 1;
      LODWORD(v102) = ++v37;
      if ( (unsigned int)(v50 + 1) >= *(_DWORD *)(v4 + 92) )
        goto LABEL_134;
    }
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    v38 = v106;
    v37 = (unsigned int)v102;
LABEL_120:
    v45 = 0LL;
    goto LABEL_121;
  }
LABEL_134:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v118);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v116,
    v98,
    v100,
    v51,
    1);
  if ( v117 )
  {
    if ( !v116[0] )
    {
      WdLogSingleEntry1(3LL, 2453LL);
LABEL_263:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v116);
LABEL_264:
      if ( v98 != v99 && v98 )
        ExFreePoolWithTag(v98, 0);
      v100 = 0;
      v98 = 0LL;
      if ( v97[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v97);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v105);
      if ( v22 )
        DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v22);
      if ( P != v95 && P )
        ExFreePoolWithTag(P, 0);
      v96 = 0;
      P = 0LL;
      if ( v121 != v122 && v121 )
        ExFreePoolWithTag(v121, 0);
      v121 = 0LL;
      v123 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v87);
      if ( v91 )
      {
        if ( v89 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0qqxxqq_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            v89,
            v35,
            *(_DWORD *)v89,
            *(_DWORD *)(v89 + 56),
            *(_QWORD *)(v89 + 80),
            *(_QWORD *)(v89 + 88),
            *(_DWORD *)(v89 + 1096),
            *v90);
      }
      else if ( v89 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
      {
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v89,
          v35,
          *(_DWORD *)v89,
          *(_QWORD *)(v89 + 8),
          *(_DWORD *)(v89 + 16),
          *(_DWORD *)(v89 + 84),
          *(_DWORD *)(v89 + 88),
          *v90,
          *(_DWORD *)(v89 + 20),
          *(_DWORD *)(v89 + 24));
      }
      if ( (qword_1C013A870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v87);
      v36 = DXGGLOBAL::GetGlobal();
      ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v36 + 1136), (PVOID)v4);
      return 3221225495LL;
    }
    WdLogSingleEntry1(3LL, 2458LL);
LABEL_154:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v116);
    goto LABEL_139;
  }
  *(_QWORD *)(v4 + 1496) = v98;
  *(_BYTE *)(v4 + 1512) = 1;
  v101 = *(struct DXGADAPTER **)(*((_QWORD *)v92 + 2) + 1880LL);
  LODWORD(v102) = DXGCONTEXT::CopyPresentArgs(v92, (struct _D3DKMT_PRESENT *)v4, v103);
  AllocationInfo = (int)v102;
  if ( (int)v102 < 0 )
    goto LABEL_214;
  v59 = *(_DWORD *)(v4 + 88);
  if ( (v59 & 0x10000000) != 0 )
  {
    if ( !v101 )
    {
      WdLogSingleEntry1(2LL, 2479LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Indirect Display present has to be on a context associated with Dod",
        2479LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_154;
    }
    if ( (*((_DWORD *)v101 + 109) & 0x100) == 0 )
    {
      WdLogSingleEntry1(2LL, 2485LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Indirect Display present can only be used with a indirect display Dod driver",
        2485LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_154;
    }
    v63 = v101;
  }
  else
  {
    v63 = v101;
    if ( !v101 )
    {
LABEL_177:
      v63 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v92 + 2) + 16LL) + 16LL);
      goto LABEL_178;
    }
    if ( (*((_DWORD *)v101 + 109) & 0x100) != 0 && (v59 & 0x18000) == 0 )
    {
      WdLogSingleEntry1(2LL, 2495LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"No non-direct display presents can go to indirect display device",
        2495LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_154;
    }
  }
  if ( !v63 )
    goto LABEL_177;
LABEL_178:
  CWin32kLocks::CWin32kLocks((CWin32kLocks *)v120, *((const struct _DXGKWIN32KENG_INTERFACE *const *)v103 + 11), v63);
  v109 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v92 + 2) + 16LL) + 16LL);
  v110 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v108);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v124, *((_QWORD *)v92 + 2), 2, v64, 0);
  LODWORD(v102) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v124, 0LL);
  AllocationInfo = (int)v102;
  if ( (int)v102 < 0 )
  {
LABEL_211:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v124);
    if ( v110 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v108);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v120);
LABEL_214:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v116);
    if ( v98 != v99 && v98 )
      ExFreePoolWithTag(v98, 0);
    v100 = 0;
    v98 = 0LL;
    if ( v97[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v97);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v105);
    if ( v22 )
      DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v22);
    if ( P != v95 && P )
      ExFreePoolWithTag(P, 0);
    v96 = 0;
    P = 0LL;
    if ( v121 != v122 && v121 )
      ExFreePoolWithTag(v121, 0);
    v121 = 0LL;
    v123 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v87);
    if ( v91 )
    {
      if ( v89 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v89,
          v61,
          *(_DWORD *)v89,
          *(_DWORD *)(v89 + 56),
          *(_QWORD *)(v89 + 80),
          *(_QWORD *)(v89 + 88),
          *(_DWORD *)(v89 + 1096),
          *v90);
    }
    else if ( v89 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v89,
        v61,
        *(_DWORD *)v89,
        *(_QWORD *)(v89 + 8),
        *(_DWORD *)(v89 + 16),
        *(_DWORD *)(v89 + 84),
        *(_DWORD *)(v89 + 88),
        *v90,
        *(_DWORD *)(v89 + 20),
        *(_DWORD *)(v89 + 24));
    }
    if ( (qword_1C013A870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v60, &EventProfilerExit, v61, v87);
    v62 = DXGGLOBAL::GetGlobal();
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v62 + 1136), (PVOID)v4);
    return (unsigned int)v102;
  }
  if ( (*(_DWORD *)(v4 + 88) & 0x200000) != 0 )
  {
    v65 = SubmitPresentHistoryToken(
            (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v4 + 360),
            (struct COREDEVICEACCESS *)v124,
            (struct DXGADAPTERSTOPRESETLOCKSHARED *)v108,
            (struct CWin32kLocks *)v120,
            0,
            0LL,
            (struct DXGK_PRESENT_PARAMS *)v4,
            0LL,
            v92,
            0LL,
            0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v124);
    if ( v110 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v108);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v120);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v116);
    if ( v98 != v99 && v98 )
      ExFreePoolWithTag(v98, 0);
    v98 = 0LL;
    v100 = 0;
    if ( v97[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v97);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v105);
    if ( v22 )
      DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v22);
    if ( P != v95 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v96 = 0;
    if ( v121 != v122 && v121 )
      ExFreePoolWithTag(v121, 0);
    v121 = 0LL;
    v123 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v87);
    if ( v91 )
    {
      if ( v89 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v89,
          v67,
          *(_DWORD *)v89,
          *(_DWORD *)(v89 + 56),
          *(_QWORD *)(v89 + 80),
          *(_QWORD *)(v89 + 88),
          *(_DWORD *)(v89 + 1096),
          *v90);
    }
    else if ( v89 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v89,
        v67,
        *(_DWORD *)v89,
        *(_QWORD *)(v89 + 8),
        *(_DWORD *)(v89 + 16),
        *(_DWORD *)(v89 + 84),
        *(_DWORD *)(v89 + 88),
        *v90,
        *(_DWORD *)(v89 + 20),
        *(_DWORD *)(v89 + 24));
    }
    if ( (qword_1C013A870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v66, &EventProfilerExit, v67, v87);
    v68 = DXGGLOBAL::GetGlobal();
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v68 + 1136), (PVOID)v4);
    return v65;
  }
  v69 = *(struct VIDSCH_SUBMIT_DATA_BASE **)(*((_QWORD *)v92 + 2) + 16LL);
  v111[0] = 0LL;
  v111[1] = v69;
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v111);
  if ( !v111[0] )
  {
    WdLogSingleEntry1(6LL, 2537LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate VidSchSubmitData",
      2537LL,
      0LL,
      0LL,
      0LL,
      0LL);
    CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v111);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v124);
    if ( v110 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v108);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v120);
    goto LABEL_263;
  }
  v70 = v92;
  AllocationInfo = DXGCONTEXT::Present(
                     v92,
                     (struct _D3DKMT_PRESENT *)v4,
                     (struct COREDEVICEACCESS *)v124,
                     (struct DXGADAPTERSTOPRESETLOCKSHARED *)v108,
                     (struct CWin32kLocks *)v120,
                     (struct DXGCONTEXT **)v98,
                     v111[0]);
  if ( AllocationInfo == -1071775482 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(v125) )
    {
      LODWORD(v102) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v124, 0LL);
      if ( (int)v102 < 0 )
      {
        CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v111);
        goto LABEL_211;
      }
    }
    DXGDEVICE::CloseInternalCddPrimaryHandle(*((DXGDEVICE **)v70 + 2), (struct COREDEVICEACCESS *)v124);
  }
  CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v111);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v124);
  if ( v110 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v108);
  if ( AllocationInfo >= 0 )
  {
    v71 = (_BYTE *)(v112 + 1496);
    if ( v112 + 1496 >= MmUserProbeAddress )
      v71 = (_BYTE *)MmUserProbeAddress;
    *v71 = *(_BYTE *)(v4 + 1512);
  }
  CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v120);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v116);
  if ( v98 != v99 && v98 )
    ExFreePoolWithTag(v98, 0);
  v98 = 0LL;
  v100 = 0;
  if ( v97[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v97);
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v105);
  if ( v22 )
    DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v22);
  if ( P != v95 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v96 = 0;
  if ( v121 != v122 && v121 )
    ExFreePoolWithTag(v121, 0);
  v121 = 0LL;
  v123 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v87);
  if ( v91 )
  {
    if ( v89 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqxxqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v89,
        v73,
        *(_DWORD *)v89,
        *(_DWORD *)(v89 + 56),
        *(_QWORD *)(v89 + 80),
        *(_QWORD *)(v89 + 88),
        *(_DWORD *)(v89 + 1096),
        *v90);
  }
  else if ( v89 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
  {
    McTemplateK0qpqqqqpp_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      v89,
      v73,
      *(_DWORD *)v89,
      *(_QWORD *)(v89 + 8),
      *(_DWORD *)(v89 + 16),
      *(_DWORD *)(v89 + 84),
      *(_DWORD *)(v89 + 88),
      *v90,
      *(_DWORD *)(v89 + 20),
      *(_DWORD *)(v89 + 24));
  }
  if ( (qword_1C013A870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v72, &EventProfilerExit, v73, v87);
  v74 = DXGGLOBAL::GetGlobal();
  ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v74 + 1136), (PVOID)v4);
  v76 = DXGPROCESS::GetCurrent(v75);
  DXGWORKQUEUE::FlushQueue((PLIST_ENTRY)(*((_QWORD *)v76 + 8) + 104LL));
  return (unsigned int)AllocationInfo;
}
