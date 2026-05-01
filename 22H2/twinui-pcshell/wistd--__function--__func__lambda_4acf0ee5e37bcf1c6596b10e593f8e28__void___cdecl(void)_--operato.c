/*
 * XREFs of wistd::__function::__func__lambda_4acf0ee5e37bcf1c6596b10e593f8e28__void___cdecl(void)_::operator() @ 0x18021DD80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18021CB0C (--$As@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@WeakRef@WRL@Microsoft@.c)
 *     ?PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x18021FA34 (-PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_4acf0ee5e37bcf1c6596b10e593f8e28__void___cdecl_void__::operator()(
        __int64 a1)
{
  __int64 v2; // r8
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IInspectable *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  Microsoft::WRL::WeakRef::As<Windows::Internal::Shell::Experience::IActionCenterExperienceManager>(
    (Microsoft::WRL::WeakRef *)(a1 + 16),
    &v6);
  v3 = CActionCenterExperienceManager::PostTargetedMessage(*(_QWORD *)(a1 + 8), 0LL, v2);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2E9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
}
