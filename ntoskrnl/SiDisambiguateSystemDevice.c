__int64 __fastcall SiDisambiguateSystemDevice(_DWORD *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  int RegistryValue; // ebx
  int v8; // [rsp+30h] [rbp-10h] BYREF
  PVOID P; // [rsp+38h] [rbp-8h] BYREF
  ULONG v10; // [rsp+70h] [rbp+30h] BYREF
  int v11; // [rsp+78h] [rbp+38h] BYREF

  v11 = 0;
  v8 = 0;
  v10 = 0;
  P = 0LL;
  RegistryValue = SiGetRegistryValue(
                    (__int64)a1,
                    L"SystemPartition",
                    (__int64)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Syspart",
                    a4,
                    &P,
                    &v10);
  if ( RegistryValue >= 0 )
  {
    if ( v10 >= 4 )
    {
      RegistryValue = SiGetDeviceNumberInformation((const WCHAR *)P, &v11, &v8);
      if ( RegistryValue >= 0 )
      {
        *a1 = v11;
        *a2 = v8;
      }
    }
    else
    {
      RegistryValue = -1073741823;
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)RegistryValue;
}
