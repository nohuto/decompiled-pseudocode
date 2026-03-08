/*
 * XREFs of ??_Ebad_array_new_length@stdext@@UEAAPEAXI@Z @ 0x14000C730
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140005940 (--3@YAXPEAX_K@Z.c)
 */

stdext::bad_array_new_length *__fastcall stdext::bad_array_new_length::`vector deleting destructor'(
        stdext::bad_array_new_length *this,
        char a2)
{
  *(_QWORD *)this = &stdext::exception::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
