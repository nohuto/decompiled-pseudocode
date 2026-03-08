/*
 * XREFs of VerifierIoAllocateErrorLogEntry @ 0x140AC7CB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VfFaultsInjectResourceFailure @ 0x140AD2FAC (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierIoAllocateErrorLogEntry(__int64 a1, char a2)
{
  __int64 v4; // rdx

  if ( (unsigned int)VfFaultsInjectResourceFailure(0LL) )
    return 0LL;
  LOBYTE(v4) = a2;
  return ((__int64 (__fastcall *)(__int64, __int64))pXdvIoAllocateErrorLogEntry)(a1, v4);
}
