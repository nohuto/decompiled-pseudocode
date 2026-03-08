/*
 * XREFs of ?AcquirePinnedModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C01CEB10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A240 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0014550 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a3)
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
  struct DMMVIDPNTARGETMODE *PinnedMode; // rbp
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // edi
  __int64 v30; // r15
  __int64 v31; // r15
  struct DMMVIDPNTARGETMODE *(__fastcall *v32)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-48h] BYREF
  int v33; // [rsp+28h] [rbp-40h]
  int v34; // [rsp+30h] [rbp-38h] BYREF
  __int64 v35; // [rsp+38h] [rbp-30h]
  char v36; // [rsp+40h] [rbp-28h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 28);
  v7 = 0;
  v34 = -1;
  v35 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v36 = 1;
    v34 = 7011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerEnter, v6, 7011);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v34, 7011);
  v12 = WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  *(_QWORD *)(v12 + 24) = this;
  *(_QWORD *)(v12 + 32) = a2;
  if ( !a2 )
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    v29 = -1073741811;
    goto LABEL_22;
  }
  *(_QWORD *)a2 = 0LL;
  if ( !this || *((_DWORD *)this + 32) != 1833173005 )
  {
    WdLogSingleEntry1(2LL, this);
    v29 = -1071774967;
    goto LABEL_22;
  }
  v33 = 0;
  v32 = DMMVIDPNTARGETMODESET::GetPinnedMode;
  if ( !*((_BYTE *)this + 136) )
  {
    WdLogSingleEntry1(2LL, this);
    v29 = -1071774944;
LABEL_38:
    WdLogSingleEntry2(2LL, this, v29);
    goto LABEL_22;
  }
  PinnedMode = DMMVIDPNTARGETMODESET::GetPinnedMode(this);
  if ( !PinnedMode )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13, v16, v17) + 24) = &v32;
    v29 = 1075708679;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(&v32, v26, v27, v28) + 24) = this;
LABEL_22:
    v7 = v29;
    goto LABEL_19;
  }
  v18 = operator new[](0x60uLL, 0x4E506456u, 256LL);
  v19 = v18;
  if ( !v18 )
  {
    WdLogSingleEntry1(6LL, this);
    operator delete(0LL);
    v29 = -1073741801;
    goto LABEL_38;
  }
  *(_DWORD *)v18 = 305419896;
  *(_QWORD *)(v18 + 8) = PinnedMode;
  memset((void *)(v18 + 16), 0, 0x50uLL);
  operator delete(0LL);
  v20 = v19 + 16;
  *(_DWORD *)v20 = *((_DWORD *)PinnedMode + 6);
  *(_OWORD *)(v20 + 8) = *(_OWORD *)((char *)PinnedMode + 72);
  *(_OWORD *)(v20 + 24) = *(_OWORD *)((char *)PinnedMode + 88);
  *(_OWORD *)(v20 + 40) = *(_OWORD *)((char *)PinnedMode + 104);
  *(_QWORD *)(v20 + 56) = *((_QWORD *)PinnedMode + 15);
  *(_DWORD *)(v20 + 64) = *((_DWORD *)PinnedMode + 32);
  if ( !*((_BYTE *)PinnedMode + 140) )
    goto LABEL_10;
  if ( !*((_QWORD *)PinnedMode + 5) )
    WdLogSingleEntry0(1LL);
  v30 = *(_QWORD *)(*((_QWORD *)PinnedMode + 5) + 112LL);
  if ( IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(*(_QWORD *)(v30 + 96) + 80LL)) )
    goto LABEL_35;
  if ( !*(_QWORD *)(v30 + 40) )
    WdLogSingleEntry0(1LL);
  v31 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v30 + 40) + 64LL) + 48);
  if ( !*(_QWORD *)(v31 + 8) )
    WdLogSingleEntry0(1LL);
  if ( *(_DWORD *)(*(_QWORD *)(v31 + 8) + 528LL) )
  {
LABEL_35:
    *(_QWORD *)(v20 + 68) = *((_QWORD *)PinnedMode + 18);
  }
  else
  {
LABEL_10:
    v21 = *((_QWORD *)this + 14);
    if ( !*(_QWORD *)(v21 + 40) )
      WdLogSingleEntry0(1LL);
    v22 = *(_QWORD *)(v21 + 40);
    if ( !*(_QWORD *)(v22 + 72) )
      WdLogSingleEntry0(1LL);
    v23 = *(_QWORD *)(*(_QWORD *)(v22 + 72) + 48LL);
    if ( !*(_QWORD *)(v23 + 8) )
      WdLogSingleEntry0(1LL);
    if ( (*(_DWORD *)(*(_QWORD *)(v23 + 8) + 24LL) & 0x20) != 0 )
    {
      *(_DWORD *)(v20 + 68) = -2;
      *(_DWORD *)(v20 + 72) = -2;
    }
    else
    {
      *(_QWORD *)(v20 + 68) = -1LL;
    }
  }
  operator delete(0LL);
  *(_QWORD *)a2 = v20;
LABEL_19:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v24, v34);
  return v7;
}
