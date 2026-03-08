/*
 * XREFs of ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C006ADA0
 * Callers:
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C006ACF0 (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C006AEA4 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompositionInputObject::LockForRead(CompositionInputObject *this, const struct CInputSink **a2)
{
  NTSTATUS v4; // r8d

  *a2 = 0LL;
  v4 = ObReferenceObjectByPointer(this, 3u, ExCompositionObjectType, 0);
  if ( v4 >= 0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)this + 32, 0LL);
    v4 = 0;
    *a2 = (CompositionInputObject *)((char *)this + 24);
  }
  return (unsigned int)v4;
}
