__int64 __fastcall SURFREF::bDeleteSurface(SURFREF *this, unsigned int a2)
{
  __int64 result; // rax

  result = SURFACE::bDeleteSurface(*(_QWORD *)this, 0LL, a2);
  if ( (_DWORD)result )
    *(_QWORD *)this = 0LL;
  return result;
}
