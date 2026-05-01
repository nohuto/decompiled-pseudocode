/*
 * XREFs of EnableFlushTimer @ 0x1801ADF54
 * Callers:
 *     FlushTimerCallbackUserMode @ 0x1801AE1E0 (FlushTimerCallbackUserMode.c)
 *     InsertEventEntryInLookUpTable @ 0x1801AE230 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     <none>
 */

void __fastcall EnableFlushTimer(struct _TP_TIMER *a1, unsigned int a2)
{
  struct _FILETIME v2; // rdx
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 )
  {
    v2 = (struct _FILETIME)(-10000LL * a2);
    if ( !dword_1806522C8 )
    {
      pftDueTime = v2;
      SetThreadpoolTimer(a1, &pftDueTime, 0, 0x1388u);
    }
  }
}
