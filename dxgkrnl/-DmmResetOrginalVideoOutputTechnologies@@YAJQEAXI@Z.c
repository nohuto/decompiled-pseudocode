/*
 * XREFs of ?DmmResetOrginalVideoOutputTechnologies@@YAJQEAXI@Z @ 0x1C03AA360
 * Callers:
 *     DpiPdoRemovePdo @ 0x1C03A53EC (DpiPdoRemovePdo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00094F4 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DmmResetOrginalVideoOutputTechnologies(DXGADAPTER *a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r10
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v2 = a2;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v5 = *((_QWORD *)a1 + 365);
  if ( !v5 )
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
  v6 = *(_QWORD *)(v5 + 104);
  if ( v6 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v12, *(_QWORD *)(v5 + 104));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v6 + 120) + 72LL));
    v7 = *(_QWORD *)(v6 + 120);
    v8 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v7, v2);
    v9 = v8;
    if ( v8 )
    {
      v11 = *(_DWORD *)(v8 + 88);
      v10 = 0;
      *(_DWORD *)(v9 + 84) = v11;
      *(_DWORD *)(v9 + 80) = v11;
    }
    else
    {
      WdLogSingleEntry1(2LL, v2);
      v10 = -1071774971;
    }
    if ( v7 )
      ReferenceCounted::Release((ReferenceCounted *)(v7 + 64));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 40));
    return v10;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
