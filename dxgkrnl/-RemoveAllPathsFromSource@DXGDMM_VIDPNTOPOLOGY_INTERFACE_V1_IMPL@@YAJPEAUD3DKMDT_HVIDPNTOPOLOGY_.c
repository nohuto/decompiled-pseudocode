/*
 * XREFs of ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C03B1870
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C00023C4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0014550 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A1F18 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A23D0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C01A28BC (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C03B2310 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  ApplyPermissionWithinThisScope *v17; // rcx
  D3DKMDT_HVIDPN Container; // rsi
  __int64 v19; // rbx
  __int64 v20; // r9
  ADAPTER_DISPLAY *v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // [rsp+28h] [rbp-29h]
  __int64 v30; // [rsp+28h] [rbp-29h]
  int v31; // [rsp+48h] [rbp-9h] BYREF
  __int64 v32; // [rsp+50h] [rbp-1h]
  char v33; // [rsp+58h] [rbp+7h]
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v34; // [rsp+60h] [rbp+Fh] BYREF
  _BYTE v35[32]; // [rsp+78h] [rbp+27h] BYREF

  v31 = -1;
  v32 = 0LL;
  v3 = (__int64)this;
  v4 = (unsigned int)a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v33 = 1;
    v31 = 6025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6025);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 6025);
  v5 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v3);
  v7 = v5;
  if ( v5 )
  {
    if ( ((unsigned __int16)((2 << *(_BYTE *)(v5 + 76)) - 1) & *(_WORD *)(v5 + 78)) != 0 )
      WdLogSingleEntry0(1LL);
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)&v34,
      v7 + 56,
      2u,
      v6,
      v29,
      *(_QWORD *)(v7 + 40));
    v8 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v7, v4);
    v3 = v8;
    if ( v8 < 0 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
      v17 = (ApplyPermissionWithinThisScope *)&v34;
      v13[3] = v7;
      v13[4] = v4;
      v13[5] = v3;
LABEL_23:
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(v17, v14, v15, v16);
      goto LABEL_26;
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
      (ApplyPermissionWithinThisScope *)&v34,
      v9,
      v11,
      v12);
    if ( *(_QWORD *)(v7 + 24) != v7 + 24 )
    {
      Container = (D3DKMDT_HVIDPN)ContainedBy<DMMVIDPN>::GetContainer(v7 + 160);
      v19 = *((_QWORD *)Container + 6);
      if ( !*(_QWORD *)(v19 + 8) )
        WdLogSingleEntry0(1LL);
      v3 = *(_QWORD *)(*(_QWORD *)(v19 + 8) + 16LL);
      if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)v3) )
        WdLogSingleEntry0(1LL);
      if ( ((unsigned __int16)((2 << *(_BYTE *)(v7 + 76)) - 1) & *(_WORD *)(v7 + 78)) != 0 )
        WdLogSingleEntry0(1LL);
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v35,
        v7 + 56,
        3u,
        v20,
        v30,
        *(_QWORD *)(v7 + 40));
      *((_DWORD *)&v34.EnumPivot + 2) = 0;
      if ( Container == (D3DKMDT_HVIDPN)-88LL )
        v34.hConstrainingVidPn = 0LL;
      else
        v34.hConstrainingVidPn = Container;
      v21 = *(ADAPTER_DISPLAY **)(v3 + 2920);
      v34.EnumPivotType = D3DKMDT_EPT_NOPIVOT;
      v34.EnumPivot.VidPnSourceId = -1;
      v34.EnumPivot.VidPnTargetId = -1;
      v22 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v21, &v34);
      LODWORD(v3) = v22;
      if ( v22 < 0 )
      {
        WdLogSingleEntry3(2LL, Container, v4, v22);
        v17 = (ApplyPermissionWithinThisScope *)v35;
        goto LABEL_23;
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
        (ApplyPermissionWithinThisScope *)v35,
        v23,
        v24,
        v25);
    }
    LODWORD(v3) = 0;
    goto LABEL_26;
  }
  WdLogSingleEntry1(2LL, v3);
  LODWORD(v3) = -1071774976;
LABEL_26:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 )
  {
    LOBYTE(v26) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v31);
  }
  return (unsigned int)v3;
}
