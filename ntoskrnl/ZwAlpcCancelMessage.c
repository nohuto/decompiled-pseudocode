/*
 * XREFs of ZwAlpcCancelMessage @ 0x140413210
 * Callers:
 *     PopUmpoProcessMessage @ 0x14073B3C8 (PopUmpoProcessMessage.c)
 *     SshpAlpcProcessAlpcMessage @ 0x14084A04C (SshpAlpcProcessAlpcMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCancelMessage(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
