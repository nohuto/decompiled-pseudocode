/*
 * XREFs of ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x1C01DB59C
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C01A7070 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000999C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01829E4 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01B3BC0 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DmmCanAddPresentPathToClientVidPn(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 *a4)
{
  __int64 v4; // rbp
  __int64 v6; // r15
  unsigned __int8 v8; // di
  __int64 v9; // rsi
  VIDPN_MGR *v10; // rsi
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // r12
  int v14; // eax
  __int64 v16; // [rsp+50h] [rbp-38h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+20h] BYREF

  v4 = a3;
  v6 = a2;
  if ( !a4 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
  *a4 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  v8 = 1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v9 = *((_QWORD *)a1 + 365);
  if ( !v9 )
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
  v10 = *(VIDPN_MGR **)(v9 + 104);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v16, (__int64)v10);
    v17 = 0LL;
    v11 = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v10, &v17);
    v12 = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry1(7LL, v11);
    }
    else
    {
      v13 = v17 + 96;
      v14 = VIDPN_MGR::AddPathToVidPnTopology(
              v10,
              (struct DMMVIDPNTOPOLOGY *const)(v17 + 96),
              v6,
              v4,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              0xFFFFu,
              0,
              D3DKMDT_MCC_ENFORCE);
      v12 = v14;
      if ( v14 == -1071774976 || v14 == -1071774975 )
      {
        WdLogSingleEntry3(7LL, v6, v4, v13);
        v8 = 0;
      }
      else if ( v14 < 0 )
      {
        WdLogSingleEntry4(2LL, v6, v4, v13, v14);
        goto LABEL_11;
      }
      *a4 = v8;
      v12 = 0;
    }
LABEL_11:
    auto_rc<DMMVIDPN>::reset(&v17, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v16 + 40));
    return v12;
  }
  WdLogSingleEntry1(2LL, a1);
  return 3223192373LL;
}
