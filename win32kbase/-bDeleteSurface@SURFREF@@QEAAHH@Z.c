__int64 __fastcall SURFREF::bDeleteSurface(SURFREF *this)
{
  __int64 result; // rax

  result = SURFACE::bDeleteSurface(*(_QWORD *)this, 0LL, 0LL);
  if ( (_DWORD)result )
    *(_QWORD *)this = 0LL;
  return result;
}
