/*
 * XREFs of ZwDuplicateToken @ 0x140412B50
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x140204B90 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x1402BE920 (RtlCheckTokenCapability.c)
 *     DifZwDuplicateTokenWrapper @ 0x1405ED890 (DifZwDuplicateTokenWrapper.c)
 *     RtlImpersonateSelfEx @ 0x140783B34 (RtlImpersonateSelfEx.c)
 *     RtlpIsAppContainer @ 0x1409BA41C (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(ExistingTokenHandle, *(_QWORD *)&DesiredAccess);
}
