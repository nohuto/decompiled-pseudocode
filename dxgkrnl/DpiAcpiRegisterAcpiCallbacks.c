__int64 __fastcall DpiAcpiRegisterAcpiCallbacks(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  char v4; // si
  char v5; // r12
  char v6; // r14
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  int v9; // eax
  __int64 v11; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-48h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+A0h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  LODWORD(v3) = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  AcquireMiniportListMutex();
  if ( !dword_1C013B610 )
  {
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    CallbackObject = 0LL;
    DestinationString = 0LL;
    if ( !g_pDeviceObject )
    {
      WdLogSingleEntry1(2LL, -1073741823LL);
      goto LABEL_9;
    }
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 80;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
    v3 = v7;
    if ( v7 >= 0 )
    {
      CallbackRegistration = ExRegisterCallback(
                               CallbackObject,
                               (PCALLBACK_FUNCTION)DpiAcpiPowerStateCallback,
                               g_pDeviceObject);
      ObfDereferenceObject(CallbackObject);
      if ( !CallbackRegistration )
      {
        v11 = -1073741823LL;
        LODWORD(v3) = -1073741823;
        goto LABEL_14;
      }
      v4 = 1;
      WdLogSingleEntry1(4LL, CallbackRegistration);
      v8 = IoRegisterPlugPlayNotification(
             EventCategoryHardwareProfileChange,
             0,
             0LL,
             g_pDriverObject,
             DpiAcpiDockEventCallback,
             g_pDeviceObject,
             &NotificationEntry);
      v3 = v8;
      if ( v8 >= 0 )
        goto LABEL_6;
    }
    v11 = v3;
LABEL_14:
    WdLogSingleEntry1(2LL, v11);
    goto LABEL_9;
  }
LABEL_6:
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(v1 + 928))(*(_QWORD *)(v1 + 864), DpiAcpiEventCallback, a1);
  LODWORD(v3) = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(v1 + 928), v9);
  }
  else
  {
    v5 = 1;
    WdLogSingleEntry1(4LL, v9);
    *(_BYTE *)(v1 + 1158) = 1;
    ++dword_1C013B610;
  }
  v6 = v4;
LABEL_9:
  _InterlockedExchange64(&qword_1C013B4D8, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( (int)v3 < 0 )
  {
    *(_BYTE *)(v1 + 1158) = 0;
    if ( v6 == 1 )
    {
      IoUnregisterPlugPlayNotification(NotificationEntry);
      NotificationEntry = 0LL;
    }
    if ( v4 == 1 )
    {
      ExUnregisterCallback(CallbackRegistration);
      CallbackRegistration = 0LL;
    }
    if ( v5 == 1 )
      (*(void (__fastcall **)(_QWORD, void (__fastcall *)(PVOID, int, __int64)))(v1 + 936))(
        *(_QWORD *)(v1 + 864),
        DpiAcpiEventCallback);
  }
  return (unsigned int)v3;
}
