/*
 * XREFs of UsbhBusIfAddDevice @ 0x1C004BC10
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 *     UsbhGetBusInterface @ 0x1C004C410 (UsbhGetBusInterface.c)
 *     Usbh_HubIsRoot @ 0x1C004C6F4 (Usbh_HubIsRoot.c)
 */

__int64 __fastcall UsbhBusIfAddDevice(__int64 a1)
{
  unsigned __int16 v2; // r14
  _DWORD *v3; // rdi
  unsigned __int16 i; // r10
  __int64 BusInterface; // rbp
  unsigned __int16 v6; // r10
  unsigned __int16 j; // r14
  int IsRoot; // eax
  BOOL v9; // edx
  unsigned int v10; // ecx
  int v11; // r10d
  int v12; // r10d
  char v14; // [rsp+90h] [rbp+18h] BYREF

  v2 = 9;
  v3 = FdoExt(a1);
  for ( i = 328; ; i = 312 )
  {
    Log(a1, 8, 1198090289, i, v2);
    LODWORD(BusInterface) = UsbhGetBusInterface(a1, v2);
    Log(a1, 8, 1198090290, (int)BusInterface, v2);
    if ( (int)BusInterface >= 0 )
      break;
    UsbhException(a1, 0, 0x1Au, 0LL, 0, BusInterface, 0, usbfile_busif_c, 243, 0);
    if ( v2 != 9 )
      goto LABEL_16;
    v2 = 8;
  }
  v3[640] |= 4u;
  v6 = 96;
  for ( j = 3; ; j = 2 )
  {
    Log(a1, 8, 1198093617, v6, j);
    BusInterface = (int)UsbhGetBusInterface(a1, j);
    Log(a1, 8, 1198093618, BusInterface, j);
    if ( (int)BusInterface >= 0 )
      break;
    UsbhException(a1, 0, 0x1Bu, 0LL, 0, BusInterface, 0, usbfile_busif_c, 281, 0);
    if ( j != 3 )
      goto LABEL_16;
    v6 = 80;
  }
  v3[640] |= 8u;
  v14 = 0;
  IsRoot = Usbh_HubIsRoot(a1, &v14);
  v9 = v14 != 0;
  BusInterface = IsRoot;
  v10 = v3[640] & 0xFFFFFFFE;
  *((_WORD *)v3 + 2400) = j;
  v3[640] = v9 | v10;
  if ( IsRoot >= 0 )
  {
    Log(a1, 8, 1198091569, 40LL, 0LL);
    UsbhGetBusInterface(a1, 0);
    Log(a1, 8, 1198091570, BusInterface, 0LL);
    if ( v11 >= 0 )
      v3[640] |= 0x20000000u;
    Log(a1, 8, 1198093105, 48LL, 0LL);
    UsbhGetBusInterface(a1, 0);
    Log(a1, 8, 1198093106, BusInterface, 0LL);
    if ( v12 >= 0 )
      v3[640] |= 0x800000u;
    Log(a1, 8, 1197895729, 64LL, 0LL);
    LODWORD(BusInterface) = UsbhGetBusInterface(a1, 0);
    Log(a1, 8, 1197895730, (int)BusInterface, 0LL);
    if ( (int)BusInterface >= 0 )
      v3[640] |= 0x80000000;
  }
LABEL_16:
  Log(a1, 8, 1651730790, 0LL, (int)BusInterface);
  return (unsigned int)BusInterface;
}
