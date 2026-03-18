/*
 * XREFs of ZwAlpcCancelMessage @ 0x14041C660
 * Callers:
 *     PopUmpoProcessMessage @ 0x1407EFC00 (PopUmpoProcessMessage.c)
 *     SshpAlpcProcessAlpcMessage @ 0x14081AFCC (SshpAlpcProcessAlpcMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCancelMessage(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
