/*
 * XREFs of wil::scope_exit__lambda_74486eaaeca8e264bd14b205336c09f8___ @ 0x1800F3E68
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$2 @ 0x1800FA550 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::scope_exit__lambda_74486eaaeca8e264bd14b205336c09f8___(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax

  v2 = *a2;
  *(_BYTE *)(a1 + 16) = 1;
  result = a1;
  *(_OWORD *)a1 = v2;
  return result;
}
