/*
 * XREFs of ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C00F4480
 * Callers:
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023C830 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00033FC (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004EF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0005500 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x1C001A308 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EFD60 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C00F42B0 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00F4E90 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01077E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C0107B00 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020D704 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ??A?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$03@@QEAAAEAPEAVDXGHWQUEUE@@I@Z @ 0x1C022CCA4 (--A-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$03@@QEAAAEAPEAVDXGHWQUEUE@@I@Z.c)
 *     ?VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3DKMT_RENDER@@@Z @ 0x1C0246D10 (-VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026962C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C026D644 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C028F10C (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 */

__int64 __fastcall DxgkCddGdiCommand(struct _DXGKCDD_SUBMITRENDERTOHWQUEUE *a1, char *a2, __int64 a3)
{
  const struct _D3DKMT_RENDER *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r13
  unsigned int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rcx
  volatile signed __int64 **v23; // rax
  volatile signed __int64 *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  D3DKMT_HANDLE hDevice; // ebx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // r8
  int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // rdi
  signed __int64 v36; // rax
  signed __int64 v37; // rtt
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r9
  __int64 v41; // r12
  struct _KEVENT *v42; // rbx
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r13
  __int64 v47; // rbx
  unsigned int BroadcastContextCount; // eax
  char v49; // r15
  __int64 v50; // rbx
  _BYTE *PoolWithTag; // rax
  size_t v52; // rsi
  _BYTE *v53; // rax
  volatile signed __int64 *v54; // r14
  __int64 v55; // rbx
  _BYTE *v56; // rcx
  void *v57; // rsi
  __int64 v58; // r8
  unsigned __int64 i; // rbx
  struct DXGADAPTER *v60; // rbx
  __int64 v61; // r8
  unsigned __int64 v62; // rdx
  volatile signed __int64 *v63; // rcx
  volatile signed __int64 *v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // r8
  char *v67; // rbx
  __int64 v68; // rcx
  __int64 v69; // rax
  bool v70; // r15
  struct _D3DKMT_RENDER *v71; // r13
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // r12
  __int64 AllocationCount; // rsi
  struct DXGALLOCATION **v74; // rbx
  _BYTE *v75; // rbx
  int v76; // eax
  __int64 v77; // rdx
  struct DXGALLOCATION *v78; // rcx
  int v79; // r14d
  int v80; // eax
  unsigned int v81; // esi
  struct DXGADAPTER *v82; // rcx
  struct DXGADAPTER *v83; // rcx
  DXGGLOBAL **v84; // rcx
  _QWORD *v85; // rcx
  unsigned __int64 j; // rbx
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v93; // rcx
  unsigned __int8 v94; // bl
  __int64 v95; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v97; // rbx
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rax
  int v103; // r9d
  signed __int64 v104; // rax
  signed __int64 v105; // rtt
  __int64 v106; // rax
  int v107; // r9d
  __int64 v108; // rax
  _QWORD *v109; // rbx
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  int v114; // eax
  __int64 v115; // rbx
  _QWORD *v116; // rax
  unsigned int v117; // eax
  __int64 v118; // rax
  _QWORD *v119; // r15
  __int64 *v120; // r10
  int v121; // esi
  int v122; // r11d
  _QWORD *v123; // rax
  __int64 v124; // r9
  __int64 v125; // rax
  _QWORD *v126; // rax
  int v127; // eax
  char *v128; // rcx
  _QWORD *v129; // rax
  __int64 v130; // rax
  _QWORD *v131; // rax
  __int64 v132; // rcx
  _QWORD *v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rbx
  __int64 v138; // rax
  __int64 v139; // r9
  char *v140; // rdx
  __int64 v141; // rbx
  __int64 v142; // rax
  __int64 v143; // rdi
  struct DXGDEVICE *v144; // rbx
  __int64 v145; // rax
  __int64 v146; // r9
  char *v147; // rdx
  __int64 v148; // rbx
  __int64 v149; // rax
  __int64 v150; // r9
  char *v151; // rdx
  char v152; // [rsp+48h] [rbp-C0h]
  volatile signed __int64 *v153; // [rsp+50h] [rbp-B8h]
  __int64 v154; // [rsp+58h] [rbp-B0h]
  unsigned int v155[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v156; // [rsp+68h] [rbp-A0h]
  void *Base; // [rsp+70h] [rbp-98h]
  _BYTE v158[32]; // [rsp+78h] [rbp-90h] BYREF
  size_t NumOfElements; // [rsp+98h] [rbp-70h]
  char v160; // [rsp+A0h] [rbp-68h]
  char *v161; // [rsp+A8h] [rbp-60h]
  __int64 v162; // [rsp+B0h] [rbp-58h] BYREF
  struct DXGADAPTER *v163; // [rsp+B8h] [rbp-50h]
  char v164; // [rsp+C0h] [rbp-48h]
  int v165; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v166; // [rsp+D0h] [rbp-38h]
  char v167; // [rsp+D8h] [rbp-30h]
  void *Src; // [rsp+E0h] [rbp-28h]
  _BYTE v169[32]; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int v170; // [rsp+108h] [rbp+0h]
  PVOID v171; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v172[32]; // [rsp+118h] [rbp+10h] BYREF
  int v173; // [rsp+138h] [rbp+30h]
  struct _D3DKMT_RENDER *v174; // [rsp+140h] [rbp+38h]
  char v175[8]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v176; // [rsp+150h] [rbp+48h]
  char v177; // [rsp+158h] [rbp+50h]
  char v178[8]; // [rsp+160h] [rbp+58h] BYREF
  __int64 v179; // [rsp+168h] [rbp+60h]
  char v180; // [rsp+170h] [rbp+68h]
  char v181[8]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v182; // [rsp+180h] [rbp+78h]
  char v183; // [rsp+188h] [rbp+80h]
  _QWORD v184[2]; // [rsp+190h] [rbp+88h] BYREF
  _QWORD v185[2]; // [rsp+1A0h] [rbp+98h] BYREF
  _QWORD v186[3]; // [rsp+1B0h] [rbp+A8h] BYREF
  PVOID P; // [rsp+1C8h] [rbp+C0h]
  _BYTE v188[256]; // [rsp+1D0h] [rbp+C8h] BYREF
  int v189; // [rsp+2D0h] [rbp+1C8h]
  char v190[8]; // [rsp+2D8h] [rbp+1D0h] BYREF
  char v191[8]; // [rsp+2E0h] [rbp+1D8h] BYREF
  __int64 v192; // [rsp+2E8h] [rbp+1E0h]
  struct DXGADAPTER *v193; // [rsp+2F0h] [rbp+1E8h]
  char v194; // [rsp+2F8h] [rbp+1F0h]
  char *v195; // [rsp+300h] [rbp+1F8h]
  char v196[24]; // [rsp+308h] [rbp+200h] BYREF
  char v197[8]; // [rsp+320h] [rbp+218h] BYREF
  __int64 v198; // [rsp+328h] [rbp+220h]
  struct DXGADAPTER *v199; // [rsp+330h] [rbp+228h]
  char v200; // [rsp+338h] [rbp+230h]
  __int64 v201; // [rsp+340h] [rbp+238h]
  unsigned __int64 v202; // [rsp+360h] [rbp+258h]
  char v203; // [rsp+368h] [rbp+260h]
  char v204[8]; // [rsp+378h] [rbp+270h] BYREF
  char v205[64]; // [rsp+380h] [rbp+278h] BYREF
  char v206[88]; // [rsp+3C0h] [rbp+2B8h] BYREF
  char v207[8]; // [rsp+418h] [rbp+310h] BYREF
  char v208[64]; // [rsp+420h] [rbp+318h] BYREF
  char v209[88]; // [rsp+460h] [rbp+358h] BYREF
  char v210[8]; // [rsp+4B8h] [rbp+3B0h] BYREF
  char v211[64]; // [rsp+4C0h] [rbp+3B8h] BYREF
  char v212[88]; // [rsp+500h] [rbp+3F8h] BYREF
  char v213[8]; // [rsp+558h] [rbp+450h] BYREF
  char v214[64]; // [rsp+560h] [rbp+458h] BYREF
  char v215[88]; // [rsp+5A0h] [rbp+498h] BYREF

  v165 = -1;
  v161 = a2;
  v166 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v167 = 1;
    v165 = 3020;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3020);
  }
  else
  {
    v167 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v165, 3020LL);
  v4 = (const struct _D3DKMT_RENDER *)((char *)a1 + 8);
  v174 = (struct _D3DKMT_RENDER *)((char *)a1 + 8);
  CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v13 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v14 = *((_QWORD *)Current + 1), (v156 = v14) == 0) )
  {
    v14 = v13;
    v156 = v13;
  }
  if ( !v14 )
  {
    v81 = -1073741811;
    v97 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v97 + 24) = -1073741811LL;
    *(_QWORD *)(v97 + 32) = PsGetCurrentProcess(v99, v98, v100, v101);
    WdLogEvent5_WdError(v97);
    goto LABEL_124;
  }
  v15 = *(_DWORD *)a1;
  if ( v14 != -208 && *(struct _KTHREAD **)(v14 + 216) == KeGetCurrentThread() )
  {
    v102 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v102 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v102);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v14 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v103 = *(_DWORD *)(v14 + 232);
      if ( v103 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, &EventBlockThread, v17, v103);
    }
    ExAcquirePushLockSharedEx(v14 + 208, 0LL);
  }
  v18 = (v15 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v18 >= *(_DWORD *)(v14 + 256) )
    goto LABEL_19;
  v19 = *(_QWORD *)(v14 + 240);
  v20 = *(_DWORD *)(v19 + 16 * v18 + 8);
  if ( ((v15 >> 25) & 0x60) != (*(_BYTE *)(v19 + 16 * v18 + 8) & 0x60) || (v20 & 0x2000) != 0 || (v20 & 0x1F) == 0 )
    goto LABEL_19;
  v21 = 2LL * (unsigned int)v18;
  v22 = v20 & 0x1F;
  v23 = (volatile signed __int64 **)(v19 + 16LL * (unsigned int)v18);
  if ( (_BYTE)v22 != 15 )
  {
    v25 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v25 + 24) = 316LL;
    WdLogEvent5_WdError(v25);
    goto LABEL_19;
  }
  v24 = *v23;
  v153 = *v23;
  if ( !*v23 )
    goto LABEL_20;
  _m_prefetchw((const void *)(v24 + 11));
  v104 = *((_QWORD *)v24 + 11);
  if ( !v104 )
  {
LABEL_19:
    v153 = 0LL;
    goto LABEL_20;
  }
  while ( 1 )
  {
    v105 = v104;
    v104 = _InterlockedCompareExchange64(v24 + 11, v104 + 1, v104);
    if ( v105 == v104 )
      break;
    if ( !v104 )
      goto LABEL_19;
  }
