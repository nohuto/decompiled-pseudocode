/*
 * XREFs of IopGetRegistryValues @ 0x1407804F8
 * Callers:
 *     pIoQueryDeviceDescription @ 0x14077FA74 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14077FF18 (pIoQueryBusDescription.c)
 * Callees:
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 */

__int64 __fastcall IopGetRegistryValues(HANDLE KeyHandle, _QWORD *a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rsi
  unsigned int RegistryValue; // edx
  unsigned int v6; // ecx
  NTSTATUS v7; // eax

  v2 = 0;
  v3 = a2 + 1;
  *a2 = 0LL;
  a2[2] = 0LL;
  a2[1] = 0LL;
  RegistryValue = IopGetRegistryValue(KeyHandle, L"Identifier", 40, a2);
  if ( (int)(RegistryValue + 0x80000000) >= 0 && RegistryValue != -1073741772 )
    return RegistryValue;
  v6 = IopGetRegistryValue(KeyHandle, L"Configuration Data", 36, v3);
  if ( ((v6 + 0x80000000) & 0x80000000) == 0 && v6 != -1073741772 )
    return v6;
  v7 = IopGetRegistryValue(KeyHandle, L"Component Information", 24, v3 + 1);
  if ( v7 >= 0 )
    return 0LL;
  if ( v7 != -1073741772 )
    return (unsigned int)v7;
  return v2;
}
