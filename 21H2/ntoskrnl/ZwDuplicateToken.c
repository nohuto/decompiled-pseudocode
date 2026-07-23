/*
 * XREFs of ZwDuplicateToken @ 0x1403FADC0
 * Callers:
 *     RtlIsSandboxedTokenHandle @ 0x140251410 (RtlIsSandboxedTokenHandle.c)
 *     RtlCheckTokenMembershipEx @ 0x14026D700 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x140586960 (RtlCheckTokenCapability.c)
 *     RtlImpersonateSelfEx @ 0x140610378 (RtlImpersonateSelfEx.c)
 *     RtlpIsAppContainer @ 0x140914D88 (RtlpIsAppContainer.c)
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
