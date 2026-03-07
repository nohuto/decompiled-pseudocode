CTranslateTransform *__fastcall CTranslateTransform::`vector deleting destructor'(CTranslateTransform *this, char a2)
{
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xA8uLL);
    else
      operator delete(this);
  }
  return this;
}
