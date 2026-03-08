/*
 * XREFs of ?EmitApplyPositionShift@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0266BAC
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0267B00 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C005EE20 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z @ 0x1C00C3930 (-Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z.c)
 */

bool __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitApplyPositionShift(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned __int64 i; // rsi
  void *v5; // rcx
  unsigned __int64 v6; // rbp
  char *v7; // rcx
  unsigned int v8; // r9d
  char *v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rax
  void *v15; // [rsp+40h] [rbp+8h] BYREF

  for ( i = *((unsigned int *)this + 98); *((_DWORD *)this + 102) < (unsigned int)i; *((_DWORD *)this + 102) += v6 )
  {
    v5 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    v15 = v5;
    if ( (unsigned __int64)v5 < 0x1C )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v15) )
        break;
      v5 = v15;
    }
    v6 = (unsigned int)(i - *((_DWORD *)this + 102));
    if ( v6 >= ((unsigned __int64)v5 - 16) / 0xC )
      LODWORD(v6) = ((unsigned __int64)v5 - 16) / 0xC;
    v15 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(12 * v6 + 16), &v15);
    v7 = (char *)v15;
    v8 = 0;
    *(_DWORD *)v15 = 12 * v6 + 16;
    v9 = v7 + 16;
    *(_QWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 3) = 0;
    *((_DWORD *)v7 + 1) = 199;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
    for ( *((_DWORD *)v7 + 3) = v6; v8 < (unsigned int)v6; v9 += 12 )
    {
      v10 = *((_QWORD *)this + 46);
      v11 = *((_QWORD *)this + 50) * (v8 + *((_DWORD *)this + 102));
      ++v8;
      v12 = *(_DWORD *)(v11 + v10 + 8);
      *(_QWORD *)v9 = *(_QWORD *)(v11 + v10);
      *((_DWORD *)v9 + 2) = v12;
    }
  }
  v13 = *((unsigned int *)this + 102);
  if ( (_DWORD)v13 == (_DWORD)i )
  {
    DirectComposition::CDCompDynamicArrayBase::Shrink(
      (DirectComposition::CInteractionTrackerMarshaler *)((char *)this + 368),
      i);
    *((_DWORD *)this + 102) = 0;
    v13 = 0LL;
  }
  return v13 == *((_QWORD *)this + 49);
}
