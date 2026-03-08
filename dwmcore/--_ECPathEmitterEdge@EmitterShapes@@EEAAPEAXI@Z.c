/*
 * XREFs of ??_ECPathEmitterEdge@EmitterShapes@@EEAAPEAXI@Z @ 0x1802660A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@YAXPEAUFigure@CPathEmitterEdge@EmitterShapes@@QEAU123@AEAV?$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@0@@Z @ 0x1802650FC (--$_Destroy_range@V-$allocator@UFigure@CPathEmitterEdge@EmitterShapes@@@std@@@std@@YAXPEAUFigure.c)
 */

EmitterShapes::CPathEmitterEdge *__fastcall EmitterShapes::CPathEmitterEdge::`vector deleting destructor'(
        EmitterShapes::CPathEmitterEdge *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<EmitterShapes::CPathEmitterEdge::Figure>>(v4, *((_QWORD *)this + 4));
    std::_Deallocate<16,0>(*((void **)this + 3), 8 * ((__int64)(*((_QWORD *)this + 5) - *((_QWORD *)this + 3)) >> 3));
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
