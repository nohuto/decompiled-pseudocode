/*
 * XREFs of ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C009E908
 * Callers:
 *     UnInitializeInputComponents @ 0x1C009EA30 (UnInitializeInputComponents.c)
 * Callees:
 *     HMAssignmentUnlockWorker @ 0x1C0038F7C (HMAssignmentUnlockWorker.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?ClearInputPanelRects@DelayZoneTelemetry@@QEAAXXZ @ 0x1C009E9B8 (-ClearInputPanelRects@DelayZoneTelemetry@@QEAAXXZ.c)
 *     ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C009E9F0 (-Uninitialize@CInpLockGuard@@QEAAXXZ.c)
 */

void __fastcall DelayZonePalmRejection::Uninitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DelayZonePalmRejection *v4; // rax
  DelayZoneTelemetry *v5; // rcx
  char *v6; // rdx
  char *v7; // rdi
  char *v8; // rbx
  char *v9; // rax
  char *v10; // rdx
  char **v11; // rcx

  if ( DelayZonePalmRejection::s_instance )
  {
    if ( *((_QWORD *)DelayZonePalmRejection::s_instance + 3) )
      HMAssignmentUnlockWorker((__int64 *)DelayZonePalmRejection::s_instance + 3, a2, a3, a4);
    CInpLockGuard::Uninitialize((DelayZonePalmRejection *)((char *)DelayZonePalmRejection::s_instance + 112));
    v4 = DelayZonePalmRejection::s_instance;
    v5 = (DelayZoneTelemetry *)*((_QWORD *)DelayZonePalmRejection::s_instance + 16);
    if ( v5 )
    {
      DelayZoneTelemetry::ClearInputPanelRects(v5);
      v6 = (char *)*((_QWORD *)DelayZonePalmRejection::s_instance + 16);
      if ( v6 )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v6);
      v4 = DelayZonePalmRejection::s_instance;
      *((_QWORD *)DelayZonePalmRejection::s_instance + 16) = 0LL;
    }
    v7 = (char *)v4 + 72;
    v8 = (char *)*((_QWORD *)v4 + 9);
    while ( v8 != v7 )
    {
      v9 = *(char **)v8;
      v10 = v8;
      v8 = v9;
      if ( *((char **)v9 + 1) != v10 || (v11 = (char **)*((_QWORD *)v10 + 1), *v11 != v10) )
        __fastfail(3u);
      *v11 = v9;
      *((_QWORD *)v9 + 1) = v11;
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v10);
    }
    if ( DelayZonePalmRejection::s_instance )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)DelayZonePalmRejection::s_instance);
    DelayZonePalmRejection::s_instance = 0LL;
  }
}
