/*
 * XREFs of DxgkSubmitPresentToHwQueue @ 0x1C0272670
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0005010 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00052C4 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0017974 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0017AD0 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0017BF8 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A448 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001A6D4 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z @ 0x1C0027A78 (--0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C0027AA4 (--1CWin32kLocks@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C0046F94 (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x1C00470B8 (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     McTemplateK0qpqqqqpp_EtwWriteTransfer @ 0x1C004730C (McTemplateK0qpqqqqpp_EtwWriteTransfer.c)
 *     McTemplateK0qqxxqq_EtwWriteTransfer @ 0x1C00473E4 (McTemplateK0qqxxqq_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107DA0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C010EC30 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C016A3E8 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C022CDB8 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0280184 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C0281B3C (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_.c)
 */

__int64 __fastcall DxgkSubmitPresentToHwQueue(__int64 a1, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax
  char *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  PSLIST_ENTRY v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  bool v28; // zf
  bool v29; // zf
  const void *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // eax
  unsigned int v34; // ebx
  __int64 v35; // rdx
  const void **v36; // rax
  char *v37; // rdx
  PVOID v38; // rcx
  size_t v39; // r8
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  unsigned int v44; // ecx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  signed __int64 v48; // rax
  signed __int64 v49; // rtt
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  _QWORD *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r12
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rdx
  struct DXGGLOBAL *v63; // rax
  union _SLIST_HEADER *v64; // rbx
  unsigned __int64 v65; // rdx
  _QWORD *PoolWithTag; // rcx
  size_t v67; // r8
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  bool v73; // zf
  unsigned int v74; // r11d
  unsigned int v75; // r8d
  struct DXGDEVICE *v76; // rdx
  _DWORD *v77; // rcx
  __int64 v78; // rax
  int v79; // r9d
  unsigned int v80; // ecx
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // r9
  __int64 v84; // rcx
  _QWORD *v85; // r10
  char *v86; // rax
  _QWORD *v87; // r9
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // rax
  __int64 v95; // rdx
  _QWORD *v96; // rax
  _QWORD *v97; // rcx
  __int64 v98; // rdx
  __int64 v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // rdx
  unsigned int *v102; // rax
  __int64 v103; // rax
  struct DXGADAPTER *v104; // r13
  __int64 v105; // rdx
  __int64 v106; // rdx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // rdx
  struct DXGGLOBAL *v111; // rax
  union _SLIST_HEADER *v112; // rbx
  __int64 v113; // rcx
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rdx
  struct DXGGLOBAL *v117; // rax
  union _SLIST_HEADER *v118; // rbx
  void (__fastcall *v119)(PSLIST_ENTRY, union _SLIST_HEADER *); // rax
  __int64 v120; // r9
  int v121; // r13d
  __int64 v122; // rdx
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // rdx
  struct DXGGLOBAL *v127; // rax
  union _SLIST_HEADER *v128; // rbx
  unsigned int v129; // r12d
  __int64 v130; // rdx
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // rdx
  struct DXGGLOBAL *v135; // rax
  union _SLIST_HEADER *v136; // rbx
  struct VIDSCH_SUBMIT_DATA_BASE *v137; // rcx
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rdx
  struct DXGGLOBAL *v145; // rax
  union _SLIST_HEADER *v146; // rbx
  void (__fastcall *Region)(PSLIST_ENTRY, union _SLIST_HEADER *); // rax
  _BYTE *v148; // rdx
  __int64 v149; // rdx
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // rdx
  struct DXGGLOBAL *v154; // rax
  union _SLIST_HEADER *v155; // rbx
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  struct DXGPROCESS *v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r8
  struct DXGGLOBAL *v164; // rax
  union _SLIST_HEADER *v165; // rbx
  __int64 v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // r8
  struct DXGGLOBAL *v171; // rax
  union _SLIST_HEADER *v172; // rbx
  int v173; // [rsp+60h] [rbp-2D8h] BYREF
  __int64 v174; // [rsp+68h] [rbp-2D0h]
  unsigned __int64 v175; // [rsp+70h] [rbp-2C8h]
  int *v176; // [rsp+78h] [rbp-2C0h]
  char v177; // [rsp+80h] [rbp-2B8h]
  int AllocationInfo; // [rsp+88h] [rbp-2B0h] BYREF
  PVOID P; // [rsp+90h] [rbp-2A8h] BYREF
  _BYTE v180[32]; // [rsp+98h] [rbp-2A0h] BYREF
  unsigned int v181; // [rsp+B8h] [rbp-280h]
  _QWORD v182[2]; // [rsp+C0h] [rbp-278h] BYREF
  struct DXGPROCESS *Current; // [rsp+D0h] [rbp-268h]
  PVOID v184; // [rsp+D8h] [rbp-260h]
  _BYTE v185[32]; // [rsp+E0h] [rbp-258h] BYREF
  unsigned int v186; // [rsp+100h] [rbp-238h]
  struct DXGDEVICE *v187; // [rsp+108h] [rbp-230h] BYREF
  _BYTE v188[16]; // [rsp+110h] [rbp-228h] BYREF
  size_t v189; // [rsp+120h] [rbp-218h]
  unsigned int v190; // [rsp+128h] [rbp-210h]
  struct DXGDEVICE *v191; // [rsp+130h] [rbp-208h] BYREF
  __int64 v192; // [rsp+138h] [rbp-200h]
  __int64 v193; // [rsp+140h] [rbp-1F8h]
  PSLIST_ENTRY ListEntry; // [rsp+148h] [rbp-1F0h]
  char v195[8]; // [rsp+150h] [rbp-1E8h] BYREF
  __int64 v196; // [rsp+158h] [rbp-1E0h]
  char v197; // [rsp+160h] [rbp-1D8h]
  struct VIDSCH_SUBMIT_DATA_BASE *v198[2]; // [rsp+168h] [rbp-1D0h] BYREF
  ULONG64 v199; // [rsp+178h] [rbp-1C0h]
  _QWORD *p_Next; // [rsp+180h] [rbp-1B8h]
  PVOID v201; // [rsp+188h] [rbp-1B0h]
  _QWORD v202[6]; // [rsp+190h] [rbp-1A8h] BYREF
  char v203; // [rsp+1C0h] [rbp-178h]
  _BYTE v204[24]; // [rsp+1C8h] [rbp-170h] BYREF
  _BYTE v205[32]; // [rsp+1E0h] [rbp-158h] BYREF
  _BYTE v206[64]; // [rsp+200h] [rbp-138h] BYREF
  PVOID v207; // [rsp+240h] [rbp-F8h] BYREF
  _BYTE v208[16]; // [rsp+248h] [rbp-F0h] BYREF
  unsigned int v209; // [rsp+258h] [rbp-E0h]
  _BYTE v210[24]; // [rsp+260h] [rbp-D8h] BYREF
  DXGADAPTER *v211; // [rsp+278h] [rbp-C0h]

  v199 = a1;
  AllocationInfo = -1073741811;
  Global = DXGGLOBAL::GetGlobal(a1, a2);
  v4 = (char *)Global + 1024;
  ++*((_DWORD *)Global + 261);
  v7 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 64);
  ListEntry = v7;
  if ( !v7 )
  {
    ++*((_DWORD *)v4 + 6);
    v7 = (PSLIST_ENTRY)(*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))v4 + 6))(
                         *((unsigned int *)v4 + 9),
                         *((unsigned int *)v4 + 11),
                         *((unsigned int *)v4 + 10),
                         v4);
    ListEntry = v7;
  }
  if ( !v7 )
  {
    v10 = WdLogNewEntry5_WdLowResource(v6, v5, v8, v9);
    *(_QWORD *)(v10 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v10);
    return 3221225495LL;
  }
  memset(v7, 0, 0x5F8uLL);
  p_Next = &v7->Next;
  v174 = 0LL;
  v173 = 2020;
  v176 = &AllocationInfo;
  v177 = 0;
  v175 = (unsigned __int64)v7 & -(__int64)(bTracingEnabled != 0);
  if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(
      (unsigned __int64)v7 & -(__int64)(bTracingEnabled != 0),
      &EventProfilerEnter,
      v12,
      2020);
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v173, 2020LL);
  Current = DXGPROCESS::GetCurrent(v14, v13, v15, v16);
  if ( !Current )
  {
    v19 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v19 + 24) = PsGetCurrentProcess(v21, v20, v22, v23);
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v173, v24);
    v27 = v175;
    if ( v177 )
    {
      if ( v175 )
        goto LABEL_12;
      goto LABEL_17;
    }
    if ( !v175 )
      goto LABEL_17;
    goto LABEL_15;
  }
  v207 = 0LL;
  v209 = 0;
  P = 0LL;
  v181 = 0;
  v30 = (const void *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v30 = (const void *)MmUserProbeAddress;
  memmove(v7, v30, 0x5D8uLL);
  v33 = *((_DWORD *)&v7[5].Next + 3);
  v34 = v33 + 1;
  v190 = v33 + 1;
  if ( v33 > 0x40 )
  {
    v166 = WdLogNewEntry5_WdError(v32, v31);
    *(_QWORD *)(v166 + 24) = v190;
    WdLogEvent5_WdError(v166);
    if ( P != v180 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v181 = 0;
    if ( v207 != v208 && v207 )
      ExFreePoolWithTag(v207, 0);
    v207 = 0LL;
    v209 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v173, v167);
    if ( v177 )
    {
      v170 = v175;
      if ( v175 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          *(_QWORD *)(v175 + 88),
          v175,
          *(_DWORD *)v175,
          *(_DWORD *)(v175 + 56),
          *(_QWORD *)(v175 + 80),
          *(_QWORD *)(v175 + 88),
          *(_DWORD *)(v175 + 1096),
          *v176);
    }
    else
    {
      v168 = v175;
      if ( v175 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v175,
          v170,
          *(_DWORD *)v175,
          *(_QWORD *)(v175 + 8),
          *(_DWORD *)(v175 + 16),
          *(_DWORD *)(v175 + 84),
          *(_DWORD *)(v175 + 88),
          *v176,
          *(_DWORD *)(v175 + 20),
          *(_DWORD *)(v175 + 24));
    }
    if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v169, &EventProfilerExit, v170, v173);
    v171 = DXGGLOBAL::GetGlobal(v169, v168);
    v172 = (union _SLIST_HEADER *)((char *)v171 + 1024);
    ++*((_DWORD *)v171 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v171 + 64) < *((_WORD *)v171 + 520) )
    {
      ExpInterlockedPushEntrySList(v172, v7);
    }
    else
    {
      ++LODWORD(v172[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v172[3].Region)(v7, v172);
    }
    return 3221225485LL;
  }
  if ( !PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&v207, v34)
    || !PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(&P, v34) )
  {
    if ( P != v180 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v181 = 0;
    if ( v207 != v208 && v207 )
      ExFreePoolWithTag(v207, 0);
    v207 = 0LL;
    v209 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v173, v35);
    if ( v177 )
    {
      v163 = v175;
      if ( v175 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          *(_QWORD *)(v175 + 88),
          v175,
          *(_DWORD *)v175,
          *(_DWORD *)(v175 + 56),
          *(_QWORD *)(v175 + 80),
          *(_QWORD *)(v175 + 88),
          *(_DWORD *)(v175 + 1096),
          *v176);
    }
    else
    {
      v161 = v175;
      if ( v175 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v175,
          v163,
          *(_DWORD *)v175,
          *(_QWORD *)(v175 + 8),
          *(_DWORD *)(v175 + 16),
          *(_DWORD *)(v175 + 84),
          *(_DWORD *)(v175 + 88),
          *v176,
          *(_DWORD *)(v175 + 20),
          *(_DWORD *)(v175 + 24));
    }
    if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v162, &EventProfilerExit, v163, v173);
    v164 = DXGGLOBAL::GetGlobal(v162, v161);
    v165 = (union _SLIST_HEADER *)((char *)v164 + 1024);
    ++*((_DWORD *)v164 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v164 + 64) < *((_WORD *)v164 + 520) )
    {
      ExpInterlockedPushEntrySList(v165, v7);
    }
    else
    {
      ++LODWORD(v165[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v165[3].Region)(v7, v165);
    }
    return 3221225495LL;
  }
  v193 = 0LL;
  v36 = (const void **)v199;
  if ( v199 >= MmUserProbeAddress )
    v36 = (const void **)MmUserProbeAddress;
  v37 = (char *)*v36;
  v193 = (__int64)v37;
  v38 = v207;
  v201 = v207;
  v189 = v34;
  v39 = 4LL * v34;
  if ( &v37[v39] < v37 || (unsigned __int64)&v37[v39] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v38, v37, v39);
  v40 = 0LL;
  v192 = 0LL;
  if ( (*(_DWORD *)(&v7[5].Next + 1) & 0x10000000) != 0 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v205, (struct _KTHREAD **)Current);
    v41 = (*((_DWORD *)&v7[90].Next + 2) >> 6) & 0xFFFFFF;
    v42 = *((_DWORD *)&v7[90].Next + 2) >> 30;
    if ( (unsigned int)v41 < *((_DWORD *)Current + 64) )
    {
      v43 = *((_QWORD *)Current + 30);
      v44 = *(_DWORD *)(v43 + 16 * v41 + 8);
      if ( (_DWORD)v42 == ((v44 >> 5) & 3) && (v44 & 0x2000) == 0 && (v44 & 0x1F) != 0 )
      {
        v45 = v44 & 0x1F;
        if ( (_BYTE)v45 == 7 )
        {
          v40 = *(_QWORD *)(v43 + 16LL * (unsigned int)v41);
          goto LABEL_38;
        }
        v46 = WdLogNewEntry5_WdError(v45, v42);
        *(_QWORD *)(v46 + 24) = 316LL;
        WdLogEvent5_WdError(v46);
      }
    }
    v40 = 0LL;
