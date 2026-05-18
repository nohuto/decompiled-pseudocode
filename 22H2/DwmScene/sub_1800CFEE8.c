/*
 * XREFs of sub_1800CFEE8 @ 0x1800CFEE8
 * Callers:
 *     sub_18012A0C5 @ 0x18012A0C5 (sub_18012A0C5.c)
 *     sub_18012A110 @ 0x18012A110 (sub_18012A110.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800CFEE8(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  *a1 = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  return result;
}
