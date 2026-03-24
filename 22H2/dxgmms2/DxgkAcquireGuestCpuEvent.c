/*
 * XREFs of DxgkAcquireGuestCpuEvent @ 0x1C001794C
 * Callers:
 *     VidSchCreateSyncObject @ 0x1C0081D80 (VidSchCreateSyncObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 */

__int64 DxgkAcquireGuestCpuEvent()
{
  return DxgCoreInterface[78]();
}
