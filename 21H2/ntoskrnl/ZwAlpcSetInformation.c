/*
 * XREFs of ZwAlpcSetInformation @ 0x14041C900
 * Callers:
 *     DifZwAlpcSetInformationWrapper @ 0x14061D9D0 (DifZwAlpcSetInformationWrapper.c)
 *     SshpAlpcInitialize @ 0x140B2984C (SshpAlpcInitialize.c)
 *     PopUmpoInitializeChannel @ 0x140B2B9FC (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140B2CD08 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSetInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
