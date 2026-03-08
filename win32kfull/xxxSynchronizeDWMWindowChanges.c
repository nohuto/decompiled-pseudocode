/*
 * XREFs of xxxSynchronizeDWMWindowChanges @ 0x1C01AE0C8
 * Callers:
 *     xxxSendInput @ 0x1C00171A4 (xxxSendInput.c)
 * Callees:
 *     DwmSyncFlushWindowChanges @ 0x1C0270A50 (DwmSyncFlushWindowChanges.c)
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
