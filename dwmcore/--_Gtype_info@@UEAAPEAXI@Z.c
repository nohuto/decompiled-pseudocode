/*
 * XREFs of ??_Gtype_info@@UEAAPEAXI@Z @ 0x18010ED40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 */

type_info *__fastcall type_info::`scalar deleting destructor'(type_info *this, char a2)
{
  *(_QWORD *)this = &type_info::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
