/*
 * XREFs of ?rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C01DA5F4
 * Callers:
 *     rimObsIsRegisteredObserverAllowed @ 0x1C01DA9E0 (rimObsIsRegisteredObserverAllowed.c)
 *     rimObsCheckForObservationPermissions @ 0x1C01DB780 (rimObsCheckForObservationPermissions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimIsProcessLocalSystem(struct _EPROCESS *a1)
{
  unsigned int v1; // esi
  PACCESS_TOKEN v2; // rdi
  NTSTATUS v3; // ebx
  PVOID TokenInformation; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  TokenInformation = 0LL;
  v2 = PsReferencePrimaryToken(a1);
  v3 = SeQueryInformationToken(v2, TokenUser, &TokenInformation);
  PsDereferencePrimaryToken(v2);
  if ( v3 >= 0 )
  {
    v1 = RtlEqualSid(SeExports->SeLocalSystemSid, *(PSID *)TokenInformation);
    ExFreePoolWithTag(TokenInformation, 0);
  }
  return v1;
}
