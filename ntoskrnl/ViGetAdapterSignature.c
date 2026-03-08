/*
 * XREFs of ViGetAdapterSignature @ 0x140AC6010
 * Callers:
 *     ViGetAdapterInformationInternal @ 0x140AC5E44 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140AC6158 (ViGetRealDmaAdapter.c)
 *     ViHookDmaAdapter @ 0x140AC6520 (ViHookDmaAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGetAdapterSignature(__int64 a1)
{
  return *(unsigned int *)(a1 + 16);
}