LABEL_20:
  ExReleasePushLockSharedEx(v14 + 208, 0LL);
  KeLeaveCriticalRegion();
  hDevice = v4->hDevice;
  if ( v14 != -208 && *(struct _KTHREAD **)(v14 + 216) == KeGetCurrentThread() )
  {
    v106 = WdLogNewEntry5_WdAssertion(v27, v26);
    *(_QWORD *)(v106 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v106);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v14 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v107 = *(_DWORD *)(v14 + 232);
      if ( v107 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v29, &EventBlockThread, v30, v107);
    }
    ExAcquirePushLockSharedEx(v14 + 208, 0LL);
  }
  v31 = (hDevice >> 6) & 0xFFFFFF;
  if ( (unsigned int)v31 >= *(_DWORD *)(v14 + 256) )
    goto LABEL_33;
  v32 = *(_QWORD *)(v14 + 240);
  v33 = *(_DWORD *)(v32 + 16 * v31 + 8);
  if ( ((hDevice >> 25) & 0x60) != (*(_BYTE *)(v32 + 16 * v31 + 8) & 0x60) || (v33 & 0x2000) != 0 || (v33 & 0x1F) == 0 )
    goto LABEL_33;
  v34 = v33 & 0x1F;
  if ( (_BYTE)v34 != 7 )
  {
    v108 = WdLogNewEntry5_WdError(v34, 2LL * (unsigned int)v31);
    *(_QWORD *)(v108 + 24) = 316LL;
    WdLogEvent5_WdError(v108);
LABEL_33:
    v35 = 0LL;
    goto LABEL_34;
  }
  v35 = *(_QWORD *)(v32 + 16LL * (unsigned int)v31);
  if ( !v35 )
    goto LABEL_34;
  _m_prefetchw((const void *)(v35 + 32));
  v36 = *(_QWORD *)(v35 + 32);
  if ( !v36 )
    goto LABEL_33;
  while ( 1 )
  {
    v37 = v36;
    v36 = _InterlockedCompareExchange64((volatile signed __int64 *)(v35 + 32), v36 + 1, v36);
    if ( v37 == v36 )
      break;
    if ( !v36 )
      goto LABEL_33;
  }
