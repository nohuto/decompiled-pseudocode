/*
 * XREFs of ?SignalStartNowEvent@CTokenManager@@IEAAJXZ @ 0x1C0077F70
 * Callers:
 *     ?AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z @ 0x1C0076F70 (-AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTokenManager::SignalStartNowEvent(HANDLE *this)
{
  LONG PreviousState; // [rsp+30h] [rbp+8h] BYREF

  PreviousState = 0;
  ZwSetEvent(this[9], &PreviousState);
  return (unsigned int)PreviousState;
}
