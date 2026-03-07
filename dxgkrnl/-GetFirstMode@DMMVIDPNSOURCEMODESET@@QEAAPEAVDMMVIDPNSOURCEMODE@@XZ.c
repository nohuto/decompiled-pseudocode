struct DMMVIDPNSOURCEMODE *__fastcall DMMVIDPNSOURCEMODESET::GetFirstMode(DMMVIDPNSOURCEMODESET *this)
{
  _QWORD *v1; // rcx

  v1 = (_QWORD *)((char *)this + 48);
  if ( (_QWORD *)*v1 == v1 )
    return 0LL;
  else
    return (struct DMMVIDPNSOURCEMODE *)(*v1 - 8LL);
}
