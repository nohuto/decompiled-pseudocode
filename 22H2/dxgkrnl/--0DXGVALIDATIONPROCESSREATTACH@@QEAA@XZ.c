/*
 * XREFs of ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000B474
 * Callers:
 *     DxgkMultiPlaneOverlayDisabledCB @ 0x1C000B3C0 (DxgkMultiPlaneOverlayDisabledCB.c)
 *     DxgSetPowerComponentIdleCB @ 0x1C001CDA0 (DxgSetPowerComponentIdleCB.c)
 *     DxgPresentDisplayOnlyProgressCB @ 0x1C0049070 (DxgPresentDisplayOnlyProgressCB.c)
 *     DxgSetPowerComponentIdleCBInternal @ 0x1C0049130 (DxgSetPowerComponentIdleCBInternal.c)
 *     DxgkCompleteFStateTransitionCB @ 0x1C00491B0 (DxgkCompleteFStateTransitionCB.c)
 *     DxgkCompletePStateTransitionCB @ 0x1C0049230 (DxgkCompletePStateTransitionCB.c)
 *     DxgkHardwareContentProtectionTeardownCB @ 0x1C00492C0 (DxgkHardwareContentProtectionTeardownCB.c)
 *     DxgkMitigatedRangeUpdateCB @ 0x1C00494C0 (DxgkMitigatedRangeUpdateCB.c)
 *     DxgkPowerRuntimeControlRequestCB @ 0x1C0049530 (DxgkPowerRuntimeControlRequestCB.c)
 *     DxgkSetPowerComponentLatencyCB @ 0x1C00496A0 (DxgkSetPowerComponentLatencyCB.c)
 *     DxgkSetPowerComponentResidencyCB @ 0x1C0049720 (DxgkSetPowerComponentResidencyCB.c)
 *     DxgkUnblockUEFIFrameBufferRangesCB @ 0x1C00497A0 (DxgkUnblockUEFIFrameBufferRangesCB.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x1C01D1A10 (DxgSetPowerComponentActiveCBInternal.c)
 *     DxgDestroyContextAllocationCB @ 0x1C01D1A80 (DxgDestroyContextAllocationCB.c)
 *     DxgCreateContextAllocationCB @ 0x1C01D1B40 (DxgCreateContextAllocationCB.c)
 *     DxgkMapContextAllocationCB @ 0x1C01D1CD0 (DxgkMapContextAllocationCB.c)
 *     DxgkAcquireHandleDataCB @ 0x1C01D1D60 (DxgkAcquireHandleDataCB.c)
 *     DxgkReleaseHandleDataCB @ 0x1C01D23C0 (DxgkReleaseHandleDataCB.c)
 *     DxgSetPowerComponentActiveCB @ 0x1C01F6CF0 (DxgSetPowerComponentActiveCB.c)
 *     DxgkReserveGpuVirtualAddressRangeCB @ 0x1C02E5DF0 (DxgkReserveGpuVirtualAddressRangeCB.c)
 *     DxgkUpdateContextAllocationCB @ 0x1C02E5F90 (DxgkUpdateContextAllocationCB.c)
 *     DxgEnumHandleChildrenCB @ 0x1C02EE2C0 (DxgEnumHandleChildrenCB.c)
 *     DxgGetCaptureAddressCB @ 0x1C02EE4B0 (DxgGetCaptureAddressCB.c)
 *     DxgGetHandleDataCB @ 0x1C02EE710 (DxgGetHandleDataCB.c)
 *     DxgGetHandleParentCB @ 0x1C02EEC00 (DxgGetHandleParentCB.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C01C0434 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
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
