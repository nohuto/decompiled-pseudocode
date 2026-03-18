/*
 * XREFs of SiIsWinPEBoot @ 0x1407C0020
 * Callers:
 *     SiGetFirmwareSystemPartition @ 0x1407BFFB0 (SiGetFirmwareSystemPartition.c)
 *     SiGetSystemDisk @ 0x140880EF0 (SiGetSystemDisk.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x140A60604 (SiIsWinPeHardDiskZeroUfdBoot.c)
 * Callees:
 *     wcsstr @ 0x1403DB540 (wcsstr.c)
 *     SiGetRegistryValue @ 0x1407C033C (SiGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

bool __fastcall SiIsWinPEBoot(int a1, __int64 a2, __int64 a3, int a4)
{
  bool v4; // bl
  int v6; // [rsp+40h] [rbp+8h] BYREF
  wchar_t *Str; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  Str = 0LL;
  v6 = 0;
  if ( (int)SiGetRegistryValue(
              a1,
              (unsigned int)L"SystemStartOptions",
              (unsigned int)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control",
              a4,
              (__int64)&Str,
              (__int64)&v6) >= 0 )
  {
    v4 = wcsstr(Str, L"MININT") != 0LL;
    ExFreePoolWithTag(Str, 0);
  }
  return v4;
}
