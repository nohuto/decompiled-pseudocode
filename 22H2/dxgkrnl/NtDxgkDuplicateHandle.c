/*
 * XREFs of NtDxgkDuplicateHandle @ 0x1C027A410
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_EnableHostResourceSharing__private_ReportDeviceUsage @ 0x1C0027C58 (Feature_EnableHostResourceSharing__private_ReportDeviceUsage.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1C0277CDC (-DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z.c)
 */

__int64 __fastcall NtDxgkDuplicateHandle(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  ULONG64 v9; // rcx
  ULONG64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // ebx
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v17; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18; // [rsp+28h] [rbp-50h]
  char v19; // [rsp+30h] [rbp-48h]
  __m256i v20; // [rsp+38h] [rbp-40h] BYREF
  __int128 v21; // [rsp+58h] [rbp-20h]

  Feature_EnableHostResourceSharing__private_ReportDeviceUsage();
  v17 = -1;
  v18 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2208;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2208);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 2208LL);
  if ( !DXGPROCESS::GetCurrent(v5, v4, v6, v7) )
    goto LABEL_11;
  v9 = MmUserProbeAddress;
  v10 = a1;
  if ( a1 >= MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  v20 = *(__m256i *)v10;
  v21 = *(_OWORD *)(v10 + 32);
  if ( (HIDWORD(v21) & 0xFFFFFFFE) != 0 || (BYTE12(v21) & 1) != 0 && DWORD2(v21) )
  {
LABEL_11:
    v11 = WdLogNewEntry5_WdError(v9, v8);
    v12 = -1073741811;
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
  }
  else
  {
    if ( *(_OWORD *)&v20.m256i_u64[1] == 0LL )
      v12 = -1073741811;
    else
      v12 = DxgkpDuplicateHandleToVm((struct _D3DKMT_DUPLICATEHANDLE *)&v20);
    v13 = (_QWORD *)(a1 + 32);
    if ( a1 + 32 >= MmUserProbeAddress )
      v13 = (_QWORD *)MmUserProbeAddress;
    *v13 = v21;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17, (__int64)v13);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v17);
  return v12;
}
