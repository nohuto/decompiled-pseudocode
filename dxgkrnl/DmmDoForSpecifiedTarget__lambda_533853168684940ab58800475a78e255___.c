/*
 * XREFs of DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255___ @ 0x1C03A5F1C
 * Callers:
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02F8E90 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0009534 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?ExchangeDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJPEAVDXGDISPLAYMANAGEROBJECT@@0@Z @ 0x1C03AE994 (-ExchangeDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJPEAVDXGDISPLAYMANAGEROBJECT@@0@Z.c)
 */

__int64 __fastcall DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255_(
        DXGADAPTER *a1,
        unsigned int a2,
        struct DXGDISPLAYMANAGEROBJECT ***a3)
{
  __int64 v3; // rsi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rbx
  DMMVIDEOPRESENTTARGET *TargetById; // rax
  unsigned int v11; // edi
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v3 = a2;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v7 = *((_QWORD *)a1 + 365);
  if ( !v7 )
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
  v8 = *(_QWORD *)(v7 + 104);
  if ( v8 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v12, *(_QWORD *)(v7 + 104));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 120) + 72LL));
    v9 = *(_QWORD *)(v8 + 120);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v9, v3);
    if ( TargetById )
    {
      v11 = DMMVIDEOPRESENTTARGET::ExchangeDisplayManagerObject(TargetById, **a3, *a3[1]);
    }
    else
    {
      WdLogSingleEntry1(2LL, v3);
      v11 = -1071774971;
    }
    if ( v9 )
      ReferenceCounted::Release((ReferenceCounted *)(v9 + 64));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 40));
    return v11;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
