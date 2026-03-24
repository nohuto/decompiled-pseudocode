/*
 * XREFs of DpiCleanUpGlobalState @ 0x1C02C7D3C
 * Callers:
 *     DxgkUnload @ 0x1C0261ED0 (DxgkUnload.c)
 * Callees:
 *     DpiPdoPollingWorkItem @ 0x1C02D9870 (DpiPdoPollingWorkItem.c)
 */

void DpiCleanUpGlobalState()
{
  KeCancelTimer(&stru_1C00B2D10);
  DpiPdoPollingWorkItem((PDEVICE_OBJECT)g_pDriverObject, (PVOID)1);
  KeFlushQueuedDpcs();
  if ( qword_1C00B2D90 )
    IoFreeWorkItem(qword_1C00B2D90);
  ExDeleteNPagedLookasideList(&stru_1C00B2C00);
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    P = 0LL;
  }
  ExDeleteNPagedLookasideList(&Lookaside);
  if ( Mutex )
  {
    ExFreePoolWithTag(Mutex, 0);
    Mutex = 0LL;
  }
  if ( qword_1C00B2F08 )
  {
    IoUnregisterPlugPlayNotificationEx(qword_1C00B2F08);
    qword_1C00B2F08 = 0LL;
  }
}
