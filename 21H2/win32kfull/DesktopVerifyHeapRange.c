/*
 * XREFs of DesktopVerifyHeapRange @ 0x1C00FD338
 * Callers:
 *     NtUserSetWindowLongPtr @ 0x1C0089B70 (NtUserSetWindowLongPtr.c)
 *     NtUserSetWindowLong @ 0x1C00FAF00 (NtUserSetWindowLong.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00FD2EC (DesktopVerifyHeapLargeUnicodeString.c)
 * Callees:
 *     DesktopVerifyHeapPointer @ 0x1C00FD378 (DesktopVerifyHeapPointer.c)
 */

__int64 __fastcall DesktopVerifyHeapRange(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  ULONG_PTR v3; // rdi

  v3 = a2 + a3;
  if ( a2 + a3 < a2 )
    KeBugCheckEx(0x164u, 6uLL, a2, *(_QWORD *)(a1 + 128), *(unsigned int *)(a1 + 136));
  ((void (*)(void))DesktopVerifyHeapPointer)();
  return DesktopVerifyHeapPointer(a1, v3 - 1);
}
