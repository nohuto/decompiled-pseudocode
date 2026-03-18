/*
 * XREFs of DrvCleanupOneGraphicsDevice @ 0x1C0069DB0
 * Callers:
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0069D5C (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C006A740 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C006ADB0 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00D1F30 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     DrvCleanupGraphicsDevices @ 0x1C01735B0 (DrvCleanupGraphicsDevices.c)
 * Callees:
 *     bSetDeviceSessionUsage @ 0x1C006ACE0 (bSetDeviceSessionUsage.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DrvCleanupOneGraphicsDevice(_QWORD *a1)
{
  void *v1; // rdx
  void *v3; // rdx
  void *v4; // rdx
  void *v5; // rdx
  void *v6; // rdx
  void *v7; // rcx
  void *v8; // rdx

  v1 = (void *)a1[22];
  if ( v1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v1);
  v3 = (void *)a1[24];
  if ( v3 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v3);
  v4 = (void *)a1[26];
  if ( v4 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v4);
  v5 = (void *)a1[25];
  if ( v5 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v5);
  v6 = (void *)a1[28];
  if ( v6 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v6);
  v7 = (void *)a1[29];
  if ( v7 )
  {
    if ( (*((_DWORD *)a1 + 41) & 2) != 0 )
    {
      bSetDeviceSessionUsage(a1, 0LL);
      v7 = (void *)a1[29];
    }
    ObfDereferenceObject(v7);
  }
  v8 = (void *)a1[34];
  if ( v8 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v8);
    a1[34] = 0LL;
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    a1);
}
