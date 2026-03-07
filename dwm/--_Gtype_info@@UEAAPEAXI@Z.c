type_info *__fastcall type_info::`scalar deleting destructor'(type_info *this, char a2)
{
  *(_QWORD *)this = &type_info::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
