/*
 * XREFs of ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x1801D7918
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x18005CF00 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 * Callees:
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x18008F054 (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x180090A0C (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 *     ?clear_region@?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180090BE4 (-clear_region@-$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USinkEntry.c)
 *     ?pop_back@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801D7A4C (-pop_back@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClipStackState.c)
 */

void __fastcall CScopedClipStack::PopCpuClipFromScope(CScopedClipStack *this, struct CDrawingContext *a2, bool *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rsi
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  bool v9; // al
  int v10; // eax

  v3 = *((_QWORD *)this + 234);
  v4 = (__int64 *)((char *)this + 8);
  v7 = *(unsigned int *)(v3 - 24);
  if ( *(_BYTE *)(v3 - 4) )
  {
    v8 = *v4;
    CCpuClipAntialiasSinkContext::FlushDrawList(
      *(CCpuClipAntialiasSinkContext **)(*v4 - 16),
      a2,
      1749801491
    * ((__int64)(*(_QWORD *)(*(_QWORD *)(*v4 - 16) + 24LL) - *(_QWORD *)(*(_QWORD *)(*v4 - 16) + 16LL)) >> 4)
    - 1);
    detail::vector_facade<CCpuClipAntialiasSinkContext::SinkEntry,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)(*(_QWORD *)(v8 - 16) + 16LL),
      0x84BDA12F684BDA13uLL
    * ((*(_QWORD *)(*(_QWORD *)(v8 - 16) + 24LL) - 432LL - *(_QWORD *)(*(_QWORD *)(v8 - 16) + 16LL)) >> 4),
      1LL);
  }
  detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::pop_back((char *)this + 1864);
  --*(_QWORD *)(*v4 - 176);
  if ( CScopedClipStack::HasCpuClipsInScope(this) )
    v9 = v7 > *(_QWORD *)(*((_QWORD *)this + 234) - 24LL);
  else
    v9 = (_DWORD)v7 != 0;
  *a3 = v9;
  v10 = *((_DWORD *)this + 580);
  if ( v10 )
    *((_DWORD *)this + 580) = v10 - 1;
  --*(_QWORD *)(*v4 - 168);
}
