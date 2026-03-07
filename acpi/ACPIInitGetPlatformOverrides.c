__int64 ACPIInitGetPlatformOverrides()
{
  void *v0; // rbx
  NTSTATUS v1; // eax
  unsigned int v2; // eax
  int v3; // edi
  NTSTATUS v4; // eax
  wchar_t *v5; // rsi
  unsigned __int64 v6; // rax
  const wchar_t *v7; // rcx
  _DWORD *v9; // [rsp+60h] [rbp+38h] BYREF
  HANDLE v10; // [rsp+68h] [rbp+40h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+48h] BYREF
  PVOID P; // [rsp+78h] [rbp+50h] BYREF

  v0 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  KeyHandle = 0LL;
  P = 0LL;
  if ( (int)OSOpenHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ACPI", 0LL, (__int64)&KeyHandle) >= 0 )
  {
    v1 = OSGetRegistryValue(KeyHandle, L"PrmSupportOptOut", &v9);
    v0 = v9;
    if ( v1 >= 0 )
    {
      v2 = v9[1];
      if ( v2 )
      {
        if ( *v9 == 4 && v2 >= 4 && v9[2] )
          AcpiOverrideAttributes |= 0x8000000u;
      }
    }
  }
  v3 = OSOpenHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Control", 0LL, (__int64)&v10);
  if ( v3 >= 0 )
  {
    v4 = OSGetRegistryValue(v10, L"SystemStartOptions", &P);
    v5 = (wchar_t *)P;
    v3 = v4;
    if ( v4 >= 0 )
    {
      v6 = *((unsigned int *)P + 1);
      if ( (_DWORD)v6 )
      {
        if ( *(_DWORD *)P == 1 && (unsigned int)v6 >= 2 )
        {
          v7 = (const wchar_t *)((char *)P + 8);
          *((_WORD *)P + (v6 >> 1) + 3) = 0;
          if ( wcsstr(v7, L"PCIEXPRESSPOLICY=FORCEDISABLE") )
            AcpiOverrideAttributes |= 0x2000u;
          if ( wcsstr(v5 + 4, L"SBOSCEVALPOLICY=FORCEDISABLE") )
            AcpiOverrideAttributes |= 0x4000u;
          if ( (unsigned __int8)ACPIIsSystemStartOptionPresent(v5 + 4) )
            AcpiOverrideAttributes |= 0x10000u;
          if ( (AcpiOverrideAttributes & 0x10000) == 0 )
            AcpiOverrideAttributes &= ~0x40000u;
        }
        else
        {
          v3 = -1073741788;
        }
      }
    }
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
  }
  if ( v0 )
    ExFreePoolWithTag(v0, 0);
  if ( v10 )
    OSCloseHandle(v10);
  if ( KeyHandle )
    OSCloseHandle(KeyHandle);
  return (unsigned int)v3;
}
