__int64 __fastcall CDataStreamWriter::GetItemDataWritePointer(CDataStreamWriter *this, unsigned int a2, void **a3)
{
  CDataStreamWriter *v4; // rbx
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // edi

  v4 = this;
  if ( (*((_QWORD *)this + 6) || *((_DWORD *)this + 14))
    && a2
    && (this = (CDataStreamWriter *)*((_QWORD *)this + 4), *((_DWORD *)this + 4) - *((_DWORD *)this + 5) >= a2) )
  {
    *a3 = (char *)this + *((unsigned int *)this + 5) + 24;
    v5 = CDataStreamWriter::IncreaseWrittenByteCount(v4, a2);
    v7 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xD8u, 0LL);
    else
      *((_DWORD *)v4 + 14) += a2;
  }
  else
  {
    v7 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147418113, 0xD1u, 0LL);
  }
  return v7;
}
