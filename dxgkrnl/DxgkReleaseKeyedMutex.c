/*
 * XREFs of DxgkReleaseKeyedMutex @ 0x1C034E9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0053394 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C0057808 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z @ 0x1C034C27C (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z.c)
 */

__int64 __fastcall DxgkReleaseKeyedMutex(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r8
  __int64 v6; // rcx
  __int64 v7; // r8
  bool v8; // sf
  __int64 v9; // rdi
  struct DXGKEYEDMUTEX *v10; // r14
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r8
  size_t Size; // [rsp+28h] [rbp-70h]
  int v17; // [rsp+50h] [rbp-48h] BYREF
  __int64 v18; // [rsp+58h] [rbp-40h]
  char v19; // [rsp+60h] [rbp-38h]
  unsigned int v20[4]; // [rsp+68h] [rbp-30h]
  unsigned __int64 v21; // [rsp+78h] [rbp-20h]
  struct DXGKEYEDMUTEX *v22; // [rsp+A8h] [rbp+10h] BYREF
  DXGKEYEDMUTEX *v23; // [rsp+B0h] [rbp+18h] BYREF

  v3 = a1;
  v17 = -1;
  v18 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2055;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2055);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 2055);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( !Current )
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( !v19 )
      return 3221225485LL;
    v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_15:
    if ( v8 )
      McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v17);
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v20 = *(_OWORD *)v3;
  v21 = *(_QWORD *)(v3 + 16);
  v22 = 0LL;
  v9 = v20[0];
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&v23, v20[0], Current, &v22);
  v10 = v22;
  if ( !v22 )
  {
    WdLogSingleEntry2(3LL, (unsigned int)v9, -1073741811LL);
    if ( v23 )
      DXGKEYEDMUTEX::ReleaseReference(v23);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( !v19 )
      return 3221225485LL;
    LOBYTE(v6) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_15;
  }
  LODWORD(Size) = 0;
  v12 = DXGKEYEDMUTEX::ReleaseSync((void **)v22, v9, *(unsigned __int64 *)&v20[2], v21, 0LL, Size, 1);
  v13 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry3(2LL, v9, v10, v12);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"hKeyedMutex = 0x%I64x failed to release pKeyedMutex 0x%I64x returning 0x%I64x",
      v9,
      (__int64)v10,
      v13,
      0LL,
      0LL);
  }
  if ( v23 )
    DXGKEYEDMUTEX::ReleaseReference(v23);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v17);
  return (unsigned int)v13;
}
