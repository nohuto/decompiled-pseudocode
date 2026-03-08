/*
 * XREFs of ?EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z @ 0x1C024F250
 * Callers:
 *     ?EmitUpdateCommands@CTableTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C024F3A0 (-EmitUpdateCommands@CTableTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C005EE20 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

bool __fastcall DirectComposition::CTableTransferEffectMarshaler::EmitTable(
        DirectComposition::CTableTransferEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2,
        unsigned int a3)
{
  __int64 v4; // rbp
  __int64 v5; // r12
  void *v7; // rdx
  unsigned __int64 v8; // rsi
  char *v9; // r9
  void *v11; // [rsp+50h] [rbp+8h] BYREF

  v4 = 2LL * a3;
  v5 = a3;
  if ( *((_DWORD *)this + 4 * a3 + 31) < *((_DWORD *)this + 4 * a3 + 30) )
  {
    do
    {
      v7 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
      v11 = v7;
      if ( (unsigned __int64)v7 < 0x18 )
      {
        if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v11) )
          return *((_DWORD *)this + 2 * v4 + 31) == *((_DWORD *)this + 2 * v4 + 30);
        v7 = v11;
      }
      v8 = (unsigned int)(*((_DWORD *)this + 2 * v4 + 30) - *((_DWORD *)this + 2 * v4 + 31));
      if ( v8 >= ((unsigned __int64)v7 - 20) >> 2 )
        LODWORD(v8) = ((unsigned __int64)v7 - 20) >> 2;
      v11 = 0LL;
      DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v8 + 20), &v11);
      v9 = (char *)v11;
      *(_DWORD *)v11 = 4 * v8 + 20;
      *(_OWORD *)(v9 + 4) = 0LL;
      *((_DWORD *)v9 + 1) = 376;
      *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v9 + 4) = v5;
      *((_DWORD *)v9 + 3) = *((_DWORD *)this + 2 * v4 + 31) != 0;
      memmove(
        v9 + 20,
        (const void *)(*((_QWORD *)this + 2 * v5 + 14) + 4LL * *((unsigned int *)this + 2 * v4 + 31)),
        (unsigned int)(4 * v8));
      *((_DWORD *)this + 2 * v4 + 31) += v8;
    }
    while ( *((_DWORD *)this + 2 * v4 + 31) < *((_DWORD *)this + 2 * v4 + 30) );
  }
  return *((_DWORD *)this + 2 * v4 + 31) == *((_DWORD *)this + 2 * v4 + 30);
}