LABEL_38:
    v192 = v40;
    if ( !v40 )
    {
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v205);
      goto LABEL_40;
    }
    _m_prefetchw((const void *)(v40 + 32));
    v48 = *(_QWORD *)(v40 + 32);
    do
    {
      if ( !v48 )
        break;
      v49 = v48;
      v48 = _InterlockedCompareExchange64((volatile signed __int64 *)(v40 + 32), v48 + 1, v48);
    }
    while ( v49 != v48 );
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v205);
    v191 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
      (DXGDEVICEBYHANDLE *)&v187,
      LODWORD(v7->Next),
      (struct _KTHREAD **)Current,
      &v191);
    if ( !v191 )
    {
      if ( v187 && _InterlockedExchangeAdd64((volatile signed __int64 *)v187 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v187 + 2), v187);
      goto LABEL_59;
    }
    AllocationInfo = PreIndirectPresentReadAllocationInfo(
                       Current,
                       v191,
                       HIDWORD(v7[1].Next),
                       (struct INDIRECT_RESOURCE_INFO *)((char *)&v7[94].Next + 12));
    if ( AllocationInfo < 0 )
    {
      v53 = WdLogNewEntry5_WdWarning(v51, v50, v52);
      *(_QWORD *)(v53 + 24) = HIDWORD(v7[1].Next);
      WdLogEvent5_WdWarning(v53);
    }
    if ( v187 && _InterlockedExchangeAdd64((volatile signed __int64 *)v187 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v187 + 2), v187);
    v40 = v192;
  }
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
    (DXGHWQUEUEBYHANDLE *)v188,
    *(_DWORD *)v207,
    (struct _KTHREAD **)Current,
    (struct DXGHWQUEUE **)P,
    0);
  if ( !*(_QWORD *)P )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v55, v54);
    v56[3] = Current;
    v56[4] = *(unsigned int *)v207;
    v56[5] = -1073741811LL;
    WdLogEvent5_WdError(v56);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v188, v57);
    if ( !v40 )
    {
LABEL_40:
      if ( P != v180 && P )
        ExFreePoolWithTag(P, 0);
      v181 = 0;
      P = 0LL;
      if ( v207 != v208 && v207 )
        ExFreePoolWithTag(v207, 0);
      v207 = 0LL;
      v209 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v173, v47);
      v27 = v175;
      if ( v177 )
      {
        if ( v175 )
        {
LABEL_12:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0qqxxqq_EtwWriteTransfer(
              (REGHANDLE *)&DxgkControlGuid_Context,
              v27,
              v26,
              *(_DWORD *)v27,
              *(_DWORD *)(v27 + 56),
              *(_QWORD *)(v27 + 80),
              *(_QWORD *)(v27 + 88),
              *(_DWORD *)(v27 + 1096),
              *v176);
        }
LABEL_17:
        v28 = (qword_1C00B19B0 & 2) == 0;
        goto LABEL_18;
      }
      if ( !v175 )
        goto LABEL_17;
