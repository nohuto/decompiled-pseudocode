/*
 * XREFs of VfMiscExReleaseResourceLite_Entry @ 0x140ABD830
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscCheckResourceRelease @ 0x140ADE4BC (ViMiscCheckResourceRelease.c)
 */

__int64 __fastcall VfMiscExReleaseResourceLite_Entry(__int64 a1)
{
  return ViMiscCheckResourceRelease(*(_QWORD *)(a1 + 8));
}
