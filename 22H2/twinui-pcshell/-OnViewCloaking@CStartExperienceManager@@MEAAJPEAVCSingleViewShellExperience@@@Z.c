/*
 * XREFs of ?OnViewCloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18000FA10
 * Callers:
 *     <none>
 * Callees:
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x18000FC9C (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_18000FC9C.c)
 *     ?ReducedVisualEffects@@YA_NXZ @ 0x18000FE6C (-ReducedVisualEffects@@YA_NXZ.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x18001B6F0 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 */

__int64 __fastcall CStartExperienceManager::OnViewCloaking(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // ebx
  int v5; // eax
  bool v7; // [rsp+40h] [rbp-38h] BYREF
  int v8; // [rsp+44h] [rbp-34h] BYREF
  struct tagRECT v9; // [rsp+48h] [rbp-30h] BYREF
  struct tagRECT v10; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( !*((_BYTE *)this + 568)
    && (int)CStartExperienceManager::GetMonitorInformation(
              (CStartExperienceManager *)((char *)this - 88),
              a2,
              &v10,
              (enum EDGEUI_TRAYSTUCKPLACE *)&v8,
              &v7,
              &v9,
              0LL) >= 0 )
  {
    v4 = 81;
    if ( *((_BYTE *)a2 + 52) )
    {
      v4 = 82;
    }
    else if ( v8 )
    {
      switch ( v8 )
      {
        case 1:
          v4 = 79;
          break;
        case 2:
          v4 = 78;
          break;
        case 3:
          v4 = 80;
          break;
      }
    }
    else
    {
      v4 = 77;
    }
    if ( !ReducedVisualEffects() )
    {
      v5 = CExperienceManagerAnimationHelper::Begin((char *)this + 504, *((_QWORD *)this + 31), v4 | 0x200000u, 0LL);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x252,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
          (const char *)(unsigned int)v5,
          0);
    }
  }
  return 0LL;
}
