/*
 * XREFs of ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C01432D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00074F0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0007548 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000B8A4 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018EB8 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C001A9B0 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C011CB0C (-DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C011CDA0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C011CEC8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C011CF28 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C01412A8 (-DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::PinPathContentRotation(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a5)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // r13
  DMMVIDPNTOPOLOGY *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  DMMVIDPNTOPOLOGY *v12; // rdi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *Path; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 Container; // rax
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rcx
  D3DKMDT_HVIDPN v24; // rdi
  D3DKMDT_HVIDPN v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rcx
  ADAPTER_DISPLAY *v29; // rcx
  int IsSupportedVidPn; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r9
  BOOLEAN IsVidPnSupported; // al
  D3DKMDT_HVIDPN v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  ADAPTER_DISPLAY *v41; // rcx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // r8
  _QWORD *v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  _QWORD *v71; // r14
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  _QWORD *v78; // rax
  _QWORD *v79; // r14
  __int64 v80; // rax
  __int64 v81; // rax
  _QWORD *v82; // rax
  int v83; // eax
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // [rsp+28h] [rbp-71h]
  DXGK_ENUM_PIVOT v87; // [rsp+50h] [rbp-49h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v88; // [rsp+58h] [rbp-41h]
  DMMVIDPNPRESENTPATH *v89; // [rsp+60h] [rbp-39h]
  int v90; // [rsp+68h] [rbp-31h] BYREF
  __int64 v91; // [rsp+70h] [rbp-29h]
  char v92; // [rsp+78h] [rbp-21h]
  struct _DXGKARG_ISSUPPORTEDVIDPN v93; // [rsp+80h] [rbp-19h] BYREF
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v94; // [rsp+90h] [rbp-9h] BYREF
  _BYTE v95[32]; // [rsp+A8h] [rbp+Fh] BYREF

  v90 = -1;
  v91 = 0LL;
  v5 = (__int64)this;
  v6 = a4;
  v7 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v92 = 1;
    v90 = 6028;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6028);
  }
  else
  {
    v92 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v90, 6028LL);
  v9 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5);
  v12 = v9;
  if ( !v9 )
  {
    v52 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v52 + 24) = v5;
    WdLogEvent5_WdError(v52);
    LODWORD(v5) = -1071774976;
    goto LABEL_44;
  }
  if ( (_DWORD)v6 == 254 )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v53[3] = 254LL;
    v53[4] = v8;
    v53[5] = v7;
    v53[6] = v5;
    WdLogEvent5_WdError(v53);
    LODWORD(v5) = -1071774907;
    goto LABEL_44;
  }
  Path = (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)DMMVIDPNTOPOLOGY::FindPath(v9, v8, v7);
  v89 = (DMMVIDPNPRESENTPATH *)Path;
  if ( !Path )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
    v54[3] = v8;
    v54[4] = v7;
    v54[5] = v5;
    WdLogEvent5_WdWarning(v54);
    LODWORD(v5) = -1071774937;
    goto LABEL_44;
  }
  v88 = *((_DWORD *)Path + 29);
  v17 = DMMVIDPNPRESENTPATH::PinContentRotation(
          (DMMVIDPNPRESENTPATH *)Path,
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v6);
  v5 = v17;
  if ( v17 < 0 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    v55[3] = v6;
    v55[4] = v8;
    v55[5] = v7;
    v55[6] = v5;
    WdLogEvent5_WdError(v55);
    goto LABEL_44;
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v12 + 160, v18);
  v87 = (DXGK_ENUM_PIVOT)__PAIR64__(v7, v8);
  v22 = *(_QWORD *)(Container + 48);
  v23 = -(Container + 88);
  v24 = (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88));
  if ( !v24 )
  {
    v56 = WdLogNewEntry5_WdAssertion(v23, v21);
    WdLogEvent5_WdAssertion(v56);
LABEL_55:
    v25 = 0LL;
    goto LABEL_11;
  }
  if ( *((_DWORD *)v24 + 16) != 1833172997 )
    goto LABEL_55;
  v25 = v24;
LABEL_11:
  if ( !*((_BYTE *)v25 + 296) && !DmmIsAllSourcesPixelFormatValid((__int64)(v25 + 24), v21) )
  {
    v57 = WdLogNewEntry5_WdError(v23, v21);
    *(_QWORD *)(v57 + 24) = v24;
    WdLogEvent5_WdError(v57);
    goto LABEL_56;
  }
  LOBYTE(v23) = *((_BYTE *)v25 + 172);
  if ( ((unsigned __int16)((2 << v23) - 1) & *((_WORD *)v25 + 87)) != 0 )
  {
    v64 = WdLogNewEntry5_WdAssertion(v23, v21);
    WdLogEvent5_WdAssertion(v64);
  }
  v26 = *(_QWORD *)(v22 + 8);
  if ( !v26 )
  {
    v65 = WdLogNewEntry5_WdAssertion(v23, v21);
    WdLogEvent5_WdAssertion(v65);
    v26 = *(_QWORD *)(v22 + 8);
  }
  v27 = *(_QWORD *)(v26 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v27 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v27 + 168)) )
  {
    v66 = WdLogNewEntry5_WdAssertion(v28, v21);
    WdLogEvent5_WdAssertion(v66);
  }
  v29 = *(ADAPTER_DISPLAY **)(v22 + 8);
  *(_QWORD *)&v93.IsVidPnSupported = 0LL;
  v93.hDesiredVidPn = v24;
  if ( !v29 )
  {
    v67 = WdLogNewEntry5_WdAssertion(0LL, v21);
    WdLogEvent5_WdAssertion(v67);
    v29 = *(ADAPTER_DISPLAY **)(v22 + 8);
  }
  IsSupportedVidPn = ADAPTER_DISPLAY::DdiIsSupportedVidPn(v29, &v93);
  v5 = IsSupportedVidPn;
  if ( IsSupportedVidPn < 0 )
  {
    v68 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31);
    v68[3] = v24;
    v68[4] = v27;
    v68[5] = v5;
    WdLogEvent5_WdError(v68);
    IsVidPnSupported = 0;
  }
  else
  {
    IsVidPnSupported = v93.IsVidPnSupported;
    LODWORD(v5) = 0;
  }
  if ( (int)v5 < 0 )
  {
    v71 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31);
    v71[3] = v24;
    v72 = *(_QWORD *)(v22 + 8);
    if ( !v72 )
    {
      v73 = WdLogNewEntry5_WdAssertion(v70, v69);
      WdLogEvent5_WdAssertion(v73);
      v72 = *(_QWORD *)(v22 + 8);
    }
    v71[4] = *(_QWORD *)(v72 + 16);
    v71[5] = (int)v5;
    WdLogEvent5_WdError(v71);
  }
  else
  {
    if ( !IsVidPnSupported )
    {
LABEL_56:
      v5 = WdLogNewEntry5_WdDmmEvent(v32);
      *(_QWORD *)(v5 + 24) = v24;
      v60 = *(_QWORD *)(v22 + 8);
      if ( !v60 )
      {
        v61 = WdLogNewEntry5_WdAssertion(v59, v58);
        WdLogEvent5_WdAssertion(v61);
        v60 = *(_QWORD *)(v22 + 8);
      }
      *(_QWORD *)(v5 + 32) = *(_QWORD *)(v60 + 16);
      WdLogEvent5_WdDmmEvent(v5);
      LODWORD(v5) = -1071774970;
      goto LABEL_59;
    }
    if ( !(_BYTE)a5 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v32);
      v51[3] = 9LL;
      v51[4] = v24;
      v51[5] = v87.VidPnSourceId;
      v51[6] = v87.VidPnTargetId;
      WdLogEvent5_WdDmmEvent(v51);
LABEL_41:
      LODWORD(v5) = 0;
      goto LABEL_42;
    }
    if ( v24 && *((_DWORD *)v24 + 16) == 1833172997 )
      v35 = v24;
    else
      v35 = 0LL;
    LOBYTE(v32) = *((_BYTE *)v35 + 172);
    if ( ((unsigned __int16)((2 << v32) - 1) & *((_WORD *)v35 + 87)) != 0 )
    {
      v74 = WdLogNewEntry5_WdAssertion(v32, v31);
      WdLogEvent5_WdAssertion(v74);
    }
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)v95,
      (__int64)(v35 + 38),
      3u,
      v33,
      v86,
      *((_QWORD *)v35 + 17));
    v38 = *(_QWORD *)(v22 + 8);
    if ( !v38 )
    {
      v75 = WdLogNewEntry5_WdAssertion(v37, v36);
      WdLogEvent5_WdAssertion(v75);
      v38 = *(_QWORD *)(v22 + 8);
    }
    v39 = *(_QWORD *)(v38 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v39 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v39 + 168)) )
    {
      v76 = WdLogNewEntry5_WdAssertion(v40, v36);
      WdLogEvent5_WdAssertion(v76);
    }
    *((_DWORD *)&v94.EnumPivot + 2) = 0;
    v41 = *(ADAPTER_DISPLAY **)(v22 + 8);
    v94.hConstrainingVidPn = v24;
    v94.EnumPivotType = D3DKMDT_EPT_ROTATION;
    v94.EnumPivot = v87;
    if ( !v41 )
    {
      v77 = WdLogNewEntry5_WdAssertion(0LL, v36);
      WdLogEvent5_WdAssertion(v77);
      v41 = *(ADAPTER_DISPLAY **)(v22 + 8);
    }
    v42 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v41, &v94);
    v5 = v42;
    if ( v42 < 0 )
    {
      v78 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43);
      v78[3] = v24;
      v78[4] = v94.EnumPivot.VidPnSourceId;
      v78[5] = v94.EnumPivot.VidPnTargetId;
      v78[6] = v5;
      WdLogEvent5_WdError(v78);
    }
    else
    {
      LODWORD(v5) = 0;
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v95, v43);
    if ( (int)v5 >= 0 )
      goto LABEL_41;
    v79 = (_QWORD *)WdLogNewEntry5_WdTrace(v46, v45);
    v79[3] = v24;
    v79[4] = 9LL;
    v79[5] = &v87;
    v80 = *(_QWORD *)(v22 + 8);
    if ( !v80 )
    {
      v81 = WdLogNewEntry5_WdAssertion(v46, v45);
      WdLogEvent5_WdAssertion(v81);
      v80 = *(_QWORD *)(v22 + 8);
    }
    v79[6] = *(_QWORD *)(v80 + 16);
    v79[7] = (int)v5;
  }
LABEL_42:
  if ( (int)v5 >= 0 )
  {
    LODWORD(v5) = 0;
    goto LABEL_44;
  }
LABEL_59:
  if ( (_DWORD)v5 == -1071774970 )
  {
    v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v45, v47);
    v62[3] = v8;
    v62[4] = v7;
    v62[5] = a4;
    WdLogEvent5_WdWarning(v62);
  }
  else
  {
    v82 = (_QWORD *)WdLogNewEntry5_WdError(v46, v45);
    v82[6] = (int)v5;
    v82[3] = a4;
    v82[4] = v8;
    v82[5] = v7;
    WdLogEvent5_WdError(v82);
  }
  if ( v88 == D3DKMDT_VPPR_UNPINNED )
    v83 = DMMVIDPNPRESENTPATH::UnpinContentRotation(v89, v63);
  else
    v83 = DMMVIDPNPRESENTPATH::PinContentRotation(v89, v88);
  if ( v83 < 0 )
  {
    v85 = WdLogNewEntry5_WdAssertion(v84, v45);
    WdLogEvent5_WdAssertion(v85);
  }
LABEL_44:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v90, v45);
  if ( v92 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v48, &EventProfilerExit, v49, v90);
  return (unsigned int)v5;
}
