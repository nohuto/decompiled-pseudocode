/*
 * XREFs of DpiAcpiDockEventCallback @ 0x1C03A1FB0
 * Callers:
 *     <none>
 * Callees:
 *     DpiAcpiCallAcpiEventHandler @ 0x1C00654A4 (DpiAcpiCallAcpiEventHandler.c)
 */

__int64 __fastcall DpiAcpiDockEventCallback(PVOID NotificationStructure, PVOID Context)
{
  return DpiAcpiCallAcpiEventHandler(Context, 3u, 0x77u, 0LL);
}
