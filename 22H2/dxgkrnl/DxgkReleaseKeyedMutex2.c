/*
 * XREFs of DxgkReleaseKeyedMutex2 @ 0x1C02943B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0040F30 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C00490C0 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z @ 0x1C0291E6C (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z.c)
 */

__int64 __fastcall DxgkReleaseKeyedMutex2(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGKEYEDMUTEX *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  size_t Size; // [rsp+28h] [rbp-60h]
  int v30; // [rsp+40h] [rbp-48h] BYREF
  __int64 v31; // [rsp+48h] [rbp-40h]
  char v32; // [rsp+50h] [rbp-38h]
  unsigned int v33[4]; // [rsp+58h] [rbp-30h]
  void *Src[2]; // [rsp+68h] [rbp-20h]
  size_t v35; // [rsp+78h] [rbp-10h]
  struct DXGKEYEDMUTEX *v36; // [rsp+98h] [rbp+10h] BYREF
  DXGKEYEDMUTEX *v37; // [rsp+A0h] [rbp+18h] BYREF

  v3 = a1;
  v30 = -1;
  v31 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v32 = 1;
    v30 = 2069;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2069);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 2069LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
LABEL_12:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30, v12);
    if ( v32 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v30);
    }
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v33 = *(_OWORD *)v3;
  *(_OWORD *)Src = *(_OWORD *)(v3 + 16);
  v35 = *(_QWORD *)(v3 + 32);
  v36 = 0LL;
  v13 = v33[0];
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&v37, v33[0], Current, &v36);
  v17 = v36;
  if ( !v36 )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v18 + 24) = v13;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v18);
    if ( v37 )
      DXGKEYEDMUTEX::ReleaseReference(v37, v12);
    goto LABEL_12;
  }
  LODWORD(Size) = v35;
  v22 = DXGKEYEDMUTEX::ReleaseSync(
          (void **)v36,
          v13,
          *(unsigned __int64 *)&v33[2],
          (unsigned __int64)Src[0],
          (char *)Src[1],
          Size,
          1);
  v25 = v22;
  if ( v22 < 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
    v26[3] = v13;
    v26[4] = v17;
    v26[5] = v25;
    WdLogEvent5_WdError(v26);
  }
  if ( v37 )
    DXGKEYEDMUTEX::ReleaseReference(v37, v23);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30, v23);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v30);
  return (unsigned int)v25;
}
