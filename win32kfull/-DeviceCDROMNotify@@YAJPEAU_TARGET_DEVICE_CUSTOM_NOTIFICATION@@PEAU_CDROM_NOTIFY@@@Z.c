/*
 * XREFs of ?DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1C01B2F60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ShowAutorunCursor @ 0x1C01AA2E0 (ShowAutorunCursor.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C01B2DB4 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C01B2F14 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 */

__int64 __fastcall DeviceCDROMNotify(char *NotificationStructure, unsigned int *Context)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rax
  struct _LIST_ENTRY *v7; // rax
  struct _LIST_ENTRY *v8; // rbx
  struct _LIST_ENTRY *Flink; // rax
  struct _FAST_MUTEX *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int **v13; // rax
  __int64 v14; // rax
  _BYTE v16[208]; // [rsp+20h] [rbp-E8h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v16);
  if ( gProtocolType )
    goto LABEL_26;
  v4 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_IO_MEDIA_ARRIVAL.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_IO_MEDIA_ARRIVAL.Data4;
  if ( !v4 )
  {
    v5 = 1;
    goto LABEL_10;
  }
  v6 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_IO_MEDIA_REMOVAL.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_IO_MEDIA_REMOVAL.Data4;
  if ( !v6 )
  {
    v5 = 2;
LABEL_10:
    Context[8] = v5;
    v7 = (struct _LIST_ENTRY *)Win32AllocPoolNonPagedZInit(Context[4], 1886417749LL);
    v8 = v7;
    if ( v7 )
    {
      memmove(v7, Context, Context[4]);
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gMediaChangeMutex);
      Flink = gMediaChangeList.Flink;
      if ( gMediaChangeList.Flink->Blink == &gMediaChangeList )
      {
        v8->Blink = &gMediaChangeList;
        v10 = gMediaChangeMutex;
        v8->Flink = Flink;
        Flink->Blink = v8;
        gMediaChangeList.Flink = v8;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v10);
        KeSetEvent((PRKEVENT)gpEventMediaChange, 1, 0);
        goto LABEL_26;
      }
LABEL_21:
      __fastfail(3u);
    }
    goto LABEL_26;
  }
  v11 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v11 )
    v11 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v11 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gMediaChangeMutex);
    if ( !gCDROMClassRegistrationEntry )
    {
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gMediaChangeMutex);
      goto LABEL_26;
    }
    v12 = *(_QWORD *)Context;
    if ( *(unsigned int **)(*(_QWORD *)Context + 8LL) == Context )
    {
      v13 = (unsigned int **)*((_QWORD *)Context + 1);
      if ( *v13 == Context )
      {
        *v13 = (unsigned int *)v12;
        *(_QWORD *)(v12 + 8) = v13;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gMediaChangeMutex);
        IoUnregisterPlugPlayNotification(*((PVOID *)Context + 3));
        Win32FreePool(Context);
        goto LABEL_26;
      }
    }
    goto LABEL_21;
  }
  v14 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_IO_DEVICE_BECOMING_READY.Data1;
  if ( !v14 )
    v14 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_IO_DEVICE_BECOMING_READY.Data4;
  if ( !v14 )
    ShowAutorunCursor(10 * *((_DWORD *)NotificationStructure + 11));
LABEL_26:
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v16);
  return 0LL;
}
