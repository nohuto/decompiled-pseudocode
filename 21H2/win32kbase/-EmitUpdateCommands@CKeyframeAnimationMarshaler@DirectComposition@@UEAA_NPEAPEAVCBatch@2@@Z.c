/*
 * XREFs of ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000F130
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C000B6D8 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_850122922cd1779a7f9819b269b43cf1___ @ 0x1C000D930 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_850122922cd1779a7f9819b269b43cf.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_84a7a7b6d709e42eaf283e6290c84308___ @ 0x1C000D9B4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_84a7a7b6d709e42eaf283e6290c8430.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0792d512e18448bf4ac5474847912d54___ @ 0x1C000DA38 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_0792d512e18448bf4ac5474847912d5.c)
 *     ?EmitSetSeekState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000F29C (-EmitSetSeekState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000F350 (-EmitUpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000F3F8 (-EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000FD40 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0011E08 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_08bd808844c2d81441d7db89ddbcc4f5___ @ 0x1C022ADB8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_08bd808844c2d81441d7db89ddbcc4f.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe4772___lambda_cef133924e7ba8c5c0c6519b3ed084f6___ @ 0x1C022AE38 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe477.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::EmitUpdateCommands(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int v4; // r14d
  char v5; // r15
  __int64 v6; // r13
  int v7; // eax
  int v8; // eax
  void *v10; // rdx
  unsigned __int64 v11; // r12
  char *v12; // rcx
  unsigned int v13; // edx
  _DWORD *v14; // r8
  __int64 v15; // rax
  void *v16; // [rsp+80h] [rbp+40h] BYREF

  if ( !DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(this, a2) )
    return 0;
  if ( *((_DWORD *)this + 66) < *((_DWORD *)this + 65) )
  {
    v16 = this;
    if ( (*((_DWORD *)this + 4) & 0x20000) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe4772___lambda_cef133924e7ba8c5c0c6519b3ed084f6___(
                               this,
                               a2) )
        return 0;
      *((_DWORD *)this + 4) |= 0x20000u;
    }
  }
  if ( !DirectComposition::CKeyframeAnimationMarshaler::EmitSetKeyframeData(this, a2) )
    return 0;
  v4 = *((_DWORD *)this + 63);
  v5 = 1;
  v6 = *((_QWORD *)this + 19);
  while ( *((_DWORD *)this + 64) < v4 )
  {
    v10 = (void *)(4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL));
    v16 = v10;
    if ( (unsigned __int64)v10 < 0x14 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(
              (struct DirectComposition::CBatch ***)a2,
              (unsigned __int64 *)&v16) )
        break;
      v10 = v16;
    }
    v11 = v4 - *((_DWORD *)this + 64);
    if ( v11 >= ((unsigned __int64)v10 - 16) >> 2 )
      LODWORD(v11) = ((unsigned __int64)v10 - 16) >> 2;
    v16 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v11 + 16), &v16);
    v12 = (char *)v16;
    v13 = 0;
    *(_DWORD *)v16 = 4 * v11 + 16;
    v14 = v12 + 16;
    *(_QWORD *)(v12 + 4) = 0LL;
    *((_DWORD *)v12 + 3) = 0;
    *((_DWORD *)v12 + 1) = 219;
    *((_DWORD *)v12 + 2) = *((_DWORD *)this + 8);
    for ( *((_DWORD *)v12 + 3) = v11; v13 < (unsigned int)v11; ++v14 )
    {
      v15 = v13 + *((_DWORD *)this + 64);
      ++v13;
      *v14 = *(_DWORD *)(*(_QWORD *)(v6 + 8 * v15) + 32LL);
    }
    *((_DWORD *)this + 64) += v11;
  }
  if ( *((_DWORD *)this + 64) != v4
    || !DirectComposition::CKeyframeAnimationMarshaler::EmitUpdatePlaybackState(this, a2) )
  {
    return 0;
  }
  v7 = *((_DWORD *)this + 4);
  v16 = this;
  if ( (v7 & 0x4000) == 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_84a7a7b6d709e42eaf283e6290c84308___(
            (__int64)this,
            a2,
            (__int64)&v16) )
      return 0;
    *((_DWORD *)this + 4) |= 0x4000u;
    v7 = *((_DWORD *)this + 4);
  }
  v16 = this;
  if ( (v7 & 0x8000) == 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0792d512e18448bf4ac5474847912d54___(
            (__int64)this,
            a2,
            (__int64)&v16) )
      return 0;
    *((_DWORD *)this + 4) |= 0x8000u;
  }
  if ( !DirectComposition::CKeyframeAnimationMarshaler::EmitSetSeekState(this, a2) )
    return 0;
  v8 = *((_DWORD *)this + 4);
  v16 = this;
  if ( (v8 & 0x10000) == 0 )
  {
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_850122922cd1779a7f9819b269b43cf1___(
           (__int64)this,
           a2,
           (__int64)&v16) )
    {
      *((_DWORD *)this + 4) |= 0x10000u;
      v8 = *((_DWORD *)this + 4);
      goto LABEL_12;
    }
    return 0;
  }
LABEL_12:
  if ( *((_QWORD *)this + 22) )
  {
    v16 = this;
    if ( (v8 & 0x40000) == 0 )
    {
      if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_08bd808844c2d81441d7db89ddbcc4f5___(
                              this,
                              a2,
                              &v16) )
      {
        *((_DWORD *)this + 4) |= 0x40000u;
        return v5;
      }
      return 0;
    }
  }
  return v5;
}
