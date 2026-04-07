/*
 * XREFs of ?RecordLauncherRect@CLauncherAnimationBase@@IEAAXXZ @ 0x1800070B0
 * Callers:
 *     ?OnEndTransitionRequest@CLauncherLaunch@@UEAAJXZ @ 0x180007030 (-OnEndTransitionRequest@CLauncherLaunch@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ @ 0x180007060 (-OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ.c)
 * Callees:
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180018ACC (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 */

void __fastcall CLauncherAnimationBase::RecordLauncherRect(CLauncherAnimationBase *this)
{
  __int64 v2; // rax
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  struct _LIST_ENTRY *i; // rdx
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned int)GetDesktopID(1LL, &v5) )
  {
    v2 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31);
    if ( *(_QWORD *)(v2 + 96) == -1LL || *(_QWORD *)(v2 + 96) == v5 )
    {
      WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                               v5);
      for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
      {
        if ( ((__int64)i[38].Blink & 0xFFF) == 9 )
          *(struct _LIST_ENTRY *)((char *)this + 120) = i[3];
      }
    }
  }
}
