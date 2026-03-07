_QWORD *__fastcall CMergedRectBase<4>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &CMergedRectBase<4>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
