__int64 __fastcall RegisterExternalTranslatorInterface(void *a1, void *a2, struct _UNICODE_STRING *a3)
{
  struct _UNICODE_STRING v6; // xmm0
  PVOID v7; // rbp
  PVOID v8; // rdi
  wchar_t *Buffer; // rbx

  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(&ExternalTranslatorInterfaceLock, 1u);
  v6 = *a3;
  v7 = ExternalTranslationInterface;
  v8 = ExternalTranslatorNotificationEntry;
  ExternalTranslationInterface = a1;
  Buffer = CurrentExternalTranslationProvider.Buffer;
  CurrentExternalTranslationProvider = v6;
  IoRegisterPlugPlayNotification(
    EventCategoryTargetDeviceChange,
    0,
    a2,
    ExternalTranslatorDriverObjectReference,
    (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)NotifyExternalTranslationInterfaceChange,
    0LL,
    &ExternalTranslatorNotificationEntry);
  ExReleaseResourceLite(&ExternalTranslatorInterfaceLock);
  KeLeaveCriticalRegion();
  if ( v7 )
  {
    if ( v8 )
      IoUnregisterPlugPlayNotification(v8);
    ExFreePoolWithTag(v7, 0x58706341u);
  }
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0x58706341u);
  return 0LL;
}
