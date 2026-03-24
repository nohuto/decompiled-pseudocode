/*
 * XREFs of PnpDeviceCompletionRequestDestroyWorkItem @ 0x14037D970
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeWorkItem @ 0x1403187F0 (IoFreeWorkItem.c)
 *     PnpDisableWatchdog @ 0x1406F02D0 (PnpDisableWatchdog.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeviceCompletionRequestDestroyWorkItem(__int64 a1, _QWORD *a2, struct _IO_WORKITEM *a3)
{
  if ( a2[8] )
  {
    PnpDisableWatchdog();
    a2[8] = 0LL;
  }
  IoFreeWorkItem(a3);
  ExFreePoolWithTag(a2, 0x31706E50u);
}
