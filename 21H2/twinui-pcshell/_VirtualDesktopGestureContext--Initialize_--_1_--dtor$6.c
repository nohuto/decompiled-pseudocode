/*
 * XREFs of _VirtualDesktopGestureContext::Initialize_::_1_::dtor$6 @ 0x1804B38D5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopGestureContext::Initialize_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>::~ComPtr<VirtualDesktopGestureWindow>(
           (__int64 *)(a2 + 64),
           (volatile int *)a2);
}
