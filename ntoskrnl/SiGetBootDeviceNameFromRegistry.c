/*
 * XREFs of SiGetBootDeviceNameFromRegistry @ 0x14076E690
 * Callers:
 *     SiGetBootDeviceName @ 0x14076E464 (SiGetBootDeviceName.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x140A5D904 (SiIsWinPeHardDiskZeroUfdBoot.c)
 * Callees:
 *     _wcslwr @ 0x1403D3F30 (_wcslwr.c)
 *     SiGetRegistryValue @ 0x14076E70C (SiGetRegistryValue.c)
 */

__int64 __fastcall SiGetBootDeviceNameFromRegistry(int a1, wchar_t **a2, __int64 a3, int a4)
{
  int RegistryValue; // edi
  wchar_t *v6; // rbx
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF
  wchar_t *String; // [rsp+58h] [rbp+20h] BYREF

  String = 0LL;
  v8 = 0;
  RegistryValue = SiGetRegistryValue(
                    a1,
                    a1,
                    (unsigned int)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control",
                    a4,
                    (__int64)&String,
                    (__int64)&v8);
  if ( RegistryValue >= 0 )
  {
    if ( v8 < 4 )
    {
      return (unsigned int)-1073741823;
    }
    else
    {
      v6 = String;
      wcslwr(String);
      *a2 = v6;
    }
  }
  return (unsigned int)RegistryValue;
}
