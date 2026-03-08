/*
 * XREFs of ??_GSinkEntry@CCpuClipAntialiasSinkContext@@QEAAPEAXI@Z @ 0x1801FBF04
 * Callers:
 *     ?reserve_region@?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSinkEntry@CCpuClipAntialiasSinkContext@@_K0@Z @ 0x1800B1030 (-reserve_region@-$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USinkEnt.c)
 *     ??$destruct_range@USinkEntry@CCpuClipAntialiasSinkContext@@@detail@@YAXPEAUSinkEntry@CCpuClipAntialiasSinkContext@@0@Z @ 0x1801FB19C (--$destruct_range@USinkEntry@CCpuClipAntialiasSinkContext@@@detail@@YAXPEAUSinkEntry@CCpuClipAnt.c)
 * Callees:
 *     ??1?$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000DA7C (--1-$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?clear@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180090BB4 (-clear@-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USinkR.c)
 */

CCpuClipAntialiasSinkContext::SinkEntry *__fastcall CCpuClipAntialiasSinkContext::SinkEntry::`scalar deleting destructor'(
        CCpuClipAntialiasSinkContext::SinkEntry *this)
{
  void **v1; // rbx
  void *v3; // rcx
  bool v4; // zf

  v1 = (void **)((char *)this + 8);
  detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 1);
  v3 = *v1;
  v4 = *v1 == v1 + 3;
  *v1 = 0LL;
  if ( v4 )
    v3 = 0LL;
  operator delete(v3);
  wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)this);
  return this;
}
