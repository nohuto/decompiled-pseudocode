/*
 * XREFs of ?CollectNonIntrusiveDriverData@DRIVERWHITEBOXINFO@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C02F2CB4
 * Callers:
 *     ?AddDriverWhiteboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ @ 0x1C02F1B90 (-AddDriverWhiteboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000A1F4 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?DdiGetDisplayStateNonIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_NONINTRUSIVE@@@Z @ 0x1C02C3724 (-DdiGetDisplayStateNonIntrusive@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDISPLAYSTATE_NONINTRUSIVE@.c)
 */

__int64 __fastcall DRIVERWHITEBOXINFO::CollectNonIntrusiveDriverData(DRIVERWHITEBOXINFO *this, ADAPTER_DISPLAY **a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rdi
  unsigned int v6; // esi
  _QWORD *v7; // rdx
  const struct DMMVIDEOPRESENTTARGET *i; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // r8
  void *v12; // rbx
  DRIVERWHITEBOXINFO *v13; // rcx
  __int64 v14; // rdx
  ADAPTER_DISPLAY *v15; // rcx
  int DisplayStateNonIntrusive; // ebp
  _DWORD v18[2]; // [rsp+50h] [rbp-38h] BYREF
  void *v19; // [rsp+58h] [rbp-30h]
  __int64 v20; // [rsp+98h] [rbp+10h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 1473LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != nullptr", 1473LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a2) )
  {
    WdLogSingleEntry1(1LL, 1474LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsCoreResourceSharedOwner()",
      1474LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = *((_QWORD *)a2[365] + 13);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v20, v4);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v4 + 120) + 72LL));
  v5 = *(_QWORD **)(v4 + 120);
  v6 = 0;
  v7 = (_QWORD *)v5[3];
  if ( v7 != v5 + 3 )
  {
    for ( i = (const struct DMMVIDEOPRESENTTARGET *)(v7 - 1);
          i;
          i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v5, i) )
    {
      if ( v6 >= 8 )
        break;
      if ( *((_QWORD *)i + 14) )
      {
        v9 = 28LL * v6++;
        *(_DWORD *)((char *)this + v9) = *((_DWORD *)i + 6);
      }
    }
  }
  v10 = (_QWORD *)operator new[](8 * v6, 0x4B677844u, 256LL);
  v12 = v10;
  if ( v10 )
  {
    if ( v6 )
    {
      v13 = this;
      v14 = v6;
      do
      {
        *v10 = v13;
        v13 = (DRIVERWHITEBOXINFO *)((char *)v13 + 28);
        ++v10;
        --v14;
      }
      while ( v14 );
    }
    v15 = a2[365];
    v18[0] = v6;
    v18[1] = 28;
    v19 = v12;
    DisplayStateNonIntrusive = ADAPTER_DISPLAY::DdiGetDisplayStateNonIntrusive(
                                 v15,
                                 (struct _DXGKARG_GETDISPLAYSTATE_NONINTRUSIVE *)v18,
                                 v11);
    if ( DisplayStateNonIntrusive >= 0 )
      *((_DWORD *)this + 56) = v6;
    operator delete(v12);
  }
  else
  {
    WdLogSingleEntry1(6LL, 8 * v6);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating black screen non-intursive data (size 0x%I64x)",
      8 * v6,
      0LL,
      0LL,
      0LL,
      0LL);
    DisplayStateNonIntrusive = -1073741801;
  }
  if ( v5 )
    ReferenceCounted::Release((ReferenceCounted *)(v5 + 8));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v20 + 40));
  return (unsigned int)DisplayStateNonIntrusive;
}
