bool __fastcall CDirectFlipInfo::PresentNeeded(CDirectFlipInfo *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 121) )
    return (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 336LL))(*((_QWORD *)this + 2)) <= 2;
  return v1;
}
