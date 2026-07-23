/*
 * XREFs of SeCodeIntegritySetInformation @ 0x14091BFB8
 * Callers:
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 SeCodeIntegritySetInformation()
{
  if ( qword_140C1DB88 )
    return qword_140C1DB88();
  else
    return 3221225659LL;
}
