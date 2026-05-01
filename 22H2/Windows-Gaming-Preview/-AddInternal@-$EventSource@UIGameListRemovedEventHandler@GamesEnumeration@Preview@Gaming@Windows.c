/*
 * XREFs of ?AddInternal@?$EventSource@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAUIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18001E39C
 * Callers:
 *     ?add_GameRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListRemovedEventHandler@2345@PEAUEventRegistrationToken@@@Z @ 0x18001CC00 (-add_GameRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGa.c)
 *     ?Add@?$AgileEventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18001E274 (-Add@-$AgileEventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x18001ED64 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800267A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180026A1C (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        __int64 a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  RTL_SRWLOCK *v4; // rsi
  Microsoft::WRL::Details::EventTargetArray *v9; // rcx
  __int64 v10; // rcx
  int v11; // edi
  Microsoft::WRL::Details::EventTargetArray *v12; // rax
  Microsoft::WRL::Details::EventTargetArray *v13; // rdi
  void **v14; // r15
  struct IUnknown **i; // rbx
  Microsoft::WRL::Details::EventTargetArray *v16; // rbp
  Microsoft::WRL::Details::EventTargetArray *v17; // rbx
  Microsoft::WRL::Details::EventTargetArray *v18; // rcx
  Microsoft::WRL::Details::EventTargetArray *v20; // [rsp+60h] [rbp+8h] BYREF
  __int64 v21; // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0LL;
  v4 = (RTL_SRWLOCK *)(a1 + 16);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v9 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
  v20 = 0LL;
  if ( v9 )
    v10 = ((__int64)(*((_QWORD *)v9 + 3) - *((_QWORD *)v9 + 2)) >> 3) + 1;
  else
    v10 = 1LL;
  v21 = v10;
  v11 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v20,
          &v21);
  if ( v11 >= 0 )
  {
    v12 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
    v13 = v20;
    if ( *(_QWORD *)a1 )
    {
      v14 = (void **)*((_QWORD *)v12 + 4);
      for ( i = (struct IUnknown **)*((_QWORD *)v12 + 2); i != *((struct IUnknown ***)v12 + 3); ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v13, *i, *v14);
        v12 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
        ++v14;
      }
    }
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v13, a2, a3);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    v16 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
    v17 = 0LL;
    if ( &v20 == (Microsoft::WRL::Details::EventTargetArray **)a1 )
    {
      v18 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
      v16 = 0LL;
    }
    else
    {
      v17 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
      v18 = 0LL;
    }
    *(_QWORD *)a1 = v13;
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v18);
    if ( a1 != -8 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 8));
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    v11 = 0;
    if ( v16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v17);
  }
  else
  {
    if ( v20 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v20);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
  return (unsigned int)v11;
}
