struct REGION *__fastcall DC::prgnVisSnap(DC *this)
{
  struct REGION *result; // rax
  bool v2; // zf
  struct REGION *v3; // r8

  if ( !*((_QWORD *)this + 145) )
    return (struct REGION *)*((_QWORD *)this + 143);
  if ( (*((_DWORD *)this + 10) & 2) == 0 )
    return (struct REGION *)*((_QWORD *)this + 143);
  v2 = !DC::bDpiScaledSurface(this);
  result = v3;
  if ( v2 )
    return (struct REGION *)*((_QWORD *)this + 143);
  return result;
}
