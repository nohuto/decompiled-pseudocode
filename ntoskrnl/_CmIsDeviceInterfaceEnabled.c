NTSTATUS __fastcall CmIsDeviceInterfaceEnabled(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  __int64 (__fastcall *v7)(__int64, UNICODE_STRING *, __int64, _QWORD); // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, UNICODE_STRING *, __int64, _QWORD))(a1 + 288);
    if ( v7 )
      return v7(a1, &DestinationString, a4, 0LL);
    else
      return -1073741822;
  }
  return result;
}
