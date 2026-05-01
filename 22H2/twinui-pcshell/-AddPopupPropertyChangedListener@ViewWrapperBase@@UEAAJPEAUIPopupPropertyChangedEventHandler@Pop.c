/*
 * XREFs of ?AddPopupPropertyChangedListener@ViewWrapperBase@@UEAAJPEAUIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18033D8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180050CD0 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Int.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$CreateAgileHelper@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAUIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@PEAPEAU34567@@Z @ 0x18033B144 (--$CreateAgileHelper@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@@Details@.c)
 */

__int64 __fastcall ViewWrapperBase::AddPopupPropertyChangedListener(
        ViewWrapperBase *this,
        struct Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler *a2,
        struct IUnknown **a3)
{
  int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown *v9; // [rsp+30h] [rbp+8h] BYREF

  if ( !a2 )
  {
    v6 = -2147024809;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39B,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  v6 = Microsoft::WRL::Details::CreateAgileHelper<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler>(
         (__int64)a2,
         (__int64 *)&v9);
  if ( v6 >= 0 )
  {
    if ( v9 )
      v6 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
             (_QWORD *)this + 39,
             v9,
             *(void **)(*(_QWORD *)a2 + 24LL),
             a3);
    else
      v6 = -2147024809;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  if ( v6 < 0 )
    goto LABEL_8;
  return (unsigned int)v6;
}
