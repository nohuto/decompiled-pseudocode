char __fastcall DirectComposition::CExpressionMarshaler::EmitSetNodesInfo(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // di
  char *v4; // rdx
  __int64 v5; // rax
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x800) == 0 && *((_QWORD *)this + 16) && *((_QWORD *)this + 18) )
  {
    v7 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x30uLL, &v7) )
    {
      v4 = (char *)v7;
      *(_DWORD *)v7 = 48;
      *(_OWORD *)(v4 + 4) = 0LL;
      *(_OWORD *)(v4 + 20) = 0LL;
      *(_QWORD *)(v4 + 36) = 0LL;
      *((_DWORD *)v4 + 11) = 0;
      *((_DWORD *)v4 + 1) = 144;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v4 + 3) = *(_DWORD *)(*((_QWORD *)this + 16) + 32LL);
      *((_DWORD *)v4 + 4) = *((_DWORD *)this + 36);
      *((_DWORD *)v4 + 5) = *((_DWORD *)this + 34);
      v5 = *((_QWORD *)this + 19);
      if ( v5 )
        LODWORD(v5) = *(_DWORD *)(v5 + 32);
      *((_DWORD *)v4 + 6) = v5;
      *((_DWORD *)v4 + 7) = *((_DWORD *)this + 42);
      *((_DWORD *)v4 + 8) = *((_DWORD *)this + 40);
      *((_DWORD *)v4 + 10) = *((_DWORD *)this + 44);
      *((_DWORD *)v4 + 11) = *((_DWORD *)this + 45);
      *((_DWORD *)v4 + 9) = *((unsigned __int8 *)this + 184);
      *((_DWORD *)this + 4) |= 0x800u;
      *((_BYTE *)this + 184) = 0;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
