/*
 * XREFs of PspInitializeJobStructures @ 0x140A72054
 * Callers:
 *     PspInitPhase0 @ 0x140A3D098 (PspInitPhase0.c)
 * Callees:
 *     ExCreateHandleTable @ 0x1406A6B48 (ExCreateHandleTable.c)
 */

char PspInitializeJobStructures()
{
  _QWORD *HandleTable; // rax

  HandleTable = ExCreateHandleTable(0LL, 0);
  PspUniqueJobIdTable = (__int64)HandleTable;
  if ( HandleTable )
  {
    *((_BYTE *)HandleTable + 44) |= 1u;
    qword_140D2D338 = (__int64)&PspJobList;
    PspJobList = (__int64)&PspJobList;
    PspJobNotificationItem.WorkerRoutine = (void (__fastcall *)(void *))PspJobNotificationWorker;
    PspJobTimeLimitsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspJobTimeLimitsWork;
    PspStorageBitmap.Buffer = (unsigned int *)&PspStorageBitmapBits;
    PspJobListLock = 0LL;
    PspJobAssignmentLock = 0LL;
    PspJobNotificationItem.Parameter = 0LL;
    PspJobNotificationItem.List.Flink = 0LL;
    PspJobTimeLimitsWorkItem.Parameter = 0LL;
    PspJobTimeLimitsWorkItem.List.Flink = 0LL;
    PspStorageBitmapLock = 0LL;
    PspStorageBitmap.SizeOfBitMap = 32;
    PspStorageExpansionBitmap.SizeOfBitMap = 256;
    PspStorageExpansionBitmap.Buffer = (unsigned int *)&PspStorageExpansionBitmapBits;
    if ( !PspJobNoWakeChargeLimit )
      PspJobNoWakeChargeLimit = 50;
    if ( !PspSystemNoWakeChargeLimit )
      PspSystemNoWakeChargeLimit = 200;
    LOBYTE(HandleTable) = 1;
  }
  return (char)HandleTable;
}
