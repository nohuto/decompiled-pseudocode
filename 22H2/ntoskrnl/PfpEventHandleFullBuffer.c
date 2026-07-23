/*
 * XREFs of PfpEventHandleFullBuffer @ 0x14030F520
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     PfTFullEventListAdd @ 0x14030F56C (PfTFullEventListAdd.c)
 */

LONG __fastcall PfpEventHandleFullBuffer(_SLIST_ENTRY *a1)
{
  LONG result; // eax

  result = PfTFullEventListAdd(a1);
  if ( !Event.Header.SignalState )
  {
    result = LOWORD(stru_140C4FDA0.Alignment);
    if ( LOWORD(stru_140C4FDA0.Alignment) >= (((_DWORD)KeNumberProcessors_0 + 2) & 0x7FFFFFFFu) )
      return KeSetEvent(&Event, 0, 0);
  }
  return result;
}
