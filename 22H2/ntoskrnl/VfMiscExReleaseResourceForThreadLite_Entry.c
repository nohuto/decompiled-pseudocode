/*
 * XREFs of VfMiscExReleaseResourceForThreadLite_Entry @ 0x140AE0C50
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscCheckResourceRelease @ 0x140AE24BC (ViMiscCheckResourceRelease.c)
 */

__int64 __fastcall VfMiscExReleaseResourceForThreadLite_Entry(__int64 a1)
{
  return ViMiscCheckResourceRelease(*(_QWORD *)(a1 + 16));
}
