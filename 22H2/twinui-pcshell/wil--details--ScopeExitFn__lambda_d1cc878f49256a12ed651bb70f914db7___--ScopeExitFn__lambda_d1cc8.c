/*
 * XREFs of wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___ @ 0x18035F550
 * Callers:
 *     _lambda_05f458ff3b283a3e9a9130333ab0a931_::operator() @ 0x18035FD08 (_lambda_05f458ff3b283a3e9a9130333ab0a931_--operator().c)
 *     ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x18036043C (-CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationP.c)
 * Callees:
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::_lambda_d1cc878f49256a12ed651bb70f914db7_ @ 0x18035F338 (_lambda_d1cc878f49256a12ed651bb70f914db7_--_lambda_d1cc878f49256a12ed651bb70f914db7_.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  lambda_d1cc878f49256a12ed651bb70f914db7_::_lambda_d1cc878f49256a12ed651bb70f914db7_((__int64 *)a1, (__int64 *)a2);
  *(_BYTE *)(a1 + 24) = *(_BYTE *)(a2 + 24);
  result = a1;
  *(_BYTE *)(a2 + 24) = 0;
  return result;
}
