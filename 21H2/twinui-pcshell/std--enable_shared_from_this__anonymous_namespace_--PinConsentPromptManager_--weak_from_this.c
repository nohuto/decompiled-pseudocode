/*
 * XREFs of std::enable_shared_from_this__anonymous_namespace_::PinConsentPromptManager_::weak_from_this @ 0x180146630
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$2 @ 0x18013E440 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$2.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::enable_shared_from_this__anonymous_namespace_::PinConsentPromptManager_::weak_from_this(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = a1[1];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 12));
    v2 = a1[1];
  }
  *a2 = *a1;
  result = a2;
  a2[1] = v2;
  return result;
}
