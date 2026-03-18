/*
 * XREFs of xxxSynchronizeDWMWindowChanges @ 0x1C00CC8DC
 * Callers:
 *     xxxSendInput @ 0x1C007EDD4 (xxxSendInput.c)
 * Callees:
 *     DwmSyncFlushWindowChanges @ 0x1C00CC928 (DwmSyncFlushWindowChanges.c)
 */

__int64 __fastcall xxxSynchronizeDWMWindowChanges(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  result = ReferenceDwmApiPort(a1);
  v2 = result;
  if ( result )
  {
    LeaveCrit();
    DwmSyncFlushWindowChanges(v2);
    return EnterCrit(1LL, 0LL);
  }
  return result;
}
