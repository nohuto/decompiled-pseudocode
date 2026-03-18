/*
 * XREFs of IsFreeSMSSupported @ 0x1C00B96B4
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00B8EAC (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1C016833C (-_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFreeSMSSupported()
{
  if ( qword_1C029B950 )
    return qword_1C029B950();
  else
    return 3221225659LL;
}
