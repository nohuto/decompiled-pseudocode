/*
 * XREFs of ?GetUniqueId@BamoDataProviderProxy@@UEAAAEBU_LUID@@XZ @ 0x180101BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180101BDC (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

const struct _LUID *__fastcall BamoDataProviderProxy::GetUniqueId(BamoDataProviderProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (const struct _LUID *)((char *)this + 40);
}
