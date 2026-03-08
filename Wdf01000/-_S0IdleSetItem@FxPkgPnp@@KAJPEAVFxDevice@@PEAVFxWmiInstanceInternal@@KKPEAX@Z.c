/*
 * XREFs of ?_S0IdleSetItem@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KKPEAX@Z @ 0x1C00765F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z @ 0x1C0074D48 (-PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z.c)
 */

__int64 __fastcall FxPkgPnp::_S0IdleSetItem(
        FxDevice *Device,
        FxWmiInstanceInternal *__formal,
        unsigned int DataItemId,
        unsigned int InBufferSize,
        unsigned __int8 *InBuffer)
{
  if ( DataItemId )
    return 3221225488LL;
  if ( !InBufferSize )
    return 3221225507LL;
  FxPkgPnp::PowerPolicySetS0IdleState(Device->m_PkgPnp, *InBuffer);
  return 0LL;
}
