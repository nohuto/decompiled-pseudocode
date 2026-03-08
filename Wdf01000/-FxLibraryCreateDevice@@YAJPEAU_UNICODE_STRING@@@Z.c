/*
 * XREFs of ?FxLibraryCreateDevice@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C0016C4C
 * Callers:
 *     DriverEntry @ 0x1C00172E0 (DriverEntry.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1C00178B4 (RtlUnicodeStringPrintf.c)
 *     ?_CreateAndInitialize@FxCompanionLibrary@@SAJPEAPEAV1@@Z @ 0x1C002DA34 (-_CreateAndInitialize@FxCompanionLibrary@@SAJPEAPEAV1@@Z.c)
 */

int __fastcall FxLibraryCreateDevice(_UNICODE_STRING *DeviceName)
{
  unsigned int v2; // ebx
  __int64 v3; // r9
  int result; // eax
  NTSTATUS Device; // eax
  int v6; // ebx

  v2 = 0;
  while ( 1 )
  {
    v3 = v2++;
    result = RtlUnicodeStringPrintf(DeviceName, L"%s%d", L"\\Device\\KMDF", v3);
    if ( result < 0 )
      break;
    Device = IoCreateDevice(
               (PDRIVER_OBJECT)WPP_GLOBAL_WDF_Control.DeviceExtension,
               0,
               DeviceName,
               0x22u,
               0,
               0,
               (PDEVICE_OBJECT *)&WPP_GLOBAL_WDF_Control.DeviceType);
    if ( Device != -1073741771 )
    {
      if ( Device >= 0 )
        *(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_WDF_Control.DeviceType + 48LL) &= ~0x80u;
      v6 = FxCompanionLibrary::_CreateAndInitialize(&qword_1C009FF58);
      if ( v6 < 0 )
      {
        if ( WdfLdrDbgPrintOn )
        {
          DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
          DbgPrintEx(0x65u, 0, "ERROR: Initializing companion library failed 0x%x\n", v6);
        }
      }
      return v6;
    }
  }
  return result;
}
