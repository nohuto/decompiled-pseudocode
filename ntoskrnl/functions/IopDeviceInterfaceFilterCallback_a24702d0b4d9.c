char __fastcall IopDeviceInterfaceFilterCallback(__int64 a1, const WCHAR *a2, int a3, __int64 a4)
{
  char v4; // bl
  int v8; // eax
  char v9; // cl
  UNICODE_STRING String2; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  LOBYTE(v13) = 0;
  String2 = 0LL;
  DestinationString = 0LL;
  if ( a3 == 3
    && a4
    && (!*(_QWORD *)a4
     || RtlInitUnicodeStringEx(&DestinationString, *(PCWSTR *)a4) >= 0
     && RtlInitUnicodeStringEx(&String2, a2) >= 0
     && RtlEqualUnicodeString(&DestinationString, &String2, 1u) != 1) )
  {
    v8 = PiPnpRtlApplyMandatoryFilters(a1, (__int64)a2, 3, 0LL, (struct _SECURITY_SUBJECT_CONTEXT *)(a4 + 8), &v13);
    v9 = v13;
    if ( v8 < 0 )
      return 0;
    return v9;
  }
  return v4;
}
