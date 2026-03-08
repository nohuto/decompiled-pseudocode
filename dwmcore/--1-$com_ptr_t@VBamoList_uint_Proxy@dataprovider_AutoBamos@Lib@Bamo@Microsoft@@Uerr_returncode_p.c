/*
 * XREFs of ??1?$com_ptr_t@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801DF464
 * Callers:
 *     ??1DataSourceProxy@@UEAA@XZ @ 0x1801DF494 (--1DataSourceProxy@@UEAA@XZ.c)
 *     ??_GBamoDataSourceProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1801F46F0 (--_GBamoDataSourceProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
