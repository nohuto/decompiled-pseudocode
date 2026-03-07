__int64 __fastcall NtUnloadDriver(UNICODE_STRING *a1)
{
  return IopUnloadDriver(a1, 0);
}
