__int64 __fastcall CCD_TOPOLOGY::FindPathDescriptorByTarget(
        CCD_TOPOLOGY *this,
        const struct _LUID *a2,
        int a3,
        unsigned int *a4)
{
  unsigned int i; // ebx
  __int64 v10; // rax
  unsigned __int16 v11; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax

  if ( a3 == -1 )
    return 3223191554LL;
  if ( !*((_QWORD *)this + 8) )
    return 3221225485LL;
  for ( i = 0; ; ++i )
  {
    v10 = *((_QWORD *)this + 8);
    if ( v10 )
      v11 = *(_WORD *)(v10 + 20);
    else
      v11 = 0;
    if ( i >= v11 )
      return 3221226021LL;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( *((_DWORD *)PathDescriptor + 4) == a2->LowPart
      && *((_DWORD *)PathDescriptor + 5) == a2->HighPart
      && *((_DWORD *)PathDescriptor + 7) == a3 )
    {
      break;
    }
  }
  if ( a4 )
    *a4 = i;
  return 0LL;
}
