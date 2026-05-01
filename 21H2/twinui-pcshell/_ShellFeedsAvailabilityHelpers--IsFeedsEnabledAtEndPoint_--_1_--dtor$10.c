/*
 * XREFs of _ShellFeedsAvailabilityHelpers::IsFeedsEnabledAtEndPoint_::_1_::dtor$10 @ 0x180115E8F
 * Callers:
 *     <none>
 * Callees:
 *     ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1801B774C (--1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall ShellFeedsAvailabilityHelpers::IsFeedsEnabledAtEndPoint_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 52) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 52) &= ~4u;
    Microsoft::WRL::Wrappers::HStringReference::~HStringReference((Microsoft::WRL::Wrappers::HStringReference *)(a2 + 120));
  }
}
