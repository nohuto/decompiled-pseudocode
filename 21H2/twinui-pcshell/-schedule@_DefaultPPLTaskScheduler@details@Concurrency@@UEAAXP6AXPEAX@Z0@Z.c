/*
 * XREFs of ?schedule@_DefaultPPLTaskScheduler@details@Concurrency@@UEAAXP6AXPEAX@Z0@Z @ 0x180398C90
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904EC (--2@YAPEAX_K@Z.c)
 *     _o___std_exception_copy_0 @ 0x180090812 (_o___std_exception_copy_0.c)
 *     _CxxThrowException_0 @ 0x180090984 (_CxxThrowException_0.c)
 *     ??_G_PPLTaskChore@_DefaultPPLTaskScheduler@details@Concurrency@@QEAAPEAXI@Z @ 0x1803957EC (--_G_PPLTaskChore@_DefaultPPLTaskScheduler@details@Concurrency@@QEAAPEAXI@Z.c)
 */

void __fastcall Concurrency::details::_DefaultPPLTaskScheduler::schedule(
        Concurrency::details::_DefaultPPLTaskScheduler *this,
        void (*a2)(void *),
        void *a3)
{
  Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore *v5; // rsi
  struct Concurrency::details::_Threadpool_chore *v6; // rdx
  struct Concurrency::details::_Threadpool_chore *v7; // rdx
  const char *v8; // [rsp+20h] [rbp-38h] BYREF
  char v9; // [rsp+28h] [rbp-30h]
  void **pExceptionObject; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+38h] [rbp-20h]

  v5 = (Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore *)operator new(0x28uLL);
  *(_QWORD *)v5 = 0LL;
  *((_QWORD *)v5 + 1) = Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore::_Callback;
  *((_QWORD *)v5 + 2) = v5;
  *((_QWORD *)v5 + 3) = a2;
  *((_QWORD *)v5 + 4) = a3;
  if ( Concurrency::details::_Schedule_chore(v5, v6) )
  {
    Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore::`scalar deleting destructor'(v5, v7);
    v9 = 1;
    pExceptionObject = &std::exception::`vftable';
    v8 = "Fail to schedule the chore!";
    v11 = 0LL;
    o___std_exception_copy_0((__int64)&v8);
    pExceptionObject = &std::runtime_error::`vftable';
    throw (std::runtime_error *)&pExceptionObject;
  }
}
