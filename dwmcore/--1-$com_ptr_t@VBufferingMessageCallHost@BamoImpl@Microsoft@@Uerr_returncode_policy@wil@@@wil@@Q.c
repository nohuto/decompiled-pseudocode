/*
 * XREFs of ??1?$com_ptr_t@VBufferingMessageCallHost@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801B5990
 * Callers:
 *     ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x1801B5A04 (--1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<Microsoft::BamoImpl::BufferingMessageCallHost,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::BufferingMessageCallHost,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
