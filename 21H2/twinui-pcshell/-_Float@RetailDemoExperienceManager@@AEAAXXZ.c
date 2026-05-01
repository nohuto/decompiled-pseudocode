/*
 * XREFs of ?_Float@RetailDemoExperienceManager@@AEAAXXZ @ 0x18025D310
 * Callers:
 *     ?Float@RetailDemoExperienceManager@@UEAAJHHHH@Z @ 0x18025B770 (-Float@RetailDemoExperienceManager@@UEAAJHHHH@Z.c)
 *     ?_Show@RetailDemoExperienceManager@@AEAAXXZ @ 0x18025DB20 (-_Show@RetailDemoExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ @ 0x18025D844 (-_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_SetFrameRect@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z @ 0x18025D8D4 (-_SetFrameRect@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z.c)
 */

void __fastcall RetailDemoExperienceManager::_Float(RetailDemoExperienceManager *this)
{
  struct tagRECT v2; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_QWORD *)this + 25) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      255LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  RetailDemoExperienceManager::_RestoreWorkingArea(this);
  v2 = *(struct tagRECT *)((char *)this + 364);
  RetailDemoExperienceManager::_SetFrameRect(this, &v2);
}
