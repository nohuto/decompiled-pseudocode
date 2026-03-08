/*
 * XREFs of PiCMReturnBufferResultData @ 0x1406D0ED4
 * Callers:
 *     PiCMGetDeviceInterfaceList @ 0x1406C46EC (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1406C6068 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMGetRegistryProperty @ 0x1406C74A4 (PiCMGetRegistryProperty.c)
 *     PiCMGetObjectProperty @ 0x1406CF2B4 (PiCMGetObjectProperty.c)
 *     PiCMGetDeviceIdList @ 0x14077813C (PiCMGetDeviceIdList.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x14078DEB0 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMGetObjectList @ 0x140869E8C (PiCMGetObjectList.c)
 *     PiCMCreateDevice @ 0x1409654C0 (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x140966A2C (PiCMEnumerateSubKeys.c)
 *     PiCMGetObjectPropertyKeys @ 0x1409670A8 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140967304 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x140967714 (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
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
