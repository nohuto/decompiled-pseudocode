/*
 * XREFs of IopAllocateUnicodeString @ 0x1407941E8
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406CB740 (PipProcessDevNodeTree.c)
 *     PnpConcatenateUnicodeStrings @ 0x140793B34 (PnpConcatenateUnicodeStrings.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1407940CC (IopBuildGlobalSymbolicLinkString.c)
 *     PiDeferSetInterfaceState @ 0x140872260 (PiDeferSetInterfaceState.c)
 *     PiOpenDriverRedirectedStateKey @ 0x14087C6F0 (PiOpenDriverRedirectedStateKey.c)
 *     PiBuildAndOpenDeviceDirectoryPath @ 0x140955610 (PiBuildAndOpenDeviceDirectoryPath.c)
 *     PiCreateServiceKeyUnderPath @ 0x140955CE8 (PiCreateServiceKeyUnderPath.c)
 *     PiGetDriverMutableStateDirectory @ 0x1409560F4 (PiGetDriverMutableStateDirectory.c)
 *     PnpLogVetoInformation @ 0x140964490 (PnpLogVetoInformation.c)
 * Callees:
 *     RtlUShortAdd @ 0x1403223E4 (RtlUShortAdd.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
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
