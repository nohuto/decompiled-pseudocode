/*
 * XREFs of ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180065068
 * Callers:
 *     ?add_ClientWindowReadyForPresentationChanged@WindowWrapperBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180065020 (-add_ClientWindowReadyForPresentationChanged@WindowWrapperBase@@UEAAJPEAU-$ITypedEventHandler@PE.c)
 *     ?add_ClientWindowReadyForPresentationChanged@ViewWrapperBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180343050 (-add_ClientWindowReadyForPresentationChanged@ViewWrapperBase@@UEAAJPEAU-$ITypedEventHandler@PEAU.c)
 * Callees:
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180050E54 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180051970 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180065250 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180065310 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180095340 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  RTL_SRWLOCK *v4; // r15
  Microsoft::WRL::Details::EventTargetArray *v9; // rcx
  __int64 v10; // rax
  volatile int *v11; // rdx
  int v12; // edi
  __int64 v13; // r10
  Microsoft::WRL::Details::EventTargetArray *v14; // rax
  Microsoft::WRL::Details::EventTargetArray *v15; // rdi
  void **v16; // rbp
  struct IUnknown **i; // r14
  __int64 *v18; // r14
  __int64 v19; // rcx
  Microsoft::WRL::Details::EventTargetArray *v20; // rcx
  Microsoft::WRL::Details::EventTargetArray *v21; // rbx
  RTL_SRWLOCK *v23; // [rsp+20h] [rbp-48h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v24; // [rsp+70h] [rbp+8h] BYREF
  __int64 v25; // [rsp+88h] [rbp+20h] BYREF

  *a4 = 0LL;
  v4 = (RTL_SRWLOCK *)(a1 + 16);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v9 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
  v24 = 0LL;
  v23 = v4;
  if ( v9 )
    v10 = ((__int64)(*((_QWORD *)v9 + 3) - *((_QWORD *)v9 + 2)) >> 3) + 1;
  else
    v10 = 1LL;
  v25 = v10;
  v12 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v24,
          &v25);
  if ( v12 >= 0 )
  {
    v14 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
    v15 = v24;
    if ( *(_QWORD *)a1 )
    {
      v16 = (void **)*((_QWORD *)v14 + 4);
      for ( i = (struct IUnknown **)*((_QWORD *)v14 + 2); i != *((struct IUnknown ***)v14 + 3); ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v15, *i, *v16);
        v14 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
        ++v16;
      }
    }
    *a4 = a2;
    v18 = (__int64 *)*((_QWORD *)v15 + 3);
    v19 = *v18;
    if ( *v18 != a2 )
    {
      if ( a2 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
        v19 = *v18;
      }
      *v18 = a2;
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    *(_QWORD *)(*((_QWORD *)v15 + 4) + 8 * ((__int64)(*((_QWORD *)v15 + 3) - *((_QWORD *)v15 + 2)) >> 3)) = a3;
    *((_QWORD *)v15 + 3) += 8LL;
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    v20 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
    v21 = 0LL;
    if ( &v24 != (Microsoft::WRL::Details::EventTargetArray **)a1 )
    {
      v21 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
      v20 = 0LL;
    }
    *(_QWORD *)a1 = v15;
    if ( v20 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v20);
    if ( a1 != -8 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 8));
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    v12 = 0;
    if ( v21 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v21);
  }
  else
  {
    if ( v24 )
    {
      if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference(
              (Microsoft::WRL::Details::EventTargetArray *)((char *)v24 + 12),
              v11) )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 24LL))(v13, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v23);
  }
  return (unsigned int)v12;
}
