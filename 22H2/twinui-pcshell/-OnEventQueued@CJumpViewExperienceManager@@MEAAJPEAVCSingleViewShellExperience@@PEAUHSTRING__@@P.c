/*
 * XREFs of ?OnEventQueued@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180247C50
 * Callers:
 *     <none>
 * Callees:
 *     ??8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z @ 0x18002A7A8 (--8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z @ 0x18008C230 (-DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CJumpViewExperienceManager::OnEventQueued(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        HSTRING a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  HSTRING_HEADER *v6; // rax
  unsigned int v7; // r8d
  int v8; // ebx
  __int64 v9; // rdx
  HSTRING_HEADER *v11; // rax
  unsigned int v12; // r8d
  HSTRING_HEADER *v13; // rax
  int v14[2]; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v15; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_QWORD *)v14 = a3;
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
         &v15,
         (const WCHAR **)&JumpViewExperienceEvents::DismissForLaunch,
         (unsigned int)a3);
  if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)v14, (__int64)v6) )
  {
    v8 = CJumpViewExperienceManager::DismissImpl((CJumpViewExperienceManager *)((char *)this - 64), 0);
    if ( v8 < 0 )
    {
      v9 = 677LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      return (unsigned int)v8;
    }
  }
  else
  {
    v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &v15,
            (const WCHAR **)&JumpViewExperienceEvents::DismissToCaller,
            v7);
    if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)v14, (__int64)v11) )
    {
      v8 = CJumpViewExperienceManager::DismissImpl((CJumpViewExperienceManager *)((char *)this - 64), 1);
      if ( v8 < 0 )
      {
        v9 = 682LL;
        goto LABEL_4;
      }
    }
    else
    {
      v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              &v15,
              (const WCHAR **)&JumpViewExperienceEvents::Focus,
              v12);
      if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)v14, (__int64)v13) )
      {
        if ( !*((_QWORD *)a2 + 3)
          || *((_DWORD *)a2 + 10) != 2
          || (v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 10) + 80LL))(*((_QWORD *)a2 + 10)), v8 >= 0) )
        {
          v8 = 0;
        }
        if ( v8 < 0 )
        {
          v9 = 686LL;
          goto LABEL_4;
        }
      }
    }
  }
  return 0LL;
}
