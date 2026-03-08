/*
 * XREFs of ??4?$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@@Z @ 0x1801038E0
 * Callers:
 *     ?AllocateStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeerImpl@23@@Z @ 0x1800AD3EC (-AllocateStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeerImpl.c)
 *     ?Materialize_BamoDataProviderProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x180103270 (-Materialize_BamoDataProviderProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 *     ?Materialize_BamoCompObjectDiagnosticsRootProxy@BamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x1801B6EB4 (-Materialize_BamoCompObjectDiagnosticsRootProxy@BamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoI.c)
 *     ?Materialize_BamoDataSourceProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x1801DD2F0 (-Materialize_BamoDataSourceProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 *     ?Materialize_Microsoft_Bamo_Lib_dataprovider_AutoBamos_BamoList_uint_Proxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x1801DD3A8 (-Materialize_Microsoft_Bamo_Lib_dataprovider_AutoBamos_BamoList_uint_Proxy@BamoPeerImpl@dataprov.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<Microsoft::BamoImpl::BaseBamoPeerImpl,wil::err_returncode_policy>::operator=(
        __int64 *a1,
        void (__fastcall ***a2)(_QWORD))
{
  __int64 v2; // rdi

  v2 = *a1;
  *a1 = (__int64)a2;
  if ( a2 )
    (**a2)(a2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a1;
}
