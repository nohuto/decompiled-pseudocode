/*
 * XREFs of IoRegisterPlugPlayNotification @ 0x1406F4F30
 * Callers:
 *     HalpPostPnpInitialize @ 0x1408020CC (HalpPostPnpInitialize.c)
 *     PopConnectToPolicyDevice @ 0x14084A820 (PopConnectToPolicyDevice.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140980294 (PopRegisterCoolingExtensionProtection.c)
 *     SmKmStoreFileCreate @ 0x1409D68D4 (SmKmStoreFileCreate.c)
 *     PoInitDriverServices @ 0x140B6ED88 (PoInitDriverServices.c)
 *     SbpWaitForVmbus @ 0x140B98D18 (SbpWaitForVmbus.c)
 * Callees:
 *     PnpGetRelatedTargetDevice @ 0x140202D04 (PnpGetRelatedTargetDevice.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402456C0 (PsGetServerSiloServiceSessionId.c)
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByPointerWithTag @ 0x14033E060 (ObReferenceObjectByPointerWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     IopGetDeviceInterfaces @ 0x1406C4A94 (IopGetDeviceInterfaces.c)
 *     PnpDeferNotification @ 0x1406F5340 (PnpDeferNotification.c)
 *     PnpInitializeNotifyEntry @ 0x1406F543C (PnpInitializeNotifyEntry.c)
 *     PnpNotifyDriverCallback @ 0x1406F55F4 (PnpNotifyDriverCallback.c)
 *     IopGetSessionIdFromSymbolicName @ 0x1406F6EFC (IopGetSessionIdFromSymbolicName.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x14085FB0C (PiRegisterKernelSoftRestartNotification.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoRegisterPlugPlayNotification(
        IO_NOTIFICATION_EVENT_CATEGORY EventCategory,
        ULONG EventCategoryFlags,
        PVOID EventCategoryData,
        PDRIVER_OBJECT DriverObject,
        PDRIVER_NOTIFICATION_CALLBACK_ROUTINE CallbackRoutine,
        PVOID Context,
        PVOID *NotificationEntry)
{
  char v9; // r13
  NTSTATUS result; // eax
  __int32 v12; // ebx
  __int32 v13; // ebx
  __int32 v14; // ebx
  NTSTATUS RelatedTargetDevice; // ebx
  _QWORD *Pool2; // rdi
  _QWORD *v17; // r14
  PVOID *v18; // rdx
  struct _FAST_MUTEX *v19; // rcx
  _DWORD *v20; // r12
  char *v21; // rax
  char **v22; // rdx
  __int128 v23; // xmm1
  PVOID v24; // r14
  const WCHAR *i; // rsi
  __int64 CurrentServerSilo; // rax
  int SessionIdFromSymbolicName; // eax
  __int64 v28; // rax
  _QWORD *v29; // rax
  ULONG v30; // edx
  void *v31; // rcx
  PVOID P; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  int v34; // [rsp+48h] [rbp-38h] BYREF
  GUID v35; // [rsp+4Ch] [rbp-34h]
  __int128 v36; // [rsp+5Ch] [rbp-24h]
  _BYTE v37[12]; // [rsp+6Ch] [rbp-14h] BYREF

  v9 = EventCategoryFlags;
  *NotificationEntry = 0LL;
  result = ObReferenceObjectByPointerWithTag(DriverObject, 0, IoDriverObjectType, 0, 0x4E706E50u);
  if ( result >= 0 )
  {
    if ( EventCategory == EventCategoryReserved )
      goto LABEL_48;
    v12 = EventCategory - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( !v14 )
        {
          P = 0LL;
          RelatedTargetDevice = PnpGetRelatedTargetDevice((PFILE_OBJECT)EventCategoryData, &P);
          if ( RelatedTargetDevice < 0 )
            goto LABEL_36;
          Pool2 = (_QWORD *)ExAllocatePool2(256LL, 112LL, 1131441744LL);
          if ( Pool2 )
          {
            RelatedTargetDevice = PnpInitializeNotifyEntry(
                                    (_DWORD)Pool2,
                                    3,
                                    (_DWORD)CallbackRoutine,
                                    (_DWORD)Context,
                                    (__int64)DriverObject,
                                    (__int64)&PnpTargetDeviceNotifyLock);
            if ( RelatedTargetDevice < 0 )
            {
              ExFreePoolWithTag(Pool2, 0x43706E50u);
              v31 = (void *)*((_QWORD *)P + 4);
            }
            else
            {
              Pool2[10] = EventCategoryData;
              v17 = P;
              Pool2[11] = *((_QWORD *)P + 4);
              RelatedTargetDevice = PnpDeferNotification(Pool2);
              if ( RelatedTargetDevice >= 0 )
              {
                ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
                v18 = (PVOID *)v17[60];
                if ( *v18 == v17 + 59 )
                {
                  *Pool2 = v17 + 59;
                  v19 = &PnpTargetDeviceNotifyLock;
                  Pool2[1] = v18;
                  *v18 = Pool2;
                  v17[60] = Pool2;
LABEL_12:
                  ExReleaseFastMutex(v19);
LABEL_13:
                  *NotificationEntry = Pool2;
                  return RelatedTargetDevice;
                }
                goto LABEL_47;
              }
              ExFreePoolWithTag(Pool2, 0x43706E50u);
              v31 = (void *)v17[4];
            }
            ObfDereferenceObject(v31);
LABEL_36:
            ObfDereferenceObjectWithTag(DriverObject, 0x4E706E50u);
            return RelatedTargetDevice;
          }
          ObfDereferenceObject(*((PVOID *)P + 4));
LABEL_39:
          RelatedTargetDevice = -1073741670;
          goto LABEL_36;
        }
        if ( v14 == 1 )
        {
          RelatedTargetDevice = PiRegisterKernelSoftRestartNotification(
                                  DriverObject,
                                  CallbackRoutine,
                                  Context,
                                  NotificationEntry);
          if ( RelatedTargetDevice >= 0 )
            return RelatedTargetDevice;
          goto LABEL_36;
        }
LABEL_48:
        RelatedTargetDevice = -1073741585;
        goto LABEL_36;
      }
      Pool2 = (_QWORD *)ExAllocatePool2(256LL, 96LL, 1148218960LL);
      if ( !Pool2 )
        goto LABEL_39;
      RelatedTargetDevice = PnpInitializeNotifyEntry(
                              (_DWORD)Pool2,
                              2,
                              (_DWORD)CallbackRoutine,
                              (_DWORD)Context,
                              (__int64)DriverObject,
                              (__int64)&PnpDeviceClassNotifyLock);
      if ( RelatedTargetDevice < 0 )
        goto LABEL_36;
      v20 = Pool2 + 10;
      *((_OWORD *)Pool2 + 5) = *(_OWORD *)EventCategoryData;
      RelatedTargetDevice = PnpDeferNotification(Pool2);
      if ( RelatedTargetDevice >= 0 )
      {
        ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
        v21 = (char *)&PnpDeviceClassNotifyList
            + 16 * ((*v20 + *((_DWORD *)Pool2 + 21) + *((_DWORD *)Pool2 + 22) + *((_DWORD *)Pool2 + 23)) % 0xDu);
        v22 = (char **)*((_QWORD *)v21 + 1);
        if ( *v22 != v21 )
          goto LABEL_47;
        *Pool2 = v21;
        Pool2[1] = v22;
        *v22 = (char *)Pool2;
        *((_QWORD *)v21 + 1) = Pool2;
        ExReleaseFastMutex(&PnpDeviceClassNotifyLock);
        if ( (v9 & 1) == 0 )
          goto LABEL_13;
        v23 = *(_OWORD *)v20;
        v34 = 3145729;
        DestinationString = 0LL;
        P = 0LL;
        memset(v37, 0, sizeof(v37));
        v35 = GUID_DEVICE_INTERFACE_ARRIVAL;
        v36 = v23;
        RelatedTargetDevice = IopGetDeviceInterfaces((int *)Pool2 + 20, 0LL, 0, 0, (wchar_t **)&P, 0LL);
        if ( RelatedTargetDevice >= 0 )
        {
          v24 = P;
          for ( i = (const WCHAR *)P; *i; i += ((unsigned __int64)DestinationString.Length >> 1) + 1 )
          {
            LODWORD(P) = 0;
            RtlInitUnicodeString(&DestinationString, i);
            *(_QWORD *)&v37[4] = &DestinationString;
            CurrentServerSilo = PsGetCurrentServerSilo();
            if ( *((_DWORD *)Pool2 + 5) != (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo) )
            {
              SessionIdFromSymbolicName = IopGetSessionIdFromSymbolicName(*(_QWORD *)&v37[4]);
              if ( SessionIdFromSymbolicName != -1 && *((_DWORD *)Pool2 + 5) != SessionIdFromSymbolicName )
                continue;
            }
            PnpNotifyDriverCallback(Pool2, &v34, &P);
          }
          ExFreePoolWithTag(v24, 0);
          goto LABEL_13;
        }
        goto LABEL_36;
      }
      v30 = 1148218960;
    }
    else
    {
      v28 = ExAllocatePool2(256LL, 80LL, 963669584LL);
      Pool2 = (_QWORD *)v28;
      if ( !v28 )
        goto LABEL_39;
      RelatedTargetDevice = PnpInitializeNotifyEntry(
                              v28,
                              1,
                              (_DWORD)CallbackRoutine,
                              (_DWORD)Context,
                              (__int64)DriverObject,
                              (__int64)&PnpHwProfileNotifyLock);
      if ( RelatedTargetDevice < 0 )
        goto LABEL_36;
      RelatedTargetDevice = PnpDeferNotification(Pool2);
      if ( RelatedTargetDevice >= 0 )
      {
        ExAcquireFastMutex(&PnpHwProfileNotifyLock);
        v29 = (_QWORD *)qword_140D54ED8;
        if ( *(PVOID **)qword_140D54ED8 == &PnpProfileNotifyList )
        {
          *Pool2 = &PnpProfileNotifyList;
          v19 = &PnpHwProfileNotifyLock;
          Pool2[1] = v29;
          *v29 = Pool2;
          qword_140D54ED8 = (__int64)Pool2;
          goto LABEL_12;
        }
LABEL_47:
        __fastfail(3u);
      }
      v30 = 963669584;
    }
    ExFreePoolWithTag(Pool2, v30);
    goto LABEL_36;
  }
  return result;
}
