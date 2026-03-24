/*
 * XREFs of ??_GCPathEmitterArea@EmitterShapes@@UEAAPEAXI@Z @ 0x180208510
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

EmitterShapes::CPathEmitterArea *__fastcall EmitterShapes::CPathEmitterArea::`scalar deleting destructor'(
        EmitterShapes::CPathEmitterArea *this,
        char a2)
{
  void *v4; // rcx

  v4 = (void *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, 28 * ((*((_QWORD *)this + 6) - (_QWORD)v4) / 28LL));
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
