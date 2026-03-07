bool __fastcall DirectComposition::CPrimitiveColorMarshaler::EmitUpdateCommands(
        DirectComposition::CPrimitiveColorMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rdx
  bool result; // al
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v5) )
    return 0;
  v3 = (char *)v5;
  *(_DWORD *)v5 = 28;
  *(_OWORD *)(v3 + 4) = 0LL;
  *(_QWORD *)(v3 + 20) = 0LL;
  *((_DWORD *)v3 + 1) = 282;
  *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
  result = 1;
  *(_OWORD *)(v3 + 12) = *(_OWORD *)((char *)this + 56);
  return result;
}
