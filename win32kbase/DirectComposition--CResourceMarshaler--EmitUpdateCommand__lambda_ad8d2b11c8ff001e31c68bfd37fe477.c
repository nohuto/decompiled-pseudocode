/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe4772___lambda_cef133924e7ba8c5c0c6519b3ed084f6___ @ 0x1C0262E84
 * Callers:
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0063350 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C005EE20 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe4772___lambda_cef133924e7ba8c5c0c6519b3ed084f6___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        unsigned int *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r15
  __int64 v8; // r12
  void *v12; // rcx
  unsigned __int64 v13; // r14
  char *v14; // rdx
  char *v15; // r9
  unsigned int v16; // r10d
  __int64 v17; // r8
  __int64 v18; // rdx
  int v19; // eax
  __int64 v21; // [rsp+20h] [rbp-38h]
  void *v22; // [rsp+68h] [rbp+10h] BYREF

  v6 = a6;
  v8 = a5;
  while ( 1 )
  {
    v12 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    v22 = v12;
    if ( (unsigned __int64)v12 < 0x20 )
      break;
LABEL_5:
    v13 = a4 - *a3;
    if ( v13 >= ((unsigned __int64)v12 - 20) / 0xC )
      LODWORD(v13) = ((unsigned __int64)v12 - 20) / 0xC;
    v22 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(12 * v13 + 20), &v22);
    v14 = (char *)v22;
    *(_DWORD *)v22 = 12 * v13 + 20;
    v15 = v14 + 20;
    *(_OWORD *)(v14 + 4) = 0LL;
    *((_DWORD *)v14 + 1) = 222;
    *((_DWORD *)v14 + 2) = *(_DWORD *)(a1 + 32);
    *((_DWORD *)v14 + 4) = *(_DWORD *)(*(_QWORD *)v8 + 244LL);
    v16 = 0;
    for ( v14[12] = *a3 != 0; v16 < (unsigned int)v13; v15 += 12 )
    {
      ++v16;
      v17 = 2LL * (*a3)++;
      v18 = *(_QWORD *)(*(_QWORD *)v6 + 152LL);
      HIDWORD(v21) = *(_DWORD *)(v18 + 8 * v17 + 8);
      v19 = *(_DWORD *)(v18 + 8 * v17 + 12);
      LODWORD(v21) = *(_DWORD *)(*(_QWORD *)(v18 + 8 * v17) + 32LL);
      *(_QWORD *)v15 = v21;
      *((_DWORD *)v15 + 2) = v19;
    }
    if ( *a3 >= a4 )
      return 1;
  }
  if ( DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v22) )
  {
    v12 = v22;
    goto LABEL_5;
  }
  return 0;
}
