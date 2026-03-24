/*
 * XREFs of PiCMReturnBufferResultData @ 0x1406B0564
 * Callers:
 *     PiCMGetDeviceIdList @ 0x140689BD4 (PiCMGetDeviceIdList.c)
 *     PiCMGetRegistryProperty @ 0x14068DA00 (PiCMGetRegistryProperty.c)
 *     PiCMGetDeviceInterfaceList @ 0x14068FD38 (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetObjectProperty @ 0x1406AD91C (PiCMGetObjectProperty.c)
 *     PiCMGetObjectList @ 0x1406B1750 (PiCMGetObjectList.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x14072BCFC (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMQueryRemove @ 0x14072F1D0 (PiCMQueryRemove.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140767E04 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMCreateDevice @ 0x1408AF490 (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x1408B03BC (PiCMEnumerateSubKeys.c)
 *     PiCMGetObjectPropertyKeys @ 0x1408B093C (PiCMGetObjectPropertyKeys.c)
 *     PiCMRegisterDeviceInterface @ 0x1408B0D6C (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     memmove @ 0x140413540 (memmove.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 */

__int64 __fastcall PiCMReturnBufferResultData(
        unsigned int a1,
        unsigned int a2,
        int a3,
        const void *a4,
        unsigned int Size,
        int a6,
        _DWORD *Address,
        unsigned int Length,
        _DWORD *a9)
{
  unsigned int v10; // ebx
  __int128 v12; // [rsp+20h] [rbp-38h]

  *a9 = 0;
  v10 = 0;
  if ( Length >= Size + 20 && a6 == 20 )
  {
    LODWORD(v12) = 20;
    *(_QWORD *)((char *)&v12 + 4) = __PAIR64__(a2, a1);
    HIDWORD(v12) = a3;
    ProbeForWrite(Address, Length, 4u);
    *(_OWORD *)Address = v12;
    Address[4] = 0;
    if ( Size )
      memmove(Address + 4, a4, Size);
    *a9 = Size + 20;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v10;
}
