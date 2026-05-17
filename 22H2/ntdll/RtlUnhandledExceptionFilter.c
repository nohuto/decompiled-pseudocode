/*
 * XREFs of RtlUnhandledExceptionFilter @ 0x18009CE10
 * Callers:
 *     __raise_securityfailure @ 0x18008C934 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x18008C960 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnhandledExceptionFilter(__int64 a1)
{
  return RtlUnhandledExceptionFilter2(a1, &unk_18012277A);
}
