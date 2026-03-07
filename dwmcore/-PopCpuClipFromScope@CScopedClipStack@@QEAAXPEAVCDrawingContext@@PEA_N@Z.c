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
