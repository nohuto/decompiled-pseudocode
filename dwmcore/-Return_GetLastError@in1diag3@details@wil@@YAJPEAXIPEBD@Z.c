/*
 * XREFs of ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180196B80
 * Callers:
 *     ?SyncDesktopCaptureBits@CChannel@@UEAAJU_LUID@@HHIIW4DXGI_FORMAT@@_KPEAX@Z @ 0x180018C40 (-SyncDesktopCaptureBits@CChannel@@UEAAJU_LUID@@HHIIW4DXGI_FORMAT@@_KPEAX@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800AC2D8 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1800AC508 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?StartCompositionThread@CConnection@@AEAAJH@Z @ 0x1800CCAB4 (-StartCompositionThread@CConnection@@AEAAJH@Z.c)
 *     ?Initialize@CChannel@@AEAAJXZ @ 0x1800CCE68 (-Initialize@CChannel@@AEAAJXZ.c)
 *     ?WaitForSyncFlush@CInternalMilCmdConnection@@QEAAJI@Z @ 0x1800CD018 (-WaitForSyncFlush@CInternalMilCmdConnection@@QEAAJI@Z.c)
 *     ?PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800EB5D0 (-PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?Create@DiagnosticCallbacksManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800FC614 (-Create@DiagnosticCallbacksManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?InitializeServer@DataProviderManager@@AEAAJXZ @ 0x1800FC86C (-InitializeServer@DataProviderManager@@AEAAJXZ.c)
 *     ?WindowNodeSetCompositionSurface@CChannel@@UEAAJIPEAX@Z @ 0x1801CE240 (-WindowNodeSetCompositionSurface@CChannel@@UEAAJIPEAX@Z.c)
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommunicationPartner@@@Z @ 0x1802000E0 (-Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommun.c)
 *     ?WaitForOperationComplete12@CComputeScribbleSynchronizer@@QEAAJ_K@Z @ 0x180207194 (-WaitForOperationComplete12@CComputeScribbleSynchronizer@@QEAAJ_K@Z.c)
 *     FlushAndWait @ 0x18026F9A4 (FlushAndWait.c)
 *     CAsyncTask_CD3DDevice::D3D12Resources_::Start__lambda_88358cf897930614284adb3422b4c545___ @ 0x180288B2C (CAsyncTask_CD3DDevice--D3D12Resources_--Start__lambda_88358cf897930614284adb3422b4c545___.c)
 * Callees:
 *     ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x180193F04 (--$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4)
{
  int v5; // [rsp+20h] [rbp-18h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  return wil::details::ReportFailure_GetLastErrorHr<1>(this, a2, a3, a4, v5, retaddr);
}
