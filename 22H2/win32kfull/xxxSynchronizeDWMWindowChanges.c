/*
 * XREFs of xxxSynchronizeDWMWindowChanges @ 0x1C01ACED8
 * Callers:
 *     xxxSendInput @ 0x1C000A4E4 (xxxSendInput.c)
 * Callees:
 *     DwmSyncFlushWindowChanges @ 0x1C026DFA0 (DwmSyncFlushWindowChanges.c)
 */

__int64 __fastcall xxxSynchronizeDWMWindowChanges(__int64 a1)
{
  __int64 result; // rax
  void *v2; // rbx

  result = ReferenceDwmApiPort(a1);
  v2 = (void *)result;
  if ( result )
  {
    LeaveCrit();
    DwmSyncFlushWindowChanges(v2);
    return EnterCrit(1LL, 0LL);
  }
  return result;
}
