/*
 * XREFs of DereferenceObjectEx @ 0x1C004F6A8
 * Callers:
 *     FreeNameSpaceObjects @ 0x1C0005600 (FreeNameSpaceObjects.c)
 *     DerefOf @ 0x1C0006500 (DerefOf.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0039CC0 (InternalRawAccessOpRegionHandler.c)
 *     AMLIAsyncEvalObject @ 0x1C00478E8 (AMLIAsyncEvalObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0047B9C (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C0047D64 (AMLIEvalPackageElement.c)
 *     AMLIFindNameSpaceObject @ 0x1C0048110 (AMLIFindNameSpaceObject.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C00484D0 (AMLIGetNameSpaceObjectNoLock.c)
 *     Simulator_EvaluateNode @ 0x1C00491A0 (Simulator_EvaluateNode.c)
 *     Simulator_NotifyNode @ 0x1C0049478 (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x1C00498D0 (Simulator_RemoveNode.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C00499F8 (AMLICreateNativeNamespaceObject.c)
 *     CreateNativeNameSpaceObject @ 0x1C0049D38 (CreateNativeNameSpaceObject.c)
 *     AMLIAddNamespaceOverride @ 0x1C004A2A8 (AMLIAddNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C004A3CC (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C004A534 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIApplyNamespaceOverride @ 0x1C004A6B0 (AMLIApplyNamespaceOverride.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C004A71C (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C004AAB0 (AMLIGetNamespaceOverrideObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C004AC40 (AMLIReadNamespaceOverrideObject.c)
 *     FreeObjData @ 0x1C004B544 (FreeObjData.c)
 *     ParseDLMObjectInternal @ 0x1C004C718 (ParseDLMObjectInternal.c)
 *     PerformMutexDriverCallbacks @ 0x1C004C9F4 (PerformMutexDriverCallbacks.c)
 *     DebugNotify @ 0x1C004DB10 (DebugNotify.c)
 *     DebugRunMethod @ 0x1C004DE10 (DebugRunMethod.c)
 *     BankField @ 0x1C004FEB0 (BankField.c)
 *     Field @ 0x1C00505B0 (Field.c)
 *     IndexField @ 0x1C0050740 (IndexField.c)
 *     AccessFieldData @ 0x1C0051AD8 (AccessFieldData.c)
 *     FreeContext @ 0x1C0053624 (FreeContext.c)
 *     Alias @ 0x1C0055300 (Alias.c)
 *     Load @ 0x1C00556C0 (Load.c)
 *     LoadTable @ 0x1C0056E80 (LoadTable.c)
 *     ParseCall @ 0x1C005A6A0 (ParseCall.c)
 *     ParseField @ 0x1C005AB30 (ParseField.c)
 *     ParseNameObj @ 0x1C005B96C (ParseNameObj.c)
 *     ParseNestedContext @ 0x1C005BB50 (ParseNestedContext.c)
 *     ParseScope @ 0x1C005C220 (ParseScope.c)
 *     ParseSuperName @ 0x1C005C56C (ParseSuperName.c)
 *     ParseTerm @ 0x1C005C790 (ParseTerm.c)
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
