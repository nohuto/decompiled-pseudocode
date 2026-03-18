/*
 * XREFs of ?GetStore@Feedback@@YA?AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z @ 0x1C00C6350
 * Callers:
 *     FeedbackSetWindowSetting @ 0x1C00C62CC (FeedbackSetWindowSetting.c)
 *     FeedbackClearWindowSetting @ 0x1C01ADB9C (FeedbackClearWindowSetting.c)
 *     FeedbackGetWindowSetting @ 0x1C01ADBFC (FeedbackGetWindowSetting.c)
 * Callees:
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 */

_QWORD *__fastcall Feedback::GetStore(_QWORD *a1, __int64 a2)
{
  a1[1] = 0LL;
  *a1 = a2;
  *((_DWORD *)a1 + 2) = GetProp(a2, LOWORD(WPP_MAIN_CB.DeviceLock.Header.Lock), 1LL);
  return a1;
}
