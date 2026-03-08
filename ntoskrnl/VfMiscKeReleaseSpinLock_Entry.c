/*
 * XREFs of VfMiscKeReleaseSpinLock_Entry @ 0x140ADD010
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1405D0078 (VfMiscCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 *     ViMiscCheckKeLowerIrql @ 0x140ADE308 (ViMiscCheckKeLowerIrql.c)
 */

__int64 __fastcall VfMiscKeReleaseSpinLock_Entry(__int64 a1)
{
  ULONG_PTR v1; // rdi
  char v2; // si
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int8 CurrentIrql; // bl

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_BYTE *)(a1 + 8);
  VfMiscCheckKernelAddress(v1, 8uLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x32uLL, CurrentIrql, v1, 0LL);
  LOBYTE(v3) = v2;
  LOBYTE(v4) = CurrentIrql;
  return ViMiscCheckKeLowerIrql(v4, v3);
}
