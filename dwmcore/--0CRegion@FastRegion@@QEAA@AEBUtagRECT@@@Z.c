FastRegion::CRegion *__fastcall FastRegion::CRegion::CRegion(FastRegion::CRegion *this, const struct tagRECT *a2)
{
  _DWORD *v2; // r8
  LONG right; // r10d
  LONG left; // r11d
  LONG top; // eax
  LONG bottom; // ebx

  v2 = (_DWORD *)((char *)this + 8);
  *(_QWORD *)this = (char *)this + 8;
  right = a2->right;
  left = a2->left;
  if ( a2->left >= right || (top = a2->top, bottom = a2->bottom, top >= bottom) )
  {
    *v2 = 0;
  }
  else
  {
    *v2 = 2;
    *((_DWORD *)this + 9) = left;
    *((_DWORD *)this + 5) = top;
    *((_DWORD *)this + 10) = right;
    *((_DWORD *)this + 6) = 16;
    *((_DWORD *)this + 3) = left;
    *((_DWORD *)this + 4) = right;
    *((_DWORD *)this + 8) = 16;
    *((_DWORD *)this + 7) = bottom;
  }
  return this;
}
