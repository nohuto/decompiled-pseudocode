bool __fastcall DirectComposition::CMatrixTransform3DMarshaler::EmitUpdateCommands(
        DirectComposition::CMatrixTransform3DMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rax
  char *v4; // rbx
  bool result; // al
  void *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x4CuLL, &v6) )
    return 0;
  v3 = (char *)v6;
  *(_DWORD *)v6 = 76;
  v4 = v3 + 4;
  memset(v3 + 4, 0, 0x48uLL);
  *(_DWORD *)v4 = 469;
  *((_DWORD *)v4 + 1) = *((_DWORD *)this + 8);
  result = 1;
  *(_OWORD *)(v4 + 8) = *(_OWORD *)((char *)this + 72);
  *(_OWORD *)(v4 + 24) = *(_OWORD *)((char *)this + 88);
  *(_OWORD *)(v4 + 40) = *(_OWORD *)((char *)this + 104);
  *(_OWORD *)(v4 + 56) = *(_OWORD *)((char *)this + 120);
  return result;
}
