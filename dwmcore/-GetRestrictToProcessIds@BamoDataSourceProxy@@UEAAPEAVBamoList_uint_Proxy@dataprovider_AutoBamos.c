/*
 * XREFs of ?GetRestrictToProcessIds@BamoDataSourceProxy@@UEAAPEAVBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@XZ @ 0x1801DFD00
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180100F9C (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy *__fastcall BamoDataSourceProxy::GetRestrictToProcessIds(
        BamoDataSourceProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy *)*((_QWORD *)this + 6);
}
