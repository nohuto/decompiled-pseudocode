/*
 * XREFs of NtDxgkDuplicateHandle @ 0x1C03250F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_EnableHostResourceSharing__private_ReportDeviceUsage @ 0x1C00263D8 (Feature_EnableHostResourceSharing__private_ReportDeviceUsage.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1C03222E4 (-DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z.c)
 */

__int64 __fastcall NtDxgkDuplicateHandle(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rcx
  unsigned int v5; // edi
  const wchar_t *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  bool v9; // sf
  ULONG64 v10; // rax
  _QWORD *v12; // rdx
  int v13; // [rsp+50h] [rbp-58h] BYREF
  __int64 v14; // [rsp+58h] [rbp-50h]
  char v15; // [rsp+60h] [rbp-48h]
  __m256i v16; // [rsp+68h] [rbp-40h] BYREF
  __int128 v17; // [rsp+88h] [rbp-20h]

  Feature_EnableHostResourceSharing__private_ReportDeviceUsage();
  v13 = -1;
  v14 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v15 = 1;
    v13 = 2208;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2208);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v13, 2208);
  if ( !DXGPROCESS::GetCurrent(v4) )
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v6 = L"Invalid process context, returning 0x%I64x";
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v6, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_8;
  }
  v10 = a1;
  if ( a1 >= MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  v16 = *(__m256i *)v10;
  v17 = *(_OWORD *)(v10 + 32);
  if ( (HIDWORD(v17) & 0xFFFFFFFE) != 0 )
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v6 = L"Reserved flags must be set to 0, returning 0x%I64x";
    goto LABEL_7;
  }
  if ( (BYTE12(v17) & 1) != 0 && DWORD2(v17) )
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"When SameAccess flag is specified, DesiredAccess must be 0, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
    if ( !v15 )
      return v5;
    LOBYTE(v7) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_18;
  }
  if ( *(_OWORD *)&v16.m256i_u64[1] == 0LL )
    v5 = -1073741811;
  else
    v5 = DxgkpDuplicateHandleToVm((struct _D3DKMT_DUPLICATEHANDLE *)&v16);
  v12 = (_QWORD *)(a1 + 32);
  if ( a1 + 32 >= MmUserProbeAddress )
    v12 = (_QWORD *)MmUserProbeAddress;
  *v12 = v17;
LABEL_8:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( !v15 )
    return v5;
  v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_18:
  if ( v9 )
    McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v13);
  return v5;
}
