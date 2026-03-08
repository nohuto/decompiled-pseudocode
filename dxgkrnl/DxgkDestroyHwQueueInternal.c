/*
 * XREFs of DxgkDestroyHwQueueInternal @ 0x1C0319498
 * Callers:
 *     DxgkDestroyHwQueue @ 0x1C0319480 (DxgkDestroyHwQueue.c)
 *     ?VmBusDestroyHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0378930 (-VmBusDestroyHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009B78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0024424 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGHWQUEUE@@QEAAXXZ @ 0x1C0025850 (-ReleaseReference@DXGHWQUEUE@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyHwQueueInternal(__int64 a1, char a2, __int64 a3)
{
  unsigned int *v4; // rbx
  ULONG64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  struct DXGPROCESS *v8; // rdi
  __int64 CurrentProcess; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  bool v14; // sf
  unsigned int v15; // eax
  __int64 v16; // r8
  int v17; // ecx
  DXGHWQUEUE *v18; // rsi
  __int64 v19; // rdx
  __int64 v21; // rax
  __int64 v22; // r9
  int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // [rsp+58h] [rbp-40h] BYREF
  __int64 v27; // [rsp+60h] [rbp-38h]
  char v28; // [rsp+68h] [rbp-30h]
  _BYTE v29[32]; // [rsp+70h] [rbp-28h] BYREF
  int v30; // [rsp+B0h] [rbp+18h] BYREF

  v4 = (unsigned int *)a1;
  v26 = -1;
  v27 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v28 = 1;
    v26 = 2154;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2154);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 2154);
  v30 = 0;
  if ( a2 )
  {
    v5 = MmUserProbeAddress;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (unsigned int *)MmUserProbeAddress;
    v30 = *v4;
    v4 = (unsigned int *)&v30;
  }
  Current = DXGPROCESS::GetCurrent(v5);
  v8 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v7);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    v11 = PsGetCurrentProcess(v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x, returning 0x%I64x",
      v11,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 )
    {
      v14 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_22;
    }
    return 3221225485LL;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v29, Current);
  v15 = (*v4 >> 6) & 0xFFFFFF;
  if ( v15 >= *((_DWORD *)v8 + 74) )
    goto LABEL_18;
  v16 = *((_QWORD *)v8 + 35);
  if ( ((*v4 >> 25) & 0x60) != (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x60) )
    goto LABEL_18;
  if ( (*(_DWORD *)(v16 + 16LL * v15 + 8) & 0x2000) != 0 )
    goto LABEL_18;
  v17 = *(_DWORD *)(v16 + 16LL * v15 + 8) & 0x1F;
  if ( !v17 )
    goto LABEL_18;
  if ( v17 != 15 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_18:
    v18 = 0LL;
    goto LABEL_19;
  }
  v18 = *(DXGHWQUEUE **)(v16 + 16LL * v15);
LABEL_19:
  v19 = *v4;
  if ( !v18 )
  {
    WdLogSingleEntry2(3LL, v19, -1073741811LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 )
    {
      LOBYTE(v12) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v14 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_22:
      if ( v14 )
        McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v26);
    }
    return 3221225485LL;
  }
  v21 = ((unsigned int)v19 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v21 < *((_DWORD *)v8 + 74) )
  {
    v22 = *((_QWORD *)v8 + 35);
    v23 = *(_DWORD *)(v22 + 16 * v21 + 8);
    if ( (((unsigned int)v19 >> 25) & 0x60) == (*(_BYTE *)(v22 + 16 * v21 + 8) & 0x60)
      && (v23 & 0x2000) == 0
      && (v23 & 0x1F) != 0 )
    {
      *(_DWORD *)(v22 + 16LL * (((unsigned int)v19 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
  DXGHWQUEUE::ReleaseReference(v18);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v26);
  return 0LL;
}
