/*
 * XREFs of ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0182810
 * Callers:
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C017A1D0 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C01831A4 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1C01DC470 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_0_1.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C03A9DBC (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C03AB064 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03ABFB8 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C03B2310 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?RemovePath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z @ 0x1C03B43B0 (-RemovePath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z.c)
 * Callees:
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAXXZ @ 0x1C0005878 (-_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAXXZ.c)
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAXXZ @ 0x1C0006258 (-_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAXXZ.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00062B4 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x1C000638C (-IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0006784 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C00067DC (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPNPRESENTPATH@@@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x1C00068C4 (-FindByValue@-$Set@VDMMVIDPNPRESENTPATH@@@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNPRESENTPATH@@@@@@QEAAEQEBVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0006920 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U-$DoubleLinkedListElementDeleter@.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0007F94 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0176878 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::RemovePath(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        unsigned int a3,
        struct DMMVIDPNPRESENTPATH **a4)
{
  __int64 v4; // rbp
  __int64 v6; // rdi
  struct DMMVIDPNPRESENTPATH *Path; // r14
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  int *v13; // rbp
  DMMVIDPNSOURCE *v14; // r10
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v4 = a3;
  v6 = a2;
  if ( a4 )
    *a4 = 0LL;
  if ( !ProtectableFromChange::IsModifyingActionAllowed((DMMVIDPNTOPOLOGY *)((char *)this + 56), 2u) )
  {
    WdLogSingleEntry1(2LL, this);
    return 3221225506LL;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(this, v6, v4);
  if ( !Path )
  {
    WdLogSingleEntry3(2LL, v6, v4, this);
    return 3223192359LL;
  }
  if ( *((_BYTE *)this + 76) <= 2u )
    WdLogSingleEntry0(1LL);
  if ( *((_QWORD *)this + 12) <= 2uLL )
    WdLogSingleEntry0(1LL);
  if ( (*(_BYTE *)(*((_QWORD *)this + 13) + 2LL) & 1) != 0 )
  {
    v17 = 0LL;
    if ( (int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(this, v6, &v17) < 0 || (v16 = v17) == 0 )
    {
      WdLogSingleEntry0(1LL);
      v16 = v17;
    }
    if ( v16 < 2 )
    {
      WdLogSingleEntry3(2LL, this, v6, v4);
      return 3221225506LL;
    }
  }
  v9 = Set<DMMVIDPNPRESENTPATH>::FindByValue((__int64)this, (__int64)Path);
  if ( DoublyLinkedList<DMMVIDPNPRESENTPATH,DoubleLinkedListElementDeleter<DMMVIDPNPRESENTPATH>>::ContainsByReference(
         (__int64)this + 8,
         (__int64)v9) )
  {
    v10 = v9 + 1;
    v11 = v9[1];
    if ( *(_QWORD **)(v11 + 8) != v9 + 1 || (v12 = (_QWORD *)v9[2], (_QWORD *)*v12 != v10) )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    *v10 = 0LL;
    v9[2] = 0LL;
    --*((_QWORD *)this + 5);
    if ( v9 )
      goto LABEL_14;
  }
  else
  {
    v9 = 0LL;
  }
  WdLogSingleEntry0(1LL);
LABEL_14:
  *((_DWORD *)this + 49) &= ~(1 << (*((_DWORD *)v9 + 26) - 1));
  v13 = (int *)v9[12];
  if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(this, v13[6]) )
    WdLogSingleEntry0(1LL);
  DMMVIDPNTARGET::_SetEmptyCofuncModeSet((DMMVIDPNTARGET *)v13);
  if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology(this, *(_DWORD *)(v9[11] + 24LL)) )
    DMMVIDPNSOURCE::_SetEmptyCofuncModeSet(v14);
  if ( a4 )
    *a4 = (struct DMMVIDPNPRESENTPATH *)v9;
  else
    (*(void (__fastcall **)(_QWORD *, __int64))*v9)(v9, 1LL);
  ProtectableFromChange::OnModifyingActionCompletion((DMMVIDPNTOPOLOGY *)((char *)this + 56), 2u);
  return 0LL;
}
