/*
 * XREFs of DpQueueDpc @ 0x1C0010FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall DpQueueDpc(__int64 a1)
{
  __int64 v1; // rcx

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 64);
    if ( v1 )
    {
      if ( *(_DWORD *)(v1 + 16) == 1953656900 && (unsigned int)(*(_DWORD *)(v1 + 20) - 2) <= 1 )
        return KeInsertQueueDpc((PRKDPC)(v1 + 1384), 0LL, 0LL);
    }
  }
  WdLogSingleEntry1(2LL, -1073741811LL);
  return 0;
}
