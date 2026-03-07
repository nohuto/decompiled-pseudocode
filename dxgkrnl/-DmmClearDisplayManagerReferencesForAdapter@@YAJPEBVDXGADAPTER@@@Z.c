__int64 __fastcall DmmClearDisplayManagerReferencesForAdapter(const struct DXGADAPTER *a1)
{
  __int64 v2; // rbx
  DMMVIDEOPRESENTTARGETSET *v3; // rbx
  unsigned int *NextTarget; // rdi
  _QWORD *v5; // rcx
  int v7; // eax
  int v8; // eax
  struct DXGDISPLAYMANAGEROBJECT *v9; // [rsp+40h] [rbp+8h] BYREF
  DMMVIDEOPRESENTTARGETSET *v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)a1 + 365) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v11, v2);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v2 + 120) + 72LL));
  v3 = *(DMMVIDEOPRESENTTARGETSET **)(v2 + 120);
  NextTarget = 0LL;
  v10 = v3;
  v5 = (_QWORD *)*((_QWORD *)v3 + 3);
  if ( v5 != (_QWORD *)((char *)v3 + 24) )
    NextTarget = (unsigned int *)(v5 - 1);
  for ( ;
        NextTarget;
        NextTarget = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                       v3,
                                       (const struct DMMVIDEOPRESENTTARGET *const)NextTarget) )
  {
    v9 = 0LL;
    if ( (int)DMMVIDEOPRESENTTARGET::ReferenceDisplayManagerObject((DMMVIDEOPRESENTTARGET *)NextTarget, &v9) >= 0 && v9 )
    {
      v7 = DXGDISPLAYMANAGEROBJECT::ReleaseTargetOwnershipNoDmm(v9, *(struct _LUID *)((char *)a1 + 404), NextTarget[6]);
      if ( v7 < 0 )
        WdLogSingleEntry1(1LL, v7);
      v8 = DMMVIDEOPRESENTTARGET::ExchangeDisplayManagerObject((DMMVIDEOPRESENTTARGET *)NextTarget, 0LL, v9);
      if ( v8 < 0 )
        WdLogSingleEntry1(1LL, v8);
      ReferenceCounted::Release(v9);
    }
  }
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)&v10, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v11 + 40));
  return 0LL;
}
