/*
 * XREFs of IsEditionGetProcessWindowStationEntryPointSupported @ 0x1C00ABDF4
 * Callers:
 *     NtUserGetProcessWindowStation @ 0x1C00AFAF0 (NtUserGetProcessWindowStation.c)
 *     NtUserCreateWindowStation @ 0x1C00BDEA0 (NtUserCreateWindowStation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionGetProcessWindowStationEntryPointSupported()
{
  if ( qword_1C0295388 )
    return qword_1C0295388();
  else
    return 3221225659LL;
}
