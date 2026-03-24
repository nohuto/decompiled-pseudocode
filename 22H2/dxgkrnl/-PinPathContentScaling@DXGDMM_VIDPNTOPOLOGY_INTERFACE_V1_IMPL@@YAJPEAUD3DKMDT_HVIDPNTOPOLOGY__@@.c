/*
 * XREFs of ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C011C450
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0006C14 (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C00074C4 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C011CB0C (-DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C011CDA0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C011CEC8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C011CF28 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C01412A8 (-DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::PinPathContentScaling(
        __int64 this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a5)
{
  __int64 v6; // rsi
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // r14
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rsi
  D3DKMDT_HVIDPN v20; // rdi
  D3DKMDT_HVIDPN v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // rcx
  ADAPTER_DISPLAY *v25; // rcx
  int IsSupportedVidPn; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  BOOLEAN IsVidPnSupported; // al
  D3DKMDT_HVIDPN v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  ADAPTER_DISPLAY *v37; // rcx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // r8
  _QWORD *v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  _QWORD *v68; // r15
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  _QWORD *v76; // rax
  _QWORD *v77; // r15
  __int64 v78; // rax
  _QWORD *v79; // rax
  int v80; // eax
  __int64 v81; // rcx
  __int64 v82; // rax
  _QWORD *v83; // rax
  DXGK_ENUM_PIVOT v84; // [rsp+48h] [rbp-51h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v85; // [rsp+50h] [rbp-49h]
  int v86; // [rsp+58h] [rbp-41h] BYREF
  __int64 v87; // [rsp+60h] [rbp-39h]
  char v88; // [rsp+68h] [rbp-31h]
  _DXGKARG_ISSUPPORTEDVIDPN v89; // [rsp+70h] [rbp-29h] BYREF
  _DXGKARG_ENUMVIDPNCOFUNCMODALITY v90; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v91[80]; // [rsp+98h] [rbp-1h] BYREF
  unsigned int v92; // [rsp+100h] [rbp+67h]

  v92 = (unsigned int)a2;
  v86 = -1;
  v6 = a4;
  v7 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  v87 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v88 = 1;
    v86 = 6026;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(0LL, &EventProfilerEnter, a3, 6026);
  }
  else
  {
    v88 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v86, 6026LL);
  if ( !this || (v11 = this, *(_DWORD *)(this + 184) != 1833173002) )
    v11 = 0LL;
  if ( !v11 )
  {
    v48 = WdLogNewEntry5_WdError(v9, 0LL);
    *(_QWORD *)(v48 + 24) = this;
    WdLogEvent5_WdError(v48);
    LODWORD(this) = -1071774976;
    goto LABEL_50;
  }
  if ( (_DWORD)v6 == 254 )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdError(v9, 0LL);
    v49[3] = 254LL;
    v49[4] = v8;
    v49[5] = v7;
    v49[6] = this;
    WdLogEvent5_WdError(v49);
    LODWORD(this) = -1071774907;
    goto LABEL_50;
  }
  v12 = v11 + 24;
  v13 = *(_QWORD *)(v11 + 24);
  if ( v13 == v11 + 24 )
  {
    v14 = 0LL;
  }
  else
  {
    v14 = v13 - 8;
    if ( !v14 )
    {
LABEL_87:
      v83 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, 0LL, v10);
      v83[3] = v8;
      v83[4] = v7;
      v83[5] = this;
      WdLogEvent5_WdWarning(v83);
      LODWORD(this) = -1071774937;
      goto LABEL_50;
    }
    do
    {
      if ( *(_DWORD *)(*(_QWORD *)(v14 + 88) + 24LL) == (_DWORD)v8
        && *(_DWORD *)(*(_QWORD *)(v14 + 96) + 24LL) == (_DWORD)v7 )
      {
        break;
      }
      v50 = *(_QWORD *)(v14 + 8);
      v14 = v50 - 8;
      if ( v50 == v12 )
        v14 = 0LL;
    }
    while ( v14 );
  }
  if ( !v14 )
    goto LABEL_87;
  v85 = *(_DWORD *)(v14 + 112);
  v15 = DMMVIDPNPRESENTPATH::PinContentScaling((DMMVIDPNPRESENTPATH *)v14, (unsigned int)v6);
  this = v15;
  if ( v15 < 0 )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
    v51[3] = v6;
    v51[4] = v8;
    v51[5] = v7;
    v51[6] = this;
    WdLogEvent5_WdError(v51);
    goto LABEL_50;
  }
  v18 = *(_QWORD *)(v11 + 168);
  if ( !v18 )
  {
    v52 = WdLogNewEntry5_WdAssertion(0LL, v16);
    WdLogEvent5_WdAssertion(v52);
    v18 = *(_QWORD *)(v11 + 168);
  }
  v19 = *(_QWORD *)(v18 + 48);
  v84 = (DXGK_ENUM_PIVOT)__PAIR64__(v7, v8);
  v20 = (D3DKMDT_HVIDPN)(v18 & -(__int64)(v18 != -88));
  if ( !v20 )
  {
    v53 = WdLogNewEntry5_WdAssertion(v18, v16);
    WdLogEvent5_WdAssertion(v53);
LABEL_66:
    v21 = 0LL;
    goto LABEL_18;
  }
  v21 = v20;
  if ( *((_DWORD *)v20 + 16) != 1833172997 )
    goto LABEL_66;
LABEL_18:
  if ( !*((_BYTE *)v21 + 296) && !DmmIsAllSourcesPixelFormatValid((struct DMMVIDPNTOPOLOGY *)(v21 + 24)) )
  {
    v54 = WdLogNewEntry5_WdError(v18, v16);
    *(_QWORD *)(v54 + 24) = v20;
    WdLogEvent5_WdError(v54);
    goto LABEL_67;
  }
  LOBYTE(v18) = *((_BYTE *)v21 + 172);
  if ( ((unsigned __int16)((2 << v18) - 1) & *((_WORD *)v21 + 87)) != 0 )
  {
    v61 = WdLogNewEntry5_WdAssertion(v18, v16);
    WdLogEvent5_WdAssertion(v61);
  }
  v22 = *(_QWORD *)(v19 + 8);
  if ( !v22 )
  {
    v62 = WdLogNewEntry5_WdAssertion(v18, v16);
    WdLogEvent5_WdAssertion(v62);
    v22 = *(_QWORD *)(v19 + 8);
  }
  v23 = *(_QWORD *)(v22 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v23 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v23 + 168)) )
  {
    v63 = WdLogNewEntry5_WdAssertion(v24, v16);
    WdLogEvent5_WdAssertion(v63);
  }
  v25 = *(ADAPTER_DISPLAY **)(v19 + 8);
  *(_QWORD *)&v89.IsVidPnSupported = 0LL;
  v89.hDesiredVidPn = v20;
  if ( !v25 )
  {
    v64 = WdLogNewEntry5_WdAssertion(0LL, v16);
    WdLogEvent5_WdAssertion(v64);
    v25 = *(ADAPTER_DISPLAY **)(v19 + 8);
  }
  IsSupportedVidPn = ADAPTER_DISPLAY::DdiIsSupportedVidPn(v25, &v89);
  this = IsSupportedVidPn;
  if ( IsSupportedVidPn < 0 )
  {
    v65 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
    v65[3] = v20;
    v65[4] = v23;
    v65[5] = this;
    WdLogEvent5_WdError(v65);
    IsVidPnSupported = 0;
  }
  else
  {
    IsVidPnSupported = v89.IsVidPnSupported;
    LODWORD(this) = 0;
  }
  if ( (int)this < 0 )
  {
    v68 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
    v68[3] = v20;
    v69 = *(_QWORD *)(v19 + 8);
    if ( !v69 )
    {
      v70 = WdLogNewEntry5_WdAssertion(v67, v66);
      WdLogEvent5_WdAssertion(v70);
      v69 = *(_QWORD *)(v19 + 8);
    }
    v68[4] = *(_QWORD *)(v69 + 16);
    v68[5] = (int)this;
    WdLogEvent5_WdError(v68);
  }
  else
  {
    if ( !IsVidPnSupported )
    {
LABEL_67:
      this = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(this + 24) = v20;
      v57 = *(_QWORD *)(v19 + 8);
      if ( !v57 )
      {
        v58 = WdLogNewEntry5_WdAssertion(v56, v55);
        WdLogEvent5_WdAssertion(v58);
        v57 = *(_QWORD *)(v19 + 8);
      }
      *(_QWORD *)(this + 32) = *(_QWORD *)(v57 + 16);
      WdLogEvent5_WdDmmEvent(this);
      LODWORD(this) = -1071774970;
      goto LABEL_70;
    }
    if ( !(_BYTE)a5 )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v47[3] = 7LL;
      v47[4] = v20;
      v47[5] = v84.VidPnSourceId;
      v47[6] = v84.VidPnTargetId;
      WdLogEvent5_WdDmmEvent(v47);
LABEL_47:
      LODWORD(this) = 0;
      goto LABEL_48;
    }
    if ( !v20 || (v31 = v20, *((_DWORD *)v20 + 16) != 1833172997) )
      v31 = 0LL;
    LOBYTE(v28) = *((_BYTE *)v31 + 172);
    if ( ((unsigned __int16)((2 << v28) - 1) & *((_WORD *)v31 + 87)) != 0 )
    {
      v72 = WdLogNewEntry5_WdAssertion(v28, v27);
      WdLogEvent5_WdAssertion(v72);
    }
    LOBYTE(v29) = 3;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v91, v31 + 38, v29);
    v34 = *(_QWORD *)(v19 + 8);
    if ( !v34 )
    {
      v73 = WdLogNewEntry5_WdAssertion(v33, v32);
      WdLogEvent5_WdAssertion(v73);
      v34 = *(_QWORD *)(v19 + 8);
    }
    v35 = *(_QWORD *)(v34 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v35 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v35 + 168)) )
    {
      v74 = WdLogNewEntry5_WdAssertion(v36, v32);
      WdLogEvent5_WdAssertion(v74);
    }
    v37 = *(ADAPTER_DISPLAY **)(v19 + 8);
    *((_DWORD *)&v90.EnumPivot + 2) = 0;
    v90.hConstrainingVidPn = v20;
    v90.EnumPivotType = D3DKMDT_EPT_SCALING;
    v90.EnumPivot = v84;
    if ( !v37 )
    {
      v75 = WdLogNewEntry5_WdAssertion(0LL, v32);
      WdLogEvent5_WdAssertion(v75);
      v37 = *(ADAPTER_DISPLAY **)(v19 + 8);
    }
    v38 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v37, &v90);
    this = v38;
    if ( v38 < 0 )
    {
      v76 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39);
      v76[3] = v20;
      v76[4] = v90.EnumPivot.VidPnSourceId;
      v76[5] = v90.EnumPivot.VidPnTargetId;
      v76[6] = this;
      WdLogEvent5_WdError(v76);
    }
    else
    {
      LODWORD(this) = 0;
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v91);
    if ( (int)this >= 0 )
      goto LABEL_47;
    v77 = (_QWORD *)WdLogNewEntry5_WdTrace(v42, v41);
    v77[3] = v20;
    v77[4] = 7LL;
    v77[5] = &v84;
    v78 = *(_QWORD *)(v19 + 8);
    if ( !v78 )
    {
      v71 = WdLogNewEntry5_WdAssertion(v42, v41);
      WdLogEvent5_WdAssertion(v71);
      v78 = *(_QWORD *)(v19 + 8);
    }
    v77[6] = *(_QWORD *)(v78 + 16);
    v77[7] = (int)this;
  }
LABEL_48:
  if ( (int)this >= 0 )
  {
    LODWORD(this) = 0;
    goto LABEL_50;
  }
LABEL_70:
  if ( (_DWORD)this == -1071774970 )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43);
    v59[3] = v92;
    v59[4] = v7;
    v59[5] = a4;
    WdLogEvent5_WdWarning(v59);
  }
  else
  {
    v79 = (_QWORD *)WdLogNewEntry5_WdError(v42, v41);
    v79[3] = a4;
    v79[4] = v92;
    v79[5] = v7;
    v79[6] = (int)this;
    WdLogEvent5_WdError(v79);
  }
  if ( v85 == D3DKMDT_VPPS_UNPINNED )
    v80 = DMMVIDPNPRESENTPATH::UnpinContentScaling((DMMVIDPNPRESENTPATH *)v14, v60);
  else
    v80 = DMMVIDPNPRESENTPATH::PinContentScaling((DMMVIDPNPRESENTPATH *)v14, (unsigned int)v85);
  if ( v80 < 0 )
  {
    v82 = WdLogNewEntry5_WdAssertion(v81, v41);
    WdLogEvent5_WdAssertion(v82);
  }
LABEL_50:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v86, v41);
  if ( v88 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v44, &EventProfilerExit, v45, v86);
  return (unsigned int)this;
}
