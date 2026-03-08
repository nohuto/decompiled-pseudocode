/*
 * XREFs of ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1C02C935C
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C0175A20 (DxgkSetDisplayMode.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1C018F830 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01C9880 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     DpiFdoHandleDevicePower @ 0x1C01E1A70 (DpiFdoHandleDevicePower.c)
 *     DpiFdoStartAdapter @ 0x1C01F17F0 (DpiFdoStartAdapter.c)
 *     DpiAddDevice @ 0x1C01F38A0 (DpiAddDevice.c)
 *     DpiFdoHandleStartDevice @ 0x1C01F6860 (DpiFdoHandleStartDevice.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C02027E0 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 *     DpiFdoValidateKmdAndPnpVersionMatch @ 0x1C020F290 (DpiFdoValidateKmdAndPnpVersionMatch.c)
 *     DpiInitializeEx @ 0x1C020F728 (DpiInitializeEx.c)
 *     ?ProcessDeadlockThread@@YAXPEAX@Z @ 0x1C02B4350 (-ProcessDeadlockThread@@YAXPEAX@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1C02C9590 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C02DB250 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     NtDxgkPinResources @ 0x1C02EE610 (NtDxgkPinResources.c)
 *     _lambda_b19eb8e30f7421e25a3eba0801a1f707_::operator() @ 0x1C02EF090 (_lambda_b19eb8e30f7421e25a3eba0801a1f707_--operator().c)
 *     ?AddWakeUpToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02FEC54 (-AddWakeUpToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_T.c)
 *     ?CreatePlaneLiveDumpAtPassive@@YAXIIPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@PEAVDXGADAPTER@@PEAU_MOCKDRIVERSTATE_PLANE@@@Z @ 0x1C031E220 (-CreatePlaneLiveDumpAtPassive@@YAXIIPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@PEAVDXGADAPTER@@PEAU_MO.c)
 *     ?MockDriverStateCreateDurationLiveDump@@YAXPEAX@Z @ 0x1C031E4C0 (-MockDriverStateCreateDurationLiveDump@@YAXPEAX@Z.c)
 *     ?MockDriverStateCreateFbrLiveDump@@YAXPEAX@Z @ 0x1C031E6D0 (-MockDriverStateCreateFbrLiveDump@@YAXPEAX@Z.c)
 *     ?MockDriverStateCreatePlaneLiveDump@@YAXPEAX@Z @ 0x1C031E8E0 (-MockDriverStateCreatePlaneLiveDump@@YAXPEAX@Z.c)
 *     ?VmBusLogEventGlobal@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037C2C0 (-VmBusLogEventGlobal@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z @ 0x1C004EC88 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z.c)
 */

__int64 __fastcall DxgCreateLiveDumpWithWdLogs2(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rbp
  __int64 v8; // r14
  char *v9; // rax
  char *v10; // rbx
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // rdi

  v6 = WdDbgReportCreate(0LL, a1, a2, a3, a4, a5, (_BYTE)a6);
  if ( v6 )
  {
    v8 = ((unsigned int)TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 1, BYTE4(a6) & 1) + 4095) & 0xFFFFF000;
    v9 = (char *)operator new[]((unsigned int)v8, 0x4B677844u, 256LL);
    v10 = v9;
    if ( v9 )
    {
      v11 = TdrCollectBugcheckSecondaryDumpData(v9, v8, 1, BYTE4(a6) & 1);
      if ( !(unsigned __int8)WdDbgReportSecondaryData(v6, v10, v11) )
      {
        WdLogSingleEntry1(2LL, 10975LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"WdDbgReportSecondaryData returned FALSE while building live dump.",
          10975LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      operator delete(v10);
    }
    else
    {
      WdLogSingleEntry1(6LL, v8);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Out of memory allocating live dump data (size 0x%I64x)",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v12 = WdDbgReportComplete(v6);
    v13 = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry1(2LL, v12);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"WdDbgReportComplete returned failed status while building live dump. Status = 0x%I64x",
        v13,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return (unsigned int)v13;
  }
  else
  {
    WdLogSingleEntry1(2LL, 10962LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"WdDbgReportCreate failed", 10962LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225473LL;
  }
}
