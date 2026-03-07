__int64 __fastcall GreOpenThreadToken(HANDLE *a1)
{
  NTSTATUS v2; // eax
  NTSTATUS v3; // ecx
  int TokenInformation; // [rsp+40h] [rbp+10h] BYREF
  ULONG ReturnLength; // [rsp+48h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+20h] BYREF

  *a1 = 0LL;
  Handle = 0LL;
  v2 = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 1u, 0x200u, &Handle);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( v2 == -1073741700 )
      goto LABEL_6;
  }
  else
  {
    TokenInformation = 0;
    ReturnLength = 4;
    v3 = ZwQueryInformationToken(Handle, TokenImpersonationLevel, &TokenInformation, 4u, &ReturnLength);
    if ( v3 < 0 || TokenInformation < 2 )
    {
      ZwClose(Handle);
      Handle = 0LL;
LABEL_6:
      v3 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &Handle);
    }
  }
  *a1 = Handle;
  return (unsigned int)v3;
}
