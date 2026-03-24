/*
 * XREFs of ?GetBaseWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C01FAF60
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@Z @ 0x1C0002358 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C005CD98 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C005CEB0 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?GetBaseWindowForInputType@CInputSink@@IEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C01FAFD4 (-GetBaseWindowForInputType@CInputSink@@IEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z.c)
 */

__int64 __fastcall CompositionInputObject::GetBaseWindowForInputType(__int64 a1, unsigned int a2, _QWORD *a3)
{
  int BaseWindowForInputType; // ebx

  *a3 = 0LL;
  BaseWindowForInputType = CPushLock::AcquireLockShared((CPushLock *)(a1 + 32));
  if ( BaseWindowForInputType >= 0 )
  {
    BaseWindowForInputType = CInputSink::GetBaseWindowForInputType(a1 + 24, a2, a3);
    CPushLock::ReleaseLock((CPushLock *)(a1 + 32));
  }
  return (unsigned int)BaseWindowForInputType;
}
