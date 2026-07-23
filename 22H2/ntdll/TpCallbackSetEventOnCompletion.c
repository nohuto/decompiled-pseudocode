/*
 * XREFs of TpCallbackSetEventOnCompletion @ 0x1800859F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl TpCallbackSetEventOnCompletion(PTP_CALLBACK_INSTANCE Instance, HANDLE Event)
{
  __int64 v2; // r8

  if ( !Instance || (char *)Event - 1 > (char *)0xFFFFFFFFFFFFFFFDLL || *((_DWORD *)Instance + 37) )
  {
    TppRaiseInvalidParameter(Instance, Event, v2);
  }
  else
  {
    *((_DWORD *)Instance + 36) |= 4u;
    *((_DWORD *)Instance + 37) = (_DWORD)Event;
  }
}
