char __fastcall DirectComposition::CDDisplayRenderTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CDDisplayRenderTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  int v5; // eax
  char *v6; // rcx
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CDDisplayRenderTargetMarshaler::EmitCreate(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v8 = this;
    if ( (v5 & 0x40) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_22efc74504cb8895f58d97a59d20f195___(
              (__int64)this,
              a2,
              (__int64)&v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x40u;
      v5 = *((_DWORD *)this + 4);
    }
    v8 = this;
    if ( (v5 & 0x80u) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2a925c6db018c7ea0c09d4864a48b635___(
              (__int64)this,
              a2,
              (__int64)&v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80u;
      v5 = *((_DWORD *)this + 4);
    }
    v8 = this;
    if ( (v5 & 0x100) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_86a70588145588370e1570fe6666648c___(
              (__int64)this,
              a2,
              (__int64)&v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    v8 = this;
    if ( (v5 & 0x200) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d4572c77d854595aef475aa9bde9dcaf___(
              (__int64)this,
              a2,
              (__int64)&v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x200u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x400) == 0 )
      return 1;
    v8 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v8) )
    {
      v6 = (char *)v8;
      *(_DWORD *)v8 = 12;
      *(_QWORD *)(v6 + 4) = 0LL;
      *((_DWORD *)v6 + 1) = 338;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)this + 4) &= ~0x400u;
      return 1;
    }
  }
  return v4;
}
