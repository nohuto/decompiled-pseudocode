/*
 * XREFs of SeCodeIntegrityQueryPolicyInformation @ 0x1406814E0
 * Callers:
 *     SepIsSModeEnabled @ 0x14028FE30 (SepIsSModeEnabled.c)
 *     ExpQuerySystemInformation @ 0x140651070 (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeCodeIntegrityQueryPolicyInformation(unsigned int a1)
{
  if ( qword_140C1DB48 )
    return qword_140C1DB48(a1);
  else
    return 3221225473LL;
}
