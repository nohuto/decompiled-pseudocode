/*
 * XREFs of AcquireMagInputLock @ 0x1C010FE78
 * Callers:
 *     _SetMagnificationInputTransform @ 0x1C00EB690 (_SetMagnificationInputTransform.c)
 *     AddMagnificationOutputTransform @ 0x1C010FE20 (AddMagnificationOutputTransform.c)
 *     ApplyMagInputTransform @ 0x1C01CF2B0 (ApplyMagInputTransform.c)
 *     TransformForInputMagnification @ 0x1C01CF690 (TransformForInputMagnification.c)
 *     EditionMagnificationMousePosition @ 0x1C0213EF0 (EditionMagnificationMousePosition.c)
 * Callees:
 *     <none>
 */

signed __int64 AcquireMagInputLock()
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 result; // rax

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
