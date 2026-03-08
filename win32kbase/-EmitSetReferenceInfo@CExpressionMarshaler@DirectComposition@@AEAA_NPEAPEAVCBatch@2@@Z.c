/*
 * XREFs of ?EmitSetReferenceInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0063174
 * Callers:
 *     ?EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0062D00 (-EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C005EE20 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CExpressionMarshaler::EmitSetReferenceInfo(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  void *v4; // rdx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  char *v7; // rcx
  unsigned int v8; // r8d
  _OWORD *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  void *v14; // [rsp+30h] [rbp+8h] BYREF

  for ( ; *((_DWORD *)this + 55) < *((_DWORD *)this + 54); *((_DWORD *)this + 55) += v5 )
  {
    v4 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    v14 = v4;
    if ( (unsigned __int64)v4 < 0x2C )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v14) )
        return *((_DWORD *)this + 55) == *((_DWORD *)this + 54);
      v4 = v14;
    }
    v5 = (unsigned int)(*((_DWORD *)this + 54) - *((_DWORD *)this + 55));
    v6 = ((unsigned __int64)v4 - 20) / 0x18;
    if ( v5 >= v6 )
      LODWORD(v5) = v6;
    v14 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(
      (struct DirectComposition::CBatch **)a2,
      (unsigned int)(24 * v5 + 20),
      &v14);
    v7 = (char *)v14;
    v8 = 0;
    *(_DWORD *)v14 = 24 * v5 + 20;
    v9 = v7 + 20;
    *(_OWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 1) = 145;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v7 + 3) = v5;
    for ( *((_DWORD *)v7 + 4) = *((_DWORD *)this + 54);
          v8 < (unsigned int)v5;
          *((_QWORD *)v9 - 1) = *(_QWORD *)(v12 + 8 * v11 + 16) )
    {
      v10 = v8 + *((_DWORD *)this + 55);
      ++v8;
      v11 = 3 * v10;
      v12 = *((_QWORD *)this + 26);
      *v9 = *(_OWORD *)(v12 + 8 * v11);
      v9 = (_OWORD *)((char *)v9 + 24);
    }
  }
  return *((_DWORD *)this + 55) == *((_DWORD *)this + 54);
}
