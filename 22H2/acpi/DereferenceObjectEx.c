/*
 * XREFs of DereferenceObjectEx @ 0x1C0003DA4
 * Callers:
 *     FreeObjData @ 0x1C00033D0 (FreeObjData.c)
 *     FreeNameSpaceObjects @ 0x1C0003A50 (FreeNameSpaceObjects.c)
 *     ACPIGet @ 0x1C0003E70 (ACPIGet.c)
 *     RunContext @ 0x1C0004DD0 (RunContext.c)
 *     ParseTerm @ 0x1C0007480 (ParseTerm.c)
 *     DerefOf @ 0x1C000B440 (DerefOf.c)
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     PerformMutexDriverCallbacks @ 0x1C0010328 (PerformMutexDriverCallbacks.c)
 *     AMLIEvalPackageElement @ 0x1C0012380 (AMLIEvalPackageElement.c)
 *     AMLIFindNameSpaceObject @ 0x1C0013F48 (AMLIFindNameSpaceObject.c)
 *     AMLIAsyncEvalObject @ 0x1C001467C (AMLIAsyncEvalObject.c)
 *     EnableDisableCMOSRegions @ 0x1C0016500 (EnableDisableCMOSRegions.c)
 *     AMLIIterateSiblingsNext @ 0x1C0017560 (AMLIIterateSiblingsNext.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C00184A0 (PciConfigSpaceHandlerWorker.c)
 *     GetPciAddressWorker @ 0x1C0018A70 (GetPciAddressWorker.c)
 *     ACPIDockIsDockDevice @ 0x1C0020C40 (ACPIDockIsDockDevice.c)
 *     ParseNameObj @ 0x1C0021920 (ParseNameObj.c)
 *     Field @ 0x1C0021B10 (Field.c)
 *     ParseField @ 0x1C0021D30 (ParseField.c)
 *     CreateNativeNameSpaceObject @ 0x1C0022FC4 (CreateNativeNameSpaceObject.c)
 *     Alias @ 0x1C0023220 (Alias.c)
 *     AMLIApplyNamespaceOverride @ 0x1C0023700 (AMLIApplyNamespaceOverride.c)
 *     IndexField @ 0x1C00237F0 (IndexField.c)
 *     Load @ 0x1C0024DC0 (Load.c)
 *     AccessFieldData @ 0x1C0031E7C (AccessFieldData.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C005CA50 (InternalRawAccessOpRegionHandler.c)
 *     Simulator_EvaluateNode @ 0x1C0063B00 (Simulator_EvaluateNode.c)
 *     Simulator_NotifyNode @ 0x1C0063DC8 (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x1C0064220 (Simulator_RemoveNode.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0064348 (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C0064824 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C006498C (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C0064B00 (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C0064E94 (AMLIGetNamespaceOverrideObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C0065024 (AMLIReadNamespaceOverrideObject.c)
 *     ParseDLMObjectInternal @ 0x1C00658A8 (ParseDLMObjectInternal.c)
 *     DebugNotify @ 0x1C0066140 (DebugNotify.c)
 *     DebugRunMethod @ 0x1C0066440 (DebugRunMethod.c)
 *     BankField @ 0x1C0066FD0 (BankField.c)
 *     FreeContext @ 0x1C0068074 (FreeContext.c)
 *     LoadTable @ 0x1C00695C0 (LoadTable.c)
 *     ParseNestedContext @ 0x1C006BCF0 (ParseNestedContext.c)
 *     AMLIInitialize @ 0x1C00BCD10 (AMLIInitialize.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x1C0003A50 (FreeNameSpaceObjects.c)
 */

void __fastcall DereferenceObjectEx(unsigned __int64 a1)
{
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 112), 0xFFFFFFFF) == 1 )
  {
    *(_WORD *)(a1 + 64) |= 4u;
    if ( (*(_WORD *)(a1 + 64) & 0x40) == 0 )
      FreeNameSpaceObjects(a1);
  }
}
