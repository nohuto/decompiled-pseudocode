/*
 * XREFs of ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C02E4790
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0007548 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018EB8 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C011CDA0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C011CEC8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C011CF28 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C0151364 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::RemoveAllPathsFromSource(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  ApplyPermissionWithinThisScope *v18; // rcx
  __int64 v19; // rdx
  D3DKMDT_HVIDPN Container; // r14
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rax
  DXGADAPTER *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  ADAPTER_DISPLAY *v30; // rcx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v38; // [rsp+28h] [rbp-29h]
  __int64 v39; // [rsp+28h] [rbp-29h]
  int v40; // [rsp+48h] [rbp-9h] BYREF
  __int64 v41; // [rsp+50h] [rbp-1h]
  char v42; // [rsp+58h] [rbp+7h]
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v43; // [rsp+60h] [rbp+Fh] BYREF
  _BYTE v44[32]; // [rsp+78h] [rbp+27h] BYREF

  v40 = -1;
  v41 = 0LL;
  v3 = (__int64)this;
  v4 = (unsigned int)a2;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v42 = 1;
    v40 = 6025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6025);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 6025LL);
  v5 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v3);
  v9 = v5;
  if ( v5 )
  {
    LOBYTE(v7) = *(_BYTE *)(v5 + 76);
    if ( ((unsigned __int16)((2 << v7) - 1) & *(_WORD *)(v5 + 78)) != 0 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v7, v6);
      WdLogEvent5_WdAssertion(v12);
    }
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)&v43,
      v9 + 56,
      2u,
      v8,
      v38,
      *(_QWORD *)(v9 + 40));
    v13 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((char **)v9, v4);
    v3 = v13;
    if ( v13 < 0 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14);
      v18 = (ApplyPermissionWithinThisScope *)&v43;
      v16[3] = v9;
      v16[4] = v4;
      v16[5] = v3;
LABEL_23:
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(v18, v17);
      goto LABEL_26;
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)&v43, v14);
    if ( *(_QWORD *)(v9 + 24) != v9 + 24 )
    {
      Container = (D3DKMDT_HVIDPN)ContainedBy<DMMVIDPN>::GetContainer(v9 + 160, v11);
      v21 = *((_QWORD *)Container + 6);
      v22 = *(_QWORD *)(v21 + 8);
      if ( !v22 )
      {
        v23 = WdLogNewEntry5_WdAssertion(0LL, v19);
        WdLogEvent5_WdAssertion(v23);
        v22 = *(_QWORD *)(v21 + 8);
      }
      v24 = *(DXGADAPTER **)(v22 + 16);
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v24) )
      {
        v28 = WdLogNewEntry5_WdAssertion(v26, v25);
        WdLogEvent5_WdAssertion(v28);
      }
      LOBYTE(v26) = *(_BYTE *)(v9 + 76);
      if ( ((unsigned __int16)((2 << v26) - 1) & *(_WORD *)(v9 + 78)) != 0 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v26, v25);
        WdLogEvent5_WdAssertion(v29);
      }
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v44,
        v9 + 56,
        3u,
        v27,
        v39,
        *(_QWORD *)(v9 + 40));
      *((_DWORD *)&v43.EnumPivot + 2) = 0;
      if ( Container == (D3DKMDT_HVIDPN)-88LL )
        v43.hConstrainingVidPn = 0LL;
      else
        v43.hConstrainingVidPn = Container;
      v30 = (ADAPTER_DISPLAY *)*((_QWORD *)v24 + 337);
      v43.EnumPivotType = D3DKMDT_EPT_NOPIVOT;
      v43.EnumPivot.VidPnSourceId = -1;
      v43.EnumPivot.VidPnTargetId = -1;
      v31 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v30, &v43);
      v3 = v31;
      if ( v31 < 0 )
      {
        v34 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32);
        v34[3] = Container;
        v34[4] = v4;
        v34[5] = v3;
        WdLogEvent5_WdError(v34);
        v18 = (ApplyPermissionWithinThisScope *)v44;
        goto LABEL_23;
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v44, v32);
    }
    LODWORD(v3) = 0;
    goto LABEL_26;
  }
  v10 = WdLogNewEntry5_WdError(v7, v6);
  *(_QWORD *)(v10 + 24) = v3;
  WdLogEvent5_WdError(v10);
  LODWORD(v3) = -1071774976;
LABEL_26:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v11);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v40);
  return (unsigned int)v3;
}
