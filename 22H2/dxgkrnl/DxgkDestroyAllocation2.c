/*
 * XREFs of DxgkDestroyAllocation2 @ 0x1C0115940
 * Callers:
 *     ?VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0240750 (-VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0114E00 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 */

__int64 __fastcall DxgkDestroyAllocation2(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  char v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGPROCESS *v14; // rdi
  struct DXGPROCESS *v15; // r10
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v16; // rcx^4
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // [rsp+40h] [rbp-98h] BYREF
  __int64 v32; // [rsp+48h] [rbp-90h]
  char v33; // [rsp+50h] [rbp-88h]
  unsigned int *v34[2]; // [rsp+58h] [rbp-80h]
  unsigned int v35[2]; // [rsp+68h] [rbp-70h]
  _QWORD v36[10]; // [rsp+70h] [rbp-68h] BYREF

  memset(v36, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v36[1]);
  v36[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v36[3]) = 52;
  LOBYTE(v36[6]) = -1;
  v31 = -1;
  v32 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2105;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2105);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 2105LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v14 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( (!ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) != 0)
    && (Current = DXGTHREAD::GetCurrent(v12, v11)) != 0LL
    && (v15 = (struct DXGPROCESS *)*((_QWORD *)Current + 1)) != 0LL
    || (v15 = v14) != 0LL )
  {
    if ( v4 )
    {
      if ( a1 >= MmUserProbeAddress )
        a1 = MmUserProbeAddress;
      *(_OWORD *)v34 = *(_OWORD *)a1;
      *(_QWORD *)v35 = *(_QWORD *)(a1 + 16);
      v16.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)v35[1];
      if ( (v35[1] & 0x7FFFFFFC) != 0 )
      {
        v17 = WdLogNewEntry5_WdWarning(*(_QWORD *)v35, v11, v13);
        *(_QWORD *)(v17 + 24) = 10265LL;
        WdLogEvent5_WdWarning(v17);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31, v18);
        if ( v33 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v31);
        }
        return 3221225485LL;
      }
    }
    else
    {
      *(_OWORD *)v34 = *(_OWORD *)a1;
      *(_QWORD *)v35 = *(_QWORD *)(a1 + 16);
      v16.0 = (struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F)v35[1];
    }
    v22 = DxgkDestroyAllocationHelper(
            v15,
            (unsigned int)v34[0],
            HIDWORD(v34[0]),
            v34[1],
            v35[0],
            v16,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v36,
            v4);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31, v23);
    if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v31);
    return v22;
  }
  else
  {
    v27 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v27 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v27);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31, v28);
    if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v31);
    return 3221225485LL;
  }
}
