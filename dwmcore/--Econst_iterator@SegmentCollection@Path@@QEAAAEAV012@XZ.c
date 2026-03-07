_QWORD *__fastcall Path::SegmentCollection::const_iterator::operator++(_BYTE **a1)
{
  _QWORD *v1; // rbx

  v1 = a1;
  LOBYTE(a1) = **a1;
  *v1 += (unsigned int)Path::Segment::GetSize(a1);
  return v1;
}
