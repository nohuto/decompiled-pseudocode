/*
 * XREFs of ??_G_PPLTaskChore@_DefaultPPLTaskScheduler@details@Concurrency@@QEAAPEAXI@Z @ 0x1803957EC
 * Callers:
 *     ??1?$unique_ptr@V_PPLTaskChore@_DefaultPPLTaskScheduler@details@Concurrency@@U?$default_delete@V_PPLTaskChore@_DefaultPPLTaskScheduler@details@Concurrency@@@std@@@std@@QEAA@XZ @ 0x180394A5C (--1-$unique_ptr@V_PPLTaskChore@_DefaultPPLTaskScheduler@details@Concurrency@@U-$default_delete@V.c)
 *     ?_Callback@_PPLTaskChore@_DefaultPPLTaskScheduler@details@Concurrency@@CAXPEAX@Z @ 0x1803962B0 (-_Callback@_PPLTaskChore@_DefaultPPLTaskScheduler@details@Concurrency@@CAXPEAX@Z.c)
 *     ?schedule@_DefaultPPLTaskScheduler@details@Concurrency@@UEAAXP6AXPEAX@Z0@Z @ 0x180398C90 (-schedule@_DefaultPPLTaskScheduler@details@Concurrency@@UEAAXP6AXPEAX@Z0@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore *__fastcall Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore::`scalar deleting destructor'(
        Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore *this,
        struct Concurrency::details::_Threadpool_chore *a2)
{
  Concurrency::details::_Release_chore(this, a2);
  operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
