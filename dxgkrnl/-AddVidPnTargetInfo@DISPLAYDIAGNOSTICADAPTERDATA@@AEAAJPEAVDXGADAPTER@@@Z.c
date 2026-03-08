/*
 * XREFs of ?AddVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02F1DF8
 * Callers:
 *     ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C02F28F8 (-CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000A1F4 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAPEAVVIDPNTARGETINFO@@I@Z @ 0x1C0049998 (-GetVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAPEAVVIDPNTARGETINFO@@I@Z.c)
 *     ?Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C02F3F10 (-Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z.c)
 */

__int64 __fastcall DISPLAYDIAGNOSTICADAPTERDATA::AddVidPnTargetInfo(
        DISPLAYDIAGNOSTICADAPTERDATA *this,
        struct DXGADAPTER *a2)
{
  __int64 v5; // rbx
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdi
  VIDPNTARGETINFO *VidPnTargetInfo; // rax
  unsigned int v10; // edi
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
  {
    WdLogSingleEntry1(1LL, 1246LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsCoreResourceSharedOwner()",
      1246LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = *(_QWORD *)(*((_QWORD *)a2 + 365) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v11, v5);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v5 + 120) + 72LL));
  v6 = *(_QWORD **)(v5 + 120);
  v7 = (_QWORD *)v6[3];
  if ( v7 == v6 + 3 || (NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v7 - 1)) == 0LL )
  {
LABEL_12:
    v10 = 0;
    goto LABEL_13;
  }
  while ( !*((_QWORD *)NextTarget + 14) )
  {
LABEL_11:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v6, NextTarget);
    if ( !NextTarget )
      goto LABEL_12;
  }
  VidPnTargetInfo = DISPLAYDIAGNOSTICADAPTERDATA::GetVidPnTargetInfo(this, *((_DWORD *)this + 489));
  if ( VidPnTargetInfo )
  {
    if ( VIDPNTARGETINFO::Initialize(VidPnTargetInfo, a2, NextTarget) >= 0 )
      ++*((_DWORD *)this + 489);
    goto LABEL_11;
  }
  WdLogSingleEntry1(2LL, 1268LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"No memory available for adding a new display target",
    1268LL,
    0LL,
    0LL,
    0LL,
    0LL);
  v10 = -1073741801;
LABEL_13:
  if ( v6 )
    ReferenceCounted::Release((ReferenceCounted *)(v6 + 8));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v11 + 40));
  return v10;
}
