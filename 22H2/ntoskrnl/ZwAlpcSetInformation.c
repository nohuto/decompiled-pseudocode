/*
 * XREFs of ZwAlpcSetInformation @ 0x14041B840
 * Callers:
 *     DifZwAlpcSetInformationWrapper @ 0x1405EDA30 (DifZwAlpcSetInformationWrapper.c)
 *     SshpAlpcInitialize @ 0x140B680A4 (SshpAlpcInitialize.c)
 *     PopUmpoInitializeChannel @ 0x140B70C0C (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140B72254 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSetInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
