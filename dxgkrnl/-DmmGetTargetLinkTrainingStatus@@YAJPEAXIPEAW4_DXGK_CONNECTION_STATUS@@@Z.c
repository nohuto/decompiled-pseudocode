/*
 * XREFs of ?DmmGetTargetLinkTrainingStatus@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z @ 0x1C016AB50
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016A260 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0009534 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C017CB3C (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 */

__int64 __fastcall DmmGetTargetLinkTrainingStatus(PERESOURCE *a1, unsigned int a2, enum _DXGK_CONNECTION_STATUS *a3)
{
  __int64 v4; // rdi
  __int64 Flink; // rbx
  __int64 v7; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  unsigned int v9; // edi
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
    WdLogSingleEntry0(1LL);
  Flink = (__int64)a1[365][1].SystemResourcesList.Flink;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v11, Flink);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(Flink + 120) + 72LL));
  v7 = *(_QWORD *)(Flink + 120);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v7, v4);
  if ( TargetById )
  {
    *(_DWORD *)a3 = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(TargetById, 0LL);
    v9 = 0;
  }
  else
  {
    WdLogSingleEntry1(2LL, v4);
    v9 = -1073741811;
  }
  if ( v7 )
    ReferenceCounted::Release((ReferenceCounted *)(v7 + 64));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v11 + 40));
  return v9;
}