LABEL_34:
  ExReleasePushLockSharedEx(v14 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( v35 )
  {
    v41 = *(_QWORD *)(v35 + 16);
    v154 = v41;
    if ( *(_BYTE *)(v35 + 457) )
    {
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v213, v41, 0, v40, 0);
      v114 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v213, 0LL);
      v115 = v114;
      if ( v114 >= 0 )
      {
        LODWORD(v115) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCddGdiCommand(
                          (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 16) + 16LL) + 16LL)
                                                       + 4240LL),
                          (struct DXGPROCESS *)v14,
                          (struct DXGCONTEXT *)v35,
                          v4);
      }
      else
      {
        v116 = (_QWORD *)WdLogNewEntry5_WdEvent();
        v116[3] = v115;
        v116[4] = v35;
        v116[5] = v14;
        WdLogEvent5_WdEvent(v116);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v215);
      COREACCESS::~COREACCESS((COREACCESS *)v214);
      v54 = v153;
      v81 = v115;
LABEL_122:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v137 = *(_QWORD *)(v35 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v184,
          (struct DXGDEVICE *)v137);
        v138 = *(_QWORD *)(v35 + 16);
        v177 = 0;
        v176 = *(_QWORD *)(*(_QWORD *)(v138 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v175);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v204, v137, 2, v139, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v204, v140);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v137 + 16) + 16LL) + 200LL) != 4 )
          DXGDEVICE::DestroyContext((DXGDEVICE *)v137, (struct DXGCONTEXT *)v35, (struct COREDEVICEACCESS *)v204);
        COREACCESS::~COREACCESS((COREACCESS *)v206);
        COREACCESS::~COREACCESS((COREACCESS *)v205);
        if ( v177 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v175);
        if ( v184[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v184);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v137 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v137 + 16), (struct DXGDEVICE *)v137);
      }
      goto LABEL_123;
    }
    v42 = *(struct _KEVENT **)(v41 + 16);
    if ( !KeReadStateEvent(v42 + 5) )
      KeWaitForSingleObject(&v42[5], Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v41 + 136), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v41 + 16) + 16LL) + 104LL));
      v94 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v41 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v93, &EventBlockThread, v95, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v41 + 136), 1u);
      if ( v94 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v41 + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v41 + 16) + 16LL) + 104LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v46 = *(_QWORD *)(v35 + 16);
    v47 = *(_QWORD *)(*(_QWORD *)(v46 + 16) + 16LL);
    if ( !*(_BYTE *)(v47 + 2614)
      || (*((_BYTE *)DXGPROCESS::GetCurrent() + 347) & 0x30) != 0
      || (*(_DWORD *)&v4->Flags & 0x40) != 0
      || *(int *)(v47 + 2328) < 0x2000
      || (v117 = *(_DWORD *)(v47 + 280), v117 <= 1) )
    {
      BroadcastContextCount = v4->BroadcastContextCount;
      v49 = 0;
    }
    else
    {
      BroadcastContextCount = v117 - 1;
      v49 = 1;
      v4->BroadcastContextCount = BroadcastContextCount;
    }
    v152 = v49;
    v50 = BroadcastContextCount + 1;
    if ( BroadcastContextCount > 0x40 )
    {
      v118 = WdLogNewEntry5_WdWarning(v44, v43, v45);
      v81 = -1073741811;
      *(_QWORD *)(v118 + 24) = v35;
      *(_QWORD *)(v118 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v118);
      v54 = v153;
LABEL_121:
      ExReleaseResourceLite(*(PERESOURCE *)(v41 + 136));
      KeLeaveCriticalRegion();
      goto LABEL_122;
    }
    Src = 0LL;
    v170 = 0;
    if ( (unsigned int)v50 > 4 )
    {
      v43 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v50;
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v50 < 8 )
        goto LABEL_222;
      v52 = 8 * v50;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v50, 0x4B677844u);
    }
    else
    {
      PoolWithTag = v169;
      v52 = 8 * v50;
    }
    Src = PoolWithTag;
    v170 = v50;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v52);
      if ( Src )
      {
        v171 = 0LL;
        v173 = 0;
        if ( (unsigned int)v50 > 4 )
        {
          v43 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v50;
          if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v50 < 8 )
            goto LABEL_218;
          v53 = ExAllocatePoolWithTag(PagedPool, v52, 0x4B677844u);
        }
        else
        {
          v53 = v172;
        }
        v171 = v53;
        v173 = v50;
        if ( v53 )
        {
          memset(v53, 0, v52);
          if ( v171 )
          {
            v54 = v153;
            *(_QWORD *)Src = v35;
            if ( v153 )
              *(_QWORD *)PagedPoolZeroedArray<DXGHWQUEUE *,4>::operator[](&v171, 0LL) = v153;
            if ( v49 )
            {
              v119 = Src;
              v120 = *(__int64 **)(v46 + 464);
              v121 = 0;
              v122 = 0;
              while ( v120 != (__int64 *)(v46 + 464) && v120 )
              {
                v43 = *((unsigned int *)v120 + 104);
                if ( (unsigned int)v43 >= (unsigned int)v50 )
                {
                  v125 = WdLogNewEntry5_WdError(v44, v43);
                  *(_QWORD *)(v125 + 32) = 2847LL;
                  goto LABEL_184;
                }
                v44 = (unsigned int)v43;
                if ( ((1 << v43) & v121) != 0 )
                {
                  v125 = WdLogNewEntry5_WdError((unsigned int)v43, v43);
                  *(_QWORD *)(v125 + 32) = 2854LL;
LABEL_184:
                  *(_QWORD *)(v125 + 24) = v35;
                  WdLogEvent5_WdError(v125);
                  v81 = -1073741811;
                  goto LABEL_219;
                }
                v121 |= 1 << v43;
                v119[v43] = v120;
                if ( (*((_DWORD *)v120 + 105) & 0x10) != 0 )
                {
                  v123 = (_QWORD *)PagedPoolZeroedArray<DXGHWQUEUE *,4>::operator[](&v171, v43);
                  *v123 = v124;
                }
                v120 = (__int64 *)*v120;
                ++v122;
              }
              if ( v122 != (_DWORD)v50 )
              {
                v125 = WdLogNewEntry5_WdError(v44, v43);
                *(_QWORD *)(v125 + 32) = 2877LL;
                goto LABEL_184;
              }
              v54 = v153;
            }
            v55 = v170;
            v56 = 0LL;
            v57 = Src;
            v58 = 0LL;
            Base = 0LL;
            LODWORD(NumOfElements) = 0;
            if ( v170 > 4 )
            {
              v43 = 0xFFFFFFFFFFFFFFFFuLL % v170;
              if ( 0xFFFFFFFFFFFFFFFFuLL / v170 < 8 )
              {
LABEL_57:
                v160 = 1;
                if ( !v56 )
                  goto LABEL_215;
                memmove(v56, v57, 8 * v58);
                qsort(
                  Base,
                  (unsigned int)NumOfElements,
                  8uLL,
                  (int (__cdecl *)(const void *, const void *))DxgkComparePointers);
                v43 = (unsigned int)NumOfElements;
                v58 = 1LL;
                v56 = Base;
                if ( (unsigned int)NumOfElements > 1uLL )
                {
                  while ( *((_QWORD *)Base + v58) != *((_QWORD *)Base + v58 - 1) )
                  {
                    if ( ++v58 >= (unsigned __int64)(unsigned int)NumOfElements )
                      goto LABEL_59;
                  }
                }
                else
                {
LABEL_59:
                  for ( i = 0LL; i < (unsigned int)NumOfElements; v56 = Base )
                    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)&v56[8 * i++] + 464LL));
                  v160 = 0;
                }
                if ( !v56 )
                {
LABEL_215:
                  v134 = WdLogNewEntry5_WdWarning(v56, v43, v58);
                  *(_QWORD *)(v134 + 24) = 2888LL;
                  WdLogEvent5_WdWarning(v134);
                  v81 = -1073741801;
LABEL_111:
                  v85 = Base;
                  if ( Base )
                  {
                    if ( !v160 )
                    {
                      for ( j = 0LL; j < (unsigned int)NumOfElements; v85 = Base )
                      {
                        v87 = v85[j] + 464LL;
                        *(_QWORD *)(v87 + 8) = 0LL;
                        ExReleasePushLockExclusiveEx(v87, 0LL);
                        KeLeaveCriticalRegion();
                        ++j;
                      }
                    }
                  }
                  if ( v85 != (_QWORD *)v158 && v85 )
                    ExFreePoolWithTag(v85, 0);
                  Base = 0LL;
                  LODWORD(NumOfElements) = 0;
LABEL_117:
                  if ( v171 != v172 && v171 )
                    ExFreePoolWithTag(v171, 0);
                  v171 = 0LL;
                  v173 = 0;
                  goto LABEL_119;
                }
                v163 = *(struct DXGADAPTER **)(*(_QWORD *)(v46 + 16) + 16LL);
                _InterlockedIncrement64((volatile signed __int64 *)v163 + 3);
                v60 = v163;
                v162 = -1LL;
                KeEnterCriticalRegion();
                ExAcquirePushLockSharedEx((char *)v60 + 136, 0LL);
                v164 = 1;
                v62 = *(_QWORD *)(v35 + 16);
                v63 = *(volatile signed __int64 **)(*(_QWORD *)(v62 + 16) + 16LL);
                v193 = (struct DXGADAPTER *)v63;
                v194 = 0;
                v195 = 0LL;
                if ( v63 )
                {
                  _InterlockedIncrement64(v63 + 3);
                  v192 = -1LL;
                }
                v64 = *(volatile signed __int64 **)(*(_QWORD *)(v62 + 16) + 16LL);
                v199 = (struct DXGADAPTER *)v64;
                v200 = 0;
                v201 = 0LL;
                if ( v64 )
                {
                  _InterlockedIncrement64(v64 + 3);
                  v198 = -1LL;
                }
                v202 = v62;
                v203 = 0;
                if ( v194 )
                {
                  v126 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v64, v62);
                  v126[5] = v191;
                  v126[3] = 275LL;
                  v126[4] = 4LL;
                  v126[6] = 0LL;
                  v126[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v126);
                }
                if ( KeGetCurrentThread() == *((struct _KTHREAD **)v193 + 23) )
                {
                  v67 = v161;
                }
                else
                {
                  if ( !KeReadStateEvent((PRKEVENT)v193 + 2) )
                  {
                    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                      McTemplateK0q_EtwWriteTransfer(v65, &EventBlockThread, v66, 72);
                    KeWaitForSingleObject((char *)v193 + 48, Executive, 0, 0, 0LL);
                  }
                  v67 = v161;
                  DXGADAPTER::AcquireCoreResourceShared(v193, v161);
                }
                v195 = 0LL;
                if ( v67 )
                {
                  v127 = RtlStringCbCopyA(v196, v62, v67);
                  v128 = v196;
                  if ( v127 < 0 )
                    v128 = v195;
                  v195 = v128;
                }
                v194 = 1;
                if ( *(_DWORD *)(v202 + 576) != 1 )
                {
                  COREACCESS::Release((COREACCESS *)v191);
                  if ( v203 )
                    COREACCESS::Release((COREACCESS *)v197);
                  v129 = (_QWORD *)WdLogNewEntry5_WdEvent();
                  v129[5] = v156;
                  v129[3] = -1073741130LL;
                  v129[4] = v35;
                  WdLogEvent5_WdEvent(v129);
                  v81 = -1073741130;
                  goto LABEL_96;
                }
                v68 = *(_QWORD *)(*(_QWORD *)(v35 + 16) + 16LL);
                v69 = *(_QWORD *)(v68 + 16);
                v70 = *(int *)(v69 + 2328) >= 0x2000 || *(_BYTE *)(v69 + 2628);
                v71 = v174;
                if ( (*(_DWORD *)&v174->Flags & 0x20) != 0 )
                  pNewAllocationList = v174->pNewAllocationList;
                else
                  pNewAllocationList = *(D3DDDI_ALLOCATIONLIST **)(v35 + 88);
                AllocationCount = v174->AllocationCount;
                v155[0] = v174->AllocationCount;
                v74 = 0LL;
                P = 0LL;
                v189 = 0;
                if ( !v70 )
                {
LABEL_84:
                  if ( v152 )
                    v80 = DXGCONTEXT::RenderKmLda(
                            v71,
                            (struct COREDEVICEACCESS *)v190,
                            (struct DXGCONTEXT **)Src,
                            v74,
                            (struct DXGHWQUEUE **)v171);
                  else
                    v80 = DXGCONTEXT::Render(
                            (DXGCONTEXT *)v35,
                            v71,
                            (struct COREDEVICEACCESS *)v190,
                            (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v162,
                            (struct DXGCONTEXT **)Src,
                            v74,
                            (struct DXGHWQUEUE **)v171);
                  v79 = v80;
LABEL_87:
                  if ( v70 && (_DWORD)AllocationCount )
                  {
                    do
                    {
                      v78 = *v74;
                      if ( *v74 )
                        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v78 + 11);
                      ++v74;
                      --AllocationCount;
                    }
                    while ( AllocationCount );
                  }
                  if ( v79 >= 0 )
                    goto LABEL_93;
                  switch ( v79 )
                  {
                    case -1073741811:
                    case -1073741592:
                      v133 = (_QWORD *)WdLogNewEntry5_WdError(v78, v77);
                      v133[3] = v79;
                      v133[5] = v156;
                      v133[4] = v35;
                      WdLogEvent5_WdError(v133);
                      goto LABEL_93;
                    case -1071775482:
                      v131 = (_QWORD *)WdLogNewEntry5_WdEvent();
                      v131[3] = -1071775482LL;
                      break;
                    case -1071774910:
                      goto LABEL_93;
                    default:
                      v131 = (_QWORD *)WdLogNewEntry5_WdEvent();
                      v131[3] = v79;
                      break;
                  }
                  v132 = v156;
                  v131[4] = v35;
                  v131[5] = v132;
                  WdLogEvent5_WdEvent(v131);
LABEL_93:
                  v81 = v79;
                  goto LABEL_94;
                }
                if ( (unsigned int)AllocationCount > 0x20 )
                {
                  v62 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)AllocationCount;
                  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)AllocationCount < 8 )
                    goto LABEL_205;
                  v75 = ExAllocatePoolWithTag(PagedPool, 8 * AllocationCount, 0x4B677844u);
                  P = v75;
                }
                else
                {
                  v75 = v188;
                  P = v188;
                }
                v189 = AllocationCount;
                if ( v75 )
                {
                  memset(v75, 0, 8 * AllocationCount);
                  v74 = (struct DXGALLOCATION **)P;
                  if ( P )
                  {
                    v76 = DxgkReferenceAllocationList(v155, pNewAllocationList, (struct DXGALLOCATION **)P, 0LL);
                    AllocationCount = v155[0];
                    v79 = v76;
                    if ( v76 < 0 )
                      goto LABEL_87;
                    goto LABEL_84;
                  }
                }
