/*
 * XREFs of std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow_________lambda_0f2c79fb5a4f581c774178e7b76926ba___ @ 0x180358584
 * Callers:
 *     ?GrabAvailableWindowForSize@XamlExplorerHostShellComponent@@AEAAJUtagRECT@@PEA_NAEBU_GUID@@PEAPEAX@Z @ 0x180359F2C (-GrabAvailableWindowForSize@XamlExplorerHostShellComponent@@AEAAJUtagRECT@@PEA_NAEBU_GUID@@PEAPE.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_0f2c79fb5a4f581c774178e7b76926ba_::operator() @ 0x180358AD8 (_lambda_0f2c79fb5a4f581c774178e7b76926ba_--operator().c)
 */

__int64 **__fastcall std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow_________lambda_0f2c79fb5a4f581c774178e7b76926ba___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 *i; // rdi
  __int64 **result; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  for ( i = a2; i != a3; ++i )
  {
    v9 = *i;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
    if ( (unsigned __int8)lambda_0f2c79fb5a4f581c774178e7b76926ba_::operator()(a4, &v9) )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
