char __fastcall DirectComposition::CRemoteAppRenderTargetMarshaler::EmitDeletionCommand(
        DirectComposition::CRemoteAppRenderTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  _DWORD *v3; // rbx
  char v4; // di
  char *v6; // rcx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = (_DWORD *)((char *)this + 16);
  v4 = 0;
  if ( *((_QWORD *)this + 8) )
    *v3 |= 0x100u;
  if ( (*v3 & 0x100) == 0 )
    return DirectComposition::CResourceMarshaler::EmitDeletionCommand(this, a2);
  v8 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v8) )
  {
    v6 = (char *)v8;
    *(_DWORD *)v8 = 12;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 1) = 327;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    *v3 &= ~0x100u;
    return DirectComposition::CResourceMarshaler::EmitDeletionCommand(this, a2);
  }
  return v4;
}
