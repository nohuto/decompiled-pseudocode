/*
 * XREFs of RtlpLoadPrimaryDbgRegWrap @ 0x1800A2640
 * Callers:
 *     RtlpUmsExecuteYieldThreadEnd @ 0x1800A25B6 (RtlpUmsExecuteYieldThreadEnd.c)
 * Callees:
 *     RtlpLoadUmsDebugRegisterState @ 0x18010DAD0 (RtlpLoadUmsDebugRegisterState.c)
 */

__int64 __fastcall RtlpLoadPrimaryDbgRegWrap()
{
  __int64 v0; // r10

  return RtlpLoadUmsDebugRegisterState(v0);
}
