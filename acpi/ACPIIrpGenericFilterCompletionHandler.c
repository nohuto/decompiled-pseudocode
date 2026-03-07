__int64 __fastcall ACPIIrpGenericFilterCompletionHandler(PDEVICE_OBJECT DeviceObject, __int64 a2, PIO_WORKITEM *a3)
{
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  if ( KeGetCurrentIrql() )
    IoQueueWorkItem(a3[4], ACPIIrpCompletionRoutineWorker, DelayedWorkQueue, a3);
  else
    ACPIIrpCompletionRoutineWorker(DeviceObject, a3);
  return 3221225494LL;
}
