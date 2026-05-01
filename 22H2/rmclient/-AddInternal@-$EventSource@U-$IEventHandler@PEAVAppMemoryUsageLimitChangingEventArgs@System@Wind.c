/*
 * XREFs of ?AddInternal@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x1800024B0
 * Callers:
 *     ?Add@?$AgileEventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180002418 (-Add@-$AgileEventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800020F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180002148 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18000267C (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180002FB0 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008C78 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18000AB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        Microsoft::WRL::Details::EventTargetArray *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v7; // rax
  volatile int *v8; // rdx
  int v9; // ebx
  Microsoft::WRL::Details::EventTargetArray *v10; // rbx
  __int64 *v11; // rsi
  __int64 v12; // rax
  volatile int *v13; // rdx
  volatile int *v14; // rdx
  struct IUnknown **v16; // r14
  void **i; // r15
  _QWORD v18[7]; // [rsp+20h] [rbp-38h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v19; // [rsp+60h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+20h] BYREF

  v19 = a1;
  *a4 = 0LL;
  v20 = 0LL;
  AcquireSRWLockExclusive(&SRWLock);
  v19 = 0LL;
  if ( Windows::System::CMemoryManager::s_limitChangeEvent )
    v7 = ((__int64)(*(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 24)
                  - *(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 16)) >> 3)
       + 1;
  else
    v7 = 1LL;
  v18[0] = v7;
  v9 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
         &v19,
         v18);
  if ( v9 < 0 )
  {
    if ( v19 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        (__int64)v19,
        v8);
    ReleaseSRWLockExclusive(&SRWLock);
    return (unsigned int)v9;
  }
  else
  {
    v10 = v19;
    if ( Windows::System::CMemoryManager::s_limitChangeEvent )
    {
      v16 = *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 16);
      for ( i = *(void ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 32);
            v16 != *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 24);
            ++v16 )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v10, *v16, *i++);
      }
    }
    *a4 = a2;
    v11 = (__int64 *)*((_QWORD *)v10 + 3);
    v12 = *v11;
    if ( *v11 != a2 )
    {
      if ( a2 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
        v12 = *v11;
      }
      v18[0] = v12;
      *v11 = a2;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v18);
    }
    *(_QWORD *)(*((_QWORD *)v10 + 4) + 8 * ((__int64)(*((_QWORD *)v10 + 3) - *((_QWORD *)v10 + 2)) >> 3)) = a3;
    *((_QWORD *)v10 + 3) += 8LL;
    AcquireSRWLockExclusive(&stru_1800247C8);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
      &v20,
      &Windows::System::CMemoryManager::s_limitChangeEvent);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
      &Windows::System::CMemoryManager::s_limitChangeEvent,
      &v19);
    ReleaseSRWLockExclusive(&stru_1800247C8);
    if ( v19 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        (__int64)v19,
        v13);
    ReleaseSRWLockExclusive(&SRWLock);
    if ( v20 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v20, v14);
    return 0LL;
  }
}
