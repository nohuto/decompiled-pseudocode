__int64 __fastcall CCD_TOPOLOGY::CopyInheritScope(CCD_TOPOLOGY *this, const struct CCD_TOPOLOGY *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int16 v7; // bx
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // di
  __int64 v10; // rdi
  unsigned int i; // r14d
  __int64 v12; // rax
  unsigned __int16 v13; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR **v15; // r8
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  CCD_TOPOLOGY::Clear(this);
  v6 = *((_QWORD *)a2 + 8);
  v7 = 0;
  if ( v6 )
  {
    v8 = *(_WORD *)(v6 + 20);
    v9 = v8;
  }
  else
  {
    v8 = 0;
    v9 = 0;
  }
  if ( (unsigned __int16)CCD_TOPOLOGY::Reserve(this, v8, v4, v5) < v9 )
  {
    v20 = *((_QWORD *)a2 + 8);
    if ( v20 )
      v7 = *(_WORD *)(v20 + 20);
    WdLogSingleEntry2(6LL, this, v7);
    return 3221225495LL;
  }
  else
  {
    LODWORD(v10) = 0;
    for ( i = 0; ; ++i )
    {
      v12 = *((_QWORD *)a2 + 8);
      v13 = v12 ? *(_WORD *)(v12 + 20) : 0;
      if ( i >= v13 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, i);
      v16 = CCD_TOPOLOGY::AddPathDescriptor(this, PathDescriptor, v15);
      v10 = v16;
      if ( v16 < 0 )
      {
        v21 = *((_QWORD *)a2 + 8);
        if ( v21 )
          v7 = *(_WORD *)(v21 + 20);
        WdLogSingleEntry4(1LL, v10, i, this, v7);
        return (unsigned int)v10;
      }
    }
    v17 = *((_QWORD *)this + 8);
    if ( v17 )
    {
      v18 = *((_QWORD *)a2 + 8);
      if ( v18 )
      {
        *(_OWORD *)v17 = *(_OWORD *)v18;
        *(_DWORD *)(v17 + 16) = *(_DWORD *)(v18 + 16);
      }
    }
    return (unsigned int)v10;
  }
}
