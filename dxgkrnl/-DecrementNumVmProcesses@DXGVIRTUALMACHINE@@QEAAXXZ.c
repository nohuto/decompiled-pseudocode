/*
 * XREFs of ?DecrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C033EDE8
 * Callers:
 *     ?DecrementNumVmProcesses@DXGPROCESSVMWP@@QEAAXXZ @ 0x1C0055728 (-DecrementNumVmProcesses@DXGPROCESSVMWP@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGVIRTUALMACHINE::DecrementNumVmProcesses(DXGVIRTUALMACHINE *this)
{
  _InterlockedDecrement((volatile signed __int32 *)this);
}
