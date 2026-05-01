/*
 * XREFs of ?BeginAnimation@CMultitaskingViewFrame@@UEAAJPEAUIFrameLevelAnimationCoordinator@@@Z @ 0x180408A20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180086554 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIFrameElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFrameElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x180407FB8 (--$As@UIFrameElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 */

__int64 __fastcall CMultitaskingViewFrame::BeginAnimation(
        CMultitaskingViewFrame *this,
        struct IFrameLevelAnimationCoordinator *a2)
{
  __int64 *v4; // rax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  __int64 v14; // [rsp+60h] [rbp+28h] BYREF
  __int64 v15; // [rsp+68h] [rbp+30h] BYREF
  __int64 v16; // [rsp+70h] [rbp+38h] BYREF
  __int64 v17; // [rsp+78h] [rbp+40h] BYREF

  v4 = (__int64 *)(*(__int64 (__fastcall **)(struct IFrameLevelAnimationCoordinator *, __int64 *))(*(_QWORD *)a2 + 88LL))(
                    a2,
                    &v17);
  Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)this + 312, v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  if ( *((_QWORD *)this + 313) )
  {
    v16 = 0LL;
    v6 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IFrameElement>((_QWORD *)this + 313, &v16);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x27F,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
        (const char *)(unsigned int)v6);
LABEL_14:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      return v5;
    }
    v15 = 0LL;
    v7 = v16;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 40LL))(v7, &v15);
    v5 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x282,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
        (const char *)(unsigned int)v8);
LABEL_13:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      goto LABEL_14;
    }
    v14 = 0LL;
    v9 = *((_QWORD *)this + 308);
    v17 = 0x100000001LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v9 + 112LL))(
            v9,
            v15,
            v17,
            &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
            &v14);
    v5 = v10;
    if ( v10 >= 0 )
    {
      (*(void (__fastcall **)(struct IFrameLevelAnimationCoordinator *, _QWORD, CMultitaskingViewFrame *, __int64))(*(_QWORD *)a2 + 80LL))(
        a2,
        *((_QWORD *)this + 308),
        this,
        v14);
      v10 = (*(__int64 (__fastcall **)(struct IFrameLevelAnimationCoordinator *))(*(_QWORD *)a2 + 72LL))(a2);
      v5 = v10;
      if ( v10 >= 0 )
      {
LABEL_12:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
        goto LABEL_13;
      }
      v11 = 647LL;
    }
    else
    {
      v11 = 645LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_12;
  }
  v5 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x27C,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
    (const char *)0x8007139FLL);
  return v5;
}
