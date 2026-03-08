/*
 * XREFs of ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C00074C0
 * Callers:
 *     DxgkMultiPlaneOverlayDisabledCB @ 0x1C000E4E0 (DxgkMultiPlaneOverlayDisabledCB.c)
 *     DxgSetPowerComponentIdleCB @ 0x1C001CB40 (DxgSetPowerComponentIdleCB.c)
 *     DxgPresentDisplayOnlyProgressCB @ 0x1C0048010 (DxgPresentDisplayOnlyProgressCB.c)
 *     DxgSetPowerComponentIdleCBInternal @ 0x1C00480D0 (DxgSetPowerComponentIdleCBInternal.c)
 *     DxgkCompleteFStateTransitionCB @ 0x1C0048150 (DxgkCompleteFStateTransitionCB.c)
 *     DxgkCompletePStateTransitionCB @ 0x1C00481D0 (DxgkCompletePStateTransitionCB.c)
 *     DxgkHardwareContentProtectionTeardownCB @ 0x1C0048260 (DxgkHardwareContentProtectionTeardownCB.c)
 *     DxgkMitigatedRangeUpdateCB @ 0x1C0048460 (DxgkMitigatedRangeUpdateCB.c)
 *     DxgkPowerRuntimeControlRequestCB @ 0x1C00484D0 (DxgkPowerRuntimeControlRequestCB.c)
 *     DxgkSetPowerComponentLatencyCB @ 0x1C0048640 (DxgkSetPowerComponentLatencyCB.c)
 *     DxgkSetPowerComponentResidencyCB @ 0x1C00486C0 (DxgkSetPowerComponentResidencyCB.c)
 *     DxgkUnblockUEFIFrameBufferRangesCB @ 0x1C0048740 (DxgkUnblockUEFIFrameBufferRangesCB.c)
 *     DxgkAcquireHandleDataCB @ 0x1C018D290 (DxgkAcquireHandleDataCB.c)
 *     DxgkReleaseHandleDataCB @ 0x1C018D540 (DxgkReleaseHandleDataCB.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x1C01CBBE0 (DxgSetPowerComponentActiveCBInternal.c)
 *     DxgDestroyContextAllocationCB @ 0x1C01CBC50 (DxgDestroyContextAllocationCB.c)
 *     DxgCreateContextAllocationCB @ 0x1C01CBD10 (DxgCreateContextAllocationCB.c)
 *     DxgkMapContextAllocationCB @ 0x1C01CBEA0 (DxgkMapContextAllocationCB.c)
 *     DxgSetPowerComponentActiveCB @ 0x1C01E83D0 (DxgSetPowerComponentActiveCB.c)
 *     DxgkReserveGpuVirtualAddressRangeCB @ 0x1C02E1060 (DxgkReserveGpuVirtualAddressRangeCB.c)
 *     DxgkUpdateContextAllocationCB @ 0x1C02E1200 (DxgkUpdateContextAllocationCB.c)
 *     DxgEnumHandleChildrenCB @ 0x1C02E9530 (DxgEnumHandleChildrenCB.c)
 *     DxgGetCaptureAddressCB @ 0x1C02E9720 (DxgGetCaptureAddressCB.c)
 *     DxgGetHandleDataCB @ 0x1C02E9980 (DxgGetHandleDataCB.c)
 *     DxgGetHandleParentCB @ 0x1C02E9DD0 (DxgGetHandleParentCB.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C01C97C4 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

DXGVALIDATIONPROCESSREATTACH *__fastcall DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH(
        DXGVALIDATIONPROCESSREATTACH *this)
{
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v5; // rbx
  struct _KPROCESS *ThreadProcess; // rax

  *(_BYTE *)this = 0;
  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    if ( KeGetCurrentIrql() < 2u )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 421) )
      {
        Global = DXGGLOBAL::GetGlobal();
        SessionData = DXGGLOBAL::GetSessionData(Global);
        if ( SessionData )
        {
          v5 = *((_QWORD *)SessionData + 2340);
          if ( v5 == PsGetCurrentProcess() )
          {
            ThreadProcess = PsGetThreadProcess(KeGetCurrentThread());
            if ( ThreadProcess )
            {
              KeStackAttachProcess(ThreadProcess, (PRKAPC_STATE)((char *)this + 8));
              *(_BYTE *)this = 1;
            }
          }
        }
      }
    }
  }
  return this;
}
