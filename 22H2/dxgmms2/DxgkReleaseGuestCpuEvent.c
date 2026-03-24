/*
 * XREFs of DxgkReleaseGuestCpuEvent @ 0x1C0017970
 * Callers:
 *     VidSchiReleaseSyncObjectReference @ 0x1C000CA08 (VidSchiReleaseSyncObjectReference.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 */

__int64 DxgkReleaseGuestCpuEvent()
{
  return DxgCoreInterface[79]();
}
