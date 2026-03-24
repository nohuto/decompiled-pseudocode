/*
 * XREFs of RIMGetExtendedPointerDeviceProperty @ 0x1C016BC60
 * Callers:
 *     NtUserGetExtendedPointerDeviceProperty @ 0x1C012ECF0 (NtUserGetExtendedPointerDeviceProperty.c)
 * Callees:
 *     ?ValidateProperty@@YAJPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagPOINTER_DEVICE_EXTENDED_PROPERTY@@@Z @ 0x1C016BC3C (-ValidateProperty@@YAJPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagPOINTER_DEVICE_EXTENDED_PROPERTY@@@.c)
 */

__int64 __fastcall RIMGetExtendedPointerDeviceProperty(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINTER_DEVICE_EXTENDED_PROPERTY *a2)
{
  int v2; // eax
  _DWORD *v3; // rdx
  _DWORD *v4; // rcx
  int v5; // r10d
  unsigned int v6; // r11d
  int v7; // eax

  v2 = ValidateProperty(a1, a2);
  v5 = 0;
  v6 = v2;
  if ( v2 < 0 )
    return v6;
  switch ( *v3 )
  {
    case 0:
      v3[1] = v4[68];
      v3[2] = v4[69];
      v3[3] = v4[70];
      v7 = v4[71];
      goto LABEL_10;
    case 1:
      v3[1] = v4[72];
      v3[2] = v4[73];
      v3[3] = v4[74];
      v7 = v4[75];
LABEL_10:
      v3[4] = v7;
      return v6;
    case 2:
      v3[1] = v4[76];
      v3[2] = v4[77];
      break;
    case 3:
      LOBYTE(v5) = v4[67] != 0;
      v3[1] = v5;
      break;
  }
  return v6;
}
