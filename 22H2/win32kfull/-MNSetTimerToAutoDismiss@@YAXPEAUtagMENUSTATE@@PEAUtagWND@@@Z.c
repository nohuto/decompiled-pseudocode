/*
 * XREFs of ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C02353FC
 * Callers:
 *     xxxMNMouseMove @ 0x1C023913C (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C023B5E0 (xxxMenuWindowProc.c)
 * Callees:
 *     InternalSetTimer @ 0x1C0080790 (InternalSetTimer.c)
 */

void __fastcall MNSetTimerToAutoDismiss(struct tagMENUSTATE *a1, struct tagWND *a2)
{
  if ( (*((_DWORD *)a1 + 2) & 0x1800) == 0x800 )
  {
    if ( InternalSetTimer(
           (__int64)a2,
           65529LL,
           (unsigned int)(16 * HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine)),
           0LL,
           0,
           16) )
    {
      *((_DWORD *)a1 + 2) |= 0x1000u;
    }
  }
}
