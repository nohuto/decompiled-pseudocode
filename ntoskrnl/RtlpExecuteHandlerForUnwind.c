/*
 * XREFs of RtlpExecuteHandlerForUnwind @ 0x140421710
 * Callers:
 *     RtlUnwindEx @ 0x1402809E0 (RtlUnwindEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpExecuteHandlerForUnwind(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (*(__int64 (__fastcall **)(__int64))(a4 + 48))(a1);
}