LABEL_15:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v27,
          v26,
          *(_DWORD *)v27,
          *(_QWORD *)(v27 + 8),
          *(_DWORD *)(v27 + 16),
          *(_DWORD *)(v27 + 84),
          *(_DWORD *)(v27 + 88),
          *v176,
          *(_DWORD *)(v27 + 20),
          *(_DWORD *)(v27 + 24));
      goto LABEL_17;
    }
LABEL_59:
    DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v40);
    goto LABEL_40;
  }
  v7[94].Next = (struct _SLIST_ENTRY *)P;
  if ( (*(_DWORD *)(&v7[5].Next + 1) & 0x10000000) != 0 )
    v58 = v40;
  else
    v58 = *(_QWORD *)(*(_QWORD *)P + 16LL);
  if ( *(_BYTE *)(v58 + 457) && *((_DWORD *)&v7[5].Next + 3) )
  {
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v188, v54);
    if ( v40 )
      DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v40);
    if ( P != v180 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v181 = 0;
    if ( v207 != v208 && v207 )
      ExFreePoolWithTag(v207, 0);
    v207 = 0LL;
    v209 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v173, v59);
    v62 = v175;
    if ( v177 )
    {
      if ( v175 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v175,
          v61,
          *(_DWORD *)v175,
          *(_DWORD *)(v175 + 56),
          *(_QWORD *)(v175 + 80),
          *(_QWORD *)(v175 + 88),
          *(_DWORD *)(v175 + 1096),
          *v176);
    }
    else if ( v175 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v175,
        v61,
        *(_DWORD *)v175,
        *(_QWORD *)(v175 + 8),
        *(_DWORD *)(v175 + 16),
        *(_DWORD *)(v175 + 84),
        *(_DWORD *)(v175 + 88),
        *v176,
        *(_DWORD *)(v175 + 20),
        *(_DWORD *)(v175 + 24));
    }
    if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v60, &EventProfilerExit, v61, v173);
    v63 = DXGGLOBAL::GetGlobal(v60, v62);
    v64 = (union _SLIST_HEADER *)((char *)v63 + 1024);
    ++*((_DWORD *)v63 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v63 + 64) < *((_WORD *)v63 + 520) )
    {
      ExpInterlockedPushEntrySList(v64, v7);
    }
    else
    {
      ++LODWORD(v64[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v64[3].Region)(v7, v64);
    }
    return 3221225474LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v182,
    *(struct DXGDEVICE **)(v58 + 16));
  PoolWithTag = 0LL;
  v184 = 0LL;
  v186 = 0;
  v67 = v189;
  if ( v190 <= 4 )
  {
    PoolWithTag = v185;
    v184 = v185;
    v67 = 8 * v189;
  }
  else
  {
    v65 = 0xFFFFFFFFFFFFFFFFuLL % v189;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v189 < 8 )
      goto LABEL_102;
    v193 = 8 * v189;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v189, 0x4B677844u);
    v184 = PoolWithTag;
    v67 = v193;
  }
  v186 = v190;
  if ( !PoolWithTag )
  {
LABEL_103:
    v68 = WdLogNewEntry5_WdWarning(PoolWithTag, v65, v67);
    *(_QWORD *)(v68 + 24) = 2153LL;
    WdLogEvent5_WdWarning(v68);
LABEL_138:
    if ( v184 != v185 && v184 )
      ExFreePoolWithTag(v184, 0);
    v186 = 0;
    v184 = 0LL;
    if ( v182[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v182);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v188, v69);
    if ( v40 )
      DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v40);
    if ( P != v180 && P )
      ExFreePoolWithTag(P, 0);
    v181 = 0;
    P = 0LL;
    if ( v207 != v208 && v207 )
      ExFreePoolWithTag(v207, 0);
    v207 = 0LL;
    v209 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v173, v95);
    v70 = v175;
    if ( v177 )
    {
      if ( v175 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v175,
          v72,
          *(_DWORD *)v175,
          *(_DWORD *)(v175 + 56),
          *(_QWORD *)(v175 + 80),
          *(_QWORD *)(v175 + 88),
          *(_DWORD *)(v175 + 1096),
          *v176);
    }
    else if ( v175 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v175,
        v72,
        *(_DWORD *)v175,
        *(_QWORD *)(v175 + 8),
        *(_DWORD *)(v175 + 16),
        *(_DWORD *)(v175 + 84),
        *(_DWORD *)(v175 + 88),
        *v176,
        *(_DWORD *)(v175 + 20),
        *(_DWORD *)(v175 + 24));
    }
    if ( (qword_1C00B19B0 & 2) == 0 )
      goto LABEL_338;
    v73 = (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0;
LABEL_336:
    if ( !v73 )
      McTemplateK0q_EtwWriteTransfer(v71, &EventProfilerExit, v72, v173);
LABEL_338:
    v145 = DXGGLOBAL::GetGlobal(v71, v70);
    v146 = (union _SLIST_HEADER *)((char *)v145 + 1024);
    ++*((_DWORD *)v145 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v145 + 64) < *((_WORD *)v145 + 520) )
    {
      ExpInterlockedPushEntrySList(v146, v7);
    }
    else
    {
      Region = (void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v146[3].Region;
      ++LODWORD(v146[2].Alignment);
      Region(v7, v146);
    }
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, v67);
  PoolWithTag = v184;
