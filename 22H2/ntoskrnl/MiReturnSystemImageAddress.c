/*
 * XREFs of MiReturnSystemImageAddress @ 0x14075F494
 * Callers:
 *     MiReturnImageBase @ 0x1406382F8 (MiReturnImageBase.c)
 *     MiUnloadSystemImage @ 0x1406FEA98 (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x14075E09C (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiGetPteAddress @ 0x140298780 (MiGetPteAddress.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     MiReleaseDriverPtes @ 0x14075F4E0 (MiReleaseDriverPtes.c)
 */

__int64 __fastcall MiReturnSystemImageAddress(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 PteAddress; // rbx
  unsigned __int64 v4; // r8
  int SystemRegionType; // eax

  v2 = a2 >> 12;
  PteAddress = MiGetPteAddress(a1);
  SystemRegionType = MiGetSystemRegionType(v4);
  return MiReleaseDriverPtes(SystemRegionType == 1, PteAddress, (unsigned int)v2);
}
