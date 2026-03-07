CMILCOMWeakRef *__fastcall CMILCOMWeakRef::`scalar deleting destructor'(CMILCOMWeakRef *this, char a2)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
