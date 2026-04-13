/*
 * XREFs of ?put_CurrentState@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@UEAAJW4TargetedContentTriggerState@2345@@Z @ 0x180063610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::put_CurrentState(
        __int64 a1,
        int a2)
{
  *(_DWORD *)(a1 + 72) = a2;
  return 0LL;
}
