/*
 * XREFs of AcquireMagInputLock @ 0x1C00FB868
 * Callers:
 *     _SetMagnificationInputTransform @ 0x1C0098370 (_SetMagnificationInputTransform.c)
 *     AddMagnificationOutputTransform @ 0x1C00FB810 (AddMagnificationOutputTransform.c)
 *     TransformForInputMagnification @ 0x1C016A6E0 (TransformForInputMagnification.c)
 *     ApplyMagInputTransform @ 0x1C01CBBD0 (ApplyMagInputTransform.c)
 *     EditionMagnificationMousePosition @ 0x1C02126C0 (EditionMagnificationMousePosition.c)
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
