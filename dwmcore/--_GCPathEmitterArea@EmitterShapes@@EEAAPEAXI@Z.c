/*
 * XREFs of ??_GCPathEmitterArea@EmitterShapes@@EEAAPEAXI@Z @ 0x180266020
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

EmitterShapes::CPathEmitterArea *__fastcall EmitterShapes::CPathEmitterArea::`scalar deleting destructor'(
        EmitterShapes::CPathEmitterArea *this,
        char a2)
{
  void *v4; // rcx

  v4 = (void *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, 4 * ((__int64)(*((_QWORD *)this + 5) - (_QWORD)v4) >> 2));
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
