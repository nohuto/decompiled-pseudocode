__int64 __fastcall CLegacyTokenBuffer::Create(struct CLegacyTokenBuffer **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rax

  v2 = 0;
  *a1 = 0LL;
  v3 = operator new[](0x840uLL, 0x746C4D54u, 256LL);
  v4 = v3;
  if ( v3 )
  {
    v5 = v3 + 16;
    *(_QWORD *)(v4 + 2088) = v5;
    *(_BYTE *)(v4 + 2108) = 0;
    *(_DWORD *)(v5 + 16) = 0;
    *(_DWORD *)(v5 + 2068) = 0;
    *(_QWORD *)(v5 + 8) = v5;
    *(_QWORD *)v5 = v5;
    CLegacyTokenBuffer::Reset((CLegacyTokenBuffer *)v4);
    *a1 = (struct CLegacyTokenBuffer *)v4;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