LABEL_102:
  if ( !PoolWithTag )
    goto LABEL_103;
  *PoolWithTag = v58;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v204, (struct _KTHREAD **)Current);
  p_Next = v184;
  v74 = 0;
  LODWORD(v189) = 0;
  if ( *((_DWORD *)&v7[5].Next + 3) )
  {
    v75 = 1;
    LODWORD(v187) = 1;
    while ( 1 )
    {
      v76 = (struct DXGDEVICE *)v75;
      v191 = (struct DXGDEVICE *)v75;
      if ( v75 >= v209 )
      {
        v77 = v207;
        v191 = (struct DXGDEVICE *)v75;
      }
      else
      {
        v77 = (char *)v207 + 4 * v75;
      }
      v78 = (*v77 >> 6) & 0xFFFFFF;
      v79 = *v77 >> 30;
      if ( (unsigned int)v78 >= *((_DWORD *)Current + 64) )
        goto LABEL_123;
      v193 = *((_QWORD *)Current + 30);
      v80 = *(_DWORD *)(v193 + 16 * v78 + 8);
      if ( v79 != ((v80 >> 5) & 3) || (v80 & 0x2000) != 0 || (v80 & 0x1F) == 0 )
        goto LABEL_123;
      v81 = v80 & 0x1F;
      if ( (_BYTE)v81 != 15 )
        break;
      v83 = *(_QWORD *)(v193 + 16LL * (unsigned int)v78);
LABEL_124:
      v84 = 8LL * (_QWORD)v76;
      v85 = P;
      if ( v75 < v181 )
        v85 = (char *)P + v84;
      *v85 = v83;
      v86 = (char *)P;
      v87 = (char *)P + v84;
      if ( v75 >= v181 )
        v87 = P;
      if ( !*v87 )
      {
        v101 = WdLogNewEntry5_WdError(v84, v76);
        if ( (unsigned int)v187 >= v209 )
          v102 = (unsigned int *)v207;
        else
          v102 = (unsigned int *)((char *)v207 + 4 * (_QWORD)v191);
        *(_QWORD *)(v101 + 24) = *v102;
        *(_QWORD *)(v101 + 32) = (unsigned int)(v189 + 1);
        v97 = (_QWORD *)v101;
LABEL_156:
        WdLogEvent5_WdError(v97);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v204);
LABEL_157:
        if ( v184 != v185 && v184 )
          ExFreePoolWithTag(v184, 0);
        v186 = 0;
        v184 = 0LL;
        if ( v182[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v182);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v188, v98);
        if ( v40 )
          DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v40);
        if ( P != v180 && P )
          ExFreePoolWithTag(P, 0);
        v181 = 0;
        P = 0LL;
        if ( v207 != v208 && v207 )
          ExFreePoolWithTag(v207, 0);
        v207 = 0LL;
        v209 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v173, v99);
        v27 = v175;
        if ( v177 )
        {
          if ( v175 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0qqxxqq_EtwWriteTransfer(
              (REGHANDLE *)&DxgkControlGuid_Context,
              v175,
              v26,
              *(_DWORD *)v175,
              *(_DWORD *)(v175 + 56),
              *(_QWORD *)(v175 + 80),
              *(_QWORD *)(v175 + 88),
              *(_DWORD *)(v175 + 1096),
              *v176);
        }
        else if ( v175 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          McTemplateK0qpqqqqpp_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            v175,
            v26,
            *(_DWORD *)v175,
            *(_QWORD *)(v175 + 8),
            *(_DWORD *)(v175 + 16),
            *(_DWORD *)(v175 + 84),
            *(_DWORD *)(v175 + 88),
            *v176,
            *(_DWORD *)(v175 + 20),
            *(_DWORD *)(v175 + 24));
        }
        v28 = (qword_1C00B19B0 & 2) == 0;
