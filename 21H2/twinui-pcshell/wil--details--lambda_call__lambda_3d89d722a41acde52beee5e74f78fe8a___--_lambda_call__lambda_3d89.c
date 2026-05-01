/*
 * XREFs of wil::details::lambda_call__lambda_3d89d722a41acde52beee5e74f78fe8a___::_lambda_call__lambda_3d89d722a41acde52beee5e74f78fe8a___ @ 0x1804E9654
 * Callers:
 *     _EyeControlApp::Initialize_::_1_::dtor$1 @ 0x1804E992C (_EyeControlApp--Initialize_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall wil::details::lambda_call__lambda_3d89d722a41acde52beee5e74f78fe8a___::_lambda_call__lambda_3d89d722a41acde52beee5e74f78fe8a___(
        __int64 a1)
{
  HLOCAL result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return LocalFree(**(HLOCAL **)a1);
  }
  return result;
}
