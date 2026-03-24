/*
 * XREFs of ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C02E1724
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02DAB84 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C02DC790 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018EB8 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C011CDA0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C011CEC8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C011CF28 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C02E7838 (-UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall VIDPN_MGR::UnpinPathModalityFromSource(
        ADAPTER_DISPLAY **this,
        struct DMMVIDPNTOPOLOGY *const a2,
        unsigned int a3)
{
  __int64 v3; // r15
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  _QWORD *v12; // rax
  __int64 Container; // rax
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r13
  __int64 v18; // r12
  __int64 v19; // rcx
  D3DKMDT_HVIDPN v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  ADAPTER_DISPLAY *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  ADAPTER_DISPLAY *v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbx
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD *v39; // rsi
  ADAPTER_DISPLAY *v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // [rsp+20h] [rbp-50h]
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v44; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v45[24]; // [rsp+58h] [rbp-18h] BYREF
  DXGK_ENUM_PIVOT v46; // [rsp+A8h] [rbp+38h] BYREF

  v3 = a3;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( (_DWORD)v3 == -1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = DMMVIDPNTOPOLOGY::UnpinPathModalityFromSource(a2, v3);
  v11 = v8;
  if ( v8 < 0 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
    v12[3] = v3;
    v12[4] = a2;
    v12[5] = v11;
    return (unsigned int)v11;
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160, v9);
  v17 = Container;
  v46 = (DXGK_ENUM_PIVOT)-1LL;
  v18 = Container + 88;
  v19 = -(Container + 88);
  v20 = (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88));
  if ( v20 )
  {
    if ( *(_DWORD *)((Container & -(__int64)(Container != -88)) + 0x40) == 1833172997 )
    {
      v22 = Container & -(__int64)(Container != -88);
      goto LABEL_10;
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdAssertion(v19, v15);
    WdLogEvent5_WdAssertion(v21);
  }
  v22 = 0LL;
LABEL_10:
  LOBYTE(v19) = *(_BYTE *)(v22 + 172);
  if ( ((unsigned __int16)((2 << v19) - 1) & *(_WORD *)(v22 + 174)) != 0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v19, v15);
    WdLogEvent5_WdAssertion(v23);
  }
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v45,
    v22 + 152,
    3u,
    v16,
    v43,
    *(_QWORD *)(v22 + 136));
  v25 = this[1];
  if ( !v25 )
  {
    v26 = WdLogNewEntry5_WdAssertion(0LL, v24);
    WdLogEvent5_WdAssertion(v26);
    v25 = this[1];
  }
  v27 = *((_QWORD *)v25 + 2);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v27 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v27 + 168)) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v28, v24);
    WdLogEvent5_WdAssertion(v29);
  }
  *((_DWORD *)&v44.EnumPivot + 2) = 0;
  v30 = this[1];
  v44.hConstrainingVidPn = v20;
  v44.EnumPivotType = D3DKMDT_EPT_NOPIVOT;
  v44.EnumPivot = v46;
  if ( !v30 )
  {
    v31 = WdLogNewEntry5_WdAssertion(0LL, v24);
    WdLogEvent5_WdAssertion(v31);
    v30 = this[1];
  }
  v32 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v30, &v44);
  v35 = v32;
  if ( v32 >= 0 )
  {
    LODWORD(v35) = 0;
  }
  else
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33);
    v36[3] = v20;
    v36[4] = v44.EnumPivot.VidPnSourceId;
    v36[5] = v44.EnumPivot.VidPnTargetId;
    v36[6] = v35;
    WdLogEvent5_WdError(v36);
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v45, v33);
  if ( (int)v35 >= 0 )
  {
    LODWORD(v35) = 0;
  }
  else
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdTrace(v38, v37);
    v39[3] = v20;
    v39[4] = 11LL;
    v39[5] = &v46;
    v40 = this[1];
    if ( !v40 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v38, v37);
      WdLogEvent5_WdAssertion(v41);
      v40 = this[1];
    }
    v39[6] = *((_QWORD *)v40 + 2);
    v39[7] = (int)v35;
  }
  if ( (int)v35 >= 0 )
    return 0LL;
  v42 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37);
  v42[3] = v3;
  v42[4] = v17 & -(__int64)(v18 != 0);
  v42[5] = (int)v35;
  WdLogEvent5_WdError(v42);
  return (unsigned int)v35;
}
