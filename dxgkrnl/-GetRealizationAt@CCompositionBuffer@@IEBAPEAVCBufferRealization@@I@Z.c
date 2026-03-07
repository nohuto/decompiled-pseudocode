struct CBufferRealization *__fastcall CCompositionBuffer::GetRealizationAt(CCompositionBuffer *this, int a2)
{
  __int64 v2; // r8
  _QWORD **v3; // rcx
  int v4; // r9d
  _QWORD *v5; // rax

  v2 = 0LL;
  v3 = (_QWORD **)((char *)this + 256);
  v4 = 0;
  v5 = *v3;
  while ( v5 != v3 )
  {
    if ( v4 == a2 )
      return (struct CBufferRealization *)(v5 - 1);
    v5 = (_QWORD *)*v5;
    ++v4;
  }
  return (struct CBufferRealization *)v2;
}
