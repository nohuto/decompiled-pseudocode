/*
 * XREFs of ??_GBamoDataSourceProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1801F7A70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801E2764 (--1-$com_ptr_t@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@Uerr_returncode_p.c)
 */

BamoImpl::BamoDataSourceProxyImpl *__fastcall BamoImpl::BamoDataSourceProxyImpl::`scalar deleting destructor'(
        BamoImpl::BamoDataSourceProxyImpl *this,
        char a2)
{
  __int64 v4; // rcx

  wil::com_ptr_t<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy,wil::err_returncode_policy>((__int64 *)this + 5);
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
