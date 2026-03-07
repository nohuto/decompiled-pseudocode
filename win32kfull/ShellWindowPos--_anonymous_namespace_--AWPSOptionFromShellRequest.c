__int64 __fastcall ShellWindowPos::_anonymous_namespace_::AWPSOptionFromShellRequest(const struct tagRECT *a1)
{
  LONG bottom; // r8d
  unsigned int v2; // edx
  __int64 result; // rax

  bottom = a1[1].bottom;
  if ( (bottom & 0x10) != 0 )
  {
    v2 = 160;
  }
  else
  {
    v2 = (a1[1].bottom & 1) + 128;
    if ( (bottom & 2) != 0 )
      v2 |= 2u;
  }
  if ( (bottom & 4) != 0 && !IsRectEmptyInl(a1) )
    v2 |= 4u;
  if ( (bottom & 8) != 0 && !IsRectEmptyInl(a1) )
    v2 |= 8u;
  result = v2 | 0x10;
  if ( (a1[1].bottom & 0x20) != 0 )
    return v2;
  return result;
}
