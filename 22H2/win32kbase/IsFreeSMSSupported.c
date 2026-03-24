/*
 * XREFs of IsFreeSMSSupported @ 0x1C007DBE8
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C007CD3C (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1C013AF40 (-_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFreeSMSSupported()
{
  if ( qword_1C0255BE0 )
    return qword_1C0255BE0();
  else
    return 3221225659LL;
}
