/*
 * XREFs of ?resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x18014D9FC
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A800 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::resume_on_signal(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  result = a1;
  *(_QWORD *)(a1 + 16) = a2;
  return result;
}
