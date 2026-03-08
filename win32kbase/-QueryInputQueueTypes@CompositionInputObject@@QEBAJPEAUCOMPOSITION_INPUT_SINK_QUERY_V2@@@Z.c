/*
 * XREFs of ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C00B90C0
 * Callers:
 *     ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1C00A28A0 (-CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ.c)
 *     NtQueryCompositionInputSink @ 0x1C00B8EF0 (NtQueryCompositionInputSink.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C006AE58 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00B9120 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?QueryInputQueueTypes@CInputSink@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C00B9158 (-QueryInputQueueTypes@CInputSink@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 */

__int64 __fastcall CompositionInputObject::QueryInputQueueTypes(
        CompositionInputObject *this,
        struct COMPOSITION_INPUT_SINK_QUERY_V2 *a2)
{
  int InputQueueTypes; // ebx

  InputQueueTypes = CPushLock::AcquireLockShared((CompositionInputObject *)((char *)this + 32));
  if ( InputQueueTypes >= 0 )
  {
    InputQueueTypes = CInputSink::QueryInputQueueTypes((CompositionInputObject *)((char *)this + 24), a2);
    CPushLock::ReleaseLock((CompositionInputObject *)((char *)this + 32));
  }
  return (unsigned int)InputQueueTypes;
}
