/*
 * XREFs of ?GetStore@Feedback@@YA?AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z @ 0x1C0100E50
 * Callers:
 *     FeedbackSetWindowSetting @ 0x1C0100DCC (FeedbackSetWindowSetting.c)
 *     FeedbackClearWindowSetting @ 0x1C01AED8C (FeedbackClearWindowSetting.c)
 *     FeedbackGetWindowSetting @ 0x1C01AEDEC (FeedbackGetWindowSetting.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 */

__int64 *__fastcall Feedback::GetStore(__int64 *a1, __int64 a2)
{
  a1[1] = 0LL;
  *a1 = a2;
  *((_DWORD *)a1 + 2) = GetProp(a2, LOWORD(WPP_MAIN_CB.SecurityDescriptor), 1u);
  return a1;
}
