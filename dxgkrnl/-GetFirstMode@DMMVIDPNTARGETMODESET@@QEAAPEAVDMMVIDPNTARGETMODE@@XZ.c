struct DMMVIDPNTARGETMODE *__fastcall DMMVIDPNTARGETMODESET::GetFirstMode(DMMVIDPNTARGETMODESET *this)
{
  _QWORD *v1; // rcx

  v1 = (_QWORD *)((char *)this + 48);
  if ( (_QWORD *)*v1 == v1 )
    return 0LL;
  else
    return (struct DMMVIDPNTARGETMODE *)(*v1 - 8LL);
}
