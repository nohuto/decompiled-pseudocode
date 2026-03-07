bool __fastcall DISPLAY_SOURCE::CheckSessionOwnership(DISPLAY_SOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl

  v4 = 0;
  if ( *((_QWORD *)this + 3) )
    return ***((_DWORD ***)this + 3) == (unsigned int)PsGetCurrentProcessSessionId(this, a2, a3, a4);
  return v4;
}
