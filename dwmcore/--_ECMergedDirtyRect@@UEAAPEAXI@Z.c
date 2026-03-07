CMergedDirtyRect *__fastcall CMergedDirtyRect::`vector deleting destructor'(CMergedDirtyRect *this, char a2)
{
  *(_QWORD *)this = &CMergedRectBase<4>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x60uLL);
  return this;
}
