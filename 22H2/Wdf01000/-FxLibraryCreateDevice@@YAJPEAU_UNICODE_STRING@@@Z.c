/*
 * XREFs of ?FxLibraryCreateDevice@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C002D748
 * Callers:
 *     DriverEntry @ 0x1C002DDE0 (DriverEntry.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1C002E384 (RtlUnicodeStringPrintf.c)
 *     ?_CreateAndInitialize@FxCompanionLibrary@@SAJPEAPEAV1@@Z @ 0x1C00432AC (-_CreateAndInitialize@FxCompanionLibrary@@SAJPEAPEAV1@@Z.c)
 */

int __fastcall FxLibraryCreateDevice(_UNICODE_STRING *DeviceName)
{
  unsigned int v2; // ebx
  int result; // eax
  NTSTATUS Device; // eax
  int v5; // ebx

  v2 = 0;
  while ( 1 )
  {
    result = RtlUnicodeStringPrintf(DeviceName, L"%s%d", L"\\Device\\KMDF", v2++);
    if ( result < 0 )
      break;
    Device = IoCreateDevice(
               FxLibraryGlobals.DriverObject,
               0,
               DeviceName,
               0x22u,
               0,
               0,
               &FxLibraryGlobals.LibraryDeviceObject);
    if ( Device != -1073741771 )
    {
      if ( Device >= 0 )
        FxLibraryGlobals.LibraryDeviceObject->Flags &= ~0x80u;
      v5 = FxCompanionLibrary::_CreateAndInitialize(&FxLibraryGlobals.CompanionLibrary);
      if ( v5 < 0 )
      {
        if ( WdfLdrDbgPrintOn )
        {
          DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
          DbgPrintEx(0x65u, 0, "ERROR: Initializing companion library failed 0x%x\n", v5);
        }
      }
      return v5;
    }
  }
  return result;
}
