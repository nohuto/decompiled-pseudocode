/*
 * XREFs of ?EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z @ 0x1C0217DB4
 * Callers:
 *     ?EmitUpdateCommands@CTableTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0217F10 (-EmitUpdateCommands@CTableTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C000B6D8 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0011E08 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

bool __fastcall DirectComposition::CTableTransferEffectMarshaler::EmitTable(
        DirectComposition::CTableTransferEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2,
        unsigned int a3)
{
  __int64 v6; // rbp
  __int64 v7; // r15
  void *v8; // rdx
  unsigned __int64 v9; // rsi
  char *v10; // r9
  void *v12; // [rsp+50h] [rbp+8h] BYREF

  v6 = 2LL * a3;
  v7 = 2 * (a3 + 8LL);
  if ( *((_DWORD *)this + 4 * a3 + 33) < *((_DWORD *)this + 4 * a3 + 32) )
  {
    do
    {
      v8 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
      v12 = v8;
      if ( (unsigned __int64)v8 < 0x18 )
      {
        if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v12) )
          return *((_DWORD *)this + 2 * v6 + 33) == *((_DWORD *)this + 2 * v7);
        v8 = v12;
      }
      v9 = (unsigned int)(*((_DWORD *)this + 2 * v7) - *((_DWORD *)this + 2 * v6 + 33));
      if ( v9 >= ((unsigned __int64)v8 - 20) >> 2 )
        LODWORD(v9) = ((unsigned __int64)v8 - 20) >> 2;
      v12 = 0LL;
      DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v9 + 20), &v12);
      v10 = (char *)v12;
      *(_DWORD *)v12 = 4 * v9 + 20;
      *(_OWORD *)(v10 + 4) = 0LL;
      *((_DWORD *)v10 + 1) = 386;
      *((_DWORD *)v10 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v10 + 4) = a3;
      *((_DWORD *)v10 + 3) = *((_DWORD *)this + 2 * v6 + 33) != 0;
      memmove(
        v10 + 20,
        (const void *)(*((_QWORD *)this + v6 + 15) + 4LL * *((unsigned int *)this + 2 * v6 + 33)),
        (unsigned int)(4 * v9));
      *((_DWORD *)this + 2 * v6 + 33) += v9;
    }
    while ( *((_DWORD *)this + 2 * v6 + 33) < *((_DWORD *)this + 2 * v7) );
  }
  return *((_DWORD *)this + 2 * v6 + 33) == *((_DWORD *)this + 2 * v7);
}
