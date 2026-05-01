/*
 * XREFs of ?AddInternal@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180002E00
 * Callers:
 *     ?Add@?$AgileEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180002D60 (-Add@-$AgileEventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOpt.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800020F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180002148 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180002FB0 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008C78 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18000AB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        RTL_SRWLOCK *a1,
        Microsoft::WRL::Details::EventTargetArray *a2,
        __int64 a3,
        Microsoft::WRL::Details::EventTargetArray **a4)
{
  RTL_SRWLOCK *v4; // r15
  _QWORD *Ptr; // rcx
  __int64 v10; // rax
  volatile int *v11; // rdx
  int v12; // ebx
  _QWORD *v13; // rax
  Microsoft::WRL::Details::EventTargetArray *v14; // rbx
  Microsoft::WRL::Details::EventTargetArray **v15; // r14
  Microsoft::WRL::Details::EventTargetArray *v16; // rax
  volatile int *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  struct IUnknown **v21; // rbp
  void **v22; // r12
  Microsoft::WRL::Details::EventTargetArray *v23; // [rsp+60h] [rbp+8h] BYREF
  __int64 v24; // [rsp+78h] [rbp+20h] BYREF

  v4 = a1 + 2;
  *a4 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  v23 = 0LL;
  if ( Ptr )
    v10 = ((__int64)(Ptr[3] - Ptr[2]) >> 3) + 1;
  else
    v10 = 1LL;
  v24 = v10;
  v12 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v23,
          &v24);
  if ( v12 < 0 )
  {
    if ( v23 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        (__int64)v23,
        v11);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    return (unsigned int)v12;
  }
  else
  {
    v13 = a1->Ptr;
    v14 = v23;
    if ( a1->Ptr )
    {
      v21 = (struct IUnknown **)v13[2];
      v22 = (void **)v13[4];
      if ( v21 != (struct IUnknown **)v13[3] )
      {
        do
          Microsoft::WRL::Details::EventTargetArray::AddTail(v14, *v21++, *v22++);
        while ( v21 != *((struct IUnknown ***)a1->Ptr + 3) );
      }
    }
    *a4 = a2;
    v15 = (Microsoft::WRL::Details::EventTargetArray **)*((_QWORD *)v14 + 3);
    v16 = *v15;
    if ( *v15 != a2 )
    {
      if ( a2 )
      {
        (*(void (__fastcall **)(Microsoft::WRL::Details::EventTargetArray *))(*(_QWORD *)a2 + 8LL))(a2);
        v16 = *v15;
      }
      v23 = v16;
      *v15 = a2;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
    }
    *(_QWORD *)(*((_QWORD *)v14 + 4) + 8 * ((__int64)(*((_QWORD *)v14 + 3) - *((_QWORD *)v14 + 2)) >> 3)) = a3;
    *((_QWORD *)v14 + 3) += 8LL;
    AcquireSRWLockExclusive(a1 + 1);
    v18 = (__int64)a1->Ptr;
    v19 = 0LL;
    if ( &v23 != (Microsoft::WRL::Details::EventTargetArray **)a1 )
    {
      v19 = (__int64)a1->Ptr;
      v18 = 0LL;
    }
    a1->Ptr = v14;
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v18, v17);
    if ( a1 != (RTL_SRWLOCK *)-8LL )
      ReleaseSRWLockExclusive(a1 + 1);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    if ( v19 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v19, v17);
    return 0LL;
  }
}
