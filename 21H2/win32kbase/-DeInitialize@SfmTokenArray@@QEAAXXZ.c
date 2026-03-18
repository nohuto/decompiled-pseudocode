/*
 * XREFs of ?DeInitialize@SfmTokenArray@@QEAAXXZ @ 0x1C00B2190
 * Callers:
 *     GreSfmDwmShutdown @ 0x1C00B20F0 (GreSfmDwmShutdown.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall SfmTokenArray::DeInitialize(char **this)
{
  if ( *this )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      *this);
    *this = 0LL;
  }
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 2) = 0;
}
