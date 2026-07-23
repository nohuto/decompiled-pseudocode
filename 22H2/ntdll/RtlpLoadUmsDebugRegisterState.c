/*
 * XREFs of RtlpLoadUmsDebugRegisterState @ 0x18010DAD0
 * Callers:
 *     RtlpLoadPrimaryDbgRegWrap @ 0x1800A2640 (RtlpLoadPrimaryDbgRegWrap.c)
 *     RtlExecuteUmsThread @ 0x1800F71F0 (RtlExecuteUmsThread.c)
 * Callees:
 *     RtlpCopyLegacyContext @ 0x1800532C8 (RtlpCopyLegacyContext.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     ZwContinue @ 0x18009DD40 (ZwContinue.c)
 */

NTSTATUS __fastcall RtlpLoadUmsDebugRegisterState(__int64 a1)
{
  struct _CONTEXT ContextRecord; // [rsp+20h] [rbp-4E8h] BYREF

  if ( !a1 )
    return -1073741811;
  RtlpCopyLegacyContext(a1, (__int64)&ContextRecord, 1048592);
  return ZwContinue(&ContextRecord, 0);
}
