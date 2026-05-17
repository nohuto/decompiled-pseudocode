/*
 * XREFs of LdrQueryProcessModuleInformation @ 0x180001430
 * Callers:
 *     <none>
 * Callees:
 *     LdrQueryProcessModuleInformationEx @ 0x180001458 (LdrQueryProcessModuleInformationEx.c)
 */

__int64 __fastcall LdrQueryProcessModuleInformation(int a1, int a2, __int64 a3)
{
  return LdrQueryProcessModuleInformationEx(0, 2, a1, a2, a3);
}
