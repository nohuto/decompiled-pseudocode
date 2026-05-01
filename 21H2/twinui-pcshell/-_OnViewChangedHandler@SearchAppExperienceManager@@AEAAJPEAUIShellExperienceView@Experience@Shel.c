/*
 * XREFs of ?_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18007DB10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ApplyPriorityBoostIfNeeded@SearchAppExperienceManager@@AEAAJXZ @ 0x18007DC84 (-_ApplyPriorityBoostIfNeeded@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_ApplyPriorityUnboostIfNeeded@SearchAppExperienceManager@@AEAAJXZ @ 0x18007DDD8 (-_ApplyPriorityUnboostIfNeeded@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_OnViewUncloaked@SearchAppExperienceManager@@AEAAJXZ @ 0x1800AB380 (-_OnViewUncloaked@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_BackPortSearchFullActivationTest@@@details@wil@@QEAA_NXZ @ 0x1800AB700 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_BackPortSearchFullActivationTest@.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_OnViewCreated@SearchAppExperienceManager@@AEAAJXZ @ 0x180266624 (-_OnViewCreated@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_OnViewDestroyed@SearchAppExperienceManager@@AEAAJXZ @ 0x180266828 (-_OnViewDestroyed@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1804E6194 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

__int64 __fastcall SearchAppExperienceManager::_OnViewChangedHandler(
        ExperienceManagerUtils **this,
        struct Windows::Internal::Shell::Experience::IShellExperienceView *a2,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *a3)
{
  int v5; // edi
  __int64 v6; // rdx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v15; // [rsp+40h] [rbp+18h] BYREF
  int v16; // [rsp+48h] [rbp+20h] BYREF

  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v16);
  if ( v5 < 0 )
  {
    v6 = 1588LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  switch ( v16 )
  {
    case 0:
      v12 = *(_QWORD *)a3;
      v15 = 0;
      v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *, int *))(v12 + 56))(
             a3,
             &v15);
      if ( v5 < 0 )
      {
        v6 = 1594LL;
        goto LABEL_3;
      }
      v9 = ExperienceManagerUtils::PostToUIThread(this[51], (struct IUnknown *)this, (void *)v15, v13);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 1633LL;
        goto LABEL_25;
      }
      return 0;
    case 1:
      ++*((_DWORD *)this + 135);
      v9 = SearchAppExperienceManager::_ApplyPriorityBoostIfNeeded((SearchAppExperienceManager *)this);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 1640LL;
        goto LABEL_25;
      }
      return 0;
    case 2:
      v8 = *((_DWORD *)this + 135);
      if ( v8 )
        *((_DWORD *)this + 135) = v8 - 1;
      v9 = SearchAppExperienceManager::_ApplyPriorityUnboostIfNeeded((SearchAppExperienceManager *)this);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 1652LL;
LABEL_25:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
          (const char *)(unsigned int)v9);
        return v10;
      }
      return 0;
    case 5:
      return SearchAppExperienceManager::_OnViewCreated((SearchAppExperienceManager *)this);
    case 6:
      return SearchAppExperienceManager::_OnViewDestroyed((SearchAppExperienceManager *)this);
  }
  if ( v16 == 11
    && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_BackPortSearchFullActivationTest>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_BackPortSearchFullActivationTest>::GetImpl'::`2'::impl) )
  {
    return SearchAppExperienceManager::_OnViewUncloaked((SearchAppExperienceManager *)this);
  }
  return 0LL;
}
