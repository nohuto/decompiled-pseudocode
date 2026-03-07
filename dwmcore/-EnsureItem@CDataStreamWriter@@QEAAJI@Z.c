__int64 __fastcall CDataStreamWriter::EnsureItem(CDataStreamWriter *this, unsigned int a2)
{
  unsigned int v2; // eax
  CDataStreamWriter *v3; // rsi
  unsigned int v4; // ebx
  unsigned int v5; // r14d
  _DWORD *v6; // rcx
  unsigned int v7; // ebp
  unsigned int v9; // edx
  unsigned int v10; // eax
  int v11; // r8d
  CDataStreamWriter **v12; // rax
  CDataStreamWriter *v13; // rdx
  CDataStreamWriter **v14; // rax
  int v15; // eax
  int NewBlock; // eax
  unsigned int v17; // ecx
  CDataStreamWriter **v18; // rdx
  unsigned int v19; // ecx
  unsigned int v20; // [rsp+20h] [rbp-18h]

  v2 = a2 + 4;
  v3 = this;
  v4 = -2147024362;
  if ( a2 + 4 < a2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0x17Au, 0LL);
    return v4;
  }
  v5 = (a2 + 7) & 0xFFFFFFFC;
  if ( v5 < v2 )
  {
    v20 = 402;
    goto LABEL_29;
  }
  v6 = (_DWORD *)*((_QWORD *)this + 4);
  v7 = v5 < v2 ? 0x80070216 : 0;
  if ( v6 )
  {
    if ( v6[4] - v6[5] >= v5 )
      return v7;
    if ( !v6[5] )
    {
      operator delete(v6);
      *((_QWORD *)v3 + 4) = 0LL;
    }
  }
  for ( this = (CDataStreamWriter *)*((_QWORD *)v3 + 2);
        this != (CDataStreamWriter *)((char *)v3 + 16);
        this = *(CDataStreamWriter **)this )
  {
    v9 = *((_DWORD *)this + 4);
    if ( v9 >= v5 )
    {
      v10 = *((_DWORD *)v3 + 10);
      v11 = v9 + v10;
      if ( v9 + v10 >= v10 )
      {
        v12 = (CDataStreamWriter **)*((_QWORD *)v3 + 4);
        *((_DWORD *)v3 + 10) = v11;
        if ( v12 )
        {
          v18 = (CDataStreamWriter **)*((_QWORD *)v3 + 1);
          if ( *v18 == v3 )
          {
            *v12 = v3;
            v12[1] = (CDataStreamWriter *)v18;
            *v18 = (CDataStreamWriter *)v12;
            *((_QWORD *)v3 + 1) = v12;
            goto LABEL_14;
          }
        }
        else
        {
LABEL_14:
          v13 = *(CDataStreamWriter **)this;
          if ( *(CDataStreamWriter **)(*(_QWORD *)this + 8LL) == this )
          {
            v14 = (CDataStreamWriter **)*((_QWORD *)this + 1);
            if ( *v14 == this )
            {
              *v14 = v13;
              *((_QWORD *)v13 + 1) = v14;
              *((_DWORD *)this + 5) = 0;
              v4 = 0;
              *((_QWORD *)v3 + 4) = this;
              return v4;
            }
          }
        }
        __fastfail(3u);
      }
      *((_DWORD *)v3 + 10) = -1;
      v20 = 437;
LABEL_29:
      v7 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, v20, 0LL);
LABEL_30:
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v7, 0x17Cu, 0LL);
      return v4;
    }
  }
  v15 = 0x4000;
  if ( *((_DWORD *)v3 + 10) < 0x4000u )
    v15 = *((_DWORD *)v3 + 10);
  if ( v15 + v5 < v5 )
  {
    v20 = 501;
    goto LABEL_29;
  }
  NewBlock = CDataStreamWriter::AllocateNewBlock(v3, v15 + v5);
  v7 = NewBlock;
  v4 = NewBlock;
  if ( NewBlock < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, NewBlock, 0x1F7u, 0LL);
    goto LABEL_30;
  }
  return v7;
}
