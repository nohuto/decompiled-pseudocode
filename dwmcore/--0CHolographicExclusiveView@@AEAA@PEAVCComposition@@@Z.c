/*
 * XREFs of ??0CHolographicExclusiveView@@AEAA@PEAVCComposition@@@Z @ 0x1802A4BC8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CHolographicExclusiveView *__fastcall CHolographicExclusiveView::CHolographicExclusiveView(
        CHolographicExclusiveView *this,
        struct CComposition *a2)
{
  CHolographicExclusiveView *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *(_QWORD *)this = &CHolographicExclusiveView::`vftable';
  InitializeSRWLock((PSRWLOCK)this + 51);
  result = this;
  *((_QWORD *)this + 8) = *(_QWORD *)(*((_QWORD *)this + 2) + 264LL);
  return result;
}
