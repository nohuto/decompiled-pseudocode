/*
 * XREFs of _CActionCenterExperienceManager::OnEventQueued_::_1_::dtor$11 @ 0x180173704
 * Callers:
 *     <none>
 * Callees:
 *     ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1801B774C (--1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CActionCenterExperienceManager::OnEventQueued_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~4u;
    Microsoft::WRL::Wrappers::HStringReference::~HStringReference((Microsoft::WRL::Wrappers::HStringReference *)(a2 + 672));
  }
}
