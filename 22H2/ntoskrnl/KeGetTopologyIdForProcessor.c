/*
 * XREFs of KeGetTopologyIdForProcessor @ 0x140570828
 * Callers:
 *     KiInitializeKernel @ 0x140A8C770 (KiInitializeKernel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetTopologyIdForProcessor(__int64 a1, int a2)
{
  return *(unsigned int *)(a1 + 4LL * a2 + 34840);
}
