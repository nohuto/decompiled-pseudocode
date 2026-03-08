/*
 * XREFs of NtQueryInformationByName @ 0x14076D1E0
 * Callers:
 *     <none>
 * Callees:
 *     IoQueryInformationByName @ 0x14076D210 (IoQueryInformationByName.c)
 */

__int64 __fastcall NtQueryInformationByName(__int64 a1, __int64 a2, __int64 a3)
{
  return IoQueryInformationByName(a1, a2, a3);
}
