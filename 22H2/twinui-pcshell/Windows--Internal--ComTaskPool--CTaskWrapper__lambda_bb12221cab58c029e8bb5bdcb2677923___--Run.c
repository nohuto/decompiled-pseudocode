/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bb12221cab58c029e8bb5bdcb2677923___::Run @ 0x1803DFE70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x180077F9C (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 */

void Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bb12221cab58c029e8bb5bdcb2677923___::Run()
{
  int v0; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v0 = ActivateApplicationForExperienceWithPropertySet(
         (const unsigned __int16 *)qword_180652F78,
         &szAgent,
         (__int64)L"AccessibilityExperienceId",
         0LL,
         1u,
         0LL);
  if ( v0 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A8,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v0);
}
