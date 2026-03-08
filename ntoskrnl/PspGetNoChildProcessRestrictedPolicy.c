/*
 * XREFs of PspGetNoChildProcessRestrictedPolicy @ 0x14079B490
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140245F50 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x14029894C (SeTokenGetNoChildProcessRestricted.c)
 */

__int64 __fastcall PspGetNoChildProcessRestrictedPolicy(__int64 a1)
{
  ULONG_PTR v2; // rbx
  bool v4; // [rsp+30h] [rbp+8h] BYREF
  bool v5; // [rsp+38h] [rbp+10h] BYREF
  bool v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v2 = PsReferencePrimaryTokenWithTag(a1, 0x79517350u);
  SeTokenGetNoChildProcessRestricted(v2, &v4, &v5, &v6);
  ObFastDereferenceObject((signed __int64 *)(a1 + 1208), v2, 0x79517350u);
  if ( v4 )
    return (unsigned int)v5 + 1;
  else
    return v6 ? 3 : 0;
}
