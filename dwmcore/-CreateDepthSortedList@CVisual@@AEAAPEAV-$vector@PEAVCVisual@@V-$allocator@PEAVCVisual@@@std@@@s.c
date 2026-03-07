_QWORD *__fastcall CVisual::CreateDepthSortedList(__int64 a1)
{
  _QWORD *DepthSortedList; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rax

  DepthSortedList = (_QWORD *)CVisual::GetDepthSortedList(a1);
  v3 = DepthSortedList;
  if ( DepthSortedList )
  {
    DepthSortedList[1] = *DepthSortedList;
  }
  else
  {
    v4 = operator new(0x18uLL);
    v3 = v4;
    if ( v4 )
    {
      *v4 = 0LL;
      v4[1] = 0LL;
      v4[2] = 0LL;
    }
    else
    {
      v3 = 0LL;
    }
    CVisual::SetDepthSortedList(a1, v3);
  }
  return v3;
}
