/*
 * XREFs of ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C006ACF0
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C000E224 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C006AB50 (NtQueryCompositionInputQueueAndTransform.c)
 * Callees:
 *     ?QueryInputQueueForInputType@CInputSink@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C006AD4C (-QueryInputQueueForInputType@CInputSink@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEU.c)
 *     ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C006ADA0 (-LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C006AE20 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 */

__int64 __fastcall CompositionInputObject::QueryInputQueueForInputType(
        CompositionInputObject *a1,
        unsigned int a2,
        __int64 a3)
{
  int v5; // ebx
  CInputSink *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  v5 = CompositionInputObject::LockForRead(a1, &v7);
  if ( v5 >= 0 )
  {
    CInputSink::QueryInputQueueForInputType(v7, a2, a3);
    CInputSink::UnlockAndRelease(v7);
  }
  return (unsigned int)v5;
}
