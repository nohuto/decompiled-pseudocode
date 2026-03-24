/*
 * XREFs of FxDriverEntryWorker @ 0x1C003EA34
 * Callers:
 *     FxDriverEntry @ 0x1C003EA00 (FxDriverEntry.c)
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C003E918 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1C003EB5C (-FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z.c)
 *     ?FxStubInitTypes@@YAJXZ @ 0x1C003ED34 (-FxStubInitTypes@@YAJXZ.c)
 *     DriverEntry @ 0x1C0088008 (DriverEntry.c)
 */

NTSTATUS __fastcall FxDriverEntryWorker(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS result; // eax
  struct _WDF_BIND_INFO *v5; // rcx
  int inited; // ebx
  NTSTATUS v7; // eax
  __int64 (*DriverUnload)(void); // rax

  if ( !DriverObject )
    return DriverEntry(0LL, RegistryPath);
  *(_DWORD *)&DestinationString.Length = 34078720;
  DestinationString.Buffer = (wchar_t *)&unk_1C00698D0;
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
LABEL_8:
      FxStubDriverUnloadCommon();
      return inited;
    }
    if ( WdfDriverGlobals->DisplaceDriverUnload )
    {
      DriverUnload = qword_1C0069AD8;
      if ( DriverObject->DriverUnload )
        DriverUnload = (__int64 (*)(void))DriverObject->DriverUnload;
      qword_1C0069AD8 = DriverUnload;
      DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))FxStubDriverUnload;
    }
    return 0;
  }
  return result;
}
