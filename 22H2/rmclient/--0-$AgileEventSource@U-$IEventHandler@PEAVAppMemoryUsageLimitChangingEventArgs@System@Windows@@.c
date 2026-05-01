/*
 * XREFs of ??0?$AgileEventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x180009CDC
 * Callers:
 *     _dynamic_initializer_for__Windows::System::CMemoryManager::s_limitChangeEvent__ @ 0x180001070 (_dynamic_initializer_for__Windows--System--CMemoryManager--s_limitChangeEvent__.c)
 * Callees:
 *     <none>
 */

__int64 *Microsoft::WRL::AgileEventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AgileEventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>()
{
  Windows::System::CMemoryManager::s_limitChangeEvent = 0LL;
  InitializeSRWLock(&stru_1800247C8);
  InitializeSRWLock(&SRWLock);
  return &Windows::System::CMemoryManager::s_limitChangeEvent;
}
