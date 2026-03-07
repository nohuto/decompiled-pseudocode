NTSTATUS PiInitCacheGroupInformation()
{
  __int16 v0; // r14
  NTSTATUS result; // eax
  NTSTATUS RegistryValue; // ebx
  void *v3; // rsi
  PVOID v4; // rdi
  NTSTATUS v5; // eax
  UNICODE_STRING v6; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v7; // [rsp+60h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+38h] BYREF
  PVOID P; // [rsp+70h] [rbp+40h] BYREF
  void *v10; // [rsp+78h] [rbp+48h] BYREF

  P = 0LL;
  *(_DWORD *)(&v6.MaximumLength + 1) = 0;
  Handle = 0LL;
  v0 = 0;
  v6.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ServiceGroupOrder";
  v7 = 0;
  *(_DWORD *)&v6.Length = 9044104;
  result = IopOpenRegistryKeyEx(&Handle, 0LL, &v6, 0x20019u);
  if ( result >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle, L"List", 0, &P);
    ZwClose(Handle);
    v3 = 0LL;
    v10 = 0LL;
    if ( RegistryValue < 0 )
      return RegistryValue;
    v4 = P;
    if ( *((_DWORD *)P + 1) == 7 && *((_DWORD *)P + 3) )
    {
      v5 = PnpRegMultiSzToUnicodeStrings(P, (__int64 *)&v10, &v7);
      v3 = v10;
      RegistryValue = v5;
      v0 = v7;
    }
    else
    {
      RegistryValue = -1073741823;
    }
    ExFreePoolWithTag(v4, 0);
    if ( RegistryValue < 0 )
    {
      return RegistryValue;
    }
    else
    {
      PiInitGroupOrderTable = v3;
      result = 0;
      PiInitGroupOrderTableCount = v0;
    }
  }
  return result;
}
