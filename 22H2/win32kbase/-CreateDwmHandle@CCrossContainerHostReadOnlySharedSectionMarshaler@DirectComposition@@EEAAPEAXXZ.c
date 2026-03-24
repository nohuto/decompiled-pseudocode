/*
 * XREFs of ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x1C01E9260
 * Callers:
 *     ?EmitUpdateCommands@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E9330 (-EmitUpdateCommands@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAA_NP.c)
 * Callees:
 *     GreLockDwmState @ 0x1C0048DD0 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C0048E10 (GreUnlockDwmState.c)
 *     ReferenceDwmProcess @ 0x1C004AA00 (ReferenceDwmProcess.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     DCompositionIsVailContainer @ 0x1C01D1F48 (DCompositionIsVailContainer.c)
 *     DirectComposition::TryOpenSharedSectionAndGetUserModeHandle @ 0x1C01E9560 (DirectComposition--TryOpenSharedSectionAndGetUserModeHandle.c)
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
                       (char *)this + 72,
                       (char *)this + 88,
                       (char *)this + 56);
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(v5);
  }
  GreUnlockDwmState();
  return UserModeHandle;
}
