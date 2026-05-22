/*
 * XREFs of ?GetDisplayOcclusionLogicalRange@BamoDockDeviceProxy@@UEAAAEBUtagRECT@@XZ @ 0x1800E63A0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18003F878 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

const struct tagRECT *__fastcall BamoDockDeviceProxy::GetDisplayOcclusionLogicalRange(BamoDockDeviceProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (const struct tagRECT *)((char *)this + 52);
}
