_BOOL8 __fastcall CPointerInfoNode::IsFullyReleased(CPointerInfoNode *this)
{
  int v1; // eax
  int v2; // eax
  _BOOL8 result; // rax

  v1 = *(_DWORD *)this;
  result = 0;
  if ( (*(_DWORD *)this & 0x200000) != 0
    && ((v1 & 0x800000) == 0 || (v1 & 0x2000000) != 0)
    && ((v1 & 0x8000000) == 0 || (v1 & 0x20000000) != 0)
    && (v1 >= 0 || (*((_DWORD *)this + 1) & 2) != 0) )
  {
    v2 = *((_DWORD *)this + 1);
    if ( (v2 & 8) == 0 || (v2 & 0x20) != 0 )
      return 1;
  }
  return result;
}
