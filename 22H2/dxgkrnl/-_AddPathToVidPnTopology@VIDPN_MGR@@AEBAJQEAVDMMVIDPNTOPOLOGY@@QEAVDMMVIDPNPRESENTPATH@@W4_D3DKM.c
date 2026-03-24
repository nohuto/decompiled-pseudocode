/*
 * XREFs of ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C012EE28
 * Callers:
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C012EC80 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C015189C (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018EB8 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C011C7C4 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C011CDA0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C011CEC8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C012EF70 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0141140 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_AddPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        struct DMMVIDPNPRESENTPATH *const a3,
        __int64 a4,
        char a5)
{
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v5; // esi
  VIDPN_MGR *v8; // r12
  __int64 v9; // rbp
  __int64 v10; // r14
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v18; // rdx
  __int64 Container; // rax
  __int64 v20; // r13
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r9
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // [rsp+20h] [rbp-78h]
  __int64 v36; // [rsp+20h] [rbp-78h]
  _BYTE v37[88]; // [rsp+40h] [rbp-58h] BYREF
  DXGK_ENUM_PIVOT v38; // [rsp+A8h] [rbp+10h] BYREF
  struct DMMVIDPNPRESENTPATH *v39; // [rsp+B0h] [rbp+18h] BYREF

  v5 = (int)a4;
  v8 = this;
  if ( !a2 )
  {
    v24 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v24);
  }
  if ( !a3 )
  {
    v25 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v25);
  }
  LOBYTE(this) = *((_BYTE *)a2 + 76);
  v9 = *(unsigned int *)(*((_QWORD *)a3 + 11) + 24LL);
  v10 = *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL);
  if ( ((unsigned __int16)((2 << (char)this) - 1) & *((_WORD *)a2 + 39)) != 0 )
  {
    v26 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v26);
  }
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v37, (__int64)a2 + 56, 1u, a4, v35, 1LL);
  v11 = DMMVIDPNTOPOLOGY::AddPath(a2, a3, v5);
  v14 = v11;
  if ( v11 < 0 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12);
    v15[3] = v9;
    v15[4] = v10;
    v15[5] = a2;
    v15[6] = v14;
LABEL_9:
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v37, v16);
    return (unsigned int)v14;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v37, v12);
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160, v18);
  v38.VidPnSourceId = -1;
  v38.VidPnTargetId = -1;
  v20 = Container + 88;
  v39 = (struct DMMVIDPNPRESENTPATH *)Container;
  v21 = VIDPN_MGR::FormalizeVidPnChange(
          (__int64)v8,
          (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
          1LL,
          a5,
          &v38);
  v14 = v21;
  if ( v21 < 0 )
  {
    if ( v21 == -1071774975 )
    {
      v27 = WdLogNewEntry5_WdDmmEvent(v23);
      *(_QWORD *)(v27 + 24) = v9;
      *(_QWORD *)(v27 + 32) = v10;
      WdLogEvent5_WdDmmEvent(v27);
    }
    else
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
      v31[5] = (unsigned __int64)v39 & -(__int64)(v20 != 0);
      v31[3] = v9;
      v31[4] = v10;
      v31[6] = v14;
      WdLogEvent5_WdError(v31);
    }
    LOBYTE(v29) = *((_BYTE *)a2 + 76);
    if ( ((unsigned __int16)((2 << v29) - 1) & *((_WORD *)a2 + 39)) != 0 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v29, v28);
      WdLogEvent5_WdAssertion(v32);
    }
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v37, (__int64)a2 + 56, 2u, v30, v36, 1LL);
    v39 = 0LL;
    if ( (int)DMMVIDPNTOPOLOGY::RemovePath(a2, v9, v10, &v39) < 0 || v39 != a3 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v33, v16);
      WdLogEvent5_WdAssertion(v34);
    }
    goto LABEL_9;
  }
  return 0LL;
}
