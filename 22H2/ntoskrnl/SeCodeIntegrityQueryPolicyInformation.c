/*
 * XREFs of SeCodeIntegrityQueryPolicyInformation @ 0x14065F160
 * Callers:
 *     SepIsSModeEnabled @ 0x1402E6BA0 (SepIsSModeEnabled.c)
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeCodeIntegrityQueryPolicyInformation(unsigned int a1)
{
  if ( qword_140C1DB68 )
    return qword_140C1DB68(a1);
  else
    return 3221225473LL;
}
