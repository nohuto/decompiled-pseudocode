/*
 * XREFs of PspEnforceLimitsProcessCallback @ 0x1406FB480
 * Callers:
 *     <none>
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14022BD30 (ObReferenceObjectSafeWithTag.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PsQueryStatisticsProcess @ 0x1406A8F30 (PsQueryStatisticsProcess.c)
 *     PspAddAccountingValues @ 0x1406FC264 (PspAddAccountingValues.c)
 */

__int64 __fastcall PspEnforceLimitsProcessCallback(__int64 a1, _QWORD *a2)
{
  _QWORD v5[15]; // [rsp+20h] [rbp-78h] BYREF

  memset(v5, 0, 0x68uLL);
  if ( (*(_DWORD *)(a1 + 1120) & 2) == 0 )
  {
    PsQueryStatisticsProcess(a1, v5);
    PspAddAccountingValues(*(_QWORD *)(a1 + 1296) + 1336LL, v5);
    if ( !a2[2] && *a2 && v5[1] > *a2 && ObReferenceObjectSafeWithTag(a1) )
      a2[2] = a1;
  }
  return 0LL;
}
