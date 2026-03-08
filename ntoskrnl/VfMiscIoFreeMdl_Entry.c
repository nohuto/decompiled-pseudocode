/*
 * XREFs of VfMiscIoFreeMdl_Entry @ 0x140ADCCB0
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1405D0078 (VfMiscCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

char __fastcall VfMiscIoFreeMdl_Entry(__int64 a1)
{
  ULONG_PTR v2; // r8
  char result; // al

  VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 8LL));
  v2 = *(_QWORD *)(a1 + 8);
  result = *(_WORD *)(v2 + 10) & 0x11;
  if ( result == 1 )
    return VerifierBugCheckIfAppropriate(0xC4u, 0xB8uLL, v2, *(__int16 *)(v2 + 10), 0LL);
  return result;
}
