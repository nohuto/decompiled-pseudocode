/*
 * XREFs of ?GetLastActiveItem@HolographicViewHostItemLedger@@WBA@EAAJPEAPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x180167130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HolographicViewHostItemLedger::GetLastActiveItem(
        __int64 a1,
        struct Windows::Internal::Shell::Holographic::IViewHostItem **a2)
{
  return HolographicViewHostItemLedger::GetLastActiveItem((HolographicViewHostItemLedger *)(a1 - 16), a2);
}
