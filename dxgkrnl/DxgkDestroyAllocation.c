/*
 * XREFs of DxgkDestroyAllocation @ 0x1C01D8DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018A990 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyAllocation(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r10
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v10; // [rsp+50h] [rbp-98h] BYREF
  __int64 v11; // [rsp+58h] [rbp-90h]
  char v12; // [rsp+60h] [rbp-88h]
  unsigned int *v13[2]; // [rsp+68h] [rbp-80h]
  unsigned int v14[2]; // [rsp+78h] [rbp-70h]
  _QWORD v15[10]; // [rsp+80h] [rbp-68h] BYREF

  memset(v15, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v15[1]);
  v15[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v15[3]) = 51;
  LOBYTE(v15[6]) = -1;
  v10 = -1;
  v11 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v12 = 1;
    v10 = 2006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2006);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v10, 2006);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( Current )
  {
    if ( a1 >= MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    *(_OWORD *)v13 = *(_OWORD *)a1;
    *(_QWORD *)v14 = *(_QWORD *)(a1 + 16);
    v6 = DxgkDestroyAllocationHelper(
           Current,
           (unsigned int)v13[0],
           HIDWORD(v13[0]),
           v13[1],
           v14[0],
           0,
           (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v15,
           1);
  }
  else
  {
    v6 = -1073741811;
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
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
  if ( v12 )
  {
    LOBYTE(v7) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v10);
  }
  return v6;
}
