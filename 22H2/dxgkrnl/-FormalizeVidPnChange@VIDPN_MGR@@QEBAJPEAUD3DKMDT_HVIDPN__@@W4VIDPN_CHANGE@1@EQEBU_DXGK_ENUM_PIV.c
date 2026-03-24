/*
 * XREFs of ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C011C7C4
 * Callers:
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C011E08C (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C012E69C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C012EE28 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N@Z @ 0x1C016A690 (-UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N.c)
 *     ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C02DD648 (-DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MUL.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C02E0A84 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C011CB0C (-DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C011CDA0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C011CEC8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C011CF28 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C01412A8 (-DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::FormalizeVidPnChange(
        __int64 a1,
        D3DKMDT_HVIDPN a2,
        __int64 a3,
        char a4,
        DXGK_ENUM_PIVOT *a5)
{
  __int64 v5; // rbx
  __int64 v8; // r14
  D3DKMDT_HVIDPN v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rcx
  ADAPTER_DISPLAY *v13; // rcx
  int IsSupportedVidPn; // eax
  __int64 v15; // rsi
  BOOLEAN IsVidPnSupported; // al
  D3DKMDT_HVIDPN v17; // rsi
  D3DKMDT_HVIDPN v18; // r15
  bool v19; // cf
  D3DKMDT_ENUMCOFUNCMODALITY_PIVOT_TYPE v20; // esi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  ADAPTER_DISPLAY *v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 result; // rax
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rdx
  _QWORD *v57; // r15
  __int64 v58; // rcx
  struct _DXGKARG_ISSUPPORTEDVIDPN v59; // [rsp+40h] [rbp-40h] BYREF
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v60; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v61[24]; // [rsp+68h] [rbp-18h] BYREF

  v5 = (int)a3;
  v8 = a1;
  if ( !a2 )
  {
    v32 = WdLogNewEntry5_WdAssertion(a1, 0LL);
    WdLogEvent5_WdAssertion(v32);
  }
  if ( (int)v5 <= 6 )
  {
    if ( (_DWORD)v5 == 6 )
      goto LABEL_22;
    a1 = (unsigned int)(v5 - 1);
    if ( (_DWORD)v5 != 1 )
    {
      a1 = (unsigned int)(v5 - 2);
      if ( (_DWORD)v5 == 2 )
        goto LABEL_22;
      a1 = (unsigned int)(v5 - 3);
      if ( (_DWORD)v5 != 3 )
      {
        a1 = (unsigned int)(v5 - 4);
        if ( (_DWORD)v5 == 4 )
          goto LABEL_22;
        if ( (_DWORD)v5 != 5 )
        {
LABEL_63:
          v33 = WdLogNewEntry5_WdError(a1, a2);
          *(_QWORD *)(v33 + 24) = v5;
          WdLogEvent5_WdError(v33);
          goto LABEL_22;
        }
      }
    }
  }
  else if ( (_DWORD)v5 != 7 )
  {
    if ( (_DWORD)v5 == 8 )
      goto LABEL_22;
    if ( (_DWORD)v5 != 9 )
    {
      if ( (int)v5 <= 11 )
        goto LABEL_22;
      goto LABEL_63;
    }
  }
  if ( a2 && *((_DWORD *)a2 + 16) == 1833172997 )
    v9 = a2;
  else
    v9 = 0LL;
  if ( !*((_BYTE *)v9 + 296) && !DmmIsAllSourcesPixelFormatValid((struct DMMVIDPNTOPOLOGY *)(v9 + 24)) )
  {
    v34 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v34 + 24) = a2;
    WdLogEvent5_WdError(v34);
    goto LABEL_71;
  }
  LOBYTE(a1) = *((_BYTE *)v9 + 172);
  if ( ((unsigned __int16)((2 << a1) - 1) & *((_WORD *)v9 + 87)) != 0 )
  {
    v35 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v35);
  }
  v10 = *(_QWORD *)(v8 + 8);
  if ( !v10 )
  {
    v36 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v36);
    v10 = *(_QWORD *)(v8 + 8);
  }
  v11 = *(_QWORD *)(v10 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v11 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v11 + 168)) )
  {
    v37 = WdLogNewEntry5_WdAssertion(v12, a2);
    WdLogEvent5_WdAssertion(v37);
  }
  v13 = *(ADAPTER_DISPLAY **)(v8 + 8);
  *(_QWORD *)&v59.IsVidPnSupported = 0LL;
  v59.hDesiredVidPn = a2;
  if ( !v13 )
  {
    v38 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v38);
    v13 = *(ADAPTER_DISPLAY **)(v8 + 8);
  }
  IsSupportedVidPn = ADAPTER_DISPLAY::DdiIsSupportedVidPn(v13, &v59);
  v15 = IsSupportedVidPn;
  if ( IsSupportedVidPn < 0 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2);
    v39[3] = a2;
    v39[4] = v11;
    v39[5] = v15;
    WdLogEvent5_WdError(v39);
    IsVidPnSupported = 0;
  }
  else
  {
    IsVidPnSupported = v59.IsVidPnSupported;
    LODWORD(v15) = 0;
  }
  if ( (int)v15 < 0 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2);
    v41[3] = a2;
    v42 = *(_QWORD *)(v8 + 8);
    if ( !v42 )
    {
      v43 = WdLogNewEntry5_WdAssertion(0LL, v40);
      WdLogEvent5_WdAssertion(v43);
      v42 = *(_QWORD *)(v8 + 8);
    }
    v41[4] = *(_QWORD *)(v42 + 16);
    v41[5] = (int)v15;
    WdLogEvent5_WdError(v41);
    return (unsigned int)v15;
  }
  if ( IsVidPnSupported )
  {
LABEL_22:
    if ( !a4 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v31[3] = v5;
      v31[4] = a2;
      v31[5] = a5->VidPnSourceId;
      v31[6] = a5->VidPnTargetId;
      WdLogEvent5_WdDmmEvent(v31);
      return 0LL;
    }
    if ( a2 && *((_DWORD *)a2 + 16) == 1833172997 )
      v17 = a2;
    else
      v17 = 0LL;
    LOBYTE(a1) = *((_BYTE *)v17 + 172);
    v18 = v17 + 38;
    if ( ((unsigned __int16)((2 << a1) - 1) & *((_WORD *)v17 + 87)) != 0 )
    {
      v50 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v50);
    }
    v19 = v17 + 24 != 0LL;
    v20 = D3DKMDT_EPT_SCALING;
    LOBYTE(a3) = 3;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v61, (unsigned __int64)v18 & -(__int64)v19, a3);
    v22 = *(_QWORD *)(v8 + 8);
    if ( !v22 )
    {
      v51 = WdLogNewEntry5_WdAssertion(0LL, v21);
      WdLogEvent5_WdAssertion(v51);
      v22 = *(_QWORD *)(v8 + 8);
    }
    v23 = *(_QWORD *)(v22 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v23 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v23 + 168)) )
    {
      v52 = WdLogNewEntry5_WdAssertion(v23, v21);
      WdLogEvent5_WdAssertion(v52);
    }
    *(_QWORD *)&v60.EnumPivot.VidPnTargetId = 0LL;
    v60.hConstrainingVidPn = a2;
    if ( (int)v5 > 8 )
    {
      if ( (int)v5 <= 10 )
      {
        v20 = D3DKMDT_EPT_ROTATION;
        goto LABEL_35;
      }
      if ( (_DWORD)v5 == 11 )
        goto LABEL_62;
    }
    else
    {
      if ( (int)v5 >= 7 )
      {
LABEL_35:
        v60.EnumPivotType = v20;
        if ( a5 )
        {
          v60.EnumPivot = *a5;
        }
        else
        {
          v60.EnumPivot.VidPnSourceId = -1;
          v60.EnumPivot.VidPnTargetId = -1;
        }
        v24 = *(ADAPTER_DISPLAY **)(v8 + 8);
        if ( !v24 )
        {
          v54 = WdLogNewEntry5_WdAssertion(0LL, v21);
          WdLogEvent5_WdAssertion(v54);
          v24 = *(ADAPTER_DISPLAY **)(v8 + 8);
        }
        v25 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v24, &v60);
        v15 = v25;
        if ( v25 < 0 )
        {
          v55 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
          v55[3] = a2;
          v55[4] = v60.EnumPivot.VidPnSourceId;
          v55[5] = v60.EnumPivot.VidPnTargetId;
          v55[6] = v15;
          WdLogEvent5_WdError(v55);
        }
        else
        {
          LODWORD(v15) = 0;
        }
        ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v61);
        if ( (int)v15 >= 0 )
          return 0LL;
        v57 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v28);
        v57[3] = a2;
        v57[4] = v5;
        v57[5] = a5;
        v58 = *(_QWORD *)(v8 + 8);
        if ( !v58 )
        {
          v44 = WdLogNewEntry5_WdAssertion(0LL, v56);
          WdLogEvent5_WdAssertion(v44);
          v58 = *(_QWORD *)(v8 + 8);
        }
        v57[6] = *(_QWORD *)(v58 + 16);
        v57[7] = (int)v15;
        return (unsigned int)v15;
      }
      if ( (int)v5 > 0 )
      {
        if ( (int)v5 > 2 )
        {
          v20 = ((int)v5 > 4) + 1;
          goto LABEL_35;
        }
LABEL_62:
        v20 = D3DKMDT_EPT_NOPIVOT;
        goto LABEL_35;
      }
    }
    v53 = WdLogNewEntry5_WdError(v23, v21);
    *(_QWORD *)(v53 + 24) = v5;
    WdLogEvent5_WdError(v53);
    v20 = D3DKMDT_EPT_UNINITIALIZED;
    goto LABEL_35;
  }
LABEL_71:
  v47 = WdLogNewEntry5_WdDmmEvent();
  *(_QWORD *)(v47 + 24) = a2;
  v48 = *(_QWORD *)(v8 + 8);
  if ( !v48 )
  {
    v49 = WdLogNewEntry5_WdAssertion(v46, v45);
    WdLogEvent5_WdAssertion(v49);
    v48 = *(_QWORD *)(v8 + 8);
  }
  *(_QWORD *)(v47 + 32) = *(_QWORD *)(v48 + 16);
  WdLogEvent5_WdDmmEvent(v47);
  result = 3223192321LL;
  if ( (_DWORD)v5 != 1 )
    return 3223192326LL;
  return result;
}
