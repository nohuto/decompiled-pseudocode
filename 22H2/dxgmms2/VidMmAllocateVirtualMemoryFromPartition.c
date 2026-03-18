/*
 * XREFs of VidMmAllocateVirtualMemoryFromPartition @ 0x1C00F11BC
 * Callers:
 *     ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z @ 0x1C008CF44 (-VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z @ 0x1C00A7180 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019900 (__security_check_cookie.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C0019964 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidMmAllocateVirtualMemoryFromPartition(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  _QWORD v10[4]; // [rsp+40h] [rbp-48h] BYREF

  if ( (a4 & 0x1080000) != 0 )
  {
    WdLogSingleEntry1(4LL, a4);
    return 3223191824LL;
  }
  else
  {
    v10[0] = 5LL;
    v10[1] = 2LL;
    v10[3] = a1;
    v10[2] = 3LL;
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    return (*((__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, _QWORD *, int))VirtualMemoryInterface + 1))(
             -1LL,
             a2,
             a3,
             a4 | 0x20400000,
             a5,
             v10,
             2);
  }
}
