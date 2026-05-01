/*
 * XREFs of ?GetExperienceManager@TaskContinuityActivitiesExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x18022F340
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCTaskContinuityActivitiesExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18022ECFC (--$MakeAndInitialize@VCTaskContinuityActivitiesExperienceManager@@UIInspectable@@AEAPEAUIService.c)
 */

__int64 __fastcall TaskContinuityActivitiesExperienceManagerFactory::GetExperienceManager(
        TaskContinuityActivitiesExperienceManagerFactory *this,
        struct IServiceProvider *a2,
        struct IInspectable **a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IServiceProvider *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  *a3 = 0LL;
  v3 = Microsoft::WRL::Details::MakeAndInitialize<CTaskContinuityActivitiesExperienceManager,IInspectable,IServiceProvider * &>(
         (CTaskContinuityActivitiesExperienceManager **)a3,
         &v7);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x115,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
