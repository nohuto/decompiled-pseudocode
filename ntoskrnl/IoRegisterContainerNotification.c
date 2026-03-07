NTSTATUS __stdcall IoRegisterContainerNotification(
        IO_CONTAINER_NOTIFICATION_CLASS NotificationClass,
        PIO_CONTAINER_NOTIFICATION_FUNCTION CallbackFunction,
        PVOID NotificationInformation,
        ULONG NotificationInformationLength,
        PVOID CallbackRegistration)
{
  NTSTATUS v5; // ebx
  PIO_CONTAINER_NOTIFICATION_FUNCTION v7; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rsi
  PVOID *v11; // rcx
  PVOID *v12; // rax
  _QWORD *Pool2; // rax
  _QWORD *v14; // rdi
  PVOID v15; // rbp
  void *SessionObjectById; // r12
  void *v17; // r14
  struct _DEVICE_OBJECT *DevicePDO; // rax
  struct _DEVICE_OBJECT *v19; // r15
  unsigned int SessionIdFromPDO; // eax
  __int64 v21; // rdx
  _QWORD *v22; // rax

  v5 = 0;
  v7 = CallbackFunction;
  if ( NotificationClass >= IoMaxContainerNotificationClass )
    return -1073741585;
  if ( NotificationInformationLength == 32 && *(_DWORD *)NotificationInformation == 32 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = *((_QWORD *)NotificationInformation + 1);
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&IopSessionNotificationLock, 0LL);
    v11 = (PVOID *)IopSessionNotificationQueueHead;
    while ( v11 != &IopSessionNotificationQueueHead )
    {
      v12 = v11;
      v11 = (PVOID *)*v11;
      if ( v12[5] == (PVOID)v10 )
      {
        v5 = -1073741791;
        goto LABEL_30;
      }
    }
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 72LL, 1850961737LL);
    v14 = Pool2;
    if ( !Pool2 )
    {
      v5 = -1073741670;
      goto LABEL_30;
    }
    v15 = ExRegisterCallback((PCALLBACK_OBJECT)IopSessionCallbackObject, IopDispatchSessionNotifications, Pool2);
    if ( !v15 )
    {
      v5 = -1073741670;
      goto LABEL_28;
    }
    SessionObjectById = 0LL;
    switch ( *(_WORD *)v10 )
    {
      case 3:
        v17 = *(void **)(v10 + 8);
        if ( (*(_DWORD *)(*(_QWORD *)(v10 + 312) + 32LL) & 0x400) != 0 )
        {
          DevicePDO = (struct _DEVICE_OBJECT *)IopGetDevicePDO(v10);
          v19 = DevicePDO;
          if ( DevicePDO )
          {
            SessionIdFromPDO = IopGetSessionIdFromPDO(DevicePDO);
            SessionObjectById = MmGetSessionObjectById(SessionIdFromPDO, v21);
            ObfDereferenceObject(v19);
          }
          v7 = CallbackFunction;
        }
        *(_DWORD *)(*(_QWORD *)(v10 + 312) + 32LL) |= 0x1000u;
        break;
      case 4:
        v17 = (void *)v10;
        break;
      case 5:
        v17 = *(void **)(*(_QWORD *)(v10 + 8) + 8LL);
        v5 = IopSetFileObjectExtensionFlag(v10, 2, 1);
        if ( v5 < 0 )
        {
LABEL_28:
          ExFreePoolWithTag(v14, 0);
          if ( v15 )
            ExUnregisterCallback(v15);
LABEL_30:
          ExReleasePushLockEx((__int64 *)&IopSessionNotificationLock, 0LL);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          return v5;
        }
        break;
      default:
        v5 = -1073741583;
        goto LABEL_28;
    }
    ObfReferenceObject(v17);
    v14[5] = v10;
    v14[2] = v17;
    v14[4] = v15;
    v14[8] = *((_QWORD *)NotificationInformation + 3);
    *((_DWORD *)v14 + 14) = *((_DWORD *)NotificationInformation + 4);
    v14[3] = v7;
    v14[6] = SessionObjectById;
    *(_QWORD *)CallbackRegistration = v15;
    v22 = (_QWORD *)qword_140C5DB98;
    if ( *(PVOID **)qword_140C5DB98 != &IopSessionNotificationQueueHead )
      __fastfail(3u);
    *v14 = &IopSessionNotificationQueueHead;
    v14[1] = v22;
    *v22 = v14;
    qword_140C5DB98 = (__int64)v14;
    goto LABEL_30;
  }
  return -1073741582;
}
