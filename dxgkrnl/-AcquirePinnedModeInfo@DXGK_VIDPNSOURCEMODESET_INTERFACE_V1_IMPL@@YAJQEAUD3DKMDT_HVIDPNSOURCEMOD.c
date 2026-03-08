/*
 * XREFs of ?AcquirePinnedModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C01CED30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ @ 0x1C0068940 (-GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DMMVIDPNTARGETMODE *PinnedMode; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r15
  int v20; // ecx
  int v21; // ecx
  __int64 v22; // r8
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // edi
  struct DMMVIDPNTARGETMODE *(__fastcall *v28)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-38h] BYREF
  int v29; // [rsp+28h] [rbp-30h]
  int v30; // [rsp+30h] [rbp-28h] BYREF
  __int64 v31; // [rsp+38h] [rbp-20h]
  char v32; // [rsp+40h] [rbp-18h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 24);
  v7 = 0;
  v30 = -1;
  v31 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v32 = 1;
    v30 = 7003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerEnter, v6, 7003);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 7003);
  v12 = WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  *(_QWORD *)(v12 + 24) = this;
  *(_QWORD *)(v12 + 32) = a2;
  if ( !a2 )
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    v27 = -1073741811;
    goto LABEL_17;
  }
  *(_QWORD *)a2 = 0LL;
  if ( !this || *((_DWORD *)this + 32) != 1833173004 )
  {
    WdLogSingleEntry1(2LL, this);
    v27 = -1071774968;
    goto LABEL_17;
  }
  v29 = 0;
  v28 = DMMVIDPNTARGETMODESET::GetPinnedMode;
  if ( !*((_BYTE *)this + 136) )
  {
    WdLogSingleEntry1(2LL, this);
    v27 = -1071774944;
LABEL_29:
    WdLogSingleEntry2(2LL, this, v27);
    goto LABEL_17;
  }
  PinnedMode = DMMVIDPNTARGETMODESET::GetPinnedMode(this);
  if ( !PinnedMode )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13, v16, v17) + 24) = &v28;
    v27 = 1075708679;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(&v28, v24, v25, v26) + 24) = this;
LABEL_17:
    v7 = v27;
    goto LABEL_14;
  }
  v18 = operator new[](0x38uLL, 0x4E506456u, 256LL);
  v19 = v18;
  if ( !v18 )
  {
    WdLogSingleEntry1(6LL, this);
    operator delete(0LL);
    v27 = -1073741801;
    goto LABEL_29;
  }
  *(_DWORD *)v18 = 305419896;
  *(_QWORD *)(v18 + 8) = PinnedMode;
  *(_OWORD *)(v18 + 16) = 0LL;
  *(_OWORD *)(v18 + 32) = 0LL;
  *(_QWORD *)(v18 + 48) = 0LL;
  operator delete(0LL);
  *(_DWORD *)(v19 + 16) = *((_DWORD *)PinnedMode + 6);
  v20 = *((_DWORD *)PinnedMode + 18);
  *(_DWORD *)(v19 + 20) = v20;
  if ( v20 == 1 )
  {
LABEL_10:
    v21 = *((_DWORD *)PinnedMode + 18);
    if ( ((v21 - 1) & 0xFFFFFFFC) != 0 || v21 == 2 )
      WdLogSingleEntry0(1LL);
    *(_OWORD *)(v19 + 24) = *(_OWORD *)((char *)PinnedMode + 76);
    *(_OWORD *)(v19 + 40) = *(_OWORD *)((char *)PinnedMode + 92);
    goto LABEL_13;
  }
  if ( v20 != 2 )
  {
    if ( (unsigned int)(v20 - 3) >= 2 )
    {
      if ( (unsigned int)(v20 - 2) <= 2 )
        WdLogSingleEntry0(1LL);
      goto LABEL_13;
    }
    goto LABEL_10;
  }
  *(enum _D3DKMDT_TEXT_RENDERING_FORMAT *)(v19 + 24) = *DMMVIDPNSOURCEMODE::GetTextInfo(PinnedMode);
LABEL_13:
  operator delete(0LL);
  *(_QWORD *)a2 = v19 + 16;
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v22, v30);
  return v7;
}
