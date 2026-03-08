/*
 * XREFs of ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0063350
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C005DE78 (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C005EE20 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EmitSetTarget@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0063848 (-EmitSetTarget@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00639C4 (-EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0792d512e18448bf4ac5474847912d54___ @ 0x1C00647D4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_0792d512e18448bf4ac5474847912d5.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_84a7a7b6d709e42eaf283e6290c84308___ @ 0x1C00648A8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_84a7a7b6d709e42eaf283e6290c8430.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_850122922cd1779a7f9819b269b43cf1___ @ 0x1C006497C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_850122922cd1779a7f9819b269b43cf.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe4772___lambda_cef133924e7ba8c5c0c6519b3ed084f6___ @ 0x1C0262E84 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe477.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::EmitUpdateCommands(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  struct DirectComposition::CBatch **v5; // rdx
  struct DirectComposition::CBatch *v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  char *v9; // rcx
  int v10; // eax
  char *v11; // rcx
  unsigned int v12; // r14d
  __int64 v13; // r15
  bool v14; // zf
  unsigned int v15; // r14d
  __int64 v16; // r15
  bool v17; // zf
  int v18; // eax
  struct DirectComposition::CBatch **v19; // rdx
  struct DirectComposition::CBatch *v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  char *v23; // rcx
  char *v25; // rcx
  void *v26; // r12
  unsigned __int64 v27; // r12
  char *v28; // rcx
  unsigned int v29; // edx
  char *v30; // r8
  __int64 v31; // rax
  char *v32; // rcx
  char *v33; // rcx
  void *v34; // rdx
  unsigned __int64 v35; // r12
  char *v36; // rcx
  unsigned int v37; // edx
  char *v38; // r8
  __int64 v39; // rax
  void *v40; // [rsp+70h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( (v2 & 0x20) != 0 )
  {
    v5 = *a2;
    v40 = 0LL;
    v6 = v5[17];
    v7 = *((_QWORD *)v6 + 5);
    if ( (unsigned __int64)(4096 - v7) >= 0x10
      && (v8 = *((_QWORD *)v6 + 7), *((_QWORD *)v6 + 5) = v7 + 16, (v9 = (char *)(v7 + v8)) != 0LL) )
    {
      v5[19] = (struct DirectComposition::CBatch *)((char *)v5[19] + 16);
    }
    else
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, 0LL) )
        return 0;
      if ( !DirectComposition::CBatch::GetPayloadWritePointer(*a2, 0x10uLL, &v40) )
        goto LABEL_71;
      v9 = (char *)v40;
    }
    *(_DWORD *)v9 = 16;
    *(_QWORD *)(v9 + 4) = 0LL;
    *((_DWORD *)v9 + 3) = 0;
    *((_DWORD *)v9 + 1) = 267;
    *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v9 + 3) = *((_DWORD *)this + 14);
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x400) == 0 && (*((_BYTE *)this + 120) & 0x20) != 0 )
  {
    v40 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0xCuLL, &v40) )
      return 0;
    v33 = (char *)v40;
    *(_DWORD *)v40 = 12;
    *(_QWORD *)(v33 + 4) = 0LL;
    *((_DWORD *)v33 + 1) = 23;
    *((_DWORD *)v33 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)this + 4) |= 0x400u;
  }
  if ( !DirectComposition::CBaseExpressionMarshaler::EmitSetTarget(this, (struct DirectComposition::CBatch **)a2) )
    return 0;
  v10 = *((_DWORD *)this + 4);
  if ( (v10 & 0x80u) == 0 )
  {
    v40 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x10uLL, &v40) )
      return 0;
    v11 = (char *)v40;
    *(_DWORD *)v40 = 16;
    *(_QWORD *)(v11 + 4) = 0LL;
    *((_DWORD *)v11 + 3) = 0;
    *((_DWORD *)v11 + 1) = 25;
    *((_DWORD *)v11 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v11 + 3) = *((_DWORD *)this + 24);
    *((_DWORD *)this + 4) |= 0x80u;
    v10 = *((_DWORD *)this + 4);
  }
  if ( (v10 & 0x100) == 0 && (*((_BYTE *)this + 120) & 4) != 0 )
  {
    v40 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x10uLL, &v40) )
      return 0;
    v25 = (char *)v40;
    *(_DWORD *)v40 = 16;
    *(_QWORD *)(v25 + 4) = 0LL;
    *((_DWORD *)v25 + 3) = 0;
    *((_DWORD *)v25 + 1) = 22;
    *((_DWORD *)v25 + 2) = *((_DWORD *)this + 8);
    v25[12] = (*((_BYTE *)this + 120) & 8) != 0;
    *((_DWORD *)this + 4) |= 0x100u;
  }
  v12 = *((_DWORD *)this + 29);
  v13 = *((_QWORD *)this + 13);
  v14 = *((_DWORD *)this + 28) == v12;
  if ( *((_DWORD *)this + 28) < v12 )
  {
    do
    {
      v34 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
      v40 = v34;
      if ( (unsigned __int64)v34 < 0x14 )
      {
        if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v40) )
          break;
        v34 = v40;
      }
      v40 = 0LL;
      v35 = v12 - *((_DWORD *)this + 28);
      if ( v35 >= ((unsigned __int64)v34 - 16) >> 2 )
        LODWORD(v35) = ((unsigned __int64)v34 - 16) >> 2;
      DirectComposition::CBatch::EnsureBatchBuffer(
        (struct DirectComposition::CBatch **)a2,
        (unsigned int)(4 * v35 + 16),
        &v40);
      v36 = (char *)v40;
      v37 = 0;
      *(_DWORD *)v40 = 4 * v35 + 16;
      v38 = v36 + 16;
      *(_QWORD *)(v36 + 4) = 0LL;
      *((_DWORD *)v36 + 3) = 0;
      *((_DWORD *)v36 + 1) = 21;
      *((_DWORD *)v36 + 2) = *((_DWORD *)this + 8);
      for ( *((_DWORD *)v36 + 3) = v35;
            v37 < (unsigned int)v35;
            *((_DWORD *)v38 - 1) = *(_DWORD *)(*(_QWORD *)(v13 + 8 * v39) + 32LL) )
      {
        v38 += 4;
        v39 = v37 + *((_DWORD *)this + 28);
        ++v37;
      }
      *((_DWORD *)this + 28) += v35;
    }
    while ( *((_DWORD *)this + 28) < v12 );
    v14 = *((_DWORD *)this + 28) == v12;
  }
  if ( !v14 )
    return 0;
  if ( *((_DWORD *)this + 62) < *((_DWORD *)this + 61) )
  {
    v14 = (*((_DWORD *)this + 4) & 0x20000) == 0;
    v40 = this;
    if ( v14 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe4772___lambda_cef133924e7ba8c5c0c6519b3ed084f6___(
                               this,
                               a2) )
        return 0;
      *((_DWORD *)this + 4) |= 0x20000u;
    }
  }
  if ( !DirectComposition::CKeyframeAnimationMarshaler::EmitSetKeyframeData(
          this,
          (struct DirectComposition::CBatch **)a2) )
    return 0;
  v15 = *((_DWORD *)this + 59);
  v16 = *((_QWORD *)this + 18);
  v17 = *((_DWORD *)this + 60) == v15;
  if ( *((_DWORD *)this + 60) < v15 )
  {
    do
    {
      v26 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
      v40 = v26;
      if ( (unsigned __int64)v26 < 0x14 )
      {
        if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v40) )
          break;
        v26 = v40;
      }
      v40 = 0LL;
      v27 = ((unsigned __int64)v26 - 16) >> 2;
      if ( v15 - *((_DWORD *)this + 60) < v27 )
        LODWORD(v27) = v15 - *((_DWORD *)this + 60);
      DirectComposition::CBatch::EnsureBatchBuffer(
        (struct DirectComposition::CBatch **)a2,
        (unsigned int)(4 * v27 + 16),
        &v40);
      v28 = (char *)v40;
      v29 = 0;
      *(_DWORD *)v40 = 4 * v27 + 16;
      v30 = v28 + 16;
      *(_QWORD *)(v28 + 4) = 0LL;
      *((_DWORD *)v28 + 3) = 0;
      *((_DWORD *)v28 + 1) = 220;
      *((_DWORD *)v28 + 2) = *((_DWORD *)this + 8);
      for ( *((_DWORD *)v28 + 3) = v27;
            v29 < (unsigned int)v27;
            *((_DWORD *)v30 - 1) = *(_DWORD *)(*(_QWORD *)(v16 + 8 * v31) + 32LL) )
      {
        v30 += 4;
        v31 = v29 + *((_DWORD *)this + 60);
        ++v29;
      }
      *((_DWORD *)this + 60) += v27;
    }
    while ( *((_DWORD *)this + 60) < v15 );
    v17 = *((_DWORD *)this + 60) == v15;
  }
  if ( !v17 )
    return 0;
  v18 = *((_DWORD *)this + 4);
  if ( (v18 & 0x1000) == 0 )
  {
    v19 = *a2;
    v40 = 0LL;
    v20 = v19[17];
    v21 = *((_QWORD *)v20 + 5);
    if ( (unsigned __int64)(4096 - v21) >= 0x24 )
    {
      v22 = *((_QWORD *)v20 + 7);
      *((_QWORD *)v20 + 5) = v21 + 36;
      v23 = (char *)(v21 + v22);
      if ( v23 )
      {
        v19[19] = (struct DirectComposition::CBatch *)((char *)v19[19] + 36);
LABEL_24:
        *(_DWORD *)v23 = 36;
        *(_OWORD *)(v23 + 4) = 0LL;
        *(_OWORD *)(v23 + 20) = 0LL;
        *((_DWORD *)v23 + 1) = 227;
        *((_DWORD *)v23 + 2) = *((_DWORD *)this + 8);
        *((_DWORD *)v23 + 3) = *((_DWORD *)this + 68);
        *(_QWORD *)(v23 + 20) = *((_QWORD *)this + 21);
        v23[28] = (*((_BYTE *)this + 296) & 4) == 0;
        *((_DWORD *)this + 4) |= 0x1000u;
        *((_BYTE *)this + 296) |= 4u;
        v18 = *((_DWORD *)this + 4);
        goto LABEL_25;
      }
    }
    if ( !DirectComposition::CBatch::AllocateNewFragment(a2, 0LL) )
      return 0;
    if ( DirectComposition::CBatch::GetPayloadWritePointer(*a2, 0x24uLL, &v40) )
    {
      v23 = (char *)v40;
      goto LABEL_24;
    }
LABEL_71:
    KeBugCheck(0xC000000D);
  }
LABEL_25:
  v40 = this;
  if ( (v18 & 0x4000) == 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_84a7a7b6d709e42eaf283e6290c84308___(
                             this,
                             a2,
                             &v40) )
      return 0;
    *((_DWORD *)this + 4) |= 0x4000u;
    v18 = *((_DWORD *)this + 4);
  }
  v40 = this;
  if ( (v18 & 0x8000) == 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0792d512e18448bf4ac5474847912d54___(
                             this,
                             a2,
                             &v40) )
      return 0;
    *((_DWORD *)this + 4) |= 0x8000u;
    v18 = *((_DWORD *)this + 4);
  }
  if ( (v18 & 0x2000) == 0 && *((_QWORD *)this + 23) )
  {
    v40 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x24uLL, &v40) )
      return 0;
    v32 = (char *)v40;
    *(_DWORD *)v40 = 36;
    *(_OWORD *)(v32 + 4) = 0LL;
    *(_OWORD *)(v32 + 20) = 0LL;
    *((_DWORD *)v32 + 1) = 226;
    *((_DWORD *)v32 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v32 + 12) = *((_QWORD *)this + 23);
    *(_QWORD *)(v32 + 20) = *((_QWORD *)this + 24);
    v32[28] = (*((_BYTE *)this + 296) & 8) == 0;
    *((_DWORD *)this + 4) |= 0x2000u;
    *((_BYTE *)this + 296) |= 8u;
    v18 = *((_DWORD *)this + 4);
  }
  v40 = this;
  if ( (v18 & 0x10000) != 0 )
    return 1;
  if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_850122922cd1779a7f9819b269b43cf1___(
                          this,
                          a2,
                          &v40) )
  {
    *((_DWORD *)this + 4) |= 0x10000u;
    return 1;
  }
  return 0;
}
