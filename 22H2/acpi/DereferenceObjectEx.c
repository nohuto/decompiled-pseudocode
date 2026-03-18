/*
 * XREFs of DereferenceObjectEx @ 0x1C004F6C8
 * Callers:
 *     FreeNameSpaceObjects @ 0x1C0005600 (FreeNameSpaceObjects.c)
 *     DerefOf @ 0x1C0006500 (DerefOf.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0039CE0 (InternalRawAccessOpRegionHandler.c)
 *     AMLIAsyncEvalObject @ 0x1C0047908 (AMLIAsyncEvalObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B60 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0047BBC (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C0047D84 (AMLIEvalPackageElement.c)
 *     AMLIFindNameSpaceObject @ 0x1C0048130 (AMLIFindNameSpaceObject.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C00484F0 (AMLIGetNameSpaceObjectNoLock.c)
 *     Simulator_EvaluateNode @ 0x1C00491C0 (Simulator_EvaluateNode.c)
 *     Simulator_NotifyNode @ 0x1C0049498 (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x1C00498F0 (Simulator_RemoveNode.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0049A18 (AMLICreateNativeNamespaceObject.c)
 *     CreateNativeNameSpaceObject @ 0x1C0049D58 (CreateNativeNameSpaceObject.c)
 *     AMLIAddNamespaceOverride @ 0x1C004A2C8 (AMLIAddNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C004A3EC (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C004A554 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIApplyNamespaceOverride @ 0x1C004A6D0 (AMLIApplyNamespaceOverride.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C004A73C (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C004AAD0 (AMLIGetNamespaceOverrideObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C004AC60 (AMLIReadNamespaceOverrideObject.c)
 *     FreeObjData @ 0x1C004B564 (FreeObjData.c)
 *     ParseDLMObjectInternal @ 0x1C004C738 (ParseDLMObjectInternal.c)
 *     PerformMutexDriverCallbacks @ 0x1C004CA14 (PerformMutexDriverCallbacks.c)
 *     DebugNotify @ 0x1C004DB30 (DebugNotify.c)
 *     DebugRunMethod @ 0x1C004DE30 (DebugRunMethod.c)
 *     BankField @ 0x1C004FED0 (BankField.c)
 *     Field @ 0x1C00505D0 (Field.c)
 *     IndexField @ 0x1C0050760 (IndexField.c)
 *     AccessFieldData @ 0x1C0051AF8 (AccessFieldData.c)
 *     FreeContext @ 0x1C0053644 (FreeContext.c)
 *     Alias @ 0x1C0055320 (Alias.c)
 *     Load @ 0x1C00556E0 (Load.c)
 *     LoadTable @ 0x1C0056EA0 (LoadTable.c)
 *     ParseCall @ 0x1C005A6C0 (ParseCall.c)
 *     ParseField @ 0x1C005AB50 (ParseField.c)
 *     ParseNameObj @ 0x1C005B98C (ParseNameObj.c)
 *     ParseNestedContext @ 0x1C005BB70 (ParseNestedContext.c)
 *     ParseScope @ 0x1C005C240 (ParseScope.c)
 *     ParseSuperName @ 0x1C005C58C (ParseSuperName.c)
 *     ParseTerm @ 0x1C005C7B0 (ParseTerm.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x1C0005600 (FreeNameSpaceObjects.c)
 */

void __fastcall DereferenceObjectEx(__int64 a1)
{
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 112), 0xFFFFFFFF) == 1 )
  {
    *(_WORD *)(a1 + 64) |= 4u;
    if ( (*(_WORD *)(a1 + 64) & 0x40) == 0 )
      FreeNameSpaceObjects((__int64 *)a1);
  }
}
