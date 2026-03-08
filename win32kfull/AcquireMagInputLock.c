/*
 * XREFs of AcquireMagInputLock @ 0x1C01F7D00
 * Callers:
 *     _SetMagnificationInputTransform @ 0x1C007F160 (_SetMagnificationInputTransform.c)
 *     TransformForInputMagnification @ 0x1C01419A0 (TransformForInputMagnification.c)
 *     ApplyMagInputTransform @ 0x1C01A6660 (ApplyMagInputTransform.c)
 *     EditionMagnificationMousePosition @ 0x1C01F7D40 (EditionMagnificationMousePosition.c)
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
