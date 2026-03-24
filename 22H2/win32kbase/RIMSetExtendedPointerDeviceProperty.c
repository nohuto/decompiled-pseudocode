/*
 * XREFs of RIMSetExtendedPointerDeviceProperty @ 0x1C016BF3C
 * Callers:
 *     NtRIMSetExtendedDeviceProperty @ 0x1C0154080 (NtRIMSetExtendedDeviceProperty.c)
 * Callees:
 *     ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x1C000C8E0 (-EnvironmentChanged@CPTPProcessor@@SAXXZ.c)
 *     ?ValidateProperty@@YAJPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagPOINTER_DEVICE_EXTENDED_PROPERTY@@@Z @ 0x1C016BC3C (-ValidateProperty@@YAJPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagPOINTER_DEVICE_EXTENDED_PROPERTY@@@.c)
 */

__int64 __fastcall RIMSetExtendedPointerDeviceProperty(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *a2)
{
  int v2; // eax
  _DWORD *v3; // rdx
  _DWORD *v4; // rcx
  int v5; // r10d
  unsigned int v6; // ebx

  v2 = ValidateProperty(a1, a2);
  v5 = 0;
  v6 = v2;
  if ( v2 >= 0 )
  {
    if ( *v3 )
    {
      switch ( *v3 )
      {
        case 1:
          v4[72] = v3[1];
          v4[73] = v3[2];
          v4[74] = v3[3];
          v4[75] = v3[4];
          break;
        case 2:
          v4[76] = v3[1];
          v4[77] = v3[2];
          break;
        case 3:
          LOBYTE(v5) = v3[1] != 0;
          v4[67] = v5;
          break;
      }
    }
    else
    {
      v4[68] = v3[1];
      v4[69] = v3[2];
      v4[70] = v3[3];
      v4[71] = v3[4];
    }
    if ( v4[6] == 7 )
      CPTPProcessor::EnvironmentChanged();
  }
  return v6;
}
