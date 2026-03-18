/*
 * XREFs of VmSetVpHostProcess @ 0x1409DCB70
 * Callers:
 *     <none>
 * Callees:
 *     PsSetVmProcessorHostProcess @ 0x1409B0B68 (PsSetVmProcessorHostProcess.c)
 */

void __fastcall VmSetVpHostProcess(_QWORD *a1)
{
  PsSetVmProcessorHostProcess(a1);
}
