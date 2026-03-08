/*
 * XREFs of ??_Gtype_info@@UEAAPEAXI@Z @ 0x1400061F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140005FB8 (--3@YAXPEAX@Z.c)
 */

type_info *__fastcall type_info::`scalar deleting destructor'(type_info *this, char a2)
{
  *(_QWORD *)this = &type_info::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
