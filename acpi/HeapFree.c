/*
 * XREFs of HeapFree @ 0x1C004EE4C
 * Callers:
 *     FreeNameSpaceObjects @ 0x1C0005600 (FreeNameSpaceObjects.c)
 *     ProcessSleep @ 0x1C0005A80 (ProcessSleep.c)
 *     WriteCookAccess @ 0x1C0005DA0 (WriteCookAccess.c)
 *     WriteFieldObj @ 0x1C0006080 (WriteFieldObj.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     Simulator_Free_Arguments @ 0x1C0049214 (Simulator_Free_Arguments.c)
 *     FindNSObj @ 0x1C004B09C (FindNSObj.c)
 *     FindNSObjMainNoLock @ 0x1C004B2F4 (FindNSObjMainNoLock.c)
 *     FreeObjData @ 0x1C004B544 (FreeObjData.c)
 *     FreeObjOwner @ 0x1C004B650 (FreeObjOwner.c)
 *     LoadFieldUnitDDB @ 0x1C004FB68 (LoadFieldUnitDDB.c)
 *     AccFieldUnit @ 0x1C0051630 (AccFieldUnit.c)
 *     PreserveWriteObj @ 0x1C0052540 (PreserveWriteObj.c)
 *     RawFieldAccess @ 0x1C0052760 (RawFieldAccess.c)
 *     ReadFieldObj @ 0x1C0052CB0 (ReadFieldObj.c)
 *     WriteFieldLoop @ 0x1C0053200 (WriteFieldLoop.c)
 *     RunContext @ 0x1C0053F34 (RunContext.c)
 *     ProcessEvalObj @ 0x1C0054C60 (ProcessEvalObj.c)
 *     ParsePackage @ 0x1C0058160 (ParsePackage.c)
 *     ProcessDivide @ 0x1C00583C0 (ProcessDivide.c)
 *     ProcessIncDec @ 0x1C0058510 (ProcessIncDec.c)
 *     ProcessLoadTable @ 0x1C0058610 (ProcessLoadTable.c)
 *     ProcessWait @ 0x1C0058AC0 (ProcessWait.c)
 *     ParseAcquire @ 0x1C005A0F0 (ParseAcquire.c)
 *     ParseCall @ 0x1C005A6A0 (ParseCall.c)
 *     ParseFieldConnection @ 0x1C005AF60 (ParseFieldConnection.c)
 *     ParseFieldList @ 0x1C005B230 (ParseFieldList.c)
 *     ParseLoad @ 0x1C005B600 (ParseLoad.c)
 *     ParseNestedContext @ 0x1C005BB50 (ParseNestedContext.c)
 *     ParseRelease @ 0x1C005BF70 (ParseRelease.c)
 *     ParseScope @ 0x1C005C220 (ParseScope.c)
 *     ParseTerm @ 0x1C005C790 (ParseTerm.c)
 *     ParseUnload @ 0x1C005CB20 (ParseUnload.c)
 * Callees:
 *     HeapInsertFreeList @ 0x1C004EEA4 (HeapInsertFreeList.c)
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
