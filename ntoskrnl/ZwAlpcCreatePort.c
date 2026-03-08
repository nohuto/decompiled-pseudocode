/*
 * XREFs of ZwAlpcCreatePort @ 0x140413270
 * Callers:
 *     DifZwAlpcCreatePortWrapper @ 0x1405EADC0 (DifZwAlpcCreatePortWrapper.c)
 *     SshpAlpcInitialize @ 0x140B6437C (SshpAlpcInitialize.c)
 *     PopUmpoInitializeChannel @ 0x140B6CC1C (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140B6DF34 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCreatePort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
