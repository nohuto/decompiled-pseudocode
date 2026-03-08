/*
 * XREFs of MapChildVaSpace @ 0x1C002D014
 * Callers:
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x1C00EF538 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MapChildVaSpace(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, int, __int64, __int64))DxgCoreInterface[74])(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}