LABEL_18:
        if ( !v28 )
        {
          v29 = (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0;
LABEL_243:
          if ( !v29 )
            McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v173);
        }
        goto LABEL_245;
      }
      if ( v75 < v181 )
        v86 = (char *)P + v84;
      *((_QWORD *)v184 + (_QWORD)v76) = *(_QWORD *)(*(_QWORD *)v86 + 16LL);
      v88 = *((_QWORD *)v184 + (_QWORD)v76);
      if ( !v88 || (v88 = *(_QWORD *)(v88 + 16), v88 != *(_QWORD *)(v58 + 16)) )
      {
        v96 = (_QWORD *)WdLogNewEntry5_WdError(v88, v76);
        v96[3] = v58;
        v100 = (unsigned int)v189;
        v96[4] = *((unsigned int *)&v7[6].Next + (unsigned int)v189);
        v96[5] = v100;
        v96[6] = -1073741811LL;
        goto LABEL_155;
      }
      v89 = *(unsigned int *)(p_Next[(_QWORD)v76] + 416LL);
      v90 = p_Next[v74];
      if ( (unsigned int)v89 <= *(_DWORD *)(v90 + 416) )
      {
        v96 = (_QWORD *)WdLogNewEntry5_WdError(v90, v89);
        v96[3] = -1073741811LL;
LABEL_155:
        v97 = v96;
        goto LABEL_156;
      }
      v74 = v75;
      LODWORD(v189) = v75++;
      LODWORD(v187) = v75;
      if ( v74 >= *((_DWORD *)&v7[5].Next + 3) )
        goto LABEL_135;
    }
    v82 = WdLogNewEntry5_WdError(v81, v75);
    *(_QWORD *)(v82 + 24) = 316LL;
    WdLogEvent5_WdError(v82);
    v75 = (unsigned int)v187;
    v76 = v191;
    v74 = v189;
