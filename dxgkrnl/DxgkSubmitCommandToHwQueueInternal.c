/*
 * XREFs of DxgkSubmitCommandToHwQueueInternal @ 0x1C0222C18
 * Callers:
 *     DxgkSubmitCommandToHwQueue @ 0x1C03198D0 (DxgkSubmitCommandToHwQueue.c)
 *     ?VmBusSubmitCommandToHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038F760 (-VmBusSubmitCommandToHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0001198 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0001314 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0006AAC (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006C80 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0024424 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00250B4 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0025314 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z @ 0x1C022245C (-SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z.c)
 *     ?VmBusSendSubmitCommandToHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x1C038AB24 (-VmBusSendSubmitCommandToHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_SU.c)
 */

__int64 __fastcall DxgkSubmitCommandToHwQueueInternal(struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *a1, char a2, __int64 a3)
{
  struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 CurrentProcess; // rax
  int v9; // esi
  __int64 v10; // rcx
  __int64 v11; // rax
  DXGHWQUEUE *v12; // r14
  const wchar_t *v13; // r9
  unsigned int NumPrimaries; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rsi
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // r8
  bool v25; // sf
  __int64 v26; // r9
  __int64 v27; // [rsp+28h] [rbp-1A0h]
  __int64 v28; // [rsp+30h] [rbp-198h]
  __int64 v29; // [rsp+38h] [rbp-190h]
  int v30; // [rsp+50h] [rbp-178h] BYREF
  __int64 v31; // [rsp+58h] [rbp-170h]
  char v32; // [rsp+60h] [rbp-168h]
  DXGHWQUEUE *v33[2]; // [rsp+68h] [rbp-160h] BYREF
  _BYTE v34[16]; // [rsp+78h] [rbp-150h] BYREF
  _BYTE v35[8]; // [rsp+88h] [rbp-140h] BYREF
  __int64 v36; // [rsp+90h] [rbp-138h]
  char v37; // [rsp+98h] [rbp-130h]
  struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *v38; // [rsp+A0h] [rbp-128h]
  __int128 v39; // [rsp+A8h] [rbp-120h] BYREF
  __int128 v40; // [rsp+B8h] [rbp-110h]
  __int128 v41; // [rsp+C8h] [rbp-100h]
  const D3DKMT_HANDLE *WrittenPrimaries; // [rsp+D8h] [rbp-F0h]
  _BYTE v43[32]; // [rsp+E0h] [rbp-E8h] BYREF
  _BYTE v44[160]; // [rsp+100h] [rbp-C8h] BYREF

  v4 = a1;
  v30 = -1;
  v31 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v32 = 1;
    v30 = 2160;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2160);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 2160);
  Current = DXGPROCESS::GetCurrent(v5);
  v33[0] = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v6);
    v9 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    v11 = PsGetCurrentProcess(v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v11,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_19;
  }
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  WrittenPrimaries = 0LL;
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *)MmUserProbeAddress;
    v39 = *(_OWORD *)&v4->hHwQueue;
    v40 = *(_OWORD *)&v4->CommandBuffer;
    v41 = *(_OWORD *)&v4->pPrivateDriverData;
    WrittenPrimaries = v4->WrittenPrimaries;
    v4 = (struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *)&v39;
  }
  v38 = v4;
  v33[0] = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v34, v4->hHwQueue, Current, v33, 0);
  v12 = v33[0];
  if ( !v33[0] )
  {
    v9 = -1073741811;
    WdLogSingleEntry3(2LL, Current, v4->hHwQueue, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed with invalid hHwQueue 0x%I64x returning 0x%I64x",
      (__int64)Current,
      v4->hHwQueue,
      -1073741811LL,
      0LL,
      0LL);
LABEL_18:
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v34);
LABEL_19:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v30);
    }
    return (unsigned int)v9;
  }
  if ( *((_BYTE *)v33[0] + 140) )
  {
    v9 = -1073741811;
    WdLogSingleEntry2(2LL, v33[0], -1073741811LL);
    v29 = 0LL;
    v28 = 0LL;
    v27 = -1073741811LL;
    v13 = L"Kernel mode submission not supported on UserModeSubmission DXGHWQUEUE 0x%I64x, returning 0x%I64x";
LABEL_17:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v13, (__int64)v12, v27, v28, v29, 0LL);
    goto LABEL_18;
  }
  NumPrimaries = v4->NumPrimaries;
  if ( NumPrimaries > 0x10 )
  {
    v9 = -1073741811;
    WdLogSingleEntry4(2LL, v33[0], NumPrimaries, 16LL, -1073741811LL);
    v29 = -1073741811LL;
    v28 = 16LL;
    v27 = v4->NumPrimaries;
    v13 = L"0x%I64x fails as specified NumWrittenPrimaries 0x%I64x exceeds limit 0x%I64x returning 0x%I64x";
    goto LABEL_17;
  }
  if ( !v4->pPrivateDriverData )
  {
    if ( !v4->PrivateDriverDataSize )
      goto LABEL_31;
LABEL_26:
    WdLogSingleEntry1(3LL, 1340LL);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v34);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v30);
    return (unsigned int)-1073741811;
  }
  if ( !v4->PrivateDriverDataSize )
    goto LABEL_26;
LABEL_31:
  v20 = *(_QWORD *)(*((_QWORD *)v33[0] + 2) + 16LL);
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL);
  if ( *(_BYTE *)(v21 + 209) )
  {
    v22 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommandToHwQueue(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v21 + 4472),
            Current,
            v4);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v34);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 )
    {
      LOBYTE(v23) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v25 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_34;
    }
  }
  else
  {
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v33,
      *(struct DXGDEVICE **)(*((_QWORD *)v33[0] + 2) + 16LL));
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v43,
      (struct _KTHREAD **)(*((_QWORD *)v12 + 2) + 448LL));
    v36 = *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL);
    v37 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, v20, 0, v26, 0);
    v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v44, 0LL);
    if ( v9 < 0 )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v44);
      if ( v37 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v43);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v33);
      goto LABEL_18;
    }
    v22 = DXGHWQUEUE::SubmitCommand(v12, v4, a2);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v44);
    if ( v37 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v43);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v33);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v34);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 )
    {
      v25 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_34:
      if ( v25 )
        McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v30);
    }
  }
  return v22;
}
