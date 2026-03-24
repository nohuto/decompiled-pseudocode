/*
 * XREFs of ?AcquirePinnedModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C015A390
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0003524 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetPinnedMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@XZ @ 0x1C001B7A0 (-GetPinnedMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v12; // rbx
  bool v13; // zf
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DMMVIDPNTARGETMODE *PinnedMode; // rsi
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rdi
  _QWORD *v23; // rbx
  __int64 v24; // rdx
  int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  struct DMMVIDPNTARGETMODE *(__fastcall *v37)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-30h] BYREF
  int v38; // [rsp+28h] [rbp-28h]
  int v39; // [rsp+30h] [rbp-20h] BYREF
  __int64 v40; // [rsp+38h] [rbp-18h]
  char v41; // [rsp+40h] [rbp-10h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 14);
  v39 = -1;
  v40 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v41 = 1;
    v39 = 7011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerEnter, v6, 7011);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v39, 7011LL);
  v9 = WdLogNewEntry5_WdTrace(v8, v7);
  *(_QWORD *)(v9 + 24) = this;
  *(_QWORD *)(v9 + 32) = a2;
  if ( !a2 )
  {
    v30 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v30 + 24) = 0LL;
    *(_QWORD *)(v30 + 32) = this;
    WdLogEvent5_WdError(v30);
    v25 = -1073741811;
    goto LABEL_14;
  }
  *(_QWORD *)a2 = 0LL;
  if ( this && *((_DWORD *)this + 32) == 1833173005 )
    v12 = this;
  else
    v12 = 0LL;
  if ( !v12 )
  {
    v31 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v31 + 24) = this;
    WdLogEvent5_WdError(v31);
    v25 = -1071774967;
    goto LABEL_14;
  }
  v38 = 0;
  v13 = *((_BYTE *)v12 + 136) == 0;
  v37 = DMMVIDPNTARGETMODESET::GetPinnedMode;
  if ( v13 )
  {
    v32 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v32 + 24) = v12;
    WdLogEvent5_WdError(v32);
    v25 = -1071774944;
LABEL_25:
    v36 = WdLogNewEntry5_WdError(v34, v33);
    *(_QWORD *)(v36 + 32) = v25;
    *(_QWORD *)(v36 + 24) = v12;
    WdLogEvent5_WdError(v36);
    goto LABEL_14;
  }
  PinnedMode = DMMVIDPNTARGETMODESET::GetPinnedMode(v12);
  if ( !PinnedMode )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14) + 24) = &v37;
    v25 = 1075708679;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(&v37, v29) + 24) = v12;
    goto LABEL_14;
  }
  v17 = operator new[](0x58uLL, 0x4E506456u, PagedPool);
  v22 = v17;
  if ( v17 )
  {
    *(_DWORD *)v17 = 305419896;
    v17[1] = PinnedMode;
    memset(v17 + 2, 0, 0x48uLL);
  }
  else
  {
    v22 = 0LL;
  }
  if ( !v22 )
  {
    v35 = WdLogNewEntry5_WdLowResource(v19, v18, v20, v21);
    *(_QWORD *)(v35 + 24) = v12;
    WdLogEvent5_WdLowResource(v35);
    operator delete(0LL);
    v25 = -1073741801;
    goto LABEL_25;
  }
  operator delete(0LL);
  v23 = v22 + 2;
  *((_DWORD *)v22 + 4) = *((_DWORD *)PinnedMode + 6);
  *(_OWORD *)(v22 + 3) = *(_OWORD *)((char *)PinnedMode + 72);
  *(_OWORD *)(v22 + 5) = *(_OWORD *)((char *)PinnedMode + 88);
  *(_OWORD *)(v22 + 7) = *(_OWORD *)((char *)PinnedMode + 104);
  v22[9] = *((_QWORD *)PinnedMode + 15);
  *((_DWORD *)v22 + 20) = *((_DWORD *)PinnedMode + 32);
  operator delete(0LL);
  v25 = 0;
  *(_QWORD *)a2 = v23;
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v24);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v39);
  return (unsigned int)v25;
}
