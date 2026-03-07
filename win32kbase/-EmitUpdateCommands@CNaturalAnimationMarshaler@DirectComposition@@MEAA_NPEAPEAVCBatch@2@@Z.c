char __fastcall DirectComposition::CNaturalAnimationMarshaler::EmitUpdateCommands(
        DirectComposition::CNaturalAnimationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  int v5; // eax
  unsigned int v6; // eax
  DirectComposition::CNaturalAnimationMarshaler *v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v8 = this;
    if ( (v5 & 0x4000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a6d7fc2ff29985745a9cf7d7d53a6cac___(
              (__int64)this,
              a2,
              (__int64 *)&v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x4000u;
      v5 = *((_DWORD *)this + 4);
    }
    v8 = this;
    if ( (v5 & 0x1000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_96efd4528de628edf8e8c0149ff8f819___(
              (__int64)this,
              a2,
              (__int64 *)&v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x1000u;
      v5 = *((_DWORD *)this + 4);
    }
    v8 = this;
    if ( (v5 & 0x8000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c3550f6b9f18b02d2e39c02f22e868a9___(
              (__int64)this,
              a2,
              (__int64 *)&v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x8000u;
    }
    if ( DirectComposition::CNaturalAnimationMarshaler::EmitUpdateMotionParameters(
           this,
           (struct DirectComposition::CBatch **)a2) )
    {
      v6 = *((_DWORD *)this + 4);
      v8 = this;
      if ( (v6 & 0x20000) == 0 )
      {
LABEL_15:
        v4 = 1;
        *((_DWORD *)this + 4) = v6 | 0x40000;
        return v4;
      }
      if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ac1c59748b96fb69b3ab1183eeae36ef___(
             (__int64)this,
             a2,
             (__int64)&v8) )
      {
        v6 = *((_DWORD *)this + 4) & 0xFFFDFFFF;
        goto LABEL_15;
      }
    }
  }
  return v4;
}
