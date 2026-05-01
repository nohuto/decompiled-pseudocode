/*
 * XREFs of ?IsPinned@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@@Z @ 0x180159430
 * Callers:
 *     ?_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x180150C78 (-_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAU.c)
 *     ?_ProcessDestinationFolder@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAUIShellItem@@PEAPEAG@Z @ 0x180150FAC (-_ProcessDestinationFolder@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPE.c)
 *     ?IsPinned@CPinnedList@@W7EAAJPEFBU_ITEMIDLIST@@@Z @ 0x180171DF0 (-IsPinned@CPinnedList@@W7EAAJPEFBU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??1CPinList@@QEAA@XZ @ 0x180152C04 (--1CPinList@@QEAA@XZ.c)
 *     ?FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z @ 0x18015519C (-FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180159A1C (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPinnedList::IsPinned(CPinnedList *this, const struct _ITEMIDLIST *a2)
{
  int v3; // ebx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  v3 = CPinList::Load((CPinList *)&v5, (CPinnedList *)((char *)this - 16));
  if ( v3 >= 0 )
    v3 = CPinList::FindPidlOrAppID((HDSA *)&v5, a2, 0, 0LL) == 0LL;
  CPinList::~CPinList((CPinList *)&v5);
  return (unsigned int)v3;
}
