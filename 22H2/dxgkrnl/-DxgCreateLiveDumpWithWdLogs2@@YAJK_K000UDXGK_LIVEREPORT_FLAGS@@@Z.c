/*
 * XREFs of ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1C02CE0E4
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C0172AF0 (DxgkSetDisplayMode.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01BC080 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1C01C59D0 (DxgkWaitForVerticalBlankEventInternal.c)
 *     DpiFdoHandleDevicePower @ 0x1C01F0390 (DpiFdoHandleDevicePower.c)
 *     DpiFdoStartAdapter @ 0x1C0200110 (DpiFdoStartAdapter.c)
 *     DpiAddDevice @ 0x1C0202170 (DpiAddDevice.c)
 *     DpiFdoHandleStartDevice @ 0x1C0205110 (DpiFdoHandleStartDevice.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C0211360 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 *     DpiFdoValidateKmdAndPnpVersionMatch @ 0x1C021D870 (DpiFdoValidateKmdAndPnpVersionMatch.c)
 *     DpiInitializeEx @ 0x1C021DD08 (DpiInitializeEx.c)
 *     ?ProcessDeadlockThread@@YAXPEAX@Z @ 0x1C02B9210 (-ProcessDeadlockThread@@YAXPEAX@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1C02CE310 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C02DFFE0 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     NtDxgkPinResources @ 0x1C02F3440 (NtDxgkPinResources.c)
 *     _lambda_b19eb8e30f7421e25a3eba0801a1f707_::operator() @ 0x1C02F3EC0 (_lambda_b19eb8e30f7421e25a3eba0801a1f707_--operator().c)
 *     ?AddWakeUpToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0303A84 (-AddWakeUpToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_T.c)
 *     ?CreatePlaneLiveDumpAtPassive@@YAXIIPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@PEAVDXGADAPTER@@PEAU_MOCKDRIVERSTATE_PLANE@@@Z @ 0x1C0322C60 (-CreatePlaneLiveDumpAtPassive@@YAXIIPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@PEAVDXGADAPTER@@PEAU_MO.c)
 *     ?MockDriverStateCreateDurationLiveDump@@YAXPEAX@Z @ 0x1C0322F00 (-MockDriverStateCreateDurationLiveDump@@YAXPEAX@Z.c)
 *     ?MockDriverStateCreateFbrLiveDump@@YAXPEAX@Z @ 0x1C0323110 (-MockDriverStateCreateFbrLiveDump@@YAXPEAX@Z.c)
 *     ?MockDriverStateCreatePlaneLiveDump@@YAXPEAX@Z @ 0x1C0323320 (-MockDriverStateCreatePlaneLiveDump@@YAXPEAX@Z.c)
 *     ?VmBusLogEventGlobal@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0380BB0 (-VmBusLogEventGlobal@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z @ 0x1C004FCE8 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z.c)
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
        WdLogSingleEntry1(2LL, 10978LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"WdDbgReportSecondaryData returned FALSE while building live dump.",
          10978LL,
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
    WdLogSingleEntry1(2LL, 10965LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"WdDbgReportCreate failed", 10965LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225473LL;
  }
}
