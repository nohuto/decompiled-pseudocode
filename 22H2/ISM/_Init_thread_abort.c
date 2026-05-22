/*
 * XREFs of _Init_thread_abort @ 0x18003C5D0
 * Callers:
 *     _InputSiteHierarchyManager::UpdateHierarchyFromInputSinkTreeCache_::_1_::dtor$4 @ 0x180050190 (_InputSiteHierarchyManager--UpdateHierarchyFromInputSinkTreeCache_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_abort(_DWORD *a1)
{
  EnterCriticalSection(&CriticalSection);
  *a1 = 0;
  LeaveCriticalSection(&CriticalSection);
  return Init_thread_notify();
}
