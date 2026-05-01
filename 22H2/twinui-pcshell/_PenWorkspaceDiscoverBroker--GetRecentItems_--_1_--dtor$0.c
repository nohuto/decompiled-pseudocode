/*
 * XREFs of _PenWorkspaceDiscoverBroker::GetRecentItems_::_1_::dtor$0 @ 0x18028B533
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PenWorkspaceDiscoverBroker::GetRecentItems_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::vector<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>::~vector<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>(a2 + 32);
}
