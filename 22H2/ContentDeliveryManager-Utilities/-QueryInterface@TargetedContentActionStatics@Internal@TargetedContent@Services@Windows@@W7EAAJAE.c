/*
 * XREFs of ?QueryInterface@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180058B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::QueryInterface(
           (Windows::Services::TargetedContent::Internal::TargetedContentActionStatics *)(a1 - 8),
           a2,
           a3);
}