LABEL_123:
    v83 = 0LL;
    goto LABEL_124;
  }
LABEL_135:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v204);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v202,
    v184,
    v186);
  if ( v203 )
  {
    if ( v202[0] )
    {
      v103 = WdLogNewEntry5_WdWarning(v92, v91, v93);
      *(_QWORD *)(v103 + 24) = 2230LL;
      WdLogEvent5_WdWarning(v103);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v202);
      goto LABEL_157;
    }
    v94 = WdLogNewEntry5_WdWarning(v92, v91, v93);
    *(_QWORD *)(v94 + 24) = 2225LL;
    WdLogEvent5_WdWarning(v94);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v202);
    goto LABEL_138;
  }
  *((_QWORD *)&v7[93].Next + 1) = v184;
  *((_BYTE *)&v7[94].Next + 8) = 1;
  v104 = *(struct DXGADAPTER **)(*(_QWORD *)(v58 + 16) + 1848LL);
  LODWORD(v187) = DXGCONTEXT::CopyPresentArgs((DXGPRESENT **)v58, (struct _D3DKMT_PRESENT *)v7, Current);
  AllocationInfo = (int)v187;
  if ( (int)v187 < 0 )
  {
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v202);
    if ( v184 != v185 && v184 )
      ExFreePoolWithTag(v184, 0);
    v184 = 0LL;
    v186 = 0;
    if ( v182[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v182);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v188, v106);
    if ( v40 )
      DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v40);
    if ( P != v180 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v181 = 0;
    if ( v207 != v208 && v207 )
      ExFreePoolWithTag(v207, 0);
    v207 = 0LL;
    v209 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v173, v107);
    v110 = v175;
    if ( v177 )
    {
      if ( v175 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v175,
          v109,
          *(_DWORD *)v175,
          *(_DWORD *)(v175 + 56),
          *(_QWORD *)(v175 + 80),
          *(_QWORD *)(v175 + 88),
          *(_DWORD *)(v175 + 1096),
          *v176);
    }
    else if ( v175 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v175,
        v109,
        *(_DWORD *)v175,
        *(_QWORD *)(v175 + 8),
        *(_DWORD *)(v175 + 16),
        *(_DWORD *)(v175 + 84),
        *(_DWORD *)(v175 + 88),
        *v176,
        *(_DWORD *)(v175 + 20),
        *(_DWORD *)(v175 + 24));
    }
    if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v108, &EventProfilerExit, v109, v173);
    v111 = DXGGLOBAL::GetGlobal(v108, v110);
    v112 = (union _SLIST_HEADER *)((char *)v111 + 1024);
    ++*((_DWORD *)v111 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v111 + 64) < *((_WORD *)v111 + 520) )
    {
      ExpInterlockedPushEntrySList(v112, v7);
    }
    else
    {
      ++LODWORD(v112[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v112[3].Region)(v7, v112);
    }
    return (unsigned int)v187;
  }
  v113 = *((unsigned int *)&v7[5].Next + 2);
  if ( (v113 & 0x10000000) != 0 )
  {
    if ( !v104 )
    {
      v114 = WdLogNewEntry5_WdError(v113, v105);
      *(_QWORD *)(v114 + 24) = 2251LL;
      goto LABEL_221;
    }
    if ( (*((_DWORD *)v104 + 87) & 0x100) == 0 )
    {
      v114 = WdLogNewEntry5_WdError(v113, v105);
      *(_QWORD *)(v114 + 24) = 2257LL;
      goto LABEL_221;
    }
    goto LABEL_251;
  }
  if ( !v104 )
  {
    v104 = *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v58 + 16) + 16LL) + 16LL);
    goto LABEL_251;
  }
  if ( (*((_DWORD *)v104 + 87) & 0x100) == 0 || (v113 & 0x18000) != 0 )
  {
LABEL_251:
    CWin32kLocks::CWin32kLocks(
      (CWin32kLocks *)v206,
      *((const struct _DXGKWIN32KENG_INTERFACE *const *)Current + 11),
      v104);
    v196 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v58 + 16) + 16LL) + 16LL);
    v197 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v195);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v210, *(_QWORD *)(v58 + 16), 2, v120, 0);
    v121 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v210, 0LL);
    AllocationInfo = v121;
    if ( v121 < 0 )
    {
LABEL_252:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v210);
      if ( v197 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v195);
      CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v206);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v202);
      if ( v184 != v185 && v184 )
        ExFreePoolWithTag(v184, 0);
      v186 = 0;
      v184 = 0LL;
      if ( v182[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v182);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v188, v122);
      if ( v40 )
        DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v40);
      if ( P != v180 && P )
        ExFreePoolWithTag(P, 0);
      v181 = 0;
      P = 0LL;
      if ( v207 != v208 && v207 )
        ExFreePoolWithTag(v207, 0);
      v207 = 0LL;
      v209 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v173, v123);
      v126 = v175;
      if ( v177 )
      {
        if ( v175 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0qqxxqq_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            v175,
            v125,
            *(_DWORD *)v175,
            *(_DWORD *)(v175 + 56),
            *(_QWORD *)(v175 + 80),
            *(_QWORD *)(v175 + 88),
            *(_DWORD *)(v175 + 1096),
            *v176);
      }
      else if ( v175 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v175,
          v125,
          *(_DWORD *)v175,
          *(_QWORD *)(v175 + 8),
          *(_DWORD *)(v175 + 16),
          *(_DWORD *)(v175 + 84),
          *(_DWORD *)(v175 + 88),
          *v176,
          *(_DWORD *)(v175 + 20),
          *(_DWORD *)(v175 + 24));
      }
      if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v124, &EventProfilerExit, v125, v173);
      v127 = DXGGLOBAL::GetGlobal(v124, v126);
      v128 = (union _SLIST_HEADER *)((char *)v127 + 1024);
      ++*((_DWORD *)v127 + 263);
      if ( ExQueryDepthSList((PSLIST_HEADER)v127 + 64) < *((_WORD *)v127 + 520) )
      {
        ExpInterlockedPushEntrySList(v128, v7);
      }
      else
      {
        ++LODWORD(v128[2].Alignment);
        ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v128[3].Region)(v7, v128);
      }
      return (unsigned int)v121;
    }
    if ( (*(_DWORD *)(&v7[5].Next + 1) & 0x200000) != 0 )
    {
      v129 = SubmitPresentHistoryToken(
               (const struct _D3DKMT_PRESENTHISTORYTOKEN *)(&v7[22].Next + 1),
               (struct COREDEVICEACCESS *)v210,
               (__int64)v195,
               (struct CWin32kLocks *)v206,
               0,
               0LL,
               (struct DXGK_PRESENT_PARAMS *)v7,
               0LL,
               (struct DXGCONTEXT *)v58,
               0LL,
               0LL);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v210);
      if ( v197 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v195);
      CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v206);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v202);
      if ( v184 != v185 && v184 )
        ExFreePoolWithTag(v184, 0);
      v184 = 0LL;
      v186 = 0;
      if ( v182[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v182);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v188, v130);
      if ( v40 )
        DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v40);
      if ( P != v180 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v181 = 0;
      if ( v207 != v208 && v207 )
        ExFreePoolWithTag(v207, 0);
      v207 = 0LL;
      v209 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v173, v131);
      v134 = v175;
      if ( v177 )
      {
        if ( v175 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0qqxxqq_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            v175,
            v133,
            *(_DWORD *)v175,
            *(_DWORD *)(v175 + 56),
            *(_QWORD *)(v175 + 80),
            *(_QWORD *)(v175 + 88),
            *(_DWORD *)(v175 + 1096),
            *v176);
      }
      else if ( v175 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v175,
          v133,
          *(_DWORD *)v175,
          *(_QWORD *)(v175 + 8),
          *(_DWORD *)(v175 + 16),
          *(_DWORD *)(v175 + 84),
          *(_DWORD *)(v175 + 88),
          *v176,
          *(_DWORD *)(v175 + 20),
          *(_DWORD *)(v175 + 24));
      }
      if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v132, &EventProfilerExit, v133, v173);
      v135 = DXGGLOBAL::GetGlobal(v132, v134);
      v136 = (union _SLIST_HEADER *)((char *)v135 + 1024);
      ++*((_DWORD *)v135 + 263);
      if ( ExQueryDepthSList((PSLIST_HEADER)v135 + 64) < *((_WORD *)v135 + 520) )
      {
        ExpInterlockedPushEntrySList(v136, v7);
      }
      else
      {
        ++LODWORD(v136[2].Alignment);
        ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v136[3].Region)(v7, v136);
      }
      return v129;
    }
    v137 = *(struct VIDSCH_SUBMIT_DATA_BASE **)(*(_QWORD *)(v58 + 16) + 16LL);
    v198[0] = 0LL;
    v198[1] = v137;
    CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v198);
    if ( !v198[0] )
    {
      v142 = WdLogNewEntry5_WdLowResource(v139, v138, v140, v141);
      *(_QWORD *)(v142 + 24) = 2309LL;
      WdLogEvent5_WdLowResource(v142);
      CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v198);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v210);
      if ( v197 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v195);
      CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v206);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v202);
      if ( v184 != v185 && v184 )
        ExFreePoolWithTag(v184, 0);
      v184 = 0LL;
      v186 = 0;
      if ( v182[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v182);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v188, v143);
      if ( v40 )
        DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v40);
      if ( P != v180 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v181 = 0;
      if ( v207 != v208 && v207 )
        ExFreePoolWithTag(v207, 0);
      v207 = 0LL;
      v209 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v173, v144);
      v70 = v175;
      if ( v177 )
      {
        if ( v175 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0qqxxqq_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            v175,
            v72,
            *(_DWORD *)v175,
            *(_DWORD *)(v175 + 56),
            *(_QWORD *)(v175 + 80),
            *(_QWORD *)(v175 + 88),
            *(_DWORD *)(v175 + 1096),
            *v176);
      }
      else if ( v175 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v175,
          v72,
          *(_DWORD *)v175,
          *(_QWORD *)(v175 + 8),
          *(_DWORD *)(v175 + 16),
          *(_DWORD *)(v175 + 84),
          *(_DWORD *)(v175 + 88),
          *v176,
          *(_DWORD *)(v175 + 20),
          *(_DWORD *)(v175 + 24));
      }
      if ( (qword_1C00B19B0 & 2) == 0 )
        goto LABEL_338;
      v73 = (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0;
      goto LABEL_336;
    }
    AllocationInfo = DXGCONTEXT::Present(
                       (DXGCONTEXT *)v58,
                       (struct _D3DKMT_PRESENT *)v7,
                       (struct COREDEVICEACCESS *)v210,
                       (struct DXGADAPTERSTOPRESETLOCKSHARED *)v195,
                       (struct CWin32kLocks *)v206,
                       (struct DXGCONTEXT **)v184,
                       v198[0]);
    if ( AllocationInfo == -1071775482 )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v211) )
      {
        v121 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v210, 0LL);
        if ( v121 < 0 )
        {
          CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v198);
          goto LABEL_252;
        }
      }
      DXGDEVICE::CloseInternalCddPrimaryHandle(*(DXGDEVICE **)(v58 + 16), (struct COREDEVICEACCESS *)v210);
    }
    CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v198);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v210);
    if ( v197 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v195);
    if ( AllocationInfo >= 0 )
    {
      v148 = (_BYTE *)(v199 + 1496);
      if ( v199 + 1496 >= MmUserProbeAddress )
        v148 = (_BYTE *)MmUserProbeAddress;
      *v148 = *((_BYTE *)&v7[94].Next + 8);
    }
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v206);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v202);
    if ( v184 != v185 && v184 )
      ExFreePoolWithTag(v184, 0);
    v184 = 0LL;
    v186 = 0;
    if ( v182[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v182);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v188, v149);
    if ( v40 )
      DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v40);
    if ( P != v180 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v181 = 0;
    if ( v207 != v208 && v207 )
      ExFreePoolWithTag(v207, 0);
    v207 = 0LL;
    v209 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v173, v150);
    v153 = v175;
    if ( v177 )
    {
      if ( v175 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v175,
          v152,
          *(_DWORD *)v175,
          *(_DWORD *)(v175 + 56),
          *(_QWORD *)(v175 + 80),
          *(_QWORD *)(v175 + 88),
          *(_DWORD *)(v175 + 1096),
          *v176);
    }
    else if ( v175 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v175,
        v152,
        *(_DWORD *)v175,
        *(_QWORD *)(v175 + 8),
        *(_DWORD *)(v175 + 16),
        *(_DWORD *)(v175 + 84),
        *(_DWORD *)(v175 + 88),
        *v176,
        *(_DWORD *)(v175 + 20),
        *(_DWORD *)(v175 + 24));
    }
    if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v151, &EventProfilerExit, v152, v173);
    v154 = DXGGLOBAL::GetGlobal(v151, v153);
    v155 = (union _SLIST_HEADER *)((char *)v154 + 1024);
    ++*((_DWORD *)v154 + 263);
    if ( ExQueryDepthSList((PSLIST_HEADER)v154 + 64) < *((_WORD *)v154 + 520) )
    {
      ExpInterlockedPushEntrySList(v155, v7);
    }
    else
    {
      ++LODWORD(v155[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v155[3].Region)(v7, v155);
    }
    v160 = DXGPROCESS::GetCurrent(v157, v156, v158, v159);
    DXGWORKQUEUE::FlushQueue((PLIST_ENTRY)(*((_QWORD *)v160 + 8) + 88LL));
    return (unsigned int)AllocationInfo;
  }
  v114 = WdLogNewEntry5_WdError(v113, v105);
  *(_QWORD *)(v114 + 24) = 2267LL;
