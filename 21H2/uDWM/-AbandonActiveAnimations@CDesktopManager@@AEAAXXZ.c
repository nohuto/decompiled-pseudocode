/*
 * XREFs of ?AbandonActiveAnimations@CDesktopManager@@AEAAXXZ @ 0x180085E08
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18004BF70 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x18003AEF4 (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 */

void __fastcall CDesktopManager::AbandonActiveAnimations(CDesktopManager *this)
{
  struct _SINGLE_LIST_ENTRY *i; // rbx

  for ( i = CDesktopManager::s_listTimeline.Next; i; i = i->Next )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&i[-2] & -(__int64)(i != 0LL)) + 0x48) )
      CTimelineBase::JumpToFinalValue((CTimelineBase *)((unsigned __int64)&i[-2] & -(__int64)(i != 0LL)));
  }
}
