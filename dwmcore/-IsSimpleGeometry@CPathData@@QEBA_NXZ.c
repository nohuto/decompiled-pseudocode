bool __fastcall CPathData::IsSimpleGeometry(CPathData *this)
{
  char v1; // al
  _BYTE *v4; // rax
  _BYTE *v5; // rbx
  _BYTE *i; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_BYTE *)this + 72);
  if ( !v1 )
  {
    v4 = (_BYTE *)*((_QWORD *)this + 2);
    v5 = (_BYTE *)*((_QWORD *)this + 3);
    for ( i = v4; ; v4 = i )
    {
      if ( v4 == v5 )
      {
        v1 = 1;
        goto LABEL_8;
      }
      if ( (unsigned __int8)(*v4 - 3) <= 1u )
        break;
      Path::SegmentCollection::const_iterator::operator++(&i);
    }
    v1 = -1;
LABEL_8:
    *((_BYTE *)this + 72) = v1;
  }
  return v1 == 1;
}
