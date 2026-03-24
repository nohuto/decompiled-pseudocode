/*
 * XREFs of PspGetNoChildProcessRestrictedPolicy @ 0x1406A5360
 * Callers:
 *     NtQueryInformationProcess @ 0x1406216C0 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 * Callees:
 *     SeTokenGetNoChildProcessRestricted @ 0x140251258 (SeTokenGetNoChildProcessRestricted.c)
 *     ObFastDereferenceObject @ 0x140345620 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryToken @ 0x140654390 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall PspGetNoChildProcessRestrictedPolicy(struct _KPROCESS *a1)
{
  struct _DMA_ADAPTER *v2; // rbx
  bool v4; // [rsp+30h] [rbp+8h] BYREF
  bool v5; // [rsp+38h] [rbp+10h] BYREF
  bool v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v2 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(a1);
  SeTokenGetNoChildProcessRestricted((__int64)v2, &v4, &v5, &v6);
  ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], v2);
  if ( v4 )
    return (unsigned int)v5 + 1;
  else
    return v6 ? 3 : 0;
}
