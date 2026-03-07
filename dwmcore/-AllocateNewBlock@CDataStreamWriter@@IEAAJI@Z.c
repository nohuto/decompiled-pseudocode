__int64 __fastcall CDataStreamWriter::AllocateNewBlock(CDataStreamWriter *this, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v5; // ebp
  _DWORD *v6; // rax
  unsigned int v7; // ecx
  CDataStreamWriter *v8; // rcx
  unsigned int v9; // ebx
  CDataStreamWriter **v11; // rdx

  v2 = *((_DWORD *)this + 10);
  v5 = v2 + a2;
  if ( v2 + a2 < v2 )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0x221u, 0LL);
  }
  else
  {
    v6 = DefaultHeap::Alloc(a2 + 28LL);
    if ( v6 )
    {
      v6[5] = 0;
      *(_QWORD *)v6 = 0LL;
      *((_QWORD *)v6 + 1) = 0LL;
      v6[4] = a2;
      v8 = (CDataStreamWriter *)*((_QWORD *)this + 4);
      if ( v8 )
      {
        v11 = (CDataStreamWriter **)*((_QWORD *)this + 1);
        if ( *v11 != this )
          __fastfail(3u);
        *(_QWORD *)v8 = this;
        *((_QWORD *)v8 + 1) = v11;
        *v11 = v8;
        *((_QWORD *)this + 1) = v8;
      }
      *((_QWORD *)this + 4) = v6;
      *((_DWORD *)this + 10) = v5;
      return 0;
    }
    else
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x225u, 0LL);
    }
  }
  return v9;
}
