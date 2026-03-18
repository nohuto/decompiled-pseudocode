/*
 * XREFs of ViGetAdapterSignature @ 0x140ACA010
 * Callers:
 *     ViGetAdapterInformationInternal @ 0x140AC9E44 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140ACA158 (ViGetRealDmaAdapter.c)
 *     ViHookDmaAdapter @ 0x140ACA520 (ViHookDmaAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGetAdapterSignature(__int64 a1)
{
  return *(unsigned int *)(a1 + 16);
}
