/*
 * XREFs of _lambda_399c9c665a4befe5d314cf92505d9655_::operator() @ 0x18009AB10
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_399c9c665a4befe5d314cf92505d9655___::Run @ 0x18009B120 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_399c9c665a4befe5d314cf92505d9655___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1802349F8 (-PostTargetedMessage@CToastCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_399c9c665a4befe5d314cf92505d9655_::operator()(_QWORD *a1)
{
  HRESULT v2; // eax
  wil::details::in1diag3 *v3; // rcx
  int v4; // eax
  __int64 v5; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+48h] [rbp+10h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp+18h] BYREF

  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v2 = CoCreateInstance(
         &GUID_31143611_ac65_4568_ae76_8a9dad50ea88,
         0LL,
         0x17u,
         &GUID_2537d644_8c2f_4449_b8b6_10928822630c,
         &ppv);
  v3 = retaddr;
  if ( v2 < 0 )
    goto LABEL_6;
  v8 = 1;
  v4 = (*(__int64 (__fastcall **)(LPVOID, const wchar_t *, int *))(*(_QWORD *)ppv + 120LL))(ppv, L"ActionCenter", &v8);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x358,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  if ( !v8 )
  {
    v2 = CToastCenterExperienceManager::PostTargetedMessage(*a1, 6LL, v5);
    v3 = retaddr;
    if ( v2 < 0 )
LABEL_6:
      wil::details::in1diag3::_Log_Hr(
        v3,
        (void *)0x358,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
}
