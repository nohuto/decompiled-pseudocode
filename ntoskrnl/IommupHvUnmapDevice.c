/*
 * XREFs of IommupHvUnmapDevice @ 0x140522FF8
 * Callers:
 *     IommupMapDeviceInternal @ 0x1405216F8 (IommupMapDeviceInternal.c)
 *     IommupUnmapDeviceInternal @ 0x140521AB8 (IommupUnmapDeviceInternal.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommupHvUnmapDevice(ULONG_PTR BugCheckParameter2)
{
  if ( (unsigned int)((__int64 (*)(void))qword_140C62278)() == 3473497 )
    KeBugCheckEx(0x159u, 0x3000uLL, BugCheckParameter2, 0LL, 0LL);
  ((void (__fastcall *)(ULONG_PTR))qword_140C62228)(BugCheckParameter2);
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64))qword_140C62268)(BugCheckParameter2, 5LL);
}
