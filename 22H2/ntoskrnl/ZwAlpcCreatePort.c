/*
 * XREFs of ZwAlpcCreatePort @ 0x14041B600
 * Callers:
 *     DifZwAlpcCreatePortWrapper @ 0x1405ED270 (DifZwAlpcCreatePortWrapper.c)
 *     SshpAlpcInitialize @ 0x140B680A4 (SshpAlpcInitialize.c)
 *     PopUmpoInitializeChannel @ 0x140B70C0C (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140B72254 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreatePort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
