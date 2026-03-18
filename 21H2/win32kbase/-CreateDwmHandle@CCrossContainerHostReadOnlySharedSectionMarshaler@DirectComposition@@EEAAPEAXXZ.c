/*
 * XREFs of ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x1C0229060
 * Callers:
 *     ?EmitUpdateCommands@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0229130 (-EmitUpdateCommands@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAA_NP.c)
 * Callees:
 *     GreLockDwmState @ 0x1C0030A10 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C0030A50 (GreUnlockDwmState.c)
 *     ReferenceDwmProcess @ 0x1C0090A30 (ReferenceDwmProcess.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     DCompositionIsVailContainer @ 0x1C0210ED4 (DCompositionIsVailContainer.c)
 *     DirectComposition::TryOpenSharedSectionAndGetUserModeHandle @ 0x1C0229360 (DirectComposition--TryOpenSharedSectionAndGetUserModeHandle.c)
 */

__int64 __fastcall DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::CreateDwmHandle(
        DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler *this)
{
  __int64 UserModeHandle; // rbx
  struct _KPROCESS *v4; // rax
  struct _KPROCESS *v5; // rdi
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  UserModeHandle = 0LL;
  if ( (unsigned int)DCompositionIsVailContainer() )
    return 0LL;
  GreLockDwmState();
  v4 = (struct _KPROCESS *)ReferenceDwmProcess();
  v5 = v4;
  if ( v4 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(v4, &ApcState);
    UserModeHandle = DirectComposition::TryOpenSharedSectionAndGetUserModeHandle(
                       (char *)this + 80,
                       (char *)this + 96,
                       (char *)this + 64);
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(v5);
  }
  GreUnlockDwmState();
  return UserModeHandle;
}
