/*
 * XREFs of RIMIDEFreeInjectedInfo @ 0x1C00B7A2C
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C00B7910 (RIMFreeSpecificDevWorker.c)
 *     RIMIDECreateHIDDesc @ 0x1C019B10C (RIMIDECreateHIDDesc.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall RIMIDEFreeInjectedInfo(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 384);
  if ( v1 )
  {
    if ( !*(_QWORD *)(v1 + 72)
      || (NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            *(char **)(v1 + 72)),
          (v1 = *(_QWORD *)(a1 + 384)) != 0) )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)v1);
    }
    *(_QWORD *)(a1 + 384) = 0LL;
  }
}
