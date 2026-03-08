/*
 * XREFs of PnpReadDeviceConfiguration @ 0x140842528
 * Callers:
 *     PnpGetDeviceResourcesFromRegistry @ 0x1406F67F8 (PnpGetDeviceResourcesFromRegistry.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpReadDeviceConfiguration(void *a1, int a2, void **a3, _DWORD *a4)
{
  int v6; // edx
  int v7; // edx
  const WCHAR *v8; // rdx
  NTSTATUS RegistryValue; // edi
  unsigned int *v11; // rbx
  unsigned int v12; // eax
  __int64 Pool2; // rax
  unsigned int *v14; // r10
  unsigned int v15; // r8d
  _DWORD *i; // rax
  unsigned int v17; // edx
  _DWORD *v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rax
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  *a4 = 0;
  P = 0LL;
  v6 = a2 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 2 )
        return 3221225712LL;
      v8 = L"BootConfig";
    }
    else
    {
      v8 = L"ForcedConfig";
    }
  }
  else
  {
    v8 = L"AllocConfig";
  }
  RegistryValue = IopGetRegistryValue(a1, v8, 0, &P);
  if ( RegistryValue >= 0 )
  {
    v11 = (unsigned int *)P;
    if ( *((_DWORD *)P + 1) == 8 )
    {
      v12 = *((_DWORD *)P + 3);
      if ( v12 )
      {
        Pool2 = ExAllocatePool2(256LL, v12, 1970499664LL);
        *a3 = (void *)Pool2;
        if ( Pool2 )
        {
          *a4 = v11[3];
          memmove(*a3, (char *)v11 + v11[2], v11[3]);
          v14 = (unsigned int *)*a3;
          v15 = 0;
          for ( i = (char *)*a3 + 4; v15 < *v14; i = v18 )
          {
            if ( *i == -1 )
            {
              i[1] = 0;
              *i = 1;
            }
            v17 = i[3];
            v18 = i + 4;
            if ( v17 )
            {
              v19 = v17;
              do
              {
                v20 = 0LL;
                if ( *(_BYTE *)v18 == 5 )
                  v20 = (unsigned int)v18[1];
                v18 = (_DWORD *)((char *)v18 + v20 + 20);
                --v19;
              }
              while ( v19 );
            }
            ++v15;
          }
        }
        else
        {
          RegistryValue = -1073741670;
        }
      }
    }
    else
    {
      RegistryValue = -1073741823;
    }
    ExFreePoolWithTag(v11, 0);
  }
  return (unsigned int)RegistryValue;
}
