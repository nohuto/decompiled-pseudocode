/*
 * XREFs of IommupDeviceGetPasidSettings @ 0x140822F74
 * Callers:
 *     HalpIommuCreateDevice @ 0x140822B28 (HalpIommuCreateDevice.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x140822E44 (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     IommupGetDeviceCreationConfigEntry @ 0x14052477C (IommupGetDeviceCreationConfigEntry.c)
 */

__int64 __fastcall IommupDeviceGetPasidSettings(__int64 *a1, char *a2, char *a3, _BYTE *a4)
{
  char v4; // r10
  unsigned int v5; // ebx
  char v6; // di
  char v7; // r11
  __int64 result; // rax
  __int64 *DeviceCreationConfigEntry; // rax
  int v10; // ecx

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( a1 )
  {
    DeviceCreationConfigEntry = IommupGetDeviceCreationConfigEntry(a1);
    if ( DeviceCreationConfigEntry )
    {
      v10 = *((_DWORD *)DeviceCreationConfigEntry + 6);
      if ( v10 )
      {
        if ( v10 == 1 )
          v4 = 1;
        else
          v5 = -1073741811;
      }
      else
      {
        v6 = 1;
      }
      v7 = *((_BYTE *)DeviceCreationConfigEntry + 28);
    }
  }
  result = v5;
  *a4 = v7;
  *a2 = v4;
  *a3 = v6;
  return result;
}
