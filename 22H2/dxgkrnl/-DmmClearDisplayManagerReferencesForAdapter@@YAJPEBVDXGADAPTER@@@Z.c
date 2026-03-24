/*
 * XREFs of ?DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z @ 0x1C016A974
 * Callers:
 *     _lambda_253e1404844a8379d0c8ce26edd6c7ad_::_lambda_invoker_cdecl_ @ 0x1C001B090 (_lambda_253e1404844a8379d0c8ce26edd6c7ad_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0009550 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00097F0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C001AFC0 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ?ReferenceDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEBAJPEAPEAVDXGDISPLAYMANAGEROBJECT@@@Z @ 0x1C016AA30 (-ReferenceDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEBAJPEAPEAVDXGDISPLAYMANAGEROBJECT@@@Z.c)
 *     ?ReleaseTargetOwnershipNoDmm@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1C02B1FAC (-ReleaseTargetOwnershipNoDmm@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 *     ?ExchangeDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJPEAVDXGDISPLAYMANAGEROBJECT@@0@Z @ 0x1C02E64FC (-ExchangeDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJPEAVDXGDISPLAYMANAGEROBJECT@@0@Z.c)
 */

__int64 __fastcall DmmClearDisplayManagerReferencesForAdapter(const struct DXGADAPTER *a1)
{
  __int64 v2; // rbx
  DMMVIDEOPRESENTTARGETSET *v3; // rbx
  unsigned int *NextTarget; // rdi
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // rax
  struct DXGDISPLAYMANAGEROBJECT *v18; // [rsp+40h] [rbp+8h] BYREF
  DMMVIDEOPRESENTTARGETSET *v19; // [rsp+48h] [rbp+10h] BYREF
  __int64 v20; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)a1 + 337) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v20, v2);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v2 + 80) + 72LL));
  v3 = *(DMMVIDEOPRESENTTARGETSET **)(v2 + 80);
  NextTarget = 0LL;
  v19 = v3;
  v5 = (_QWORD *)*((_QWORD *)v3 + 3);
  if ( v5 != (_QWORD *)((char *)v3 + 24) )
    NextTarget = (unsigned int *)(v5 - 1);
  for ( ;
        NextTarget;
        NextTarget = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                       v3,
                                       (const struct DMMVIDEOPRESENTTARGET *const)NextTarget) )
  {
    v18 = 0LL;
    if ( (int)DMMVIDEOPRESENTTARGET::ReferenceDisplayManagerObject((DMMVIDEOPRESENTTARGET *)NextTarget, &v18) >= 0
      && v18 )
    {
      v8 = DXGDISPLAYMANAGEROBJECT::ReleaseTargetOwnershipNoDmm(v18, *(struct _LUID *)((char *)a1 + 316), NextTarget[6]);
      v11 = v8;
      if ( v8 < 0 )
      {
        v12 = WdLogNewEntry5_WdAssertion(v10, v9);
        *(_QWORD *)(v12 + 24) = v11;
        WdLogEvent5_WdAssertion(v12);
      }
      v13 = DMMVIDEOPRESENTTARGET::ExchangeDisplayManagerObject((DMMVIDEOPRESENTTARGET *)NextTarget, 0LL, v18);
      v16 = v13;
      if ( v13 < 0 )
      {
        v17 = WdLogNewEntry5_WdAssertion(v15, v14);
        *(_QWORD *)(v17 + 24) = v16;
        WdLogEvent5_WdAssertion(v17);
      }
      ReferenceCounted::Release(v18, v14);
    }
  }
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)&v19, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v20 + 40), v6);
  return 0LL;
}
