/*
 * XREFs of RtlInitMinimalBarrier @ 0x140AD25B8
 * Callers:
 *     sub_1403ED150 @ 0x1403ED150 (sub_1403ED150.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140AB9010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitMinimalBarrier(_DWORD *a1, int a2)
{
  __int64 result; // rax

  a1[1] = a2;
  result = 0LL;
  *a1 = a2;
  return result;
}
