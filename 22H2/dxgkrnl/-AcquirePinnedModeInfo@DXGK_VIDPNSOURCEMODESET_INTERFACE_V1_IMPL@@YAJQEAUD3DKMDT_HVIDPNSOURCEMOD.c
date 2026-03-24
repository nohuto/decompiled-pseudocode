/*
 * XREFs of ?AcquirePinnedModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C015A010
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
 *     ?GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ @ 0x1C005C2B0 (-GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v12; // rdi
  bool v13; // zf
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DMMVIDPNTARGETMODE *PinnedMode; // rsi
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rbx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // ebx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  struct DMMVIDPNTARGETMODE *(__fastcall *v43)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-30h] BYREF
  int v44; // [rsp+28h] [rbp-28h]
  int v45; // [rsp+30h] [rbp-20h] BYREF
  __int64 v46; // [rsp+38h] [rbp-18h]
  char v47; // [rsp+40h] [rbp-10h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 10);
  v45 = -1;
  v46 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v47 = 1;
    v45 = 7003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerEnter, v6, 7003);
  }
  else
  {
    v47 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v45, 7003LL);
  v9 = WdLogNewEntry5_WdTrace(v8, v7);
  *(_QWORD *)(v9 + 24) = this;
  *(_QWORD *)(v9 + 32) = a2;
  if ( !a2 )
  {
    v34 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v34 + 24) = 0LL;
    *(_QWORD *)(v34 + 32) = this;
    WdLogEvent5_WdError(v34);
    v29 = -1073741811;
    goto LABEL_18;
  }
  *(_QWORD *)a2 = 0LL;
  if ( this && *((_DWORD *)this + 32) == 1833173004 )
    v12 = this;
  else
    v12 = 0LL;
  if ( !v12 )
  {
    v35 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v35 + 24) = this;
    WdLogEvent5_WdError(v35);
    v29 = -1071774968;
    goto LABEL_18;
  }
  v44 = 0;
  v13 = *((_BYTE *)v12 + 136) == 0;
  v43 = DMMVIDPNTARGETMODESET::GetPinnedMode;
  if ( v13 )
  {
    v36 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v36 + 24) = v12;
    WdLogEvent5_WdError(v36);
    v29 = -1071774944;
LABEL_36:
    v42 = WdLogNewEntry5_WdError(v38, v37);
    *(_QWORD *)(v42 + 32) = v29;
    *(_QWORD *)(v42 + 24) = v12;
    WdLogEvent5_WdError(v42);
    goto LABEL_18;
  }
  PinnedMode = DMMVIDPNTARGETMODESET::GetPinnedMode(v12);
  if ( !PinnedMode )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14) + 24) = &v43;
    v29 = 1075708679;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(&v43, v33) + 24) = v12;
    goto LABEL_18;
  }
  v17 = operator new[](0x38uLL, 0x4E506456u, PagedPool);
  v22 = v17;
  if ( v17 )
  {
    *(_DWORD *)v17 = 305419896;
    v17[1] = PinnedMode;
    *((_OWORD *)v17 + 1) = 0LL;
    *((_OWORD *)v17 + 2) = 0LL;
    v17[6] = 0LL;
  }
  else
  {
    v22 = 0LL;
  }
  if ( !v22 )
  {
    v41 = WdLogNewEntry5_WdLowResource(v19, v18, v20, v21);
    *(_QWORD *)(v41 + 24) = v12;
    WdLogEvent5_WdLowResource(v41);
    operator delete(0LL);
    v29 = -1073741801;
    goto LABEL_36;
  }
  operator delete(0LL);
  v25 = v22 + 2;
  *(_DWORD *)v25 = *((_DWORD *)PinnedMode + 6);
  v26 = *((_DWORD *)PinnedMode + 18);
  *((_DWORD *)v25 + 1) = v26;
  if ( v26 == 1 )
  {
LABEL_14:
    v27 = *((unsigned int *)PinnedMode + 18);
    if ( (((_DWORD)v27 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v27 == 2 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v27, v23);
      WdLogEvent5_WdAssertion(v40);
    }
    *(_OWORD *)(v25 + 1) = *(_OWORD *)((char *)PinnedMode + 76);
    *(_OWORD *)(v25 + 3) = *(_OWORD *)((char *)PinnedMode + 92);
    goto LABEL_17;
  }
  if ( v26 != 2 )
  {
    if ( v26 <= 2 || v26 > 4 )
    {
      if ( (unsigned int)(v26 - 3) <= 1 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v24, v23);
        WdLogEvent5_WdAssertion(v39);
      }
      goto LABEL_17;
    }
    goto LABEL_14;
  }
  *((enum _D3DKMDT_TEXT_RENDERING_FORMAT *)v25 + 2) = *DMMVIDPNSOURCEMODE::GetTextInfo(PinnedMode, v23);
LABEL_17:
  operator delete(0LL);
  *(_QWORD *)a2 = v25;
  v29 = 0;
LABEL_18:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v28);
  if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v45);
  return (unsigned int)v29;
}
