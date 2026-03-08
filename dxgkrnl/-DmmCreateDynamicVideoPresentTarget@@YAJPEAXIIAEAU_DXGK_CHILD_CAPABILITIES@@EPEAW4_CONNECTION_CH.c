/*
 * XREFs of ?DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C03AD15C
 * Callers:
 *     DpiFdoHandleTargetConnectionState @ 0x1C0397A98 (DpiFdoHandleTargetConnectionState.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C0016D34 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C03AE4E8 (-CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@.c)
 */

__int64 __fastcall DmmCreateDynamicVideoPresentTarget(
        PERESOURCE *a1,
        unsigned int a2,
        unsigned int a3,
        struct _DXGK_CHILD_CAPABILITIES *a4,
        char a5,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a6)
{
  __int64 Flink; // rbx
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  DMMVIDEOPRESENTTARGETSET *v13; // [rsp+50h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
    WdLogSingleEntry0(1LL);
  Flink = (__int64)a1[365][1].SystemResourcesList.Flink;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v12, Flink);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(Flink + 120) + 72LL));
  v13 = *(DMMVIDEOPRESENTTARGETSET **)(Flink + 120);
  LODWORD(Flink) = DMMVIDEOPRESENTTARGETSET::CreateDynamicVideoPresentTarget(v13, a2, a3, a4, a5, a6);
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)&v13, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v12[0] + 40LL));
  return (unsigned int)Flink;
}
