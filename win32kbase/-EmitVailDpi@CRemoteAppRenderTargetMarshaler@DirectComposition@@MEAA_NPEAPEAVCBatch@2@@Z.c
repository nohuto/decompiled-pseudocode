char __fastcall DirectComposition::CRemoteAppRenderTargetMarshaler::EmitVailDpi(
        DirectComposition::CRemoteAppRenderTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  bool v2; // zf
  char updated; // al
  char v5; // dl
  DirectComposition::CRemoteAppRenderTargetMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*((_DWORD *)this + 4) & 0x400) == 0;
  v7 = this;
  if ( v2 )
    return 1;
  updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0a566999a41ba9797d34768273e7e540___(
              (__int64)this,
              a2,
              (__int64)&v7);
  v5 = 0;
  if ( updated )
  {
    *((_DWORD *)this + 4) &= ~0x400u;
    return 1;
  }
  return v5;
}
