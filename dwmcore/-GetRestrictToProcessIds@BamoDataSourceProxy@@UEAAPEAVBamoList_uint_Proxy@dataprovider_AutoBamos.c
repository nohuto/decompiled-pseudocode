struct Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy *__fastcall BamoDataSourceProxy::GetRestrictToProcessIds(
        BamoDataSourceProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (struct Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy *)*((_QWORD *)this + 6);
}
