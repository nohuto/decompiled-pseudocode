/*
 * XREFs of ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C02E00A8
 * Callers:
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C02E0A84 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0006C14 (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018EB8 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPNTOPOLOGY@@@@QEBAPEAVDMMVIDPNTOPOLOGY@@XZ @ 0x1C005C164 (-GetContainer@-$ContainedBy@VDMMVIDPNTOPOLOGY@@@@QEBAPEAVDMMVIDPNTOPOLOGY@@XZ.c)
 *     ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C011CB0C (-DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C011CDA0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C011CEC8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C011CF28 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C01412A8 (-DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinPathContentScaling(
        ADAPTER_DISPLAY **this,
        struct DMMVIDPNPRESENTPATH *const a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a3,
        BOOLEAN a4)
{
  __int64 v4; // r15
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 Container; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  D3DKMDT_HVIDPN v21; // rdi
  __int64 v22; // rax
  D3DKMDT_HVIDPN v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  ADAPTER_DISPLAY *v27; // rax
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // rcx
  __int64 v31; // rax
  ADAPTER_DISPLAY *v32; // rcx
  __int64 v33; // rax
  int IsSupportedVidPn; // eax
  __int64 v35; // rdx
  __int64 v36; // r9
  _QWORD *v37; // rax
  BOOLEAN IsVidPnSupported; // al
  __int64 v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // r14
  ADAPTER_DISPLAY *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  ADAPTER_DISPLAY *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdi
  D3DKMDT_HVIDPN v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  ADAPTER_DISPLAY *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rax
  ADAPTER_DISPLAY *v61; // rcx
  __int64 v62; // rax
  int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rcx
  _QWORD *v66; // rax
  _QWORD *v67; // r14
  ADAPTER_DISPLAY *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // [rsp+20h] [rbp-60h]
  struct _DXGKARG_ISSUPPORTEDVIDPN v72; // [rsp+40h] [rbp-40h] BYREF
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v73; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v74[24]; // [rsp+68h] [rbp-18h] BYREF
  DXGK_ENUM_PIVOT v75; // [rsp+C8h] [rbp+48h] BYREF
  BOOLEAN v76; // [rsp+D8h] [rbp+58h]

  v76 = a4;
  v4 = a3;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !(_DWORD)v4 || (unsigned int)(v4 - 254) <= 1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = DMMVIDPNPRESENTPATH::PinContentScaling(a2, (unsigned int)v4);
  v12 = v9;
  if ( v9 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v13[5] = v12;
LABEL_8:
    v13[4] = a2;
    v13[3] = v4;
    WdLogEvent5_WdError(v13);
    return (unsigned int)v12;
  }
  Container = ContainedBy<DMMVIDPNTOPOLOGY>::GetContainer((__int64)a2 + 40, v10);
  v17 = ContainedBy<DMMVIDPN>::GetContainer(Container + 160, v16);
  v18 = *((_QWORD *)a2 + 12);
  v75.VidPnSourceId = *(_DWORD *)(*((_QWORD *)a2 + 11) + 24LL);
  v19 = *(unsigned int *)(v18 + 24);
  v20 = -(v17 + 88);
  v75.VidPnTargetId = v19;
  v21 = (D3DKMDT_HVIDPN)(v17 & -(__int64)(v17 != -88));
  if ( !v21 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v20, v19);
    WdLogEvent5_WdAssertion(v22);
  }
  v76 = 0;
  if ( v21 && *((_DWORD *)v21 + 16) == 1833172997 )
    v23 = v21;
  else
    v23 = 0LL;
  if ( !*((_BYTE *)v23 + 296) && !DmmIsAllSourcesPixelFormatValid((__int64)(v23 + 24), v19) )
  {
    v24 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v24 + 24) = v21;
    WdLogEvent5_WdError(v24);
LABEL_36:
    v12 = WdLogNewEntry5_WdDmmEvent(v25);
    *(_QWORD *)(v12 + 24) = v21;
    v49 = this[1];
    if ( !v49 )
    {
      v50 = WdLogNewEntry5_WdAssertion(v48, v47);
      WdLogEvent5_WdAssertion(v50);
      v49 = this[1];
    }
    *(_QWORD *)(v12 + 32) = *((_QWORD *)v49 + 2);
    WdLogEvent5_WdDmmEvent(v12);
    LODWORD(v12) = -1071774970;
    v51 = v4;
    goto LABEL_62;
  }
  LOBYTE(v20) = *((_BYTE *)v23 + 172);
  if ( ((unsigned __int16)((2 << v20) - 1) & *((_WORD *)v23 + 87)) != 0 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v20, v19);
    WdLogEvent5_WdAssertion(v26);
  }
  v27 = this[1];
  if ( !v27 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v20, v19);
    WdLogEvent5_WdAssertion(v28);
    v27 = this[1];
  }
  v29 = *((_QWORD *)v27 + 2);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v29 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v29 + 168)) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v30, v19);
    WdLogEvent5_WdAssertion(v31);
  }
  v32 = this[1];
  *(_QWORD *)&v72.IsVidPnSupported = 0LL;
  v72.hDesiredVidPn = v21;
  if ( !v32 )
  {
    v33 = WdLogNewEntry5_WdAssertion(0LL, v19);
    WdLogEvent5_WdAssertion(v33);
    v32 = this[1];
  }
  IsSupportedVidPn = ADAPTER_DISPLAY::DdiIsSupportedVidPn(v32, &v72);
  v12 = IsSupportedVidPn;
  if ( IsSupportedVidPn >= 0 )
  {
    IsVidPnSupported = v72.IsVidPnSupported;
    LODWORD(v12) = 0;
  }
  else
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v25, v35);
    v37[3] = v21;
    v37[4] = v29;
    v37[5] = v12;
    WdLogEvent5_WdError(v37);
    IsVidPnSupported = v76;
  }
  if ( (int)v12 >= 0 )
  {
    if ( !IsVidPnSupported )
      goto LABEL_36;
    if ( v21 && *((_DWORD *)v21 + 16) == 1833172997 )
      v52 = v21;
    else
      v52 = 0LL;
    LOBYTE(v25) = *((_BYTE *)v52 + 172);
    if ( ((unsigned __int16)((2 << v25) - 1) & *((_WORD *)v52 + 87)) != 0 )
    {
      v53 = WdLogNewEntry5_WdAssertion(v25, v35);
      WdLogEvent5_WdAssertion(v53);
    }
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)v74,
      (__int64)(v52 + 38),
      3u,
      v36,
      v71,
      *((_QWORD *)v52 + 17));
    v56 = this[1];
    if ( !v56 )
    {
      v57 = WdLogNewEntry5_WdAssertion(v55, v54);
      WdLogEvent5_WdAssertion(v57);
      v56 = this[1];
    }
    v58 = *((_QWORD *)v56 + 2);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v58 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v58 + 168)) )
    {
      v60 = WdLogNewEntry5_WdAssertion(v59, v54);
      WdLogEvent5_WdAssertion(v60);
    }
    *((_DWORD *)&v73.EnumPivot + 2) = 0;
    v61 = this[1];
    v73.hConstrainingVidPn = v21;
    v73.EnumPivotType = D3DKMDT_EPT_SCALING;
    v73.EnumPivot = v75;
    if ( !v61 )
    {
      v62 = WdLogNewEntry5_WdAssertion(0LL, v54);
      WdLogEvent5_WdAssertion(v62);
      v61 = this[1];
    }
    v63 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v61, &v73);
    v12 = v63;
    if ( v63 >= 0 )
    {
      LODWORD(v12) = 0;
    }
    else
    {
      v66 = (_QWORD *)WdLogNewEntry5_WdError(v65, v64);
      v66[3] = v21;
      v66[4] = v73.EnumPivot.VidPnSourceId;
      v66[5] = v73.EnumPivot.VidPnTargetId;
      v66[6] = v12;
      WdLogEvent5_WdError(v66);
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v74, v64);
    if ( (int)v12 >= 0 )
    {
      LODWORD(v12) = 0;
    }
    else
    {
      v67 = (_QWORD *)WdLogNewEntry5_WdTrace(v45, v44);
      v67[3] = v21;
      v67[4] = 7LL;
      v67[5] = &v75;
      v68 = this[1];
      if ( !v68 )
      {
        v69 = WdLogNewEntry5_WdAssertion(v45, v44);
        WdLogEvent5_WdAssertion(v69);
        v68 = this[1];
      }
      v67[6] = *((_QWORD *)v68 + 2);
      v67[7] = (int)v12;
    }
  }
  else
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v25, v35);
    v41[3] = v21;
    v42 = this[1];
    if ( !v42 )
    {
      v43 = WdLogNewEntry5_WdAssertion(v40, v39);
      WdLogEvent5_WdAssertion(v43);
      v42 = this[1];
    }
    v41[4] = *((_QWORD *)v42 + 2);
    v41[5] = (int)v12;
    WdLogEvent5_WdError(v41);
  }
  if ( (int)v12 < 0 )
  {
    v51 = v4;
    if ( (_DWORD)v12 != -1071774970 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v45, v44);
      v13[5] = (int)v12;
      goto LABEL_8;
    }
LABEL_62:
    v70 = WdLogNewEntry5_WdWarning(v45, v44, v46);
    *(_QWORD *)(v70 + 24) = v51;
    *(_QWORD *)(v70 + 32) = a2;
    WdLogEvent5_WdWarning(v70);
    return (unsigned int)v12;
  }
  return 0LL;
}
