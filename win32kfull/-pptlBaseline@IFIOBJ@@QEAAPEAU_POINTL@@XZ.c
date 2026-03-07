struct _POINTL *__fastcall IFIOBJ::pptlBaseline(IFIOBJ *this)
{
  struct _POINTL *result; // rax
  __int64 v2; // r8

  result = (struct _POINTL *)((char *)this + 8);
  v2 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  *((_QWORD *)this + 1) = v2;
  if ( !(_DWORD)v2 && !*((_DWORD *)this + 3) )
    result->x = 1;
  return result;
}