LABEL_205:
                v130 = WdLogNewEntry5_WdWarning(v68, v62, v61);
                *(_QWORD *)(v130 + 24) = 2928LL;
                WdLogEvent5_WdWarning(v130);
                v81 = -1073741801;
LABEL_94:
                if ( P != v188 && P )
                  ExFreePoolWithTag(P, 0);
                v41 = v154;
                v54 = v153;
                P = 0LL;
                v189 = 0;
LABEL_96:
                v82 = v199;
                if ( v199 )
                {
                  if ( v200 )
                  {
                    COREACCESS::Release((COREACCESS *)v197);
                    v82 = v199;
                  }
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v82 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v82 + 2), v82);
                }
                v83 = v193;
                if ( v193 )
                {
                  if ( v194 )
                  {
                    v194 = 0;
                    v83 = v193;
                    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v193 + 23) )
                    {
                      DXGADAPTER::ReleaseCoreResource(v193, v195);
                      v83 = v193;
                    }
                    v195 = 0LL;
                  }
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v83 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v83 + 2), v83);
                }
                if ( v164 )
                {
                  v164 = 0;
                  ExReleasePushLockSharedEx((char *)v163 + 136, 0LL);
                  KeLeaveCriticalRegion();
                  v84 = (DXGGLOBAL **)v163;
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v163 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    DXGGLOBAL::DestroyAdapter(v84[2], (struct DXGADAPTER *)v84);
                }
                goto LABEL_111;
              }
              v56 = ExAllocatePoolWithTag(PagedPool, 8LL * v170, 0x4B677844u);
              Base = v56;
            }
            else
            {
              v56 = v158;
              Base = v158;
            }
            LODWORD(NumOfElements) = v55;
            v58 = v55;
            if ( v56 )
            {
              memset(v56, 0, 8 * v55);
              v58 = (unsigned int)NumOfElements;
              v56 = Base;
            }
            goto LABEL_57;
          }
        }
