/*
 * XREFs of DpiGdoCreateGdiObjects @ 0x1C0202D20
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C0202548 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     DpiAppendNumberToString @ 0x1C020301C (DpiAppendNumberToString.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C0203154 (WdmlibIoCreateDeviceSecure.c)
 *     DpiGdoSetupGdiParameters @ 0x1C0204950 (DpiGdoSetupGdiParameters.c)
 */

__int64 __fastcall DpiGdoCreateGdiObjects(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  __int64 v6; // r14
  const WCHAR *v7; // rcx
  PVOID DeviceExtension; // rdi
  char v9; // r12
  ULONG v10; // edx
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  __int64 v14; // rax
  _QWORD *v15; // rdx
  PDEVICE_OBJECT v16; // rax
  NTSTATUS v17; // eax
  _QWORD *v19; // rcx
  PVOID *v20; // rax
  BOOLEAN v21; // [rsp+30h] [rbp-41h]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-19h] BYREF
  struct _UNICODE_STRING DeviceName; // [rsp+60h] [rbp-11h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+70h] [rbp-1h] BYREF
  char v28; // [rsp+F0h] [rbp+7Fh]

  v3 = *(_QWORD *)(a1 + 64);
  LODWORD(v5) = 0;
  KeWaitForSingleObject((PVOID)(v3 + 3600), Executive, 0, 0, 0LL);
  v6 = 0LL;
  if ( a2 )
  {
    while ( 1 )
    {
      DeviceObject = 0LL;
      v7 = L"\\Device\\RemoteVideo";
      DeviceExtension = 0LL;
      v28 = 0;
      v9 = 0;
      v10 = *(_DWORD *)(a3 + 4 * v6);
      if ( !*(_BYTE *)(v3 + 2743) )
        v7 = L"\\Device\\Video";
      DeviceName = 0LL;
      SymbolicLinkName = 0LL;
      LODWORD(v5) = DpiAppendNumberToString(v7, v10, &DeviceName);
      if ( (int)v5 < 0 )
        goto LABEL_25;
      v11 = WdmlibIoCreateDeviceSecure(
              *(PDRIVER_OBJECT *)(*(_QWORD *)(v3 + 40) + 32LL),
              0xC8u,
              &DeviceName,
              0x23u,
              0x100u,
              v21,
              &SDDL_DEVOBJ_KERNEL_ONLY,
              &GUID_SD_GDO,
              &DeviceObject);
      v5 = v11;
      if ( v11 < 0 )
        goto LABEL_19;
      if ( !*(_BYTE *)(v3 + 2743) )
      {
        LODWORD(v5) = DpiAppendNumberToString(L"\\DosDevices\\DISPLAY", *(_DWORD *)(a3 + 4 * v6) + 1, &SymbolicLinkName);
        if ( (int)v5 < 0 )
          goto LABEL_25;
        v12 = IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName);
        v5 = v12;
        if ( v12 < 0 )
        {
LABEL_19:
          WdLogSingleEntry1(2LL, v5);
          goto LABEL_25;
        }
        v9 = 1;
      }
      DeviceExtension = DeviceObject->DeviceExtension;
      *((_DWORD *)DeviceExtension + 4) = 1953656900;
      *((_DWORD *)DeviceExtension + 5) = 6;
      *((_QWORD *)DeviceExtension + 3) = DeviceObject;
      *((_QWORD *)DeviceExtension + 4) = a1;
      *((_QWORD *)DeviceExtension + 5) = *(_QWORD *)(v3 + 40);
      *((_QWORD *)DeviceExtension + 6) = *(_QWORD *)(v3 + 48);
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
      *((_QWORD *)DeviceExtension + 13) = DpiGdoDispatchCreate;
      *((_QWORD *)DeviceExtension + 14) = DpiGdoDispatchInternalIoctl;
      *((_QWORD *)DeviceExtension + 15) = &DpiGdoDispatchIoctl;
      *((_DWORD *)DeviceExtension + 38) = *(_DWORD *)(a3 + 4 * v6);
      *((_DWORD *)DeviceExtension + 39) = v6;
      if ( (unsigned int)v6 >= 0x10 )
        WdLogSingleEntry1(2LL, (unsigned int)v6);
      v13 = IoRegisterDeviceInterface(
              *(PDEVICE_OBJECT *)(v3 + 152),
              &GUID_DEVINTERFACE_DISPLAY_ADAPTER,
              0LL,
              (PUNICODE_STRING)DeviceExtension + 10);
      LODWORD(v5) = v13;
      if ( v13 < 0 )
      {
        WdLogSingleEntry1(2LL, v13);
        goto LABEL_23;
      }
      LODWORD(v5) = DpiGdoSetupGdiParameters(DeviceObject, &DeviceName, (unsigned int)v6);
      if ( (int)v5 < 0 )
        goto LABEL_22;
      v14 = *(_QWORD *)(v3 + 3912);
      *((_DWORD *)DeviceExtension + 48) = -1;
      *((_QWORD *)DeviceExtension + 22) = v14;
      v15 = *(_QWORD **)(v3 + 3592);
      if ( *v15 != v3 + 3584 )
        goto LABEL_31;
      *((_QWORD *)DeviceExtension + 1) = v15;
      *(_QWORD *)DeviceExtension = v3 + 3584;
      *v15 = DeviceExtension;
      *(_QWORD *)(v3 + 3592) = DeviceExtension;
      v16 = DeviceObject;
      ++*(_DWORD *)(v3 + 3656);
      v28 = 1;
      v16->Flags |= 4u;
      DeviceObject->Flags &= ~0x80u;
      v17 = IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 10, 1u);
      LODWORD(v5) = v17;
      if ( v17 < 0 )
      {
        WdLogSingleEntry1(2LL, v17);
LABEL_22:
        RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 10);
LABEL_23:
        if ( v9 == 1 )
          IoDeleteSymbolicLink(&SymbolicLinkName);
LABEL_25:
        if ( DeviceObject )
        {
          IoDeleteDevice(DeviceObject);
          DeviceObject = 0LL;
        }
        if ( v28 == 1 )
        {
          v19 = *(_QWORD **)DeviceExtension;
          if ( *(PVOID *)(*(_QWORD *)DeviceExtension + 8LL) != DeviceExtension
            || (v20 = (PVOID *)*((_QWORD *)DeviceExtension + 1), *v20 != DeviceExtension) )
          {
LABEL_31:
            __fastfail(3u);
          }
          *v20 = v19;
          v19[1] = v20;
          --*(_DWORD *)(v3 + 3656);
        }
      }
      RtlFreeUnicodeString(&DeviceName);
      RtlFreeUnicodeString(&SymbolicLinkName);
      if ( (int)v5 >= 0 )
      {
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 < a2 )
          continue;
      }
      break;
    }
  }
  KeReleaseMutex((PRKMUTEX)(v3 + 3600), 0);
  return (unsigned int)v5;
}
