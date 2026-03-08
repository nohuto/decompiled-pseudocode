/*
 * XREFs of IopAllocateUnicodeString @ 0x140683958
 * Callers:
 *     PnpConcatenateUnicodeStrings @ 0x140683298 (PnpConcatenateUnicodeStrings.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x14068383C (IopBuildGlobalSymbolicLinkString.c)
 *     PipProcessDevNodeTree @ 0x1406CCD80 (PipProcessDevNodeTree.c)
 *     PiDeferSetInterfaceState @ 0x14086FD40 (PiDeferSetInterfaceState.c)
 *     PiOpenDriverRedirectedStateKey @ 0x140875B5C (PiOpenDriverRedirectedStateKey.c)
 *     PiBuildAndOpenDeviceDirectoryPath @ 0x1409525F0 (PiBuildAndOpenDeviceDirectoryPath.c)
 *     PiCreateServiceKeyUnderPath @ 0x140952CC8 (PiCreateServiceKeyUnderPath.c)
 *     PiGetDriverMutableStateDirectory @ 0x1409530D4 (PiGetDriverMutableStateDirectory.c)
 *     PnpLogVetoInformation @ 0x140961470 (PnpLogVetoInformation.c)
 * Callees:
 *     RtlUShortAdd @ 0x140202574 (RtlUShortAdd.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopAllocateUnicodeString(__int64 a1, USHORT a2)
{
  _WORD *v2; // rdi
  NTSTATUS v4; // ebx
  __int64 Pool2; // rax

  v2 = (_WORD *)(a1 + 2);
  *(_WORD *)a1 = 0;
  v4 = RtlUShortAdd(a2, 2u, (USHORT *)(a1 + 2));
  if ( v4 >= 0 )
  {
    Pool2 = ExAllocatePool2(256LL, (unsigned __int16)*v2, 1970499664LL);
    *(_QWORD *)(a1 + 8) = Pool2;
    if ( !Pool2 )
    {
      *v2 = 0;
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}
