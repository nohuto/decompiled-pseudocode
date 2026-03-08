/*
 * XREFs of DbgkpWerProcessPolicyResult @ 0x140938DC0
 * Callers:
 *     DbgkWerCaptureLiveKernelDump2 @ 0x14087EC90 (DbgkWerCaptureLiveKernelDump2.c)
 * Callees:
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x1409386E8 (DbgkpWerCaptureLiveFullDump.c)
 *     DbgkpWerCaptureLiveTriageDump @ 0x1409388FC (DbgkpWerCaptureLiveTriageDump.c)
 */

__int64 __fastcall DbgkpWerProcessPolicyResult(__int64 a1, int a2, __int64 a3, _BYTE *a4)
{
  *a4 = 1;
  if ( !a2 )
    return 0LL;
  *(_QWORD *)(a1 + 96) = a3;
  *(_DWORD *)(a1 + 88) = a2;
  if ( a2 == 1 )
    return DbgkpWerCaptureLiveTriageDump(a1);
  if ( a2 == 2 )
    return DbgkpWerCaptureLiveFullDump(a1, a4);
  DbgPrintEx(5u, 0, "DBGK: DbgkpWerProcessPolicyResult: Unknown policy option %d\n\n", a2);
  return 3221225659LL;
}
