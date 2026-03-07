char __fastcall DirectComposition::CProjectedShadowSceneMarshaler::EmitUpdateCommands(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  int v6; // eax
  char *v8; // rcx
  char *v9; // rcx
  void *v10; // [rsp+50h] [rbp+30h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    if ( (v5 & 0x80u) != 0 )
    {
      v10 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v10) )
        return v4;
      v8 = (char *)v10;
      *(_DWORD *)v10 = 12;
      *(_QWORD *)(v8 + 4) = 0LL;
      *((_DWORD *)v8 + 1) = 299;
      *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)this + 4) &= ~0x80u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x200) != 0 )
    {
      v10 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v10) )
        return v4;
      v9 = (char *)v10;
      *(_DWORD *)v10 = 12;
      *(_QWORD *)(v9 + 4) = 0LL;
      *((_DWORD *)v9 + 1) = 300;
      *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)this + 4) &= ~0x200u;
    }
    if ( DirectComposition::CProjectedShadowSceneMarshaler::EmitAddCasters(this, a2)
      && DirectComposition::CProjectedShadowSceneMarshaler::EmitAddReceivers(this, a2) )
    {
      v6 = *((_DWORD *)this + 4);
      v10 = this;
      if ( (v6 & 0x1000) != 0 )
      {
        if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a1494ef117167e0d115bb3d6da080f6a___(
                                 this,
                                 a2,
                                 &v10) )
          return v4;
        *((_DWORD *)this + 4) &= ~0x1000u;
        v6 = *((_DWORD *)this + 4);
      }
      v10 = this;
      if ( (v6 & 0x400) != 0 )
      {
        if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4dea41512b0d65b210438b606e35899d___(
                                 this,
                                 a2,
                                 &v10) )
          return v4;
        *((_DWORD *)this + 4) &= ~0x400u;
        v6 = *((_DWORD *)this + 4);
      }
      v10 = this;
      if ( (v6 & 0x800) != 0 )
      {
        if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d9f70ade21717f3320853a4d81c25eea___(
                                 this,
                                 a2,
                                 &v10) )
          return v4;
        *((_DWORD *)this + 4) &= ~0x800u;
        v6 = *((_DWORD *)this + 4);
      }
      v10 = this;
      if ( (v6 & 0x2000) != 0 )
      {
        if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6b3e6a14467ecf4e900add31c48c06c0___(
                                 this,
                                 a2,
                                 &v10) )
          return v4;
        *((_DWORD *)this + 4) &= ~0x2000u;
        v6 = *((_DWORD *)this + 4);
      }
      v10 = this;
      if ( (v6 & 0x4000) != 0 )
      {
        if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_587f969927acac595f5d776e9a526bf5___(
                                 this,
                                 a2,
                                 &v10) )
          return v4;
        *((_DWORD *)this + 4) &= ~0x4000u;
        v6 = *((_DWORD *)this + 4);
      }
      v10 = this;
      if ( (v6 & 0x8000) != 0 )
      {
        if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7fa288b36b5b909ebd944124da990719___(
                                 this,
                                 a2,
                                 &v10) )
          return v4;
        *((_DWORD *)this + 4) &= ~0x8000u;
        v6 = *((_DWORD *)this + 4);
      }
      v10 = this;
      if ( (v6 & 0x100) == 0 )
        return 1;
      if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_42c85abcceb014ab0ba5d8ad63447384___(
                              this,
                              a2,
                              &v10) )
      {
        *((_DWORD *)this + 4) &= ~0x100u;
        return 1;
      }
    }
  }
  return v4;
}
