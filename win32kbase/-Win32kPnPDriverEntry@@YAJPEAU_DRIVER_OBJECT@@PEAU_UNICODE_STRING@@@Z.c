/*
 * XREFs of ?Win32kPnPDriverEntry@@YAJPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1C00D5930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32kPnPDriverEntry(struct _DRIVER_OBJECT *a1, struct _UNICODE_STRING *a2)
{
  gpWin32kDriverObject = a1;
  return 0LL;
}
