__int64 __fastcall CCustomKernelEffect::GetConstantBufferSize(CCustomKernelEffect *this)
{
  unsigned __int64 v1; // rax

  v1 = (__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 4;
  if ( v1 > 8 )
    LODWORD(v1) = 128;
  return (unsigned int)(16 * v1);
}
