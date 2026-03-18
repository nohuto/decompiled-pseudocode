/*
 * XREFs of DpiCleanUpGlobalState @ 0x1C039A0A0
 * Callers:
 *     DxgkUnload @ 0x1C030A890 (DxgkUnload.c)
 * Callees:
 *     DpiPdoPollingWorkItem @ 0x1C03A9990 (DpiPdoPollingWorkItem.c)
 */

void DpiCleanUpGlobalState()
{
  KeCancelTimer(&stru_1C0140698);
  DpiPdoPollingWorkItem((PDEVICE_OBJECT)g_pDriverObject, (PVOID)1);
  KeFlushQueuedDpcs();
  if ( qword_1C0140718 )
    IoFreeWorkItem(qword_1C0140718);
  ExDeleteNPagedLookasideList(&stru_1C0140580);
  if ( Object )
  {
    ExFreePoolWithTag(Object, 0);
    Object = 0LL;
  }
  ExDeleteNPagedLookasideList(&Lookaside);
  if ( Mutex )
  {
    ExFreePoolWithTag(Mutex, 0);
    Mutex = 0LL;
  }
  if ( qword_1C0140890 )
  {
    IoUnregisterPlugPlayNotificationEx(qword_1C0140890);
    qword_1C0140890 = 0LL;
  }
}
