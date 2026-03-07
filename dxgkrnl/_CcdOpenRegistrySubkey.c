__int64 __fastcall CcdOpenRegistrySubkey(int a1, int a2, int a3, const WCHAR *a4, __int64 a5)
{
  struct _UNICODE_STRING v9; // [rsp+30h] [rbp-18h] BYREF

  v9 = 0LL;
  RtlInitUnicodeString(&v9, a4);
  return CcdOpenRegistrySubkey_0(a1, a2, a3, (unsigned int)&v9, a5);
}
