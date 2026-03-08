/*
 * XREFs of DxgkAcquireGuestCpuEvent @ 0x1C002CF90
 * Callers:
 *     VidSchCreateSyncObject @ 0x1C00AA640 (VidSchCreateSyncObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

__int64 DxgkAcquireGuestCpuEvent()
{
  return ((__int64 (*)(void))DxgCoreInterface[91])();
}
