/*
 * XREFs of ?StartTimer@FxWatchdog@@QEAAXK@Z @ 0x1C00708C8
 * Callers:
 *     ?PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z @ 0x1C006E82C (-PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z.c)
 *     ?PowerPolicyEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C007D384 (-PowerPolicyEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z.c)
 * Callees:
 *     ?Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z @ 0x1C003FB10 (-Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z.c)
 *     ?Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z @ 0x1C003FB68 (-Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z.c)
 */

void __fastcall FxWatchdog::StartTimer(FxWatchdog *this, __int16 State)
{
  if ( State < 0 )
  {
    MxTimer::Initialize(&this->m_Timer, this, FxWatchdog::_WatchdogDpc, 0);
    this->m_CallingThread = KeGetCurrentThread();
    MxTimer::Start(
      &this->m_Timer,
      (_LARGE_INTEGER)((-(__int64)(this->m_PkgPnp->m_SharedPower.m_ExtendWatchDogTimer != 0) & 0xFFFFFF383B36FC00uLL)
                     - 6000000000LL),
      0);
  }
}
