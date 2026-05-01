/*
 * XREFs of ?ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z @ 0x18031A4BC
 * Callers:
 *     ?RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z @ 0x180330FBC (-RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z.c)
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18004675C (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIViewWrapperInternal@@@?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18030D5C8 (--$As@UIViewWrapperInternal@@@-$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@.c)
 *     ??$FindEx@VViewWrapperFinderByViewInstanceId@@@?$CTSimpleFixedArray@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVViewWrapperFinderByViewInstanceId@@AEBV?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18030D714 (--$FindEx@VViewWrapperFinderByViewInstanceId@@@-$CTSimpleFixedArray@V-$ComPtr@UIViewWrapperInter.c)
 *     ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEAPEBG@Z @ 0x18030E0AC (--$MakeAndInitialize@VViewEventArgsForPropertyChanged@@UIViewEventArgs@ViewManagerInterop@Shell@.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x18031B56C (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall ViewEventDispatcher::ViewPropertyChanged(RTL_SRWLOCK *this, int a2, const unsigned __int16 *a3)
{
  __int64 v5; // rbx
  RTL_SRWLOCK *v6; // rsi
  __int64 v7; // r8
  bool v8; // di
  int v9; // eax
  int MatchingViewEventRegistration; // eax
  int v11; // eax
  int v12; // eax
  struct IInspectable *v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15[8]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct IInspectable *v17; // [rsp+80h] [rbp+8h] BYREF
  int v18; // [rsp+88h] [rbp+10h] BYREF
  const unsigned __int16 *v19; // [rsp+90h] [rbp+18h] BYREF
  ViewEventArgsForPropertyChanged *v20; // [rsp+98h] [rbp+20h] BYREF

  v19 = a3;
  v15[0] = 0LL;
  v5 = 0LL;
  v14 = 0LL;
  v6 = this + 35;
  AcquireSRWLockShared(this + 35);
  v15[1] = (__int64)v6;
  v17 = 0LL;
  v18 = a2;
  try
  {
    v8 = (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IViewWrapperInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IViewWrapperInternal>>>::FindEx<ViewWrapperFinderByViewInstanceId>(
                &this[44].Ptr,
                &v18,
                v7,
                &v20) >= 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    if ( v8 )
    {
      v9 = Microsoft::WRL::ComPtr<IViewWrapperInternal>::As<IViewWrapperInternal>(
             (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this[44].Ptr + (_QWORD)v20,
             v15);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          725LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(this, v15[0], &v14);
      if ( MatchingViewEventRegistration < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          726LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)MatchingViewEventRegistration);
      v5 = v14;
    }
    if ( v6 )
      ReleaseSRWLockShared(v6);
    if ( v5 )
    {
      v20 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
      v11 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForPropertyChanged,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,unsigned short const * &>(
              &v20,
              &v19);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          734LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v11);
      v17 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      if ( *(_QWORD *)(v5 + 32) )
      {
        v12 = Microsoft::WRL::WeakRef::InternalResolve(
                (Microsoft::WRL::WeakRef *)(v5 + 32),
                &GUID_d599c413_e76f_5f6a_9087_21e6cb563ed9,
                &v17);
        v13 = v17;
      }
      else
      {
        v13 = 0LL;
        v17 = 0LL;
        v12 = -2147024809;
      }
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          737LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v12);
      ((void (__fastcall *)(struct IInspectable *, __int64, ViewEventArgsForPropertyChanged *))v13->lpVtbl->GetIids)(
        v13,
        v15[0],
        v20);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
  }
  catch ( ... )
  {
  }
}
