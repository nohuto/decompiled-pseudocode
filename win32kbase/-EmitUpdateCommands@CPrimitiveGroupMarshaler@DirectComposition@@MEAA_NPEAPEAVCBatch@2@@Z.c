/*
 * XREFs of ?EmitUpdateCommands@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A8A70
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C005EE20 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitAddPrimitivesCommand@CPrimitiveGroupMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A8B50 (-EmitAddPrimitivesCommand@CPrimitiveGroupMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAppendSurfaceResources@CPrimitiveGroupMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A8BE8 (-EmitAppendSurfaceResources@CPrimitiveGroupMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetDirtyAndBoundsRectCommand@CPrimitiveGroupMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A8CE0 (-EmitSetDirtyAndBoundsRectCommand@CPrimitiveGroupMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatc.c)
 */

char __fastcall DirectComposition::CPrimitiveGroupMarshaler::EmitUpdateCommands(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  char *v5; // rcx
  char i; // r14
  char *v8; // rcx
  void *v9; // rdx
  unsigned __int64 v10; // r15
  char *v11; // rcx
  unsigned int v12; // edx
  _DWORD *v13; // r8
  __int64 v14; // rcx
  void *v15; // [rsp+40h] [rbp+20h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( (v2 & 0x40) != 0 )
  {
    v15 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v15) )
      return 0;
    v5 = (char *)v15;
    *(_DWORD *)v15 = 12;
    *(_QWORD *)(v5 + 4) = 0LL;
    *((_DWORD *)v5 + 1) = 287;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x80u) != 0 )
  {
    v15 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v15) )
    {
      v8 = (char *)v15;
      *(_DWORD *)v15 = 12;
      *(_QWORD *)(v8 + 4) = 0LL;
      *((_DWORD *)v8 + 1) = 286;
      *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)this + 4) &= ~0x80u;
      goto LABEL_5;
    }
    return 0;
  }
LABEL_5:
  if ( !DirectComposition::CPrimitiveGroupMarshaler::EmitAppendSurfaceResources(
          this,
          (struct DirectComposition::CBatch **)a2) )
    return 0;
  for ( i = 1; *((_DWORD *)this + 27) < *((_DWORD *)this + 26); *((_DWORD *)this + 27) += v10 )
  {
    v9 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    v15 = v9;
    if ( (unsigned __int64)v9 < 0x14 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v15) )
        break;
      v9 = v15;
    }
    v10 = (unsigned int)(*((_DWORD *)this + 26) - *((_DWORD *)this + 27));
    if ( v10 >= ((unsigned __int64)v9 - 16) >> 2 )
      LODWORD(v10) = ((unsigned __int64)v9 - 16) >> 2;
    v15 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v10 + 16), &v15);
    v11 = (char *)v15;
    v12 = 0;
    *(_DWORD *)v15 = 4 * v10 + 16;
    v13 = v11 + 16;
    *(_QWORD *)(v11 + 4) = 0LL;
    *((_DWORD *)v11 + 3) = 0;
    *((_DWORD *)v11 + 1) = 283;
    *((_DWORD *)v11 + 2) = *((_DWORD *)this + 8);
    for ( *((_DWORD *)v11 + 3) = v10; v12 < (unsigned int)v10; ++v13 )
    {
      v14 = v12 + *((_DWORD *)this + 27);
      ++v12;
      *v13 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * v14) + 32LL);
    }
  }
  if ( *((_DWORD *)this + 27) != *((_DWORD *)this + 26)
    || !DirectComposition::CPrimitiveGroupMarshaler::EmitAddPrimitivesCommand(
          this,
          (struct DirectComposition::CBatch **)a2)
    || !DirectComposition::CPrimitiveGroupMarshaler::EmitSetDirtyAndBoundsRectCommand(
          this,
          (struct DirectComposition::CBatch **)a2) )
  {
    return 0;
  }
  return i;
}
