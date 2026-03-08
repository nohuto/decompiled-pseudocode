/*
 * XREFs of ??_EBamoDataProviderRegistrarStubImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1801DD830
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

BamoImpl::BamoDataProviderRegistrarStubImpl *__fastcall BamoImpl::BamoDataProviderRegistrarStubImpl::`vector deleting destructor'(
        BamoImpl::BamoDataProviderRegistrarStubImpl *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
