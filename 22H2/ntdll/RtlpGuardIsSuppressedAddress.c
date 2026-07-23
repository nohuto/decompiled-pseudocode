/*
 * XREFs of RtlpGuardIsSuppressedAddress @ 0x1800FD7A0
 * Callers:
 *     RtlGuardGrantSuppressedCallAccess @ 0x180053EB8 (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1800FD7D0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlpGetTargetRvaFlag @ 0x180053FF8 (RtlpGetTargetRvaFlag.c)
 */

char __fastcall RtlpGuardIsSuppressedAddress(void *a1)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  if ( RtlpGetTargetRvaFlag(a1, &v2) )
    return v2 & 1;
  else
    return 0;
}
