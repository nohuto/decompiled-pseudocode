NTSTATUS __fastcall IopGetOriginalServiceName(UNICODE_STRING *a1, void *a2, unsigned int *a3)
{
  NTSTATUS result; // eax
  int v6; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0;
  Handle = 0LL;
  result = PipOpenServiceEnumKeys(a1, 0x20019u, &Handle, 0LL, 0);
  if ( result >= 0 )
  {
    v6 = RegRtlQueryValue(Handle, L"OriginalServiceName", &v8, a2, a3);
    if ( v6 >= 0 && (v8 != 1 || *a3 <= 2) )
      v6 = -1073741762;
    ZwClose(Handle);
    return v6;
  }
  return result;
}
