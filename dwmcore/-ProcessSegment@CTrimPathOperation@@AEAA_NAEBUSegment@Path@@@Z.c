char __fastcall CTrimPathOperation::ProcessSegment(CTrimPathOperation *this, const struct Path::Segment *a2)
{
  char v4; // dl
  __int64 v5; // rcx
  float v6; // xmm0_4
  CTrimPathOperation *v7; // rcx
  bool v9; // zf

  v4 = 0;
  if ( !*(_BYTE *)a2 )
  {
    *((_QWORD *)this + 6) = *(_QWORD *)a2;
    *((_QWORD *)this + 7) = *((_QWORD *)a2 + 1);
  }
  v5 = *((unsigned int *)this + 8);
  if ( (unsigned int)v5 < 2 )
  {
    v6 = *((float *)a2 + 1) + *((float *)this + 11);
    *((float *)this + 11) = v6;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + v5 + 6) - v6) & _xmm) <= 0.0000011920929 )
    {
      if ( !*(_BYTE *)a2 )
      {
        v9 = *((_BYTE *)this + 396) == 0;
        *((_BYTE *)this + 397) = 1;
        *((_BYTE *)this + 396) = v9;
        *((_DWORD *)this + 8) = v5 + 1;
      }
    }
    else if ( CTrimPathOperation::ShouldSplitCurrentSegment(this) )
    {
      CTrimPathOperation::SplitSegment(v7, a2);
      goto LABEL_8;
    }
    if ( *((_BYTE *)this + 396) == v4 )
    {
LABEL_8:
      CTrimPathOperation::UpdateCurrentEndPoint(this, a2);
      return 1;
    }
LABEL_7:
    CTrimPathOperation::AppendSegment(this, a2);
    goto LABEL_8;
  }
  if ( *((_BYTE *)this + 396) )
    goto LABEL_7;
  return 0;
}
