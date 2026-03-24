/*
 * XREFs of ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C012EF70
 * Callers:
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C011D170 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C012EE28 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C02E8190 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C0007430 (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00074F0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0009364 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x1C000939C (-IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z.c)
 *     ?Add@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00093D4 (-Add@-$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018EB8 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AddPath(
        DMMVIDPNTOPOLOGY **this,
        struct DMMVIDPNPRESENTPATH *a2,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a3)
{
  __int64 v3; // r14
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 Container; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  char v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r10
  DMMVIDPNTOPOLOGY *v22; // rbx
  char *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  _QWORD *v38; // rax
  DMMVIDPNTOPOLOGY *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax

  v3 = a3;
  if ( !a2 )
  {
    v30 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v30);
  }
  v6 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
  v6[3] = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
  v7 = *(unsigned int *)(*((_QWORD *)a2 + 12) + 24LL);
  v6[4] = v7;
  v6[5] = *((int *)a2 + 26);
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)(this + 20), v7);
  LOBYTE(v9) = 1;
  v6[6] = Container;
  v6[7] = v3;
  if ( !ProtectableFromChange::IsModifyingActionAllowed((ProtectableFromChange *)(this + 7), v9) )
  {
    v31 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v31 + 24) = this;
    WdLogEvent5_WdError(v31);
    return 3221225506LL;
  }
  v12 = *((_QWORD *)a2 + 12);
  v13 = *(_DWORD *)(v12 + 24);
  if ( DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)this, *(_DWORD *)(*((_QWORD *)a2 + 11) + 24LL), v13) )
  {
    v32 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v32 + 24) = a2;
    *(_QWORD *)(v32 + 32) = this;
    WdLogEvent5_WdWarning(v32);
    return 3223192339LL;
  }
  v17 = *(_BYTE *)(*(_QWORD *)(v12 + 96) + 406LL);
  if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)this, v13) )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v19);
    v27[3] = a2;
    v27[4] = this;
    v27[5] = *(unsigned int *)(v12 + 24);
    WdLogEvent5_WdDmmEvent(v27);
    return 3223192320LL;
  }
  if ( !*(_QWORD *)(v21 + 112) )
  {
    v28 = (unsigned int)(v3 - 1);
    if ( (_DWORD)v3 == 1 )
    {
      v29 = WdLogNewEntry5_WdDmmEvent(v28);
      *(_QWORD *)(v29 + 24) = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
      *(_QWORD *)(v29 + 32) = *(unsigned int *)(*((_QWORD *)a2 + 12) + 24LL);
      WdLogEvent5_WdDmmEvent(v29);
    }
    else
    {
      if ( (_DWORD)v3 == 2 )
      {
        v34 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v28);
        v34[3] = a2;
        v34[4] = this;
        v34[5] = *(unsigned int *)(v12 + 24);
        WdLogEvent5_WdDmmEvent(v34);
        return 3223192376LL;
      }
      if ( (unsigned int)(v3 - 1) > 1 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v28, v18);
        WdLogEvent5_WdAssertion(v33);
      }
    }
  }
  v22 = this[3];
  if ( v22 == (DMMVIDPNTOPOLOGY *)(this + 3) || (v23 = (char *)v22 - 8) == 0LL )
  {
LABEL_9:
    if ( Set<DMMVIDPNPRESENTPATH>::Add((__int64)this, (__int64)a2) != 1 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v25, v24);
      WdLogEvent5_WdAssertion(v40);
    }
    if ( *((_QWORD *)a2 + 6) )
    {
      v41 = WdLogNewEntry5_WdAssertion(v25, v24);
      WdLogEvent5_WdAssertion(v41);
    }
    *((_QWORD *)a2 + 6) = this;
    LOBYTE(v24) = 1;
    *((_DWORD *)this + 49) |= 1 << (*((_DWORD *)a2 + 26) - 1);
    ProtectableFromChange::OnModifyingActionCompletion((ProtectableFromChange *)(this + 7), v24);
    return 0LL;
  }
  while ( 1 )
  {
    v35 = *((_QWORD *)v23 + 11);
    v36 = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
    if ( *(_DWORD *)(v35 + 24) != (_DWORD)v36 )
      goto LABEL_27;
    if ( v17 )
      break;
    v36 = *(_QWORD *)(*((_QWORD *)v23 + 12) + 96LL);
    if ( *(_BYTE *)(v36 + 406) )
    {
      v37 = WdLogNewEntry5_WdWarning(v36, v35, v20);
      *(_QWORD *)(v37 + 24) = *((_QWORD *)v23 + 12);
      goto LABEL_34;
    }
LABEL_27:
    if ( *((_DWORD *)v23 + 26) == *((_DWORD *)a2 + 26) )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v35, v20);
      v38[3] = a2;
      v38[4] = *((int *)a2 + 26);
      v38[5] = v12;
      v38[6] = this;
      WdLogEvent5_WdWarning(v38);
    }
    v39 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v23 + 1);
    v23 = (char *)v39 - 8;
    if ( v39 == (DMMVIDPNTOPOLOGY *)(this + 3) )
      v23 = 0LL;
    if ( !v23 )
      goto LABEL_9;
  }
  v37 = WdLogNewEntry5_WdWarning(v36, v35, v20);
  *(_QWORD *)(v37 + 24) = v12;
LABEL_34:
  *(_QWORD *)(v37 + 32) = -1071774975LL;
  WdLogEvent5_WdWarning(v37);
  return 3223192321LL;
}