LABEL_218:
        v135 = WdLogNewEntry5_WdWarning(v44, v43, v45);
        *(_QWORD *)(v135 + 24) = 2815LL;
        WdLogEvent5_WdWarning(v135);
        v81 = -1073741801;
LABEL_219:
        v54 = v153;
        goto LABEL_117;
      }
    }
LABEL_222:
    v136 = WdLogNewEntry5_WdWarning(v44, v43, v45);
    *(_QWORD *)(v136 + 24) = 2808LL;
    WdLogEvent5_WdWarning(v136);
    v54 = v153;
    v81 = -1073741801;
LABEL_119:
    if ( Src != v169 && Src )
      ExFreePoolWithTag(Src, 0);
    Src = 0LL;
    v170 = 0;
    goto LABEL_121;
  }
  v81 = -1073741811;
  v109 = (_QWORD *)WdLogNewEntry5_WdError(v39, v38);
  v109[3] = -1073741811LL;
  v109[4] = PsGetCurrentProcess(v111, v110, v112, v113);
  v109[5] = v4->hDevice;
  WdLogEvent5_WdError(v109);
  v54 = v153;
LABEL_123:
  if ( v54 )
  {
    v141 = _InterlockedDecrement64(v54 + 11);
    if ( v141 < 0 )
    {
      v142 = WdLogNewEntry5_WdAssertion(v89, v88);
      *(_QWORD *)(v142 + 24) = 111LL;
      WdLogEvent5_WdAssertion(v142);
    }
    if ( !v141 )
    {
      v143 = *((_QWORD *)v54 + 2);
      v144 = *(struct DXGDEVICE **)(v143 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v185, v144);
      v145 = *((_QWORD *)v144 + 2);
      v180 = 0;
      v179 = *(_QWORD *)(v145 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v178);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v207, (__int64)v144, 2, v146, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v207, v147);
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v144 + 2) + 16LL) + 200LL) != 4 )
        DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v143, (PVOID)v54, (struct COREDEVICEACCESS *)v207);
      COREACCESS::~COREACCESS((COREACCESS *)v209);
      COREACCESS::~COREACCESS((COREACCESS *)v208);
      if ( v180 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v178);
      if ( v185[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v185);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v143 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v148 = *(_QWORD *)(v143 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v186,
          (struct DXGDEVICE *)v148);
        v149 = *(_QWORD *)(v143 + 16);
        v183 = 0;
        v182 = *(_QWORD *)(*(_QWORD *)(v149 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v210, v148, 2, v150, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v210, v151);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v148 + 16) + 16LL) + 200LL) != 4 )
          DXGDEVICE::DestroyContext((DXGDEVICE *)v148, (struct DXGCONTEXT *)v143, (struct COREDEVICEACCESS *)v210);
        COREACCESS::~COREACCESS((COREACCESS *)v212);
        COREACCESS::~COREACCESS((COREACCESS *)v211);
        if ( v183 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
        if ( v186[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v186);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v148 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v148 + 16), (struct DXGDEVICE *)v148);
      }
    }
  }
LABEL_124:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v165, v88);
  if ( v167 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v90, &EventProfilerExit, v91, v165);
  return v81;
}
