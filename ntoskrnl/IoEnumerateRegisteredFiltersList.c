NTSTATUS __stdcall IoEnumerateRegisteredFiltersList(
        PDRIVER_OBJECT *DriverObjectList,
        ULONG DriverObjectListSize,
        PULONG ActualNumberDriverObjects)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG v7; // ebx
  __int64 *v8; // rax
  ULONG v9; // esi
  bool v10; // cf
  __int64 v11; // rbx
  NTSTATUS i; // edi

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireResourceExclusiveLite(&IopDatabaseResource, 0) )
  {
    if ( IopGetFsRegistrationInProgress() )
    {
      i = -1073741267;
      goto LABEL_8;
    }
    ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
  }
  v8 = (__int64 *)IopFsNotifyChangeQueueHead;
  v9 = DriverObjectListSize >> 3;
  while ( v8 != &IopFsNotifyChangeQueueHead )
  {
    v8 = (__int64 *)*v8;
    ++v7;
  }
  v10 = v9 < v7;
  *ActualNumberDriverObjects = v7;
  v11 = IopFsNotifyChangeQueueHead;
  for ( i = v10 ? 0xC0000023 : 0; v9; --v9 )
  {
    if ( (__int64 *)v11 == &IopFsNotifyChangeQueueHead )
      break;
    ObfReferenceObject(*(PVOID *)(v11 + 16));
    *DriverObjectList++ = *(PDRIVER_OBJECT *)(v11 + 16);
    v11 = *(_QWORD *)v11;
  }
  ExReleaseResourceLite(&IopDatabaseResource);
LABEL_8:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return i;
}
