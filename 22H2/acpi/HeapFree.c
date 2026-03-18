/*
 * XREFs of HeapFree @ 0x1C004EE6C
 * Callers:
 *     FreeNameSpaceObjects @ 0x1C0005600 (FreeNameSpaceObjects.c)
 *     ProcessSleep @ 0x1C0005A80 (ProcessSleep.c)
 *     WriteCookAccess @ 0x1C0005DA0 (WriteCookAccess.c)
 *     WriteFieldObj @ 0x1C0006080 (WriteFieldObj.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B60 (AMLIDereferenceHandleEx.c)
 *     Simulator_Free_Arguments @ 0x1C0049234 (Simulator_Free_Arguments.c)
 *     FindNSObj @ 0x1C004B0BC (FindNSObj.c)
 *     FindNSObjMainNoLock @ 0x1C004B314 (FindNSObjMainNoLock.c)
 *     FreeObjData @ 0x1C004B564 (FreeObjData.c)
 *     FreeObjOwner @ 0x1C004B670 (FreeObjOwner.c)
 *     LoadFieldUnitDDB @ 0x1C004FB88 (LoadFieldUnitDDB.c)
 *     AccFieldUnit @ 0x1C0051650 (AccFieldUnit.c)
 *     PreserveWriteObj @ 0x1C0052560 (PreserveWriteObj.c)
 *     RawFieldAccess @ 0x1C0052780 (RawFieldAccess.c)
 *     ReadFieldObj @ 0x1C0052CD0 (ReadFieldObj.c)
 *     WriteFieldLoop @ 0x1C0053220 (WriteFieldLoop.c)
 *     RunContext @ 0x1C0053F54 (RunContext.c)
 *     ProcessEvalObj @ 0x1C0054C80 (ProcessEvalObj.c)
 *     ParsePackage @ 0x1C0058180 (ParsePackage.c)
 *     ProcessDivide @ 0x1C00583E0 (ProcessDivide.c)
 *     ProcessIncDec @ 0x1C0058530 (ProcessIncDec.c)
 *     ProcessLoadTable @ 0x1C0058630 (ProcessLoadTable.c)
 *     ProcessWait @ 0x1C0058AE0 (ProcessWait.c)
 *     ParseAcquire @ 0x1C005A110 (ParseAcquire.c)
 *     ParseCall @ 0x1C005A6C0 (ParseCall.c)
 *     ParseFieldConnection @ 0x1C005AF80 (ParseFieldConnection.c)
 *     ParseFieldList @ 0x1C005B250 (ParseFieldList.c)
 *     ParseLoad @ 0x1C005B620 (ParseLoad.c)
 *     ParseNestedContext @ 0x1C005BB70 (ParseNestedContext.c)
 *     ParseRelease @ 0x1C005BF90 (ParseRelease.c)
 *     ParseScope @ 0x1C005C240 (ParseScope.c)
 *     ParseTerm @ 0x1C005C7B0 (ParseTerm.c)
 *     ParseUnload @ 0x1C005CB40 (ParseUnload.c)
 * Callees:
 *     HeapInsertFreeList @ 0x1C004EEC4 (HeapInsertFreeList.c)
 */

void __fastcall HeapFree(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 - 16;
  *(_DWORD *)(a1 - 16) = 0;
  byte_1C00702F0 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  HeapInsertFreeList(*(_QWORD *)(v1 + 8));
  KeReleaseSpinLock(&gmutHeap, byte_1C00702F0);
}
