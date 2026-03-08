/*
 * XREFs of HalpcGetCmosDataByType @ 0x14051DD80
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmosRangeHandler @ 0x14051DA5C (HalpCmosRangeHandler.c)
 */

__int64 __fastcall HalpcGetCmosDataByType(int a1, unsigned int a2, __int64 a3, int a4)
{
  return HalpCmosRangeHandler(0, a1, a2, a3, a4);
}
