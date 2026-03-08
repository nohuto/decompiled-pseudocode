/*
 * XREFs of VerifierFsRtlDissectName @ 0x140ACB4A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VerifierFsRtlDissectName(__int128 *a1)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  return ((__int64 (__fastcall *)(__int128 *))pXdvFsRtlDissectName)(&v2);
}
