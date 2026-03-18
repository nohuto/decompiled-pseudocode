/*
 * XREFs of ?EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A71D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0011E08 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A72AC (-EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitHoverPointerSource@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A77D0 (-EmitHoverPointerSource@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateRails@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A7858 (-EmitUpdateRails@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateFlags@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A78EC (-EmitUpdateFlags@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A79C8 (-EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CInteractionMarshaler::EmitUpdateCommands(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v4; // eax
  int v5; // eax
  char v6; // si
  int v8; // ecx
  __int64 v9; // rsi
  char *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  char *v13; // r8
  char *v14; // rdx
  __int64 v15; // rcx
  char *v16; // rcx
  __int64 v17; // rax
  char *v18; // rcx
  void *v19; // [rsp+50h] [rbp+30h] BYREF

  if ( !DirectComposition::CInteractionMarshaler::EmitInputSink(this, a2) )
    return 0;
  v4 = *((_DWORD *)this + 4);
  if ( (v4 & 0x80u) != 0 )
  {
    v19 = 0LL;
    v8 = *((_DWORD *)this + 74);
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = (unsigned int)(v8 - 1);
        if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)a2, 0x10uLL, &v19) )
          return 0;
        v10 = (char *)v19;
        *(_DWORD *)v19 = 16;
        *(_QWORD *)(v10 + 4) = 0LL;
        *((_DWORD *)v10 + 3) = 0;
        *((_DWORD *)v10 + 1) = 188;
        *((_DWORD *)v10 + 2) = *((_DWORD *)this + 8);
        *((_DWORD *)v10 + 3) = *(_DWORD *)(*((_QWORD *)this + 36) + 4 * v9);
        if ( (unsigned int)v9 < --*((_DWORD *)this + 74) )
        {
          do
          {
            v11 = (unsigned int)v9;
            LODWORD(v9) = v9 + 1;
            *(_DWORD *)(*((_QWORD *)this + 36) + 4 * v11) = *(_DWORD *)(*((_QWORD *)this + 36) + 4LL * (unsigned int)v9);
          }
          while ( (unsigned int)v9 < *((_DWORD *)this + 74) );
        }
        v8 = *((_DWORD *)this + 74);
        if ( !v8 )
        {
          v4 = *((_DWORD *)this + 4);
          break;
        }
      }
    }
    *((_DWORD *)this + 4) = v4 & 0xFFFFFF7F;
  }
  if ( !DirectComposition::CInteractionMarshaler::EmitUpdateFlags(this, a2) )
    return 0;
  v5 = *((_DWORD *)this + 78);
  if ( v5 )
  {
    v19 = 0LL;
    do
    {
      v12 = (unsigned int)(v5 - 1);
      if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)a2, 0x1CuLL, &v19) )
        return 0;
      v13 = (char *)v19;
      *(_DWORD *)v19 = 28;
      *(_OWORD *)(v13 + 4) = 0LL;
      *(_QWORD *)(v13 + 20) = 0LL;
      *((_DWORD *)v13 + 1) = 187;
      *((_DWORD *)v13 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v13 + 3) = **(_DWORD **)(*((_QWORD *)this + 38) + 8 * v12);
      *(_QWORD *)(v13 + 20) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 38) + 8 * v12) + 8LL);
      v14 = *(char **)(*((_QWORD *)this + 38) + 8 * v12);
      if ( v14 )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v14);
      if ( (unsigned int)v12 < --*((_DWORD *)this + 78) )
      {
        do
        {
          v15 = (unsigned int)v12;
          LODWORD(v12) = v12 + 1;
          *(_QWORD *)(*((_QWORD *)this + 38) + 8 * v15) = *(_QWORD *)(*((_QWORD *)this + 38) + 8LL * (unsigned int)v12);
        }
        while ( (unsigned int)v12 < *((_DWORD *)this + 78) );
      }
      v5 = *((_DWORD *)this + 78);
    }
    while ( v5 );
  }
  if ( (*((_DWORD *)this + 4) & 0x400) != 0 )
  {
    v19 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)a2, 0x10uLL, &v19) )
      return 0;
    v16 = (char *)v19;
    *(_DWORD *)v19 = 16;
    *(_QWORD *)(v16 + 4) = 0LL;
    *((_DWORD *)v16 + 3) = 0;
    *((_DWORD *)v16 + 1) = 192;
    *((_DWORD *)v16 + 2) = *((_DWORD *)this + 8);
    v17 = *((_QWORD *)this + 40);
    if ( v17 )
      LODWORD(v17) = *(_DWORD *)(v17 + 32);
    *((_DWORD *)v16 + 3) = v17;
    *((_DWORD *)this + 4) &= ~0x400u;
  }
  if ( !DirectComposition::CInteractionMarshaler::EmitUpdateRails(this, a2)
    || !DirectComposition::CInteractionConfigurationGroup::EmitUpdateCommands(
          (DirectComposition::CInteractionMarshaler *)((char *)this + 64),
          a2)
    || !DirectComposition::CInteractionConfigurationGroup::EmitUpdateCommands(
          (DirectComposition::CInteractionMarshaler *)((char *)this + 168),
          a2) )
  {
    return 0;
  }
  v6 = 1;
  if ( (*((_DWORD *)this + 4) & 0x1000) != 0 )
  {
    v19 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)a2, 0x10uLL, &v19) )
      return 0;
    v18 = (char *)v19;
    *(_DWORD *)v19 = 16;
    *(_QWORD *)(v18 + 4) = 0LL;
    *((_DWORD *)v18 + 3) = 0;
    *((_DWORD *)v18 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v18 + 1) = 189;
    v18[12] = *((_BYTE *)this + 341) & 1;
    *((_DWORD *)this + 4) &= ~0x1000u;
  }
  if ( !DirectComposition::CInteractionMarshaler::EmitHoverPointerSource(this, a2) )
    return 0;
  return v6;
}
