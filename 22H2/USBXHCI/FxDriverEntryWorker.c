/*
 * XREFs of FxDriverEntryWorker @ 0x1C00182B4
 * Callers:
 *     FxDriverEntry @ 0x1C0018280 (FxDriverEntry.c)
 * Callees:
 *     ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1C0018674 (-FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C004FB60 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     DriverEntry @ 0x1C007112C (DriverEntry.c)
 */

NTSTATUS __fastcall FxDriverEntryWorker(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS result; // eax
  struct _WDF_BIND_INFO *v5; // rcx
  int v6; // ebx
  _QWORD *i; // rdi
  NTSTATUS v8; // eax
  void (__fastcall *DriverUnload)(_DRIVER_OBJECT *); // rax
  __int64 (*v10)(void); // rax

  if ( !DriverObject )
    return DriverEntry(0LL, RegistryPath);
  *(_DWORD *)&DestinationString.Length = 34078720;
  DestinationString.Buffer = (wchar_t *)&unk_1C00619D0;
  RtlCopyUnicodeString(&DestinationString, RegistryPath);
  result = WdfVersionBind(DriverObject, &DestinationString, &WdfBindInfo, &WdfDriverGlobals);
  if ( result >= 0 )
  {
    v6 = FxStubBindClasses(v5);
    if ( v6 >= 0 )
    {
      if ( &__KMDF_TYPE_INIT_START > (_UNKNOWN *)__KMDF_TYPE_INIT_END )
      {
        v6 = -1073741701;
        DbgPrintEx(
          0x4Du,
          0,
          "FxStubInitTypes: invalid driver image, the address of symbol __KMDF_TYPE_INIT_START 0x%p is greater than the a"
          "ddress of symbol __KMDF_TYPE_INIT_END 0x%p, status 0x%x\n",
          &__KMDF_TYPE_INIT_START,
          __KMDF_TYPE_INIT_END,
          -1073741701);
      }
      else
      {
        for ( i = __KMDF_TYPE_INIT_END; i < __KMDF_TYPE_INIT_END; i += 5 )
        {
          if ( *(_DWORD *)i != 40 )
          {
            v6 = -1073741820;
            DbgPrintEx(
              0x4Du,
              0,
              "FxStubInitTypes: WDF_OBJECT_CONTEXT_TYPE_INFO 0x%p, size 0x%x incorrect, expected 0x%x, status 0x%x\n",
              i,
              *(_DWORD *)i,
              40,
              -1073741820);
            goto LABEL_22;
          }
          v10 = (__int64 (*)(void))i[4];
          if ( v10 )
            i[3] = v10();
        }
        v8 = DriverEntry(DriverObject, RegistryPath);
        v6 = v8;
        if ( v8 >= 0 )
        {
          if ( WdfDriverGlobals->DisplaceDriverUnload )
          {
            DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))qword_1C0061998;
            if ( DriverObject->DriverUnload )
              DriverUnload = DriverObject->DriverUnload;
            qword_1C0061998 = (__int64)DriverUnload;
            DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))FxStubDriverUnload;
          }
          return 0;
        }
        DbgPrintEx(0x4Du, 0, "DriverEntry failed 0x%x for driver %wZ\n", (unsigned int)v8, &DestinationString);
      }
    }
LABEL_22:
    FxStubDriverUnloadCommon();
    return v6;
  }
  return result;
}
