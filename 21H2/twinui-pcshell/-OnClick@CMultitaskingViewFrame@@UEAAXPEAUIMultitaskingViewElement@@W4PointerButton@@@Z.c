/*
 * XREFs of ?OnClick@CMultitaskingViewFrame@@UEAAXPEAUIMultitaskingViewElement@@W4PointerButton@@@Z @ 0x18040A3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x180409D78 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 */

__int64 __fastcall CMultitaskingViewFrame::OnClick(
        __int64 a1,
        struct IUnknown *a2,
        struct IMultitaskingViewElement *a3)
{
  ElementHelpers::IsSameElement(a2, *(struct IUnknown **)(a1 + 2496), a3);
  return AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___(a1 + 2432);
}
