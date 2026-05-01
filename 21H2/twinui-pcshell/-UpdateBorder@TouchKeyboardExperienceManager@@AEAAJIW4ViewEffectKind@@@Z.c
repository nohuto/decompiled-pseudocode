/*
 * XREFs of ?UpdateBorder@TouchKeyboardExperienceManager@@AEAAJIW4ViewEffectKind@@@Z @ 0x1803C40A8
 * Callers:
 *     _lambda_13e7c7d1bbe76ddb28a4a415717d5504_::operator() @ 0x1800CEBC4 (_lambda_13e7c7d1bbe76ddb28a4a415717d5504_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z @ 0x1803BA620 (-GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z.c)
 *     ?UpdateWindowAccent@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x1803C5EB8 (-UpdateWindowAccent@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@W4ACCENT_STATE@@KPEBUtagREC.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::UpdateBorder(TouchKeyboardExperienceManager *a1, int a2, int a3)
{
  __int64 v4; // rcx
  int FrameWindowByViewId; // ebx
  __int64 v6; // rdx
  __int64 v8; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HWND v10; // [rsp+58h] [rbp+20h] BYREF

  FrameWindowByViewId = TouchKeyboardExperienceManager::GetFrameWindowByViewId(a1, a2, &v10);
  if ( FrameWindowByViewId < 0 )
  {
    v6 = 3177LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)FrameWindowByViewId);
    return (unsigned int)FrameWindowByViewId;
  }
  v8 = 5LL;
  if ( a3 != 1 )
    v8 = 0LL;
  FrameWindowByViewId = TouchKeyboardExperienceManager::UpdateWindowAccent(v4, v10, v8);
  if ( FrameWindowByViewId < 0 )
  {
    v6 = 3178LL;
    goto LABEL_3;
  }
  return 0LL;
}
