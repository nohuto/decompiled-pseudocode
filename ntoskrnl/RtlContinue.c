/*
 * XREFs of RtlContinue @ 0x1405AFBD8
 * Callers:
 *     <none>
 * Callees:
 *     NtContinueEx @ 0x140416740 (NtContinueEx.c)
 */

__int64 __fastcall RtlContinue(__int64 a1, __int64 a2)
{
  return NtContinueEx(a1, a2);
}
