/*
 * XREFs of IsWindowGhosted @ 0x1C007E69C
 * Callers:
 *     xxxHandleHealthyThread @ 0x1C00034F0 (xxxHandleHealthyThread.c)
 *     xxxUpdateInputHangInfo @ 0x1C0057B10 (xxxUpdateInputHangInfo.c)
 *     xxxSetWindowPosAndBand @ 0x1C006BDD0 (xxxSetWindowPosAndBand.c)
 *     xxxDestroyWindow @ 0x1C007DCA0 (xxxDestroyWindow.c)
 * Callees:
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 */

__int64 __fastcall IsWindowGhosted(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( **(_WORD **)(*(_QWORD *)(a1 + 136) + 8LL) != *(_WORD *)(gpsi + 900LL)
    && (GetProp(a1, *(unsigned __int16 *)(gpsi + 900LL), 1LL) || GetProp(a1, *(unsigned __int16 *)(gpsi + 1378LL), 1LL)) )
  {
    return 1;
  }
  return v2;
}
