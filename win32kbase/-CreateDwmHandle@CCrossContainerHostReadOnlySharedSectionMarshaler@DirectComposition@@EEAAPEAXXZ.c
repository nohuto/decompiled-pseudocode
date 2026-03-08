/*
 * XREFs of ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x1C0261BD0
 * Callers:
 *     ?EmitUpdateCommands@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0261CA0 (-EmitUpdateCommands@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAA_NP.c)
 * Callees:
 *     ReferenceDwmProcess @ 0x1C00918D0 (ReferenceDwmProcess.c)
 *     GreLockDwmState @ 0x1C0091A70 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C0091AF0 (GreUnlockDwmState.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     DCompositionIsVailContainer @ 0x1C0247CF4 (DCompositionIsVailContainer.c)
 *     DirectComposition::TryOpenSharedSectionAndGetUserModeHandle @ 0x1C0261EB0 (DirectComposition--TryOpenSharedSectionAndGetUserModeHandle.c)
 */

__int64 __fastcall DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::CreateDwmHandle(
        DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler *this)
{
  __int64 UserModeHandle; // rbx
  __int64 v3; // rcx
  struct _KPROCESS *v5; // rax
  __int64 v6; // rcx
  struct _KPROCESS *v7; // rdi
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  UserModeHandle = 0LL;
  if ( (unsigned int)DCompositionIsVailContainer() )
    return 0LL;
  GreLockDwmState(v3);
  v5 = (struct _KPROCESS *)ReferenceDwmProcess();
  v7 = v5;
  if ( v5 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(v5, &ApcState);
    UserModeHandle = DirectComposition::TryOpenSharedSectionAndGetUserModeHandle(
                       (char *)this + 72,
                       (char *)this + 88,
                       (char *)this + 56);
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(v7);
  }
  GreUnlockDwmState(v6);
  return UserModeHandle;
}
