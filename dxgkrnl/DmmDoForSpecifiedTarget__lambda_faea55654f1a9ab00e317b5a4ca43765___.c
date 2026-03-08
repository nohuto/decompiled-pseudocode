/*
 * XREFs of DmmDoForSpecifiedTarget__lambda_faea55654f1a9ab00e317b5a4ca43765___ @ 0x1C017839C
 * Callers:
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C0178240 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0009534 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?ReferenceDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEBAJPEAPEAVDXGDISPLAYMANAGEROBJECT@@@Z @ 0x1C01D8C0C (-ReferenceDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEBAJPEAPEAVDXGDISPLAYMANAGEROBJECT@@@Z.c)
 */

__int64 __fastcall DmmDoForSpecifiedTarget__lambda_faea55654f1a9ab00e317b5a4ca43765_(
        DXGADAPTER *a1,
        unsigned int a2,
        struct DXGDISPLAYMANAGEROBJECT ***a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  DMMVIDEOPRESENTTARGET *TargetById; // rax
  unsigned int v10; // edi
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v3 = a2;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v6 = *((_QWORD *)a1 + 365);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v7 = *(_QWORD *)(v6 + 104);
  if ( v7 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v12, *(_QWORD *)(v6 + 104));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 120) + 72LL));
    v8 = *(_QWORD *)(v7 + 120);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v8, v3);
    if ( TargetById )
    {
      v10 = DMMVIDEOPRESENTTARGET::ReferenceDisplayManagerObject(TargetById, *a3);
    }
    else
    {
      WdLogSingleEntry1(2LL, v3);
      v10 = -1071774971;
    }
    if ( v8 )
      ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 40));
    return v10;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
