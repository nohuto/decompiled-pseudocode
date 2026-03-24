/*
 * XREFs of HalpcGetCmosDataByType @ 0x1404D6250
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmosRangeHandler @ 0x1404D5F5C (HalpCmosRangeHandler.c)
 */

__int64 __fastcall HalpcGetCmosDataByType(int a1, unsigned int a2, __int64 a3, int a4)
{
  return HalpCmosRangeHandler(0, a1, a2, a3, a4);
}
