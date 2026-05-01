/*
 * XREFs of ?ExitFullScreen@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x1802C96B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VViewHostViewModeChangeRequestedEventArgs@@V1@AEBW4ViewMode@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAVViewHostViewModeChangeRequestedEventArgs@@AEBW4ViewMode@Holographic@Shell@Internal@Windows@@@Z @ 0x1802B9F50 (--$MakeAndInitialize@VViewHostViewModeChangeRequestedEventArgs@@V1@AEBW4ViewMode@Holographic@She.c)
 *     ?InternalRelease@?$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1802BF0B8 (-InternalRelease@-$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVViewHostViewModeChangeRequestedEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostViewModeChangeRequestedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVApplicationViewBackedViewHostItem@@AEBQEAVViewHostViewModeChangeRequestedEventArgs@@@Z @ 0x1802C7BE8 (--$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVViewHostViewModeChangeRequestedEven.c)
 */

__int64 __fastcall ApplicationViewBackedViewHostItem::ExitFullScreen(ApplicationViewBackedViewHostItem *this)
{
  _DWORD *v1; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  v1 = (_DWORD *)((char *)this + 228);
  *((_DWORD *)this + 57) = 0;
  Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(&v8);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<ViewHostViewModeChangeRequestedEventArgs,ViewHostViewModeChangeRequestedEventArgs,enum Windows::Internal::Shell::Holographic::ViewMode const &>(
         &v8,
         v1);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v9 = v8;
    v10 = (__int64)this - 16;
    v3 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<ApplicationViewBackedViewHostItem *,ViewHostViewModeChangeRequestedEventArgs *>(
           (char *)this + 456,
           &v10,
           &v9);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v4 = 0;
      goto LABEL_7;
    }
    v5 = 586LL;
  }
  else
  {
    v5 = 585LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
    (const char *)(unsigned int)v3);
LABEL_7:
  Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(&v8);
  return v4;
}
