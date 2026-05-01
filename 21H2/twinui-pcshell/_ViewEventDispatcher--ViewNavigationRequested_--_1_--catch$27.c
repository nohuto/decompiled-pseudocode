/*
 * XREFs of _ViewEventDispatcher::ViewNavigationRequested_::_1_::catch$27 @ 0x18031A3A6
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z @ 0x18032CF50 (-CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z.c)
 */

__int64 __fastcall ViewEventDispatcher::ViewNavigationRequested_::_1_::catch_27(__int64 a1, __int64 a2)
{
  ViewManagerBridge::CloseViewForScenario(
    *(_QWORD *)(*(_QWORD *)(a2 + 232) + 496LL),
    *(unsigned int *)(a2 + 200),
    0LL,
    1LL);
  return 0LL;
}
