/*
 * XREFs of FxDriverEntryWorker @ 0x1C0041064
 * Callers:
 *     FxDriverEntry @ 0x1C0041030 (FxDriverEntry.c)
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0040EF0 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1C00411F8 (-FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z.c)
 *     ?FxStubInitTypes@@YAJXZ @ 0x1C0041380 (-FxStubInitTypes@@YAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     DriverEntry @ 0x1C0093228 (DriverEntry.c)
 */

NTSTATUS __fastcall FxDriverEntryWorker(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS result; // eax
  struct _WDF_BIND_INFO *v5; // rcx
  int inited; // ebx
  NTSTATUS v7; // eax
  __int64 (*DriverUnload)(void); // rax
  GUID *v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp-20h]
  _QWORD v11[3]; // [rsp+3Ch] [rbp-1Ch] BYREF

  if ( !DriverObject )
    return DriverEntry(0LL, RegistryPath);
  *(_DWORD *)&DestinationString.Length = 34078720;
  DestinationString.Buffer = (wchar_t *)&unk_1C006DA20;
  RtlCopyUnicodeString(&DestinationString, RegistryPath);
  result = WdfVersionBind(DriverObject, &DestinationString, &WdfBindInfo, &WdfDriverGlobals);
  if ( result >= 0 )
  {
    inited = FxStubBindClasses(v5);
    if ( inited < 0 || (inited = FxStubInitTypes(), inited < 0) )
    {
LABEL_10:
      FxStubDriverUnloadCommon();
      return inited;
    }
    v7 = DriverEntry(DriverObject, RegistryPath);
    inited = v7;
    if ( v7 < 0 )
    {
      DbgPrintEx(0x4Du, 0, "DriverEntry failed 0x%x for driver %wZ\n", (unsigned int)v7, &DestinationString);
      if ( off_1C006D948 != &__KMDF_CLASS_BIND_START )
      {
        memset(v11, 0, 12);
        v9 = &GUID_WDF_LOADER_INTERFACE_DRIVER_ENTRY_FAILURE;
        v10 = 24;
        if ( (int)WdfLdrQueryInterface(&v9) >= 0 )
          (*(void (__fastcall **)(void *, PWDF_DRIVER_GLOBALS))((char *)v11 + 4))(&WdfBindInfo, WdfDriverGlobals);
      }
      goto LABEL_10;
    }
    if ( WdfDriverGlobals->DisplaceDriverUnload )
    {
      DriverUnload = qword_1C006DC28;
      if ( DriverObject->DriverUnload )
        DriverUnload = (__int64 (*)(void))DriverObject->DriverUnload;
      qword_1C006DC28 = DriverUnload;
      DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))FxStubDriverUnload;
    }
    return 0;
  }
  return result;
}
