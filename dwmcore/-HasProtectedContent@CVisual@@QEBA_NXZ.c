char __fastcall CVisual::HasProtectedContent(CVisual *this)
{
  __int64 v2; // rcx
  char v3; // bl

  if ( (*((_BYTE *)this + 103) & 2) != 0 )
    return 1;
  v2 = *((_QWORD *)this + 32);
  v3 = 0;
  if ( v2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 56LL))(v2, 145LL)
      && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 216LL))(*((_QWORD *)this + 32)) )
    {
      return 1;
    }
  }
  return v3;
}
