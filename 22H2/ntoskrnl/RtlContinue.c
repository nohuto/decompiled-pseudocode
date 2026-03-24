/*
 * XREFs of RtlContinue @ 0x14058F8D8
 * Callers:
 *     <none>
 * Callees:
 *     NtContinueEx @ 0x1403FDCB0 (NtContinueEx.c)
 */

__int64 __fastcall RtlContinue(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // [rsp+20h] [rbp-8h]

  return NtContinueEx(a1, a2, a3, a4, v5);
}
