/*
 * XREFs of ?GetUniqueId@BamoDataSourceProxy@@UEAAAEBU_LUID@@XZ @ 0x1801E3030
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180101BDC (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

const struct _LUID *__fastcall BamoDataSourceProxy::GetUniqueId(BamoDataSourceProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (const struct _LUID *)((char *)this + 40);
}
