/*
 * XREFs of ?EmitSurfaces@CCompositionMipmapSurfaceMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026E0F0
 * Callers:
 *     ?EmitUpdateCommands@CCompositionMipmapSurfaceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026E250 (-EmitUpdateCommands@CCompositionMipmapSurfaceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C005EE20 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CCompositionMipmapSurfaceMarshaler::EmitSurfaces(
        DirectComposition::CCompositionMipmapSurfaceMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned int v3; // esi
  int i; // ecx
  void *v6; // rax
  unsigned int v7; // r14d
  char *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // eax
  void *v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  for ( i = *((_DWORD *)this + 22); i; i &= i - 1 )
    ++v3;
  if ( !v3 )
  {
LABEL_17:
    *((_DWORD *)this + 4) |= 0x40u;
    return 1;
  }
  while ( 1 )
  {
    v6 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    v15 = v6;
    if ( (unsigned __int64)v6 < 0x28 )
      break;
LABEL_7:
    v7 = v3;
    if ( v3 >= ((unsigned __int64)v6 - 16) / 0x18 )
      v7 = ((unsigned __int64)v6 - 16) / 0x18;
    v15 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, 24 * v7 + 16, &v15);
    v8 = (char *)v15;
    v9 = 0LL;
    v10 = 0LL;
    *(_DWORD *)v15 = 24 * v7 + 16;
    *(_QWORD *)(v8 + 4) = 0LL;
    *((_DWORD *)v8 + 3) = 0;
    *((_DWORD *)v8 + 1) = 89;
    *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
    for ( *((_DWORD *)v8 + 3) = v7; (unsigned int)v10 < v7; v9 = (unsigned int)(v9 + 1) )
    {
      if ( ((1 << v9) & *((_DWORD *)this + 22)) != 0 )
      {
        v11 = 3 * v10;
        *(_DWORD *)&v8[24 * v10 + 16] = v9;
        v12 = *(_QWORD *)(*((_QWORD *)this + 7) + 24 * v9);
        if ( v12 )
          v13 = *(_DWORD *)(v12 + 32);
        else
          v13 = 0;
        *(_DWORD *)&v8[24 * v10 + 20] = v13;
        v10 = (unsigned int)(v10 + 1);
        *(_OWORD *)&v8[8 * v11 + 24] = *(_OWORD *)(*((_QWORD *)this + 7) + 24 * v9 + 8);
        *((_DWORD *)this + 22) &= ~(1 << v9);
      }
    }
    v3 -= v7;
    if ( !v3 )
      goto LABEL_17;
  }
  if ( DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v15) )
  {
    v6 = v15;
    goto LABEL_7;
  }
  return 0;
}
