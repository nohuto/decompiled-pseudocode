/*
 * XREFs of ?EmitSetInertiaCenterpointAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01EF898
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01F03D0 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0062BD8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetInertiaCenterpointAnimations(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  int v3; // ebx
  char v6; // si
  char *v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  char *v10; // rcx
  __int64 v11; // rax
  void *v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v6 = 1;
  if ( (v2 & 0x8000000) == 0 )
  {
    v13 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v13) )
      return 0;
    v7 = (char *)v13;
    *(_DWORD *)v13 = 16;
    *(_QWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 3) = 0;
    *((_DWORD *)v7 + 1) = 213;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 6);
    v8 = *((_QWORD *)this + 41);
    if ( v8 )
      v9 = *(_DWORD *)(*(_QWORD *)(v8 + 16) + 24LL);
    else
      v9 = 0;
    *((_DWORD *)v7 + 3) = v9;
    *((_DWORD *)this + 4) |= 0x8000000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x10000000) != 0 )
    return v6;
  v13 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v13) )
    return 0;
  v10 = (char *)v13;
  *(_DWORD *)v13 = 16;
  *(_QWORD *)(v10 + 4) = 0LL;
  *((_DWORD *)v10 + 3) = 0;
  *((_DWORD *)v10 + 1) = 214;
  *((_DWORD *)v10 + 2) = *((_DWORD *)this + 6);
  v11 = *((_QWORD *)this + 42);
  if ( v11 )
    v3 = *(_DWORD *)(*(_QWORD *)(v11 + 16) + 24LL);
  *((_DWORD *)v10 + 3) = v3;
  *((_DWORD *)this + 4) |= 0x10000000u;
  return v6;
}
