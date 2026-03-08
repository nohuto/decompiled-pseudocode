/*
 * XREFs of ??4?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801B5CC4
 * Callers:
 *     ?SetBootstrapProxy@DiagnosticCallbacksManager@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x1801B8100 (-SetBootstrapProxy@DiagnosticCallbacksManager@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(*a2);
    v5 = *a1;
    *a1 = v2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  }
  return a1;
}
