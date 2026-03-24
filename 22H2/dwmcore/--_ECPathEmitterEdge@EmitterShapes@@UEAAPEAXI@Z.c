/*
 * XREFs of ??_ECPathEmitterEdge@EmitterShapes@@UEAAPEAXI@Z @ 0x1802085A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@YAXPEAUFigure@CPathEmitterEdge@EmitterShapes@@0AEAV?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@0@@Z @ 0x1802074B0 (--$_Destroy_range@V-$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@YAXPEAUFigure.c)
 */

EmitterShapes::CPathEmitterEdge *__fastcall EmitterShapes::CPathEmitterEdge::`vector deleting destructor'(
        EmitterShapes::CPathEmitterEdge *this,
        char a2)
{
  void *v2; // rdi

  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<EmitterShapes::CPathEmitterEdge::Figure>>((__int64)v2, *((_QWORD *)this + 5));
    std::_Deallocate<16,0>(v2, 56 * ((*((_QWORD *)this + 6) - (_QWORD)v2) / 56LL));
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
