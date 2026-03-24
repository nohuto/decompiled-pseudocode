/*
 * XREFs of DesktopVerifyHeapLargeUnicodeString @ 0x1C00FCF9C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0049E28 (xxxRealDefWindowProc.c)
 *     DefSetText @ 0x1C004AF8C (DefSetText.c)
 *     NtUserInternalGetWindowText @ 0x1C00FCE00 (NtUserInternalGetWindowText.c)
 * Callees:
 *     DesktopVerifyHeapRange @ 0x1C00FCFE8 (DesktopVerifyHeapRange.c)
 */

__int64 __fastcall DesktopVerifyHeapLargeUnicodeString(__int64 a1, ULONG_PTR a2)
{
  int v2; // r8d

  if ( (*(_DWORD *)a2 & 1) != 0 || (v2 = *(_DWORD *)(a2 + 4), (v2 & 1) != 0) || *(_DWORD *)a2 >= (v2 & 0x7FFFFFFFu) )
    KeBugCheckEx(0x164u, 7uLL, a2, *(_QWORD *)(a1 + 128), *(unsigned int *)(a1 + 136));
  return DesktopVerifyHeapRange(a1, *(_QWORD *)(a2 + 8), v2 & 0x7FFFFFFF);
}
