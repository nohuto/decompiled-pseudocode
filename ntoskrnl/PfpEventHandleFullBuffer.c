/*
 * XREFs of PfpEventHandleFullBuffer @ 0x1402EE0E0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     PfTFullEventListAdd @ 0x1402EE12C (PfTFullEventListAdd.c)
 */

LONG __fastcall PfpEventHandleFullBuffer(struct _SLIST_ENTRY *a1)
{
  LONG result; // eax

  result = PfTFullEventListAdd(a1);
  if ( !Event.Header.SignalState )
  {
    result = LOWORD(stru_140C64FA0.Alignment);
    if ( LOWORD(stru_140C64FA0.Alignment) >= (((_DWORD)KeNumberProcessors_0 + 2) & 0x7FFFFFFFu) )
      return KeSetEvent(&Event, 0, 0);
  }
  return result;
}