LABEL_221:
  WdLogEvent5_WdError(v114);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v202);
  if ( v184 != v185 && v184 )
    ExFreePoolWithTag(v184, 0);
  v184 = 0LL;
  v186 = 0;
  if ( v182[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v182);
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v188, v115);
  if ( v40 )
    DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v40);
  if ( P != v180 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v181 = 0;
  if ( v207 != v208 && v207 )
    ExFreePoolWithTag(v207, 0);
  v207 = 0LL;
  v209 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v173, v116);
  v27 = v175;
  if ( v177 )
  {
    if ( v175 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqxxqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v175,
        v26,
        *(_DWORD *)v175,
        *(_DWORD *)(v175 + 56),
        *(_QWORD *)(v175 + 80),
        *(_QWORD *)(v175 + 88),
        *(_DWORD *)(v175 + 1096),
        *v176);
  }
  else if ( v175 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    McTemplateK0qpqqqqpp_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      v175,
      v26,
      *(_DWORD *)v175,
      *(_QWORD *)(v175 + 8),
      *(_DWORD *)(v175 + 16),
      *(_DWORD *)(v175 + 84),
      *(_DWORD *)(v175 + 88),
      *v176,
      *(_DWORD *)(v175 + 20),
      *(_DWORD *)(v175 + 24));
  }
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v29 = (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0;
    goto LABEL_243;
  }
LABEL_245:
  v117 = DXGGLOBAL::GetGlobal(v25, v27);
  v118 = (union _SLIST_HEADER *)((char *)v117 + 1024);
  ++*((_DWORD *)v117 + 263);
  if ( ExQueryDepthSList((PSLIST_HEADER)v117 + 64) < *((_WORD *)v117 + 520) )
  {
    ExpInterlockedPushEntrySList(v118, v7);
  }
  else
  {
    v119 = (void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v118[3].Region;
    ++LODWORD(v118[2].Alignment);
    v119(v7, v118);
  }
  return 3221225485LL;
}
