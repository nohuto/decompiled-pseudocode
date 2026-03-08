/*
 * XREFs of ??_GBamoList_uint_ProxyImpl@dataprovider_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAPEAXI@Z @ 0x1801E2150
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

Microsoft::Bamo::Lib::BamoImpl::dataprovider_AutoBamos::BamoList_uint_ProxyImpl *__fastcall Microsoft::Bamo::Lib::BamoImpl::dataprovider_AutoBamos::BamoList_uint_ProxyImpl::`scalar deleting destructor'(
        Microsoft::Bamo::Lib::BamoImpl::dataprovider_AutoBamos::BamoList_uint_ProxyImpl *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
