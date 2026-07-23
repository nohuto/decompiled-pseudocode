/*
 * XREFs of SeCodeIntegrityQueryPolicyInformation @ 0x1405DC520
 * Callers:
 *     SepIsSModeEnabled @ 0x14020DDA0 (SepIsSModeEnabled.c)
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeCodeIntegrityQueryPolicyInformation(unsigned int a1)
{
  if ( qword_140C1DB68 )
    return qword_140C1DB68(a1);
  else
    return 3221225473LL;
}
