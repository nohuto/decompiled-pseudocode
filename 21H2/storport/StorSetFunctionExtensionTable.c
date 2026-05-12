/*
 * XREFs of StorSetFunctionExtensionTable @ 0x1C003A728
 * Callers:
 *     RaCreateDriver @ 0x1C007A114 (RaCreateDriver.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *StorSetFunctionExtensionTable())(__int64 a1)
{
  __int64 (__fastcall *result)(__int64); // rax

  LODWORD(StorportExtensionTable) = 1;
  *((_QWORD *)&StorportExtensionTable + 1) = StorExtGetMessageInterruptInformation;
  *(_QWORD *)&xmmword_1C0069670 = StorExtPutScatterGatherList;
  *((_QWORD *)&xmmword_1C0069670 + 1) = StorExtBuildScatterGatherList;
  *(_QWORD *)&xmmword_1C0069680 = StorExtFreePool;
  *((_QWORD *)&xmmword_1C0069680 + 1) = StorExtAllocatePool;
  *(_QWORD *)&xmmword_1C0069690 = StorExtGetSystemAddress;
  *((_QWORD *)&xmmword_1C0069690 + 1) = StorExtAcquireMSISpinLock;
  *(_QWORD *)&xmmword_1C00696A0 = StorExtReleaseMSISpinLock;
  *((_QWORD *)&xmmword_1C00696A0 + 1) = StorExtCompleteServiceIrp;
  result = StorExtGetOriginalMdl;
  qword_1C00696B0 = (__int64)StorExtGetOriginalMdl;
  return result;
}
