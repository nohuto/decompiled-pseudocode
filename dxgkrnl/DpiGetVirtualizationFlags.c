/*
 * XREFs of DpiGetVirtualizationFlags @ 0x1C03996E8
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01D7C80 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005A55C (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     DpiIovGetVirtualizationFlags @ 0x1C039EF90 (DpiIovGetVirtualizationFlags.c)
 */

__int64 __fastcall DpiGetVirtualizationFlags(
        void *a1,
        int a2,
        _QWORD *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        _QWORD *a7)
{
  int VirtualizationFlags; // ebx

  if ( bTracingEnabled )
    VgpuTrace(1, 0, a1, L"DpiGetVirtualizationFlags", 0LL);
  if ( a4 >= 8 && a3 && a6 >= 4 && a5 )
  {
    VirtualizationFlags = DpiIovGetVirtualizationFlags(*((_QWORD *)a1 + 8) + (a2 != 0 ? 5416LL : 5384LL), *a3);
    if ( VirtualizationFlags >= 0 )
      *a7 = 4LL;
  }
  else
  {
    VirtualizationFlags = -1073741789;
    WdLogSingleEntry1(2LL, -1073741789LL);
  }
  if ( bTracingEnabled )
    VgpuTrace(0, VirtualizationFlags, a1, L"DpiGetVirtualizationFlags", 0LL);
  return (unsigned int)VirtualizationFlags;
}
