/*
 * XREFs of _ViewEventDispatcher::ViewCreated_::_1_::catch$17 @ 0x180319045
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z @ 0x18032CCE0 (-CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z.c)
 */

__int64 __fastcall ViewEventDispatcher::ViewCreated_::_1_::catch_17(__int64 a1, __int64 a2)
{
  ViewManagerBridge::CloseViewForScenario(
    *(_QWORD *)(*(_QWORD *)(a2 + 152) + 496LL),
    *(unsigned int *)(a2 + 112),
    *(_QWORD *)(a2 + 128),
    1LL);
  return 0LL;
}
