/*
 * XREFs of ?ShowWithStart@SearchAppExperienceManager@@UEAAJE@Z @ 0x18008B660
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartFullActivationTest@SearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800A9D58 (-StartFullActivationTest@SearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaA.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_BackPortSearchFullActivationTest@@@details@wil@@QEAA_NXZ @ 0x1800AB700 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_BackPortSearchFullActivationTest@.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SearchAppExperienceManager::ShowWithStart(SearchAppExperienceManager *this, char a2)
{
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // edi
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_BackPortSearchFullActivationTest>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_BackPortSearchFullActivationTest>::GetImpl'::`2'::impl) )
    SearchAppExperienceManager::StartFullActivationTest(this, 2LL, 0LL);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 53) + 72LL))(
         *((_QWORD *)this + 53),
         *((_QWORD *)this + 64),
         1LL);
  v6 = v4;
  if ( v4 >= 0 )
  {
    LOBYTE(v5) = a2;
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 54) + 104LL))(*((_QWORD *)this + 54), v5);
    v9 = v8;
    if ( v8 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3F5,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F4,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return v6;
  }
}
