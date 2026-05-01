/*
 * XREFs of _lambda_74486eaaeca8e264bd14b205336c09f8_::_lambda_74486eaaeca8e264bd14b205336c09f8_ @ 0x1800E717C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_InitCoro$1 @ 0x1800E8ED8 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActivationTimestamp.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$2 @ 0x1800FA6C0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_74486eaaeca8e264bd14b205336c09f8_::_lambda_74486eaaeca8e264bd14b205336c09f8_(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *result; // rax

  *a1 = a2;
  result = a1;
  a1[1] = a3;
  return result;
}
