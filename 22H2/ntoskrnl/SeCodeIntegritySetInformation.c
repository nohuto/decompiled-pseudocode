/*
 * XREFs of SeCodeIntegritySetInformation @ 0x14091BEA8
 * Callers:
 *     NtSetSystemInformation @ 0x140707C50 (NtSetSystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 SeCodeIntegritySetInformation()
{
  if ( qword_140C1DB88 )
    return qword_140C1DB88();
  else
    return 3221225659LL;
}
