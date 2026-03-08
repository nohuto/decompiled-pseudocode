/*
 * XREFs of PiCMConvertDeviceListFilters @ 0x1407783AC
 * Callers:
 *     PiCMGetDeviceIdList @ 0x14077813C (PiCMGetDeviceIdList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiCMConvertDeviceListFilters(int a1, int *a2)
{
  unsigned int v2; // r9d
  int v3; // eax
  bool v4; // cf
  int v5; // ecx

  v2 = 0;
  *a2 = 0;
  if ( (_WORD)a1 )
  {
    switch ( (unsigned __int16)a1 )
    {
      case 1u:
        *a2 = 1;
        v3 = 257;
        break;
      case 2u:
        *a2 = 2;
        v3 = 258;
        break;
      case 4u:
        *a2 = 4;
        v3 = 260;
        break;
      case 8u:
        *a2 = 8;
        v3 = 264;
        break;
      case 0x10u:
        *a2 = 16;
        v3 = 272;
        break;
      case 0x20u:
        *a2 = 32;
        v3 = 288;
        break;
      case 0x40u:
        *a2 = 64;
        v3 = 320;
        break;
      case 0x80u:
        *a2 = 128;
        v3 = 384;
        break;
      default:
        return (unsigned int)-1073741811;
    }
  }
  else
  {
    v3 = 256;
  }
  if ( (a1 & 0xFFFC0000) != 0 )
    return (unsigned int)-1073741811;
  v4 = (a1 & 0x10000) != 0;
  v5 = *a2;
  if ( v4 )
    v5 = v3;
  *a2 = v5;
  return v2;
}
