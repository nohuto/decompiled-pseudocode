/*
 * XREFs of ??$destruct_range@UCpuClipStackState@CScopedClipStack@@@detail@@YAXPEAUCpuClipStackState@CScopedClipStack@@0@Z @ 0x1800221EC
 * Callers:
 *     ?clear_region@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180022074 (-clear_region@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClipStackS.c)
 *     ?reserve_region@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUCpuClipStackState@CScopedClipStack@@_K0@Z @ 0x1800220F4 (-reserve_region@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClipStac.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x180073A60 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800DBA68 (-Release@CShapePtr@@QEAAXXZ.c)
 */

void __fastcall detail::destruct_range<CScopedClipStack::CpuClipStackState>(CShapePtr *this, CShapePtr *a2)
{
  CShapePtr *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      CShapePtr::Release(v3);
      v3 = (CShapePtr *)((char *)v3 + 40);
    }
    while ( v3 != a2 );
  }
}
