/*
 * XREFs of CheckOrAcquireDwmStateLock @ 0x1C0091914
 * Callers:
 *     OpenDwmHandle @ 0x1C00917AC (OpenDwmHandle.c)
 *     NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C0248570 (NtDCompositionDuplicateSwapchainHandleToDwm.c)
 *     ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02651FC (-EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0265A98 (-EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C004E3E0 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C0091990 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 *     GreLockDwmState @ 0x1C0091A70 (GreLockDwmState.c)
 */

char __fastcall CheckOrAcquireDwmStateLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rax

  v4 = 0;
  if ( !IS_USERCRIT_OWNED_AT_ALL(a1, a2, a3, a4) )
  {
    v6 = SGDGetSessionState(v5);
    if ( !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*(PERESOURCE *)(*(_QWORD *)(v6 + 24) + 72LL)) )
    {
      GreLockDwmState();
      return 1;
    }
  }
  return v4;
}
