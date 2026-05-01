/*
 * XREFs of ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x180035830
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180033290 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 * Callees:
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x1800354A0 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x1800358F8 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?_UpdateApplication@CImmersiveApp@@AEAA?AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x1800359FC (-_UpdateApplication@CImmersiveApp@@AEAA-AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEB.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardCompareHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardMergeHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@@@QEAAJ_K0@Z @ 0x1801D0A3C (-_EnsureCapacity@-$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPP.c)
 *     ?SendVisibilityChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_J@Z @ 0x1801F0920 (-SendVisibilityChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::_SetPos_ShowApplication(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  int updated; // ebx
  char v7; // si
  int v8; // eax
  PSRWLOCK v10; // rbx
  char *Ptr; // rdx
  _DWORD *v12; // rdx
  __int64 v13; // rdx
  char *v14; // rax
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  updated = CImmersiveApp::_UpdateApplication();
  v17 = 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 112) + 464LL))(a1 + 112, &v17);
  if ( a5 && updated == 1 )
  {
    v7 = 1;
    v10 = CApplicationManagerUtility::g_pIAMGlobals;
    Ptr = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
    if ( Ptr != CApplicationManagerUtility::g_pIAMGlobals[4].Ptr
      || (int)CTSimpleArray<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE,4294967294,CTPolicyCoTaskMem<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardCompareHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardMergeHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>>::_EnsureCapacity(
                &CApplicationManagerUtility::g_pIAMGlobals[1],
                Ptr + 1) >= 0 )
    {
      v12 = (char *)v10[1].Ptr + 4 * (__int64)v10[2].Ptr++;
      if ( v12 )
        *v12 = 2;
    }
  }
  else
  {
    v7 = 0;
  }
  *(_BYTE *)(a1 + 496) = 1;
  v8 = CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 296));
  if ( v8 < 0 )
  {
    v13 = 7384LL;
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 448) + 80LL))(*(_QWORD *)(a1 + 448));
    if ( v8 >= 0 )
      goto LABEL_5;
    v13 = 7387LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
    (const char *)(unsigned int)v8,
    v15);
LABEL_5:
  CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)a1);
  GetSystemTimeAsFileTime((LPFILETIME)(a1 + 708));
  if ( v7 )
  {
    v14 = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
    if ( v14 )
      CApplicationManagerUtility::g_pIAMGlobals[2].Ptr = v14 - 1;
    CImmersiveApp::CImmersiveWindowCollection::SendVisibilityChanged(
      (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 296),
      9LL);
    CImmersiveApp::CImmersiveWindowCollection::SendVisibilityChanged(
      (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 296),
      10LL);
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
}
