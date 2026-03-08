/*
 * XREFs of ??_Ebad_alloc@std@@UEAAPEAXI@Z @ 0x140006130
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140005FB8 (--3@YAXPEAX@Z.c)
 *     _o___std_exception_destroy_0 @ 0x140006264 (_o___std_exception_destroy_0.c)
 */

std::bad_alloc *__fastcall std::bad_alloc::`vector deleting destructor'(std::bad_alloc *this, char a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0((char *)this + 8);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
