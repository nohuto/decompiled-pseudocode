/*
 * XREFs of ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C03AA8F8
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C016F270 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00034C8 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0006784 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x1C000949C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C017AB4C (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

const struct DMMVIDPNPRESENTPATH *__fastcall VIDPN_MGR::GetPathFromTargetInClientVidPn(
        struct _KTHREAD **this,
        unsigned int a2)
{
  __int64 v3; // rsi
  struct DMMVIDPNPRESENTPATH *v4; // rbx
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  _QWORD *v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  DMMVIDPNTOPOLOGY *v9; // rdi
  int PathSourceFromTarget; // eax
  struct DMMVIDPNPRESENTPATH *Path; // rdi
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  if ( this[8] != KeGetCurrentThread() )
    WdLogSingleEntry0(1LL);
  v4 = 0LL;
  v13 = 0LL;
  ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef((VIDPN_MGR *)this);
  auto_rc<DMMVIDPN const>::reset(&v13, (__int64)ClientCommittedVidPnRef);
  if ( !v13 )
  {
    if ( !this[1] )
      WdLogSingleEntry0(1LL);
    v8 = *((_QWORD *)this[1] + 2);
    goto LABEL_11;
  }
  v9 = (DMMVIDPNTOPOLOGY *)(v13 + 96);
  if ( v13 == -96 )
    WdLogSingleEntry0(1LL);
  PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v9, (_QWORD *)(unsigned int)v3, v6, v7);
  if ( PathSourceFromTarget == -1 )
  {
    v8 = v3;
LABEL_11:
    WdLogSingleEntry1(7LL, v8);
    goto LABEL_15;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(v9, PathSourceFromTarget, v3);
  if ( !Path )
    WdLogSingleEntry0(1LL);
  v4 = Path;
LABEL_15:
  auto_rc<DMMVIDPN const>::reset(&v13, 0LL);
  return v4;
}
