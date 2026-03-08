/*
 * XREFs of ?EmitAddConditionAnimationResources@CConditionalExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02631AC
 * Callers:
 *     ?EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0263420 (-EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C005EE20 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CConditionalExpressionMarshaler::EmitAddConditionAnimationResources(
        DirectComposition::CConditionalExpressionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  void *v4; // rdx
  unsigned int v5; // esi
  char *v6; // rcx
  unsigned int v7; // r9d
  _DWORD *v8; // r8
  int v9; // edx
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  for ( ; *((_DWORD *)this + 35) < *((_DWORD *)this + 34); *((_DWORD *)this + 35) += 2 * v5 )
  {
    v4 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    v11 = v4;
    if ( (unsigned __int64)v4 < 0x18 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v11) )
        return *((_DWORD *)this + 35) == *((_DWORD *)this + 34);
      v4 = v11;
    }
    v5 = (unsigned int)(*((_DWORD *)this + 34) - *((_DWORD *)this + 35)) >> 1;
    if ( (unsigned __int64)(unsigned int)(*((_DWORD *)this + 34) - *((_DWORD *)this + 35)) >> 1 >= ((unsigned __int64)v4
                                                                                                  - 16) >> 3 )
      v5 = ((unsigned __int64)v4 - 16) >> 3;
    v11 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, 8 * v5 + 16, &v11);
    v6 = (char *)v11;
    v7 = 0;
    *(_DWORD *)v11 = 8 * v5 + 16;
    v8 = v6 + 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 120;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    for ( *((_DWORD *)v6 + 3) = v5;
          v7 < v5;
          *(v8 - 1) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 16)
                                            + 8LL * (unsigned int)(v9 + *((_DWORD *)this + 35) + 1))
                                + 32LL) )
    {
      v9 = 2 * v7++;
      *v8 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 16) + 8LL * (unsigned int)(v9 + *((_DWORD *)this + 35))) + 32LL);
      v8 += 2;
    }
  }
  return *((_DWORD *)this + 35) == *((_DWORD *)this + 34);
}
