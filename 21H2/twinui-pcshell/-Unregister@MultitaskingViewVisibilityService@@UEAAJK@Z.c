/*
 * XREFs of ?Unregister@MultitaskingViewVisibilityService@@UEAAJK@Z @ 0x1803F1F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MultitaskingViewVisibilityService::Unregister(
        MultitaskingViewVisibilityService *this,
        unsigned int a2)
{
  return CGITRegistrationList::Unregister((MultitaskingViewVisibilityService *)((char *)this + 72), a2);
}
