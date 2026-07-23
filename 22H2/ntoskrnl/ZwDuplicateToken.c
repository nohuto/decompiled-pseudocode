/*
 * XREFs of ZwDuplicateToken @ 0x1403FA260
 * Callers:
 *     RtlIsSandboxedTokenHandle @ 0x14032C0F0 (RtlIsSandboxedTokenHandle.c)
 *     RtlCheckTokenMembershipEx @ 0x140348460 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x140586670 (RtlCheckTokenCapability.c)
 *     RtlImpersonateSelfEx @ 0x140694588 (RtlImpersonateSelfEx.c)
 *     RtlpIsAppContainer @ 0x140914C78 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDuplicateToken(
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN EffectiveOnly,
        TOKEN_TYPE TokenType,
        PHANDLE NewTokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExistingTokenHandle);
}
