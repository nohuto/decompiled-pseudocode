/*
 * XREFs of ?RemoveAt@?$CTSimpleArray@UPendingMove@VirtualDesktopWindowMoveManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardCompareHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardMergeHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@@@QEAAJ_K@Z @ 0x1804B963C
 * Callers:
 *     ?ApplicationViewShown@VirtualDesktopWindowMoveManager@@UEAAJPEAUIApplicationView@@_K@Z @ 0x18007A6F0 (-ApplicationViewShown@VirtualDesktopWindowMoveManager@@UEAAJPEAUIApplicationView@@_K@Z.c)
 *     ?TrimPendingMoves@VirtualDesktopWindowMoveManager@@AEAAX_K@Z @ 0x1804B971C (-TrimPendingMoves@VirtualDesktopWindowMoveManager@@AEAAX_K@Z.c)
 * Callees:
 *     memmove_0 @ 0x180091313 (memmove_0.c)
 */

__int64 __fastcall CTSimpleArray<VirtualDesktopWindowMoveManager::PendingMove,4294967294,CTPolicyCoTaskMem<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardCompareHelper<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardMergeHelper<VirtualDesktopWindowMoveManager::PendingMove>>::RemoveAt(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = a1[1];
  if ( a2 >= v2 )
    return 2147650721LL;
  if ( a2 != v2 - 1 )
  {
    memmove_0((void *)(*a1 + 32 * a2), (const void *)(*a1 + 32 * a2 + 32), 32 * (v2 - a2) - 32);
    v2 = a1[1];
  }
  a1[1] = v2 - 1;
  return 0LL;
}
