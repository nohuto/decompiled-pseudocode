/*
 * XREFs of DesktopVerifyHeapPointer @ 0x1C00D1738
 * Callers:
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00D16C4 (DesktopVerifyHeapLargeUnicodeString.c)
 *     DesktopVerifyHeapRange @ 0x1C01BFA78 (DesktopVerifyHeapRange.c)
 * Callees:
 *     <none>
 */

ULONG_PTR __fastcall DesktopVerifyHeapPointer(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // r9
  ULONG_PTR result; // rax

  v2 = *(_QWORD *)(a1 + 128);
  if ( a2 < v2 || (result = v2 + *(unsigned int *)(a1 + 136), a2 >= result) )
    KeBugCheckEx(0x164u, 6uLL, a2, v2, *(unsigned int *)(a1 + 136));
  return result;
}
