__int64 __fastcall IpmiHwpReadSpmiConfiguration(__int64 a1)
{
  void *Pool2; // rdi
  __int64 v2; // rcx
  int SystemFirmwareTable; // ebx
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+44h] [rbp+Ch]

  v6 = HIDWORD(a1);
  Pool2 = 0LL;
  v5 = 0;
  SystemFirmwareTable = ExGetSystemFirmwareTable(1094930505LL, 1229803603LL, 0LL, 0LL, &v5);
  if ( SystemFirmwareTable == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, v5, 1229803593LL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    SystemFirmwareTable = ExGetSystemFirmwareTable(1094930505LL, 1229803603LL, Pool2, v5, &v5);
  }
  if ( SystemFirmwareTable >= 0 )
    SystemFirmwareTable = IpmiHwpParseSpmiTable(v2, (__int64)Pool2);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x494D5049u);
  return (unsigned int)SystemFirmwareTable;
}
