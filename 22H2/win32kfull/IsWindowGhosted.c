/*
 * XREFs of IsWindowGhosted @ 0x1C007E5FC
 * Callers:
 *     xxxHandleHealthyThread @ 0x1C00034F0 (xxxHandleHealthyThread.c)
 *     xxxUpdateInputHangInfo @ 0x1C0057A70 (xxxUpdateInputHangInfo.c)
 *     xxxSetWindowPosAndBand @ 0x1C006BD30 (xxxSetWindowPosAndBand.c)
 *     xxxDestroyWindow @ 0x1C007DC00 (xxxDestroyWindow.c)
 * Callees:
 *     _GetProp @ 0x1C006B8F0 (_GetProp.c)
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
