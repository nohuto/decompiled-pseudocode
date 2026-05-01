/*
 * XREFs of wil::details::lambda_call__lambda_74486eaaeca8e264bd14b205336c09f8___::_lambda_call__lambda_74486eaaeca8e264bd14b205336c09f8___ @ 0x1800F4604
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$2 @ 0x1800FA6C0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$2_::_1_::dtor$5 @ 0x1800FC5B0 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePrev_ea_1800FC5B0.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall wil::details::lambda_call__lambda_74486eaaeca8e264bd14b205336c09f8___::_lambda_call__lambda_74486eaaeca8e264bd14b205336c09f8___(
        __int64 a1)
{
  _DWORD *result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    DwmInvalidateIconicBitmaps(*(HWND *)(*(_QWORD *)a1 + 32LL));
    result = *(_DWORD **)(a1 + 8);
    *result = -2147467259;
  }
  return result;
}
