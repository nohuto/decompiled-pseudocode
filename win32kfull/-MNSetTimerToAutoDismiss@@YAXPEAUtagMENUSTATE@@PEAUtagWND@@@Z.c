/*
 * XREFs of ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C0218490
 * Callers:
 *     xxxMNMouseMove @ 0x1C021B510 (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 * Callees:
 *     InternalSetTimer @ 0x1C0061830 (InternalSetTimer.c)
 */

void __fastcall MNSetTimerToAutoDismiss(struct tagMENUSTATE *a1, struct tagWND *a2)
{
  if ( (*((_DWORD *)a1 + 2) & 0x1800) == 0x800 )
  {
    if ( InternalSetTimer((unsigned __int64)a2, 65529LL, 16 * gdtMNDropDown, 0LL, 0, 16) )
      *((_DWORD *)a1 + 2) |= 0x1000u;
  }
}
