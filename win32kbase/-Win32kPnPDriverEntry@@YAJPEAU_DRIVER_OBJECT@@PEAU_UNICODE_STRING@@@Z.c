__int64 __fastcall Win32kPnPDriverEntry(struct _DRIVER_OBJECT *a1, struct _UNICODE_STRING *a2)
{
  gpWin32kDriverObject = a1;
  return 0LL;
}
