/*
 * XREFs of ?DecrementNumVmProcesses@DXGPROCESSVMWP@@QEAAXXZ @ 0x1C00565C8
 * Callers:
 *     ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1C0343ABC (-DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ.c)
 * Callees:
 *     ?DecrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0343828 (-DecrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESSVMWP::DecrementNumVmProcesses(DXGVIRTUALMACHINE **this)
{
  DXGVIRTUALMACHINE::DecrementNumVmProcesses(this[76]);
}
