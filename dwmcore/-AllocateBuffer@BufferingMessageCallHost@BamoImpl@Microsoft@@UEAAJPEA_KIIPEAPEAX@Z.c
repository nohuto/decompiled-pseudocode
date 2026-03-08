/*
 * XREFs of ?AllocateBuffer@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEA_KIIPEAPEAX@Z @ 0x1801B6020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::AllocateBuffer(
        Microsoft::BamoImpl::BufferingMessageCallHost *this,
        unsigned __int64 *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 1) + 24LL))(
           *((_QWORD *)this + 1),
           a2);
}
