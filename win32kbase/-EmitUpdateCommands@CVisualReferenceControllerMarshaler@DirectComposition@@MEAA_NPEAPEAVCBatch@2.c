char __fastcall DirectComposition::CVisualReferenceControllerMarshaler::EmitUpdateCommands(
        DirectComposition::CVisualReferenceControllerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
    return 0;
  v3 = (char *)v7;
  *(_DWORD *)v7 = 16;
  *(_QWORD *)(v3 + 4) = 0LL;
  *((_DWORD *)v3 + 3) = 0;
  *((_DWORD *)v3 + 1) = 477;
  *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 16);
    if ( v5 )
      *((_DWORD *)v3 + 3) = *(_DWORD *)(v5 + 32);
  }
  return 1;
}
