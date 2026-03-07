__int64 __fastcall NtOpenKeyTransacted(HANDLE *a1, int a2, __int64 a3, void *Handle)
{
  return NtOpenKeyTransactedEx(a1, a2, a3, 0, Handle);
}
