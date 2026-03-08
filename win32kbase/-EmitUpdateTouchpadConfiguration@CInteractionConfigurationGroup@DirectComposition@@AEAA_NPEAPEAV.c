/*
 * XREFs of ?EmitUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00AC488
 * Callers:
 *     ?EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00AC1BC (-EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C005EE20 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CInteractionConfigurationGroup::EmitUpdateTouchpadConfiguration(
        DirectComposition::CInteractionConfigurationGroup *this,
        struct DirectComposition::CBatch ***a2)
{
  void *v5; // rdx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  char *v8; // rdx
  _QWORD *v9; // r9
  unsigned int i; // r8d
  __int64 v11; // rcx
  __int64 v12; // rdx
  void *v13; // [rsp+30h] [rbp+8h] BYREF

  while ( (*((_DWORD *)this + 3) & 8) != 0 || *((_DWORD *)this + 14) < *((_DWORD *)this + 12) )
  {
    v5 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    v13 = v5;
    if ( (unsigned __int64)v5 < 0x24 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v13) )
        return *((_DWORD *)this + 14) == *((_DWORD *)this + 12);
      v5 = v13;
    }
    v6 = (unsigned int)(*((_DWORD *)this + 12) - *((_DWORD *)this + 14));
    v7 = ((unsigned __int64)v5 - 24) / 0xC;
    if ( v6 >= v7 )
      LODWORD(v6) = v7;
    v13 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(12 * (v6 + 2)), &v13);
    v8 = (char *)v13;
    *(_DWORD *)v13 = 12 * (v6 + 2);
    v9 = v8 + 24;
    *(_OWORD *)(v8 + 4) = 0LL;
    *((_DWORD *)v8 + 5) = 0;
    *((_DWORD *)v8 + 1) = 195;
    *((_DWORD *)v8 + 2) = *(_DWORD *)(*(_QWORD *)this + 32LL);
    *((_DWORD *)v8 + 3) = v6;
    *((_DWORD *)v8 + 4) = *((_DWORD *)this + 2);
    *((_DWORD *)v8 + 5) = 2;
    if ( *((_DWORD *)this + 12) )
    {
      for ( i = 0; i < (unsigned int)v6; *((_DWORD *)v9 - 1) = *(_DWORD *)(v12 + 8) )
      {
        v11 = i + *((_DWORD *)this + 14);
        ++i;
        v12 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v11);
        *v9 = *(_QWORD *)v12;
        v9 = (_QWORD *)((char *)v9 + 12);
      }
    }
    *((_DWORD *)this + 3) &= ~8u;
    *((_DWORD *)this + 14) += v6;
  }
  return *((_DWORD *)this + 14) == *((_DWORD *)this + 12);
}
