/*
 * XREFs of RtlpExecuteHandlerForUnwind @ 0x140408AA0
 * Callers:
 *     RtlUnwindEx @ 0x140275A30 (RtlUnwindEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpExecuteHandlerForUnwind(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (*(__int64 (__fastcall **)(__int64))(a4 + 48))(a1);
}
