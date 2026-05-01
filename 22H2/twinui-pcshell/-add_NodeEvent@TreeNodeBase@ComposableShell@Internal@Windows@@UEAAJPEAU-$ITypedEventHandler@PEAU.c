/*
 * XREFs of ?add_NodeEvent@TreeNodeBase@ComposableShell@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUITreeNode@ComposableShell@Internal@Windows@@PEAUITreeNodeEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z @ 0x1802C51F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180050CD0 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CreateAgileHelper@U?$ITypedEventHandler@PEAUITreeNode@ComposableShell@Internal@Windows@@PEAUITreeNodeEventArgs@234@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAUITreeNode@ComposableShell@Internal@Windows@@PEAUITreeNodeEventArgs@234@@Foundation@Windows@@PEAPEAU345@@Z @ 0x1802B928C (--$CreateAgileHelper@U-$ITypedEventHandler@PEAUITreeNode@ComposableShell@Internal@Windows@@PEAUI.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::TreeNodeBase::add_NodeEvent(
        __int64 a1,
        __int64 a2,
        struct IUnknown **a3,
        const char *a4)
{
  _QWORD *v6; // rsi
  int v7; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown *v10; // [rsp+30h] [rbp+8h] BYREF

  v6 = (_QWORD *)(a1 + 64);
  if ( a2 )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    v7 = Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::ITreeNode *,Windows::Internal::ComposableShell::ITreeNodeEventArgs *>>(
           a2,
           (__int64 *)&v10);
    if ( v7 >= 0 )
    {
      if ( v10 )
        v7 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
               v6,
               v10,
               *(void **)(*(_QWORD *)a2 + 24LL),
               a3);
      else
        v7 = -2147024809;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    v7 = -2147024809;
  }
  try
  {
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        276LL,
        (__int64)"internal\\shellcommoncomposable\\inc\\TreeNodeBase.h",
        (const char *)(unsigned int)v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x117,
                           (__int64)"internal\\shellcommoncomposable\\inc\\TreeNodeBase.h",
                           a4);
  }
  return result;
}
