/*
 * XREFs of AcquireMagInputLock @ 0x1C01F6B30
 * Callers:
 *     _SetMagnificationInputTransform @ 0x1C005AE40 (_SetMagnificationInputTransform.c)
 *     TransformForInputMagnification @ 0x1C014E870 (TransformForInputMagnification.c)
 *     ApplyMagInputTransform @ 0x1C01A5470 (ApplyMagInputTransform.c)
 *     EditionMagnificationMousePosition @ 0x1C01F6B70 (EditionMagnificationMousePosition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AcquireMagInputLock()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  while ( 1 )
  {
    result = _InterlockedCompareExchange64(&gpMagInputLock, (signed __int64)CurrentThread, 0LL);
    if ( !result )
      break;
    UserSleep(1LL);
  }
  return result;
}
