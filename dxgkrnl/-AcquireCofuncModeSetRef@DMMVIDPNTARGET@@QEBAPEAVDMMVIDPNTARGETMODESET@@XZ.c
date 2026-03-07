struct DMMVIDPNTARGETMODESET *__fastcall DMMVIDPNTARGET::AcquireCofuncModeSetRef(DMMVIDPNTARGET *this)
{
  struct DMMVIDPNTARGETMODESET *result; // rax

  result = (struct DMMVIDPNTARGETMODESET *)*((_QWORD *)this + 13);
  if ( result )
  {
    _InterlockedIncrement((volatile signed __int32 *)result + 24);
    return (struct DMMVIDPNTARGETMODESET *)*((_QWORD *)this + 13);
  }
  return result;
}
