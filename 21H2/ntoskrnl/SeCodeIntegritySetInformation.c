/*
 * XREFs of SeCodeIntegritySetInformation @ 0x14091BE58
 * Callers:
 *     NtSetSystemInformation @ 0x1406DA380 (NtSetSystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 SeCodeIntegritySetInformation()
{
  if ( qword_140C1DB68 )
    return qword_140C1DB68();
  else
    return 3221225659LL;
}
