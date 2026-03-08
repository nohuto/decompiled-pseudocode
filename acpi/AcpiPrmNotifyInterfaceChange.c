/*
 * XREFs of AcpiPrmNotifyInterfaceChange @ 0x1C008CC20
 * Callers:
 *     <none>
 * Callees:
 *     AcpiAcquirePrmInterface @ 0x1C008CAB8 (AcpiAcquirePrmInterface.c)
 */

__int64 __fastcall AcpiPrmNotifyInterfaceChange(char *NotificationStructure, PVOID Context)
{
  __int64 v2; // rax
  int v3; // edi
  __int64 v4; // rax

  v2 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  v3 = 0;
  if ( !v2 )
    v2 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( v2 )
  {
    v4 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
    if ( !v4 )
      v4 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
    if ( !v4 )
    {
      _InterlockedExchange(&AcpiPrmContext, 0);
      ExWaitForRundownProtectionRelease(&RunRef);
      if ( stru_1C006FED8.Buffer )
      {
        ExFreePoolWithTag(stru_1C006FED8.Buffer, 0x46706341u);
        stru_1C006FED8.Buffer = 0LL;
        *(_DWORD *)&stru_1C006FED8.Length = 0;
      }
    }
  }
  else
  {
    v3 = AcpiAcquirePrmInterface(*((UNICODE_STRING **)NotificationStructure + 5), 1, &unk_1C006FE98);
    if ( v3 >= 0 )
    {
      ExInitializeRundownProtection(&RunRef);
      _InterlockedExchange(&AcpiPrmContext, 2);
    }
    else
    {
      _InterlockedExchange(&AcpiPrmContext, 0);
    }
  }
  return (unsigned int)v3;
}
