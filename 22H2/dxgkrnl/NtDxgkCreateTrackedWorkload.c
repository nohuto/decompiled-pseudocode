/*
 * XREFs of NtDxgkCreateTrackedWorkload @ 0x1C02BDAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_TrackedWorkload__private_ReportDeviceUsage @ 0x1C00282D0 (Feature_TrackedWorkload__private_ReportDeviceUsage.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtDxgkCreateTrackedWorkload(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v17; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+28h] [rbp-B0h]
  char v19; // [rsp+30h] [rbp-A8h]
  __int128 v20; // [rsp+38h] [rbp-A0h]
  __int128 v21; // [rsp+48h] [rbp-90h]
  __int128 v22; // [rsp+58h] [rbp-80h]
  PVOID P; // [rsp+70h] [rbp-68h]
  char v24; // [rsp+78h] [rbp-60h] BYREF
  int v25; // [rsp+B8h] [rbp-20h]

  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v17 = -1;
  v18 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2206;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2206);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 2206LL);
  P = 0LL;
  v25 = 0;
  if ( DXGPROCESS::GetCurrent(v4, v3, v5, v6) )
  {
    Feature_TrackedWorkload__private_ReportDeviceUsage();
    v9 = -1073741637;
    v10 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v10 + 24) = -1073741637LL;
    *(_QWORD *)(v10 + 32) = 140LL;
  }
  else
  {
    v9 = -1073741811;
    v10 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    *(_QWORD *)(v10 + 32) = 133LL;
  }
  WdLogEvent5_WdError(v10);
  if ( P != &v24 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v25 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17, v13);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v17);
  return v9;
}
