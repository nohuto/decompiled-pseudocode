/*
 * XREFs of HalpInterruptBuildKnownResourceIdString @ 0x140373E60
 * Callers:
 *     HalpInterruptRegisterController @ 0x140373AE4 (HalpInterruptRegisterController.c)
 * Callees:
 *     HalpExtBuildResourceIdString @ 0x140374218 (HalpExtBuildResourceIdString.c)
 */

__int64 __fastcall HalpInterruptBuildKnownResourceIdString(__int64 a1, __int64 a2, wchar_t *Dst)
{
  size_t SizeInWords; // [rsp+38h] [rbp-20h]

  LODWORD(SizeInWords) = 75;
  return HalpExtBuildResourceIdString(
           1413894989,
           0,
           0x4000,
           *(unsigned __int16 *)(a1 + 228),
           1,
           0,
           *(_DWORD *)(a1 + 232),
           SizeInWords,
           Dst);
}
