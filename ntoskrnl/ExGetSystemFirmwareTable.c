/*
 * XREFs of ExGetSystemFirmwareTable @ 0x14085CED0
 * Callers:
 *     IpmiHwpReadSpmiConfiguration @ 0x1406753FC (IpmiHwpReadSpmiConfiguration.c)
 *     IpmiLibReadSmbiosRecord38 @ 0x1406754B4 (IpmiLibReadSmbiosRecord38.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x140780E98 (ExpGetSystemFirmwareTableInformation.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExGetSystemFirmwareTable(int a1, int a2, void *a3, int a4, _DWORD *a5)
{
  unsigned int v9; // ebp
  __int64 Pool2; // rax
  _DWORD *v11; // rbx
  int SystemFirmwareTableInformation; // edi
  int v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = 0;
  if ( !a3 && a4 )
    return 3221225485LL;
  v9 = a4 + 16;
  Pool2 = ExAllocatePool2(256LL, (unsigned int)(a4 + 16), 1413894721LL);
  v11 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 12) = a4;
    *(_DWORD *)Pool2 = a1;
    *(_DWORD *)(Pool2 + 4) = 1;
    *(_DWORD *)(Pool2 + 8) = a2;
    SystemFirmwareTableInformation = ExpGetSystemFirmwareTableInformation((char *)Pool2, 0, v9, &v14);
    if ( (int)(SystemFirmwareTableInformation + 0x80000000) < 0 || SystemFirmwareTableInformation == -1073741789 )
    {
      if ( a5 )
        *a5 = v11[3];
      if ( SystemFirmwareTableInformation >= 0 )
      {
        if ( a3 )
          memmove(a3, v11 + 4, (unsigned int)(v14 - 16));
      }
    }
    ExFreePoolWithTag(v11, 0x54465241u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)SystemFirmwareTableInformation;
}
