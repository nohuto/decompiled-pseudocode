/*
 * XREFs of McGenEventUnregister_EventUnregister @ 0x1801AD9C0
 * Callers:
 *     DllMain @ 0x1800953A4 (DllMain.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventUnregister_EventUnregister(REGHANDLE *a1)
{
  REGHANDLE v2; // rcx
  ULONG result; // eax

  v2 = *a1;
  if ( !v2 )
    return 0;
  result = EventUnregister(v2);
  *a1 = 0LL;
  return result;
}
