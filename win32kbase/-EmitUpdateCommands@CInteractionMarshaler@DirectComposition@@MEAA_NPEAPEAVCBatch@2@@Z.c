/*
 * XREFs of ?EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00AC0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00AC1BC (-EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitHoverPointerSource@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00AC700 (-EmitHoverPointerSource@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateRails@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00AC788 (-EmitUpdateRails@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00AC818 (-EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateFlags@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00AC8B0 (-EmitUpdateFlags@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CInteractionMarshaler::EmitUpdateCommands(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v4; // eax
  char v5; // si
  __int64 v7; // rsi
  char *v8; // rdx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rsi
  char *v13; // r8
  char *v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  char *v17; // rcx
  __int64 v18; // rax
  char *v19; // rcx
  void *v20; // [rsp+50h] [rbp+30h] BYREF

  if ( !DirectComposition::CInteractionMarshaler::EmitInputSink(this, a2) )
    return 0;
  if ( (*((_DWORD *)this + 4) & 0x80u) != 0 )
  {
    v20 = 0LL;
    while ( 1 )
    {
      v11 = *((_DWORD *)this + 72);
      if ( !v11 )
        break;
      v7 = (unsigned int)(v11 - 1);
      if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)a2, 0x10uLL, &v20) )
        return 0;
      v8 = (char *)v20;
      *(_DWORD *)v20 = 16;
      *(_QWORD *)(v8 + 4) = 0LL;
      *((_DWORD *)v8 + 3) = 0;
      *((_DWORD *)v8 + 1) = 189;
      *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v8 + 3) = *(_DWORD *)(*((_QWORD *)this + 35) + 4 * v7);
      v9 = *((_DWORD *)this + 72) - 1;
      for ( *((_DWORD *)this + 72) = v9;
            (unsigned int)v7 < *((_DWORD *)this + 72);
            *(_DWORD *)(*((_QWORD *)this + 35) + 4 * v10) = *(_DWORD *)(*((_QWORD *)this + 35) + 4LL * (unsigned int)v7) )
      {
        v10 = (unsigned int)v7;
        LODWORD(v7) = v7 + 1;
      }
    }
    *((_DWORD *)this + 4) &= ~0x80u;
  }
  if ( !DirectComposition::CInteractionMarshaler::EmitUpdateFlags(this, a2) )
    return 0;
  v4 = *((_DWORD *)this + 76);
  if ( v4 )
  {
    v20 = 0LL;
    do
    {
      v12 = (unsigned int)(v4 - 1);
      if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)a2, 0x1CuLL, &v20) )
        return 0;
      v13 = (char *)v20;
      *(_DWORD *)v20 = 28;
      *(_OWORD *)(v13 + 4) = 0LL;
      *(_QWORD *)(v13 + 20) = 0LL;
      *((_DWORD *)v13 + 1) = 188;
      *((_DWORD *)v13 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v13 + 3) = **(_DWORD **)(*((_QWORD *)this + 37) + 8 * v12);
      *(_QWORD *)(v13 + 20) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 37) + 8 * v12) + 8LL);
      v14 = *(char **)(*((_QWORD *)this + 37) + 8 * v12);
      if ( v14 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v14);
      v15 = *((_DWORD *)this + 76) - 1;
      for ( *((_DWORD *)this + 76) = v15;
            (unsigned int)v12 < *((_DWORD *)this + 76);
            *(_QWORD *)(*((_QWORD *)this + 37) + 8 * v16) = *(_QWORD *)(*((_QWORD *)this + 37) + 8LL * (unsigned int)v12) )
      {
        v16 = (unsigned int)v12;
        LODWORD(v12) = v12 + 1;
      }
      v4 = *((_DWORD *)this + 76);
    }
    while ( v4 );
  }
  if ( (*((_DWORD *)this + 4) & 0x400) != 0 )
  {
    v20 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)a2, 0x10uLL, &v20) )
      return 0;
    v17 = (char *)v20;
    *(_DWORD *)v20 = 16;
    *(_QWORD *)(v17 + 4) = 0LL;
    *((_DWORD *)v17 + 3) = 0;
    *((_DWORD *)v17 + 1) = 193;
    *((_DWORD *)v17 + 2) = *((_DWORD *)this + 8);
    v18 = *((_QWORD *)this + 39);
    if ( v18 )
      LODWORD(v18) = *(_DWORD *)(v18 + 32);
    *((_DWORD *)v17 + 3) = v18;
    *((_DWORD *)this + 4) &= ~0x400u;
  }
  if ( !DirectComposition::CInteractionMarshaler::EmitUpdateRails(this, a2)
    || !DirectComposition::CInteractionConfigurationGroup::EmitUpdateCommands(
          (DirectComposition::CInteractionMarshaler *)((char *)this + 56),
          a2)
    || !DirectComposition::CInteractionConfigurationGroup::EmitUpdateCommands(
          (DirectComposition::CInteractionMarshaler *)((char *)this + 160),
          a2) )
  {
    return 0;
  }
  v5 = 1;
  if ( (*((_DWORD *)this + 4) & 0x1000) != 0 )
  {
    v20 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)a2, 0x10uLL, &v20) )
      return 0;
    v19 = (char *)v20;
    *(_DWORD *)v20 = 16;
    *(_QWORD *)(v19 + 4) = 0LL;
    *((_DWORD *)v19 + 3) = 0;
    *((_DWORD *)v19 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v19 + 1) = 190;
    v19[12] = *((_BYTE *)this + 333) & 1;
    *((_DWORD *)this + 4) &= ~0x1000u;
  }
  if ( !DirectComposition::CInteractionMarshaler::EmitHoverPointerSource(this, a2) )
    return 0;
  return v5;
}
