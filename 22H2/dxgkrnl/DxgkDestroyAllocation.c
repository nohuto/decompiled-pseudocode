/*
 * XREFs of DxgkDestroyAllocation @ 0x1C0115BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0114E00 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 */

__int64 __fastcall DxgkDestroyAllocation(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGPROCESS *v12; // rbx
  struct DXGPROCESS *v13; // r10
  __int64 v14; // rdx
  unsigned int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v20; // rax
  int v21; // [rsp+40h] [rbp-98h] BYREF
  __int64 v22; // [rsp+48h] [rbp-90h]
  char v23; // [rsp+50h] [rbp-88h]
  unsigned int *v24[2]; // [rsp+58h] [rbp-80h]
  unsigned int v25[2]; // [rsp+68h] [rbp-70h]
  _QWORD v26[10]; // [rsp+70h] [rbp-68h] BYREF

  memset(v26, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v26[1]);
  v26[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v26[3]) = 51;
  LOBYTE(v26[6]) = -1;
  v21 = -1;
  v22 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v23 = 1;
    v21 = 2006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2006);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 2006LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4, v6, v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( (!ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) != 0)
    && (Current = DXGTHREAD::GetCurrent(v11, v10)) != 0LL
    && (v13 = (struct DXGPROCESS *)*((_QWORD *)Current + 1)) != 0LL
    || (v13 = v12) != 0LL )
  {
    if ( a1 >= MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    *(_OWORD *)v24 = *(_OWORD *)a1;
    *(_QWORD *)v25 = *(_QWORD *)(a1 + 16);
    v15 = DxgkDestroyAllocationHelper(
            v13,
            (unsigned int)v24[0],
            HIDWORD(v24[0]),
            v24[1],
            v25[0],
            0,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v26,
            1);
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v11, v10);
    v15 = -1073741811;
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v20);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21, v14);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v21);
  return v15;
}
