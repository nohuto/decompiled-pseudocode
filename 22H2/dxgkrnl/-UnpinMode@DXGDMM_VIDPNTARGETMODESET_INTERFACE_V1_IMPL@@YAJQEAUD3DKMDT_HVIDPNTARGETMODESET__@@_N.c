/*
 * XREFs of ?UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N@Z @ 0x1C015DAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C00074A4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018EB8 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C0019488 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C011CDA0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C011CEC8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C011CF28 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::UnpinMode(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        __int64 a3)
{
  char v3; // r12
  DMMVIDPNTARGETMODESET *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  DMMVIDPNTARGETMODESET *v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 Container; // r13
  __int64 v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  ADAPTER_DISPLAY *v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // [rsp+28h] [rbp-39h]
  int v51; // [rsp+48h] [rbp-19h] BYREF
  __int64 v52; // [rsp+50h] [rbp-11h]
  char v53; // [rsp+58h] [rbp-9h]
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v54; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v55[32]; // [rsp+78h] [rbp+17h] BYREF
  DXGK_ENUM_PIVOT v56; // [rsp+D8h] [rbp+77h] BYREF

  v51 = -1;
  v3 = (char)a2;
  v52 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v53 = 1;
    v51 = 6016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6016);
  }
  else
  {
    v53 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v51, 6016LL);
  v5 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v8 = v5;
  if ( !v5 )
  {
    v36 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v36 + 24) = this;
    WdLogEvent5_WdError(v36);
    LODWORD(v12) = -1071774967;
    goto LABEL_30;
  }
  v9 = DMMVIDPNTARGETMODESET::UnpinMode(v5, v6);
  v12 = v9;
  if ( v9 < 0 )
  {
    v37 = WdLogNewEntry5_WdTrace(v11, v10);
    *(_QWORD *)(v37 + 24) = this;
    *(_QWORD *)(v37 + 32) = v12;
    goto LABEL_30;
  }
  v13 = *((_QWORD *)v8 + 14);
  if ( !v13 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v38);
  }
  v14 = *(_QWORD *)(v13 + 40);
  if ( !v14 )
  {
    v39 = WdLogNewEntry5_WdAssertion(0LL, v10);
    WdLogEvent5_WdAssertion(v39);
    v14 = *(_QWORD *)(v13 + 40);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer(v14 + 64, v10);
  v18 = *(_QWORD *)(Container + 48);
  v56.VidPnSourceId = -1;
  v56.VidPnTargetId = *(_DWORD *)(v13 + 24);
  v19 = -(Container + 88);
  v20 = Container & -(__int64)(Container != -88);
  if ( !v20 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v19, v15);
    WdLogEvent5_WdAssertion(v40);
  }
  if ( v3 )
  {
    if ( v20 && *(_DWORD *)((Container & -(__int64)(Container != -88)) + 0x40) == 1833172997 )
      v21 = Container & -(__int64)(Container != -88);
    else
      v21 = 0LL;
    LOBYTE(v19) = *(_BYTE *)(v21 + 172);
    if ( ((unsigned __int16)((2 << v19) - 1) & *(_WORD *)(v21 + 174)) != 0 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v19, v15);
      WdLogEvent5_WdAssertion(v41);
    }
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)v55,
      v21 + 152,
      3u,
      v16,
      v50,
      *(_QWORD *)(v21 + 136));
    v23 = *(_QWORD *)(v18 + 8);
    if ( !v23 )
    {
      v42 = WdLogNewEntry5_WdAssertion(0LL, v22);
      WdLogEvent5_WdAssertion(v42);
      v23 = *(_QWORD *)(v18 + 8);
    }
    v24 = *(_QWORD *)(v23 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v24 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v24 + 168)) )
    {
      v43 = WdLogNewEntry5_WdAssertion(v25, v22);
      WdLogEvent5_WdAssertion(v43);
    }
    *((_DWORD *)&v54.EnumPivot + 2) = 0;
    v26 = *(ADAPTER_DISPLAY **)(v18 + 8);
    v54.hConstrainingVidPn = (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88));
    v54.EnumPivotType = D3DKMDT_EPT_VIDPNTARGET;
    v54.EnumPivot = v56;
    if ( !v26 )
    {
      v44 = WdLogNewEntry5_WdAssertion(0LL, v22);
      WdLogEvent5_WdAssertion(v44);
      v26 = *(ADAPTER_DISPLAY **)(v18 + 8);
    }
    v27 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v26, &v54);
    v12 = v27;
    if ( v27 < 0 )
    {
      v45 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
      v45[3] = v20;
      v45[4] = v54.EnumPivot.VidPnSourceId;
      v45[5] = v54.EnumPivot.VidPnTargetId;
      v45[6] = v12;
      WdLogEvent5_WdError(v45);
    }
    else
    {
      LODWORD(v12) = 0;
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v55, v28);
    if ( (int)v12 < 0 )
    {
      v46 = (_QWORD *)WdLogNewEntry5_WdTrace(v31, v30);
      v46[3] = v20;
      v46[4] = 6LL;
      v46[5] = &v56;
      v47 = *(_QWORD *)(v18 + 8);
      if ( !v47 )
      {
        v48 = WdLogNewEntry5_WdAssertion(v31, v30);
        WdLogEvent5_WdAssertion(v48);
        v47 = *(_QWORD *)(v18 + 8);
      }
      v46[6] = *(_QWORD *)(v47 + 16);
      v46[7] = (int)v12;
      goto LABEL_28;
    }
  }
  else
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v19);
    v35[3] = 6LL;
    v35[4] = v20;
    v35[5] = v56.VidPnSourceId;
    v35[6] = v56.VidPnTargetId;
    WdLogEvent5_WdDmmEvent(v35);
  }
  LODWORD(v12) = 0;
LABEL_28:
  if ( (int)v12 < 0 )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
    v49[3] = *(unsigned int *)(v13 + 24);
    v49[5] = (int)v12;
    v49[4] = Container;
    WdLogEvent5_WdError(v49);
  }
  else
  {
    LODWORD(v12) = 0;
  }
LABEL_30:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51, v30);
  if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v51);
  return (unsigned int)v12;
}
