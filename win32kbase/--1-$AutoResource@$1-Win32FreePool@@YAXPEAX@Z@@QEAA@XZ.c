/*
 * XREFs of ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1C0198280
 * Callers:
 *     EtwTraceTrappedAppContainerRender @ 0x1C0198560 (EtwTraceTrappedAppContainerRender.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(char **a1)
{
  if ( *a1 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *a1);
    *a1 = 0LL;
  }
}
