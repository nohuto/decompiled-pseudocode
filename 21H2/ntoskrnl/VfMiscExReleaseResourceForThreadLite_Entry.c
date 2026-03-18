/*
 * XREFs of VfMiscExReleaseResourceForThreadLite_Entry @ 0x140AA3E00
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscCheckResourceRelease @ 0x140AA579C (ViMiscCheckResourceRelease.c)
 */

__int64 __fastcall VfMiscExReleaseResourceForThreadLite_Entry(__int64 a1)
{
  return ViMiscCheckResourceRelease(*(_QWORD *)(a1 + 16));
}
