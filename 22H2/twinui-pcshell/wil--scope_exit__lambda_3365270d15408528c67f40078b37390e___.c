/*
 * XREFs of wil::scope_exit__lambda_3365270d15408528c67f40078b37390e___ @ 0x180134674
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$2 @ 0x18013E2D0 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::scope_exit__lambda_3365270d15408528c67f40078b37390e___(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 16) = a2[2];
  *(_QWORD *)(a1 + 24) = a2[3];
  result = a1;
  a2[2] = 0LL;
  a2[3] = 0LL;
  *(_BYTE *)(a1 + 32) = 1;
  return result;
}
