__int64 __fastcall XDCOBJ::SaveAttributesHelper(XDCOBJ *this)
{
  unsigned int v1; // ebx
  struct _DC_ATTR *UserAttr; // rax

  v1 = 0;
  if ( *((_DWORD *)this + 3) )
    return 1LL;
  UserAttr = XDCOBJ::GetUserAttr(this);
  if ( !UserAttr )
    return 1LL;
  LOBYTE(v1) = DC::SaveAttributes(*(DC **)this, UserAttr) != 0;
  return v1;
}
