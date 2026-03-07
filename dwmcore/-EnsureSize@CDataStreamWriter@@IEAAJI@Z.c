__int64 __fastcall CDataStreamWriter::EnsureSize(CDataStreamWriter *this, unsigned int a2)
{
  int NewBlock; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  _DWORD *v6; // rcx
  unsigned int v7; // esi
  CDataStreamWriter *i; // rcx
  int v9; // eax
  unsigned int v11; // edx
  unsigned int v12; // eax
  int v13; // r8d
  CDataStreamWriter *v14; // rax
  CDataStreamWriter **v15; // rdx
  CDataStreamWriter *v16; // rdx
  CDataStreamWriter **v17; // rax
  unsigned int v18; // [rsp+20h] [rbp-18h]
  unsigned int v19; // [rsp+48h] [rbp+10h] BYREF

  v19 = a2;
  NewBlock = RoundUpToAlignDWORD(&v19);
  v5 = NewBlock;
  if ( NewBlock < 0 )
  {
    v18 = 402;
LABEL_27:
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, NewBlock, v18, 0LL);
    return v5;
  }
  v6 = (_DWORD *)*((_QWORD *)this + 4);
  v7 = v19;
  if ( !v6 )
  {
LABEL_3:
    for ( i = (CDataStreamWriter *)*((_QWORD *)this + 2);
          i != (CDataStreamWriter *)((char *)this + 16);
          i = *(CDataStreamWriter **)i )
    {
      v11 = *((_DWORD *)i + 4);
      if ( v11 >= v7 )
      {
        v12 = *((_DWORD *)this + 10);
        v13 = v11 + v12;
        if ( v11 + v12 < v12 )
        {
          *((_DWORD *)this + 10) = -1;
          v5 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)i, 0LL, 0, -2147024362, 0x1B5u, 0LL);
        }
        else
        {
          v14 = (CDataStreamWriter *)*((_QWORD *)this + 4);
          v5 = 0;
          *((_DWORD *)this + 10) = v13;
          if ( v14 )
          {
            v15 = (CDataStreamWriter **)*((_QWORD *)this + 1);
            if ( *v15 == this )
            {
              *(_QWORD *)v14 = this;
              *((_QWORD *)v14 + 1) = v15;
              *v15 = v14;
              *((_QWORD *)this + 1) = v14;
              goto LABEL_19;
            }
LABEL_22:
            __fastfail(3u);
          }
LABEL_19:
          v16 = *(CDataStreamWriter **)i;
          if ( *(CDataStreamWriter **)(*(_QWORD *)i + 8LL) != i )
            goto LABEL_22;
          v17 = (CDataStreamWriter **)*((_QWORD *)i + 1);
          if ( *v17 != i )
            goto LABEL_22;
          *v17 = v16;
          *((_QWORD *)v16 + 1) = v17;
          *((_DWORD *)i + 5) = 0;
          *((_QWORD *)this + 4) = i;
        }
        return v5;
      }
    }
    v9 = 0x4000;
    if ( *((_DWORD *)this + 10) < 0x4000u )
      v9 = *((_DWORD *)this + 10);
    if ( v9 + v7 < v7 )
    {
      v5 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)i, 0LL, 0, -2147024362, 0x1F5u, 0LL);
      return v5;
    }
    NewBlock = CDataStreamWriter::AllocateNewBlock(this, v9 + v7);
    v5 = NewBlock;
    if ( NewBlock >= 0 )
      return v5;
    v18 = 503;
    goto LABEL_27;
  }
  if ( v6[4] - v6[5] < v19 )
  {
    if ( !v6[5] )
    {
      operator delete(v6);
      *((_QWORD *)this + 4) = 0LL;
    }
    goto LABEL_3;
  }
  return v5;
}
