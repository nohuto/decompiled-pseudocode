void __fastcall CCustomKernelEffect::FillConstantBuffer(const void **this, __int64 a2, __int64 a3, void *a4)
{
  unsigned __int64 v6; // rax

  memcpy_0(a4, this[4], ((_BYTE *)this[5] - (_BYTE *)this[4]) & 0xFFFFFFFFFFFFFFF0uLL);
  v6 = ((_BYTE *)this[5] - (_BYTE *)this[4]) >> 4;
  if ( v6 > 8 )
    *((_DWORD *)a4 + 3) = v6;
}
