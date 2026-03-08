/*
 * XREFs of VfMiscExReleaseResourceForThreadLite_Entry @ 0x140ADCC50
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscCheckResourceRelease @ 0x140ADE4BC (ViMiscCheckResourceRelease.c)
 */

__int64 __fastcall VfMiscExReleaseResourceForThreadLite_Entry(__int64 a1)
{
  return ViMiscCheckResourceRelease(*(_QWORD *)(a1 + 16));
}
