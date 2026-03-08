/*
 * XREFs of ?DeviceClassCDROMNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z @ 0x1C01B31A0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall DeviceClassCDROMNotify(char *NotificationStructure, PVOID Context)
{
  __int64 v3; // rax
  unsigned int v4; // esi
  __int64 v5; // rax
  struct _LIST_ENTRY *v6; // rbx
  unsigned int v7; // edx
  struct _LIST_ENTRY *Flink; // rax
  struct _FAST_MUTEX *v9; // rcx
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp+8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp+18h] BYREF

  FileObject = 0LL;
  DeviceObject = 0LL;
  v3 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v3
    && IoGetDeviceObjectPointer(*((PUNICODE_STRING *)NotificationStructure + 5), 0x80u, &FileObject, &DeviceObject) >= 0 )
  {
    v4 = **((unsigned __int16 **)NotificationStructure + 5) + 40;
    v5 = Win32AllocPoolZInit(v4, 1886417749LL);
    v6 = (struct _LIST_ENTRY *)v5;
    if ( v5 )
    {
      *(_DWORD *)(v5 + 16) = v4;
      v7 = **((unsigned __int16 **)NotificationStructure + 5);
      *(_WORD *)(v5 + 36) = v7;
      memmove((void *)(v5 + 38), *(const void **)(*((_QWORD *)NotificationStructure + 5) + 8LL), v7);
      if ( IoRegisterPlugPlayNotification(
             EventCategoryTargetDeviceChange,
             0,
             FileObject,
             gpWin32kDriverObject,
             (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DeviceCDROMNotify,
             v6,
             (PVOID *)&v6[1].Blink) < 0 )
      {
        Win32FreePool(v6);
      }
      else
      {
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gMediaChangeMutex);
        Flink = gCDROMNotifyList.Flink;
        if ( gCDROMNotifyList.Flink->Blink != &gCDROMNotifyList )
          __fastfail(3u);
        v9 = gMediaChangeMutex;
        v6->Flink = gCDROMNotifyList.Flink;
        v6->Blink = &gCDROMNotifyList;
        Flink->Blink = v6;
        gCDROMNotifyList.Flink = v6;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v9);
      }
    }
    ObfDereferenceObject(FileObject);
  }
  return 0LL;
}
