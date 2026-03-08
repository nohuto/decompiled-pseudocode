/*
 * XREFs of ?SetBootstrapProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z @ 0x1801B80A4
 * Callers:
 *     ?Thunk_SetBootstrapProxy_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801B89D0 (-Thunk_SetBootstrapProxy_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::SetBootstrapProxy(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this,
        unsigned int a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2));
  return Microsoft::BamoImpl::BaseBamoConnectionImpl::SetBootstrapProxy(
           *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 32LL),
           this,
           a2);
}
