/*
 * XREFs of FxDriverEntryWorker @ 0x1C001CDB4
 * Callers:
 *     FxDriverEntry @ 0x1C001CD80 (FxDriverEntry.c)
 * Callees:
 *     ?FxStubInitTypes@@YAJXZ @ 0x1C001CEE0 (-FxStubInitTypes@@YAJXZ.c)
 *     ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1C001CF34 (-FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z.c)
 *     ?FxStubDriverEntryFailure@@YAXXZ @ 0x1C0020250 (-FxStubDriverEntryFailure@@YAXXZ.c)
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0052950 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     DriverEntry @ 0x1C0074360 (DriverEntry.c)
 */

NTSTATUS __fastcall FxDriverEntryWorker(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS result; // eax
  struct _WDF_BIND_INFO *v5; // rcx
  int inited; // ebx
  NTSTATUS v7; // eax
  void (__fastcall *DriverUnload)(_DRIVER_OBJECT *); // rax

  if ( !DriverObject )
    return DriverEntry(0LL, RegistryPath);
  *(_DWORD *)&DestinationString.Length = 34078720;
  DestinationString.Buffer = (wchar_t *)&unk_1C0064BC0;
  RtlCopyUnicodeString(&DestinationString, RegistryPath);
  result = WdfVersionBind(DriverObject, &DestinationString, &WdfBindInfo, &WdfDriverGlobals);
  if ( result >= 0 )
  {
    inited = FxStubBindClasses(v5);
    if ( inited < 0 )
      goto LABEL_8;
    inited = FxStubInitTypes();
    if ( inited < 0 )
      goto LABEL_8;
    v7 = DriverEntry(DriverObject, RegistryPath);
    inited = v7;
    if ( v7 < 0 )
    {
      DbgPrintEx(0x4Du, 0, "DriverEntry failed 0x%x for driver %wZ\n", (unsigned int)v7, &DestinationString);
      FxStubDriverEntryFailure();
LABEL_8:
      FxStubDriverUnloadCommon();
      return inited;
    }
    if ( WdfDriverGlobals->DisplaceDriverUnload )
    {
      DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))qword_1C0064A48;
      if ( DriverObject->DriverUnload )
        DriverUnload = DriverObject->DriverUnload;
      qword_1C0064A48 = (__int64)DriverUnload;
      DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))FxStubDriverUnload;
    }
    return 0;
  }
  return result;
}
