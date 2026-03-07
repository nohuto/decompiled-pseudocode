void DpiCleanUpGlobalState()
{
  KeCancelTimer(&stru_1C013B698);
  DpiPdoPollingWorkItem((PDEVICE_OBJECT)g_pDriverObject, (PVOID)1);
  KeFlushQueuedDpcs();
  if ( qword_1C013B718 )
    IoFreeWorkItem(qword_1C013B718);
  ExDeleteNPagedLookasideList(&stru_1C013B580);
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
  if ( qword_1C013B890 )
  {
    IoUnregisterPlugPlayNotificationEx(qword_1C013B890);
    qword_1C013B890 = 0LL;
  }
}
