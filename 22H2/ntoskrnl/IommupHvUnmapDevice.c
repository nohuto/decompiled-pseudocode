/*
 * XREFs of IommupHvUnmapDevice @ 0x140525528
 * Callers:
 *     IommupMapDeviceInternal @ 0x140523C28 (IommupMapDeviceInternal.c)
 *     IommupUnmapDeviceInternal @ 0x140523FE8 (IommupUnmapDeviceInternal.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommupHvUnmapDevice(ULONG_PTR BugCheckParameter2)
{
  if ( (unsigned int)((__int64 (*)(void))qword_140C626D8)() == 3473497 )
    KeBugCheckEx(0x159u, 0x3000uLL, BugCheckParameter2, 0LL, 0LL);
  ((void (__fastcall *)(ULONG_PTR))qword_140C62688)(BugCheckParameter2);
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64))qword_140C626C8)(BugCheckParameter2, 5LL);
}
