/*
 * XREFs of KeIsKernelCetAuditModeEnabled @ 0x1403B5F78
 * Callers:
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

bool KeIsKernelCetAuditModeEnabled()
{
  return (_BYTE)KiKernelCetAuditModeEnabled != 0;
}
