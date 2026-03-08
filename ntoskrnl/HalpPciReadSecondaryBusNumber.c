/*
 * XREFs of HalpPciReadSecondaryBusNumber @ 0x140513620
 * Callers:
 *     HalpPciConvertDevicePathToRid @ 0x14039A210 (HalpPciConvertDevicePathToRid.c)
 * Callees:
 *     HalpGetPCIData @ 0x1403703A4 (HalpGetPCIData.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall HalpPciReadSecondaryBusNumber(unsigned __int16 a1, char a2, char a3, char a4, _BYTE *a5)
{
  int v9; // r8d
  unsigned int v10; // ebx
  __int64 v11; // rdx
  char v13[64]; // [rsp+30h] [rbp-78h] BYREF

  memset(v13, 0, sizeof(v13));
  v9 = 32 * (a4 & 7);
  v10 = 0;
  LOBYTE(v11) = a2;
  if ( (unsigned int)HalpGetPCIData(a1, v11, a3 & 0x1F | (unsigned int)v9, v13, 0, 0x40u) == 64 )
  {
    if ( (v13[14] & 0x7F) == 1 && v13[25] > (unsigned int)v13[24] && v13[26] >= (unsigned int)v13[25] )
      *a5 = v13[25];
    else
      return (unsigned int)-1073741810;
  }
  else
  {
    return (unsigned int)-1073740669;
  }
  return v10;
}
