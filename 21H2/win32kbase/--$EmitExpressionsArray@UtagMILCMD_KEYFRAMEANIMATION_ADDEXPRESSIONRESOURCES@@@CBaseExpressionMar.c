/*
 * XREFs of ??$EmitExpressionsArray@UtagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@@CBaseExpressionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@1@W4MILCMD@@PEAPEAVCResourceMarshaler@1@IPEAI@Z @ 0x1C009D064
 * Callers:
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0064090 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C005B9DC (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0062BD8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CBaseExpressionMarshaler::EmitExpressionsArray<tagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES>(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        void *a6)
{
  unsigned int *i; // rdi
  void *v11; // r9
  unsigned __int64 v12; // rbp
  char *v13; // rcx
  unsigned int v14; // edx
  _DWORD *v15; // r8
  __int64 v16; // rax

  for ( i = (unsigned int *)a6; *i < a5; *i += v12 )
  {
    v11 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    a6 = v11;
    if ( (unsigned __int64)v11 < 0x14 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&a6) )
        return *i == a5;
      v11 = a6;
    }
    v12 = a5 - *i;
    if ( v12 >= ((unsigned __int64)v11 - 16) >> 2 )
      LODWORD(v12) = ((unsigned __int64)v11 - 16) >> 2;
    a6 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v12 + 16), &a6);
    v13 = (char *)a6;
    v14 = 0;
    *(_DWORD *)a6 = 4 * v12 + 16;
    v15 = v13 + 16;
    *(_QWORD *)(v13 + 4) = 0LL;
    *((_DWORD *)v13 + 3) = 0;
    *((_DWORD *)v13 + 1) = 229;
    *((_DWORD *)v13 + 2) = *(_DWORD *)(a1 + 24);
    for ( *((_DWORD *)v13 + 3) = v12; v14 < (unsigned int)v12; ++v15 )
    {
      v16 = v14 + *i;
      ++v14;
      *v15 = *(_DWORD *)(*(_QWORD *)(a4 + 8 * v16) + 24LL);
    }
  }
  return *i == a5;
}
