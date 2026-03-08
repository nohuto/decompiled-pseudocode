/*
 * XREFs of ??$destruct_range@USinkEntry@CCpuClipAntialiasSinkContext@@@detail@@YAXPEAUSinkEntry@CCpuClipAntialiasSinkContext@@0@Z @ 0x1801FB19C
 * Callers:
 *     ?reserve_region@?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSinkEntry@CCpuClipAntialiasSinkContext@@_K0@Z @ 0x1800B1030 (-reserve_region@-$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USinkEnt.c)
 * Callees:
 *     ??_GSinkEntry@CCpuClipAntialiasSinkContext@@QEAAPEAXI@Z @ 0x1801FBF04 (--_GSinkEntry@CCpuClipAntialiasSinkContext@@QEAAPEAXI@Z.c)
 */

void *__fastcall detail::destruct_range<CCpuClipAntialiasSinkContext::SinkEntry>(
        CCpuClipAntialiasSinkContext::SinkEntry *this,
        CCpuClipAntialiasSinkContext::SinkEntry *a2)
{
  CCpuClipAntialiasSinkContext::SinkEntry *v3; // rbx
  void *result; // rax

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      result = CCpuClipAntialiasSinkContext::SinkEntry::`scalar deleting destructor'(v3, (unsigned int)a2);
      v3 = (CCpuClipAntialiasSinkContext::SinkEntry *)((char *)v3 + 432);
    }
    while ( v3 != a2 );
  }
  return result;
}
