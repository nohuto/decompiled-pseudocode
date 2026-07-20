/*
 * XREFs of SmpConfigureExistingPageFiles @ 0x14000AFA0
 * Callers:
 *     <none>
 * Callees:
 *     SmpSaveRegistryValue @ 0x14000B2EC (SmpSaveRegistryValue.c)
 */

__int64 __fastcall SmpConfigureExistingPageFiles(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  return SmpSaveRegistryValue(a6, a3, 0LL, 1LL, 0LL);
}
