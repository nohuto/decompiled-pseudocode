/*
 * XREFs of ??$DoInvoke@V_lambda_46c8720b1b7964c7fc659f01aa7c951a_@@@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_46c8720b1b7964c7fc659f01aa7c951a_@@@Z @ 0x180002960
 * Callers:
 *     ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z @ 0x1800028D0 (-OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z.c)
 * Callees:
 *     ??$InvokeDelegates@V_lambda_46c8720b1b7964c7fc659f01aa7c951a_@@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_46c8720b1b7964c7fc659f01aa7c951a_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x180001D48 (--$InvokeDelegates@V_lambda_46c8720b1b7964c7fc659f01aa7c951a_@@U-$IEventHandler@PEAVAppMemoryUsa.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800020F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18000EF6C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_46c8720b1b7964c7fc659f01aa7c951a_>(
        __int64 a1,
        __int128 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // r10
  __int64 v5; // r8
  unsigned int v6; // edi
  volatile int *v7; // rdx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  AcquireSRWLockExclusive(&stru_1800247C8);
  if ( Windows::System::CMemoryManager::s_limitChangeEvent )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::InternalAddRef(Windows::System::CMemoryManager::s_limitChangeEvent);
    v3 = v4;
  }
  ReleaseSRWLockExclusive(&stru_1800247C8);
  if ( !v3 )
    return 0LL;
  v9 = *a2;
  v6 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_46c8720b1b7964c7fc659f01aa7c951a_,Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>>(
         (_QWORD **)&v9,
         v3,
         v5);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v3, v7);
  return v6;
}
