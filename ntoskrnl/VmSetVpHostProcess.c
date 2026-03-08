/*
 * XREFs of VmSetVpHostProcess @ 0x1409D9CD0
 * Callers:
 *     <none>
 * Callees:
 *     PsSetVmProcessorHostProcess @ 0x1409ADB18 (PsSetVmProcessorHostProcess.c)
 */

void __fastcall VmSetVpHostProcess(_QWORD *a1)
{
  PsSetVmProcessorHostProcess(a1);
}
