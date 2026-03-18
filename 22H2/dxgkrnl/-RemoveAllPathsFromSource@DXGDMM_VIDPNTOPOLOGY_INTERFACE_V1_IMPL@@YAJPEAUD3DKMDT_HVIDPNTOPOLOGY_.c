/*
 * XREFs of ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C03B6130
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0014680 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C001591C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01B0208 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01B06C0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C01B4198 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C03B6BD0 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::RemoveAllPathsFromSource(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  ApplyPermissionWithinThisScope *v14; // rcx
  D3DKMDT_HVIDPN Container; // rsi
  __int64 v16; // rbx
  __int64 v17; // r9
  ADAPTER_DISPLAY *v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // [rsp+28h] [rbp-29h]
  __int64 v24; // [rsp+28h] [rbp-29h]
  int v25; // [rsp+48h] [rbp-9h] BYREF
  __int64 v26; // [rsp+50h] [rbp-1h]
  char v27; // [rsp+58h] [rbp+7h]
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v28; // [rsp+60h] [rbp+Fh] BYREF
  _BYTE v29[32]; // [rsp+78h] [rbp+27h] BYREF

  v25 = -1;
  v26 = 0LL;
  v3 = (__int64)this;
  v4 = (unsigned int)a2;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v27 = 1;
    v25 = 6025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6025);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 6025);
  v5 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v3);
  v7 = v5;
  if ( v5 )
  {
    if ( ((unsigned __int16)((2 << *(_BYTE *)(v5 + 76)) - 1) & *(_WORD *)(v5 + 78)) != 0 )
      WdLogSingleEntry0(1LL);
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)&v28,
      v7 + 56,
      2u,
      v6,
      v23,
      *(_QWORD *)(v7 + 40));
    v8 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v7, v4);
    v3 = v8;
    if ( v8 < 0 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
      v14 = (ApplyPermissionWithinThisScope *)&v28;
      v13[3] = v7;
      v13[4] = v4;
      v13[5] = v3;
LABEL_23:
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(v14);
      goto LABEL_26;
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)&v28);
    if ( *(_QWORD *)(v7 + 24) != v7 + 24 )
    {
      Container = (D3DKMDT_HVIDPN)ContainedBy<DMMVIDPN>::GetContainer(v7 + 160);
      v16 = *((_QWORD *)Container + 6);
      if ( !*(_QWORD *)(v16 + 8) )
        WdLogSingleEntry0(1LL);
      v3 = *(_QWORD *)(*(_QWORD *)(v16 + 8) + 16LL);
      if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)v3) )
        WdLogSingleEntry0(1LL);
      if ( ((unsigned __int16)((2 << *(_BYTE *)(v7 + 76)) - 1) & *(_WORD *)(v7 + 78)) != 0 )
        WdLogSingleEntry0(1LL);
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v29,
        v7 + 56,
        3u,
        v17,
        v24,
        *(_QWORD *)(v7 + 40));
      *((_DWORD *)&v28.EnumPivot + 2) = 0;
      if ( Container == (D3DKMDT_HVIDPN)-88LL )
        v28.hConstrainingVidPn = 0LL;
      else
        v28.hConstrainingVidPn = Container;
      v18 = *(ADAPTER_DISPLAY **)(v3 + 2920);
      v28.EnumPivotType = D3DKMDT_EPT_NOPIVOT;
      v28.EnumPivot.VidPnSourceId = -1;
      v28.EnumPivot.VidPnTargetId = -1;
      v19 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v18, &v28);
      LODWORD(v3) = v19;
      if ( v19 < 0 )
      {
        WdLogSingleEntry3(2LL, Container, v4, v19);
        v14 = (ApplyPermissionWithinThisScope *)v29;
        goto LABEL_23;
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v29);
    }
    LODWORD(v3) = 0;
    goto LABEL_26;
  }
  WdLogSingleEntry1(2LL, v3);
  LODWORD(v3) = -1071774976;
LABEL_26:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 )
  {
    LOBYTE(v20) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v25);
  }
  return (unsigned int)v3;
}
