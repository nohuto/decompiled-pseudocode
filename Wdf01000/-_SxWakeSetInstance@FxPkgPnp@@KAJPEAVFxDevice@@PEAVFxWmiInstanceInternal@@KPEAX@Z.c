/*
 * XREFs of ?_SxWakeSetInstance@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KPEAX@Z @ 0x1C0076680
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z @ 0x1C0075088 (-PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z.c)
 */

__int64 __fastcall FxPkgPnp::_SxWakeSetInstance(
        FxDevice *Device,
        FxWmiInstanceInternal *__formal,
        unsigned int a3,
        unsigned __int8 *InBuffer)
{
  FxPkgPnp::PowerPolicySetSxWakeState(Device->m_PkgPnp, *InBuffer);
  return 0LL;
}
