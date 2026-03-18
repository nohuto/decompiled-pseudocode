/*
 * XREFs of ?Release@CMonitorTopology@@QEAAXXZ @ 0x1C00BFC8C
 * Callers:
 *     ?UpdateCurrent@CTopologyManager@@SAXXZ @ 0x1C00BF568 (-UpdateCurrent@CTopologyManager@@SAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CMonitorTopology::Release(CMonitorTopology *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF) == 1 )
    Win32FreePool(this);
}
