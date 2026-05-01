/*
 * XREFs of _ShellFeedsAvailabilityHelpers::IsFeedsEnabledAtEndPoint_::_1_::dtor$19 @ 0x180115EF5
 * Callers:
 *     <none>
 * Callees:
 *     ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1801B774C (--1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall ShellFeedsAvailabilityHelpers::IsFeedsEnabledAtEndPoint_::_1_::dtor_19(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 52) & 0x10) != 0 )
  {
    *(_DWORD *)(a2 + 52) &= ~0x10u;
    Microsoft::WRL::Wrappers::HStringReference::~HStringReference((Microsoft::WRL::Wrappers::HStringReference *)(a2 + 120));
  }
}
