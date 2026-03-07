_QWORD *__fastcall Path::ControlPointCollection::const_iterator::operator++(_QWORD *a1)
{
  int v2; // ebx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *((_DWORD *)a1 + 4) + 1;
  *((_DWORD *)a1 + 4) = v2;
  if ( v2 == *(_DWORD *)Path::Segment::GetControlPoints(*a1, v4) )
  {
    *((_DWORD *)a1 + 4) = 0;
    do
      Path::SegmentCollection::const_iterator::operator++(a1);
    while ( *a1 != a1[1] && !*(_QWORD *)Path::Segment::GetControlPoints(*a1, v4) );
  }
  return a1;
}
