/*
 * XREFs of ?DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z @ 0x1C01CF5C0
 * Callers:
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C01CF0A0 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     MonitorRebuildMonitorModeListCache @ 0x1C03BFEEC (MonitorRebuildMonitorModeListCache.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0009534 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000A1F4 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DmmGetNextVideoPresentTarget(DXGADAPTER *a1, int a2, unsigned int *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rsi
  _QWORD *v8; // rbx
  _QWORD *v9; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rax
  unsigned int v11; // edi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  if ( !a3 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
  *a3 = -1;
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
  if ( !v7 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v14, v7);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 120) + 72LL));
  v8 = *(_QWORD **)(v7 + 120);
  if ( a2 == -1 )
  {
    v9 = (_QWORD *)v8[3];
    if ( v9 == v8 + 3 )
      NextTarget = 0LL;
    else
      NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v9 - 1);
  }
  else
  {
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(*(DMMVIDEOPRESENTTARGETSET **)(v7 + 120), a2);
    if ( !TargetById )
    {
      v11 = -1071774971;
      goto LABEL_12;
    }
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v8, TargetById);
  }
  if ( NextTarget )
  {
    *a3 = *((_DWORD *)NextTarget + 6);
    v11 = 0;
  }
  else
  {
    v11 = -1073741275;
  }
LABEL_12:
  if ( v8 )
    ReferenceCounted::Release((ReferenceCounted *)(v8 + 8));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v14 + 40));
  return v11;
}
