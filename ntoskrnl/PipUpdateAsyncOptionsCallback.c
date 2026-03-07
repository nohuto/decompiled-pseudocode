int __fastcall PipUpdateAsyncOptionsCallback(HANDLE Handle)
{
  NTSTATUS RegistryValue; // eax
  int result; // eax
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  P = 0LL;
  RegistryValue = IopGetRegistryValue(Handle, L"AsynchronousOptions", 0, &P);
  if ( RegistryValue >= 0 )
  {
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      PnpAsyncOptions = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    ExFreePoolWithTag(P, 0);
  }
  else if ( RegistryValue == -1073741772 )
  {
    PnpAsyncOptions = -2147483645;
  }
  result = ZwNotifyChangeKey(
             Handle,
             0LL,
             PnpAsyncOptionsWorkItem,
             (PVOID)1,
             &PnpAsyncOptionsIoStatusBlock,
             4u,
             0,
             0LL,
             0,
             1u);
  if ( result < 0 )
    return ZwClose(Handle);
  return result;
}
