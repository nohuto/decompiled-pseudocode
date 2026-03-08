/*
 * XREFs of DesktopVerifyHeapLargeUnicodeString @ 0x1C00D16C4
 * Callers:
 *     DefSetText @ 0x1C00A7330 (DefSetText.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     NtUserInternalGetWindowText @ 0x1C00D1530 (NtUserInternalGetWindowText.c)
 * Callees:
 *     DesktopVerifyHeapPointer @ 0x1C00D1738 (DesktopVerifyHeapPointer.c)
 */

__int64 __fastcall DesktopVerifyHeapLargeUnicodeString(__int64 a1, ULONG_PTR a2)
{
  int v3; // r9d
  ULONG_PTR v4; // rdx

  if ( (*(_DWORD *)a2 & 1) != 0 || (v3 = *(_DWORD *)(a2 + 4), (v3 & 1) != 0) || *(_DWORD *)a2 >= (v3 & 0x7FFFFFFFu) )
    KeBugCheckEx(0x164u, 7uLL, a2, *(_QWORD *)(a1 + 128), *(unsigned int *)(a1 + 136));
  v4 = *(_QWORD *)(a2 + 8);
  if ( (v3 & 0x7FFFFFFF) + v4 < v4 )
    KeBugCheckEx(0x164u, 6uLL, v4, *(_QWORD *)(a1 + 128), *(unsigned int *)(a1 + 136));
  DesktopVerifyHeapPointer(a1);
  return DesktopVerifyHeapPointer(a1);
}
