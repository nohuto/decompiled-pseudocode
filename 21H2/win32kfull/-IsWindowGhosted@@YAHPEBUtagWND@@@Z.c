/*
 * XREFs of ?IsWindowGhosted@@YAHPEBUtagWND@@@Z @ 0x1C0062EF0
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x1C0048AFC (xxxSetWindowPosAndBand.c)
 *     xxxUpdateInputHangInfo @ 0x1C00574C0 (xxxUpdateInputHangInfo.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     xxxHandleHealthyThread @ 0x1C0144560 (xxxHandleHealthyThread.c)
 * Callees:
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 */

__int64 __fastcall IsWindowGhosted(const struct tagWND *a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) != *(_WORD *)(gpsi + 900LL)
    && (GetProp(a1, *(unsigned __int16 *)(gpsi + 900LL), 1LL) || GetProp(a1, *(unsigned __int16 *)(gpsi + 1378LL), 1LL)) )
  {
    return 1;
  }
  return v2;
}
