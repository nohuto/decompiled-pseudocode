/*
 * XREFs of ?GetEventInvocationContext@?$EventInvocationContextProvider@$00@details@wil@@UEAAJPEAPEAUIEventInvocationContext@23@@Z @ 0x1802B0990
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18004675C (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180072488 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01@@Z @ 0x180213190 (--$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01.c)
 *     ??$MakeAndInitialize@V?$EventInvocationContext@$00@details@wil@@UIEventInvocationContext@23@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIEventInvocationContext@details@wil@@@Z @ 0x1802ACAE4 (--$MakeAndInitialize@V-$EventInvocationContext@$00@details@wil@@UIEventInvocationContext@23@$$V@.c)
 */

__int64 __fastcall wil::details::EventInvocationContextProvider<1>::GetEventInvocationContext(
        RTL_SRWLOCK *a1,
        struct IInspectable **a2)
{
  RTL_SRWLOCK *v2; // rdi
  Microsoft::WRL::WeakRef *v3; // r14
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  struct IInspectable *v8; // rax
  __int64 *v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IInspectable *v12; // [rsp+40h] [rbp+20h] BYREF
  Microsoft::WRL::WeakRef *v13; // [rsp+48h] [rbp+28h] BYREF

  *a2 = 0LL;
  v2 = a1 + 8;
  v3 = (Microsoft::WRL::WeakRef *)&a1[9];
  AcquireSRWLockExclusive(a1 + 8);
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  v5 = Microsoft::WRL::WeakRef::InternalResolve(v3, &GUID_da6f771e_d39d_405e_aa6c_1a3cccb72a39, &v12);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 514LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\WrlEvent.h",
      (const char *)(unsigned int)v5);
    goto LABEL_11;
  }
  v8 = v12;
  if ( !v12 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    v5 = Microsoft::WRL::Details::MakeAndInitialize<wil::details::EventInvocationContext<1>,wil::details::IEventInvocationContext,>(&v12);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 517LL;
      goto LABEL_8;
    }
    v13 = v3;
    v9 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v13);
    v5 = Microsoft::WRL::AsWeak<IDWMStoryboardListener>(v12, v9);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 518LL;
      goto LABEL_8;
    }
    v8 = v12;
  }
  v12 = 0LL;
  v6 = 0;
  *a2 = v8;
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return v6;
}
