/*
 * XREFs of _wil::MakeAndInitializeOrThrow_XamlExplorerHostWindow_IXamlExplorerHostWindowCreatedCallback___&_unsigned_long_&_IPrivilegedPresentationOperations___&_IXamlExplorerHost___&__::_1_::dtor$0 @ 0x18035C4CC
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A7810 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall wil::MakeAndInitializeOrThrow_XamlExplorerHostWindow_IXamlExplorerHostWindowCreatedCallback_____unsigned_long___IPrivilegedPresentationOperations_____IXamlExplorerHost______::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(*(__int64 **)(a2 + 80));
  }
}
