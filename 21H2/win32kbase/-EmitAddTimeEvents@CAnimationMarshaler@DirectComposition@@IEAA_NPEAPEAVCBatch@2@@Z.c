/*
 * XREFs of ?EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00AED20
 * Callers:
 *     ?EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00AEC20 (-EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C000B6D8 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0011E08 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

bool __fastcall DirectComposition::CAnimationMarshaler::EmitAddTimeEvents(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  void *v5; // rdx
  unsigned __int64 v6; // rsi
  char *v7; // rcx
  void *v8; // [rsp+40h] [rbp+8h] BYREF

  for ( ; *((_DWORD *)this + 65) < *((_DWORD *)this + 64); *((_DWORD *)this + 65) += v6 )
  {
    v5 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    v8 = v5;
    if ( (unsigned __int64)v5 < 0x1C )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v8) )
        return *((_DWORD *)this + 65) == *((_DWORD *)this + 64);
      v5 = v8;
    }
    v6 = (unsigned int)(*((_DWORD *)this + 64) - *((_DWORD *)this + 65));
    if ( v6 >= ((unsigned __int64)v5 - 12) >> 4 )
      LODWORD(v6) = ((unsigned __int64)v5 - 12) >> 4;
    v8 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(16 * v6 + 12), &v8);
    v7 = (char *)v8;
    *(_DWORD *)v8 = 16 * v6 + 12;
    *(_QWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 1) = 1;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 12);
    memmove(
      v7 + 12,
      (const void *)(*((_QWORD *)this + 31) + 16LL * *((unsigned int *)this + 65)),
      (unsigned int)(16 * v6));
  }
  return *((_DWORD *)this + 65) == *((_DWORD *)this + 64);
}
