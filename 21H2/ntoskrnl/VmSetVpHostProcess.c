/*
 * XREFs of VmSetVpHostProcess @ 0x1409D9920
 * Callers:
 *     <none>
 * Callees:
 *     PsSetVmProcessorHostProcess @ 0x1409AF410 (PsSetVmProcessorHostProcess.c)
 */

NTSTATUS __fastcall VmSetVpHostProcess(_QWORD *a1)
{
  return PsSetVmProcessorHostProcess(a1);
}
