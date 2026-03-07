CCrossContainerGuestReadWriteSharedSection *__fastcall CCrossContainerGuestReadWriteSharedSection::`scalar deleting destructor'(
        CCrossContainerGuestReadWriteSharedSection *this,
        char a2)
{
  *(_QWORD *)this = &CCrossContainerGuestReadWriteSharedSection::`vftable';
  CSharedSectionBase::~CSharedSectionBase(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
