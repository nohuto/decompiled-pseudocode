/*
 * XREFs of ?_Invoke@_CancellationTokenRegistration@details@Concurrency@@AEAAXXZ @ 0x180397774
 * Callers:
 *     ?_RegisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenRegistration@23@@Z @ 0x180397960 (-_RegisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenRegis.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_Atomic_compare_exchange_strong_4@std@@YAHPECKPEAKKW4memory_order@1@2@Z @ 0x1803961F0 (-_Atomic_compare_exchange_strong_4@std@@YAHPECKPEAKKW4memory_order@1@2@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Concurrency::details::_CancellationTokenRegistration::_Invoke(
        Concurrency::details::_CancellationTokenRegistration *this)
{
  signed __int32 CurrentThreadId; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  signed __int32 v6; // [rsp+40h] [rbp+8h] BYREF

  CurrentThreadId = Concurrency::details::platform::GetCurrentThreadId(this);
  v6 = 0;
  std::_Atomic_compare_exchange_strong_4((volatile signed __int32 *)this + 4, &v6, CurrentThreadId, 5, 5);
  if ( !v6 )
  {
    (*(void (__fastcall **)(Concurrency::details::_CancellationTokenRegistration *))(*(_QWORD *)this + 16LL))(this);
    v6 = CurrentThreadId;
    std::_Atomic_compare_exchange_strong_4((volatile signed __int32 *)this + 4, &v6, 3, 5, 5);
    if ( v6 == 2 )
    {
      v3 = _Mtx_lock((Concurrency::details::_CancellationTokenRegistration *)((char *)this + 96));
      if ( v3 )
      {
        std::_Throw_C_error(v3);
        __debugbreak();
      }
      *((_BYTE *)this + 176) = 1;
      v4 = _Mtx_unlock((Concurrency::details::_CancellationTokenRegistration *)((char *)this + 96));
      if ( v4 )
        std::_Throw_C_error(v4);
      v5 = _Cnd_broadcast((Concurrency::details::_CancellationTokenRegistration *)((char *)this + 24));
      if ( v5 )
        std::_Throw_C_error(v5);
    }
  }
  Concurrency::details::_RefCounter::_Release(this);
}
