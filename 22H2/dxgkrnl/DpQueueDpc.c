/*
 * XREFs of DpQueueDpc @ 0x1C00157C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall DpQueueDpc(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( a1 )
  {
    a1 = *(_QWORD *)(a1 + 64);
    if ( a1 )
    {
      if ( *(_DWORD *)(a1 + 16) == 1953656900 && (unsigned int)(*(_DWORD *)(a1 + 20) - 2) <= 1 )
        return KeInsertQueueDpc((PRKDPC)(a1 + 1384), 0LL, 0LL);
    }
  }
  v3 = WdLogNewEntry5_WdError(a1, a2);
  *(_QWORD *)(v3 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v3);
  return 0;
}
