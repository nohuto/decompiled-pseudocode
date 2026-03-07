__int64 __fastcall CFlipExBuffer::EnsureHDR10MetaData(CFlipExBuffer *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rax

  v1 = 0;
  if ( !*((_QWORD *)this + 46) )
  {
    v3 = operator new[](0x48uLL, 0x624D5343u, 260LL);
    *((_QWORD *)this + 46) = v3;
    if ( !v3 )
      return (unsigned int)-1073741801;
  }
  return v1;
}
