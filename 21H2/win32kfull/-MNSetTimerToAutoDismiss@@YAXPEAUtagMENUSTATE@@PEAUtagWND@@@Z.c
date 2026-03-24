/*
 * XREFs of ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C02359BC
 * Callers:
 *     xxxMNMouseMove @ 0x1C02396FC (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 * Callees:
 *     InternalSetTimer @ 0x1C0080820 (InternalSetTimer.c)
 */

void __fastcall MNSetTimerToAutoDismiss(struct tagMENUSTATE *a1, struct tagWND *a2)
{
  if ( (*((_DWORD *)a1 + 2) & 0x1800) == 0x800 )
  {
    if ( InternalSetTimer(
           (__int64)a2,
           65529LL,
           (unsigned int)(16 * HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1)),
           0LL,
           0,
           16) )
    {
      *((_DWORD *)a1 + 2) |= 0x1000u;
    }
  }
}
