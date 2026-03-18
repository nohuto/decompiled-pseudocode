/*
 * XREFs of IopBuildGlobalSymbolicLinkString @ 0x1407940CC
 * Callers:
 *     IopProcessSetInterfaceState @ 0x140793BE4 (IopProcessSetInterfaceState.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14022A880 (RtlAppendUnicodeToString.c)
 *     PnpUnicodeStringToWstrFree @ 0x1406D3FF4 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1406D4364 (PnpUnicodeStringToWstr.c)
 *     RtlFreeUnicodeString @ 0x14076F8E0 (RtlFreeUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x1407941E8 (IopAllocateUnicodeString.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x14079446C (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopBuildGlobalSymbolicLinkString(unsigned __int16 *a1, UNICODE_STRING *a2)
{
  void *Pool2; // rdi
  int DeviceInterfaceSymbolicLinkName; // ebx
  __int64 v6; // rcx
  UNICODE_STRING *v7; // rcx
  __int64 v9; // rcx
  unsigned int v10; // [rsp+60h] [rbp+18h] BYREF
  void *v11; // [rsp+68h] [rbp+20h] BYREF

  Pool2 = 0LL;
  v11 = 0LL;
  DeviceInterfaceSymbolicLinkName = PnpUnicodeStringToWstr(&v11, 0LL, a1);
  if ( DeviceInterfaceSymbolicLinkName < 0 )
    goto LABEL_9;
  v10 = 512;
  Pool2 = (void *)ExAllocatePool2(256LL, 1024LL, 538996816LL);
  if ( !Pool2 )
    goto LABEL_15;
  DeviceInterfaceSymbolicLinkName = CmGetDeviceInterfaceSymbolicLinkName(v6, v11, Pool2, 512LL, &v10);
  if ( DeviceInterfaceSymbolicLinkName != -1073741789 )
    goto LABEL_4;
  ExFreePoolWithTag(Pool2, 0);
  Pool2 = (void *)ExAllocatePool2(256LL, 2LL * v10, 538996816LL);
  if ( !Pool2 )
  {
LABEL_15:
    DeviceInterfaceSymbolicLinkName = -1073741670;
    goto LABEL_9;
  }
  DeviceInterfaceSymbolicLinkName = CmGetDeviceInterfaceSymbolicLinkName(v9, v11, Pool2, v10, &v10);
LABEL_4:
  if ( DeviceInterfaceSymbolicLinkName < 0 )
  {
    if ( DeviceInterfaceSymbolicLinkName == -1073741773 )
      DeviceInterfaceSymbolicLinkName = -1073741811;
  }
  else if ( 2 * v10 + 20 > 0xFFFF )
  {
    DeviceInterfaceSymbolicLinkName = -1073741675;
  }
  else
  {
    DeviceInterfaceSymbolicLinkName = IopAllocateUnicodeString(a2, (unsigned __int16)(2 * v10 + 20));
    if ( DeviceInterfaceSymbolicLinkName < 0 )
      goto LABEL_9;
    DeviceInterfaceSymbolicLinkName = RtlAppendUnicodeToString(a2, L"\\GLOBAL??\\");
    v7 = a2;
    if ( DeviceInterfaceSymbolicLinkName >= 0 )
    {
      DeviceInterfaceSymbolicLinkName = RtlAppendUnicodeToString(a2, (PCWSTR)Pool2);
      if ( DeviceInterfaceSymbolicLinkName >= 0 )
        goto LABEL_9;
      v7 = a2;
    }
    RtlFreeUnicodeString(v7);
  }
LABEL_9:
  PnpUnicodeStringToWstrFree(v11, (__int64)a1);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)DeviceInterfaceSymbolicLinkName;
}
