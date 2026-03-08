/*
 * XREFs of DxgkDestroyAllocation2 @ 0x1C018A710
 * Callers:
 *     ?VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C03785D0 (-VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00163C0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018A990 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyAllocation2(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  char v4; // r14
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v8; // rbx
  struct DXGPROCESS *v9; // r10
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v10; // r8^4
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v14; // ebx
  __int64 v15; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  __int64 v19; // r8
  int v20; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A0h]
  char v22; // [rsp+60h] [rbp-98h]
  unsigned int *v23[2]; // [rsp+68h] [rbp-90h]
  unsigned int v24[2]; // [rsp+78h] [rbp-80h]
  _QWORD v25[10]; // [rsp+80h] [rbp-78h] BYREF

  memset(v25, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v25[1]);
  v25[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v25[3]) = 52;
  LOBYTE(v25[6]) = -1;
  v20 = -1;
  v21 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2105;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2105);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2105);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess(v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
    goto LABEL_5;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v9 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    if ( v9 )
      goto LABEL_7;
    goto LABEL_5;
  }
  CurrentThread = KeGetCurrentThread();
  Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
  v9 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, 2923LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
    v9 = v8;
  }
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v19, v20);
    return 3221225485LL;
  }
LABEL_7:
  if ( v4 )
  {
    if ( a1 >= MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    *(_OWORD *)v23 = *(_OWORD *)a1;
    *(_QWORD *)v24 = *(_QWORD *)(a1 + 16);
    v10.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)v24[1];
    if ( (v24[1] & 0x7FFFFFFC) != 0 )
    {
      WdLogSingleEntry1(3LL, 10444LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
      if ( v22 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v20);
      }
      return 3221225485LL;
    }
  }
  else
  {
    *(_OWORD *)v23 = *(_OWORD *)a1;
    *(_QWORD *)v24 = *(_QWORD *)(a1 + 16);
    v10.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)v24[1];
  }
  v14 = DxgkDestroyAllocationHelper(
          v9,
          (unsigned int)v23[0],
          HIDWORD(v23[0]),
          v23[1],
          v24[0],
          v10,
          (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v25,
          v4);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v15, v20);
  return v14;
}
