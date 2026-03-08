/*
 * XREFs of MiReturnSystemImageAddress @ 0x1407F7768
 * Callers:
 *     MiReturnImageBase @ 0x1407C8860 (MiReturnImageBase.c)
 *     MiGetSystemAddressForImage @ 0x1407F6010 (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 * Callees:
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MiReleaseDriverPtes @ 0x1407F74BC (MiReleaseDriverPtes.c)
 */

void __fastcall MiReturnSystemImageAddress(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 PteAddress; // rbx
  unsigned __int64 v4; // r8
  int SystemRegionType; // eax

  v2 = a2 >> 12;
  PteAddress = MiGetPteAddress(a1);
  SystemRegionType = MiGetSystemRegionType(v4);
  MiReleaseDriverPtes(SystemRegionType == 1, PteAddress, v2);
}
