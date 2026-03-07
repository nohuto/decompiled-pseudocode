CUnknown *__fastcall CUnknown::`scalar deleting destructor'(CUnknown *this, char a2)
{
  this->__vftable = (CUnknown_vtbl *)&off_1400D92C8;
  if ( (a2 & 1) != 0 )
    ExFreePool(this);
  return this;
}
