char __fastcall DirectComposition::CSpriteVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CSpriteVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v4; // eax
  char v5; // di
  DirectComposition::CSpriteVisualMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) )
    return 0;
  v4 = *((_DWORD *)this + 98);
  v5 = 1;
  v7 = this;
  if ( (v4 & 1) == 0 )
    goto LABEL_5;
  if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_eef5f042a4ccb2ced9c50c4d99e46feb___(
          (__int64)this,
          a2,
          (__int64)&v7) )
    return 0;
  *((_DWORD *)this + 98) &= ~1u;
  v4 = *((_DWORD *)this + 98);
LABEL_5:
  v7 = this;
  if ( (v4 & 2) != 0 )
  {
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bb1bee000cc755cbd48ecf2c45cd0691___(
                            this,
                            a2,
                            &v7) )
    {
      *((_DWORD *)this + 98) &= ~2u;
      return v5;
    }
    return 0;
  }
  return v5;
}
