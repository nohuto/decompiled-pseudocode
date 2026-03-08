/*
 * XREFs of ?Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z @ 0x1C0252828
 * Callers:
 *     ?EmitUpdateCommands@CAtlasedRectsMeshMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0259D10 (-EmitUpdateCommands@CAtlasedRectsMeshMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CGdiSpriteBitmapMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0259F10 (-EmitUpdateCommands@CGdiSpriteBitmapMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CGradientLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025A04C (-EmitUpdateCommands@CGradientLegacyMilBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CMeshGeometry2DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025A2E0 (-EmitUpdateCommands@CMeshGeometry2DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CParticleBaseBehaviorMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025A440 (-EmitUpdateCommands@CParticleBaseBehaviorMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CRegionGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C025A930 (-EmitUpdateCommands@CRegionGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C005EE20 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

bool __fastcall DirectComposition::CMarshaledArrayBase::Marshal(
        _QWORD *a1,
        struct DirectComposition::CBatch ***a2,
        int a3,
        _DWORD *a4,
        int a5,
        int a6,
        int a7,
        unsigned __int64 a8)
{
  bool i; // dl
  void *v12; // rdx
  unsigned int v13; // ebp
  char *v14; // rcx
  int v15; // eax
  void *v17[9]; // [rsp+20h] [rbp-48h] BYREF

  if ( (*a4 & a5) != 0 )
  {
    *a4 &= ~a5;
    for ( i = a1[2] == 0LL; a1[2] != *a1 || i; i = 0 )
    {
      v12 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
      v17[0] = v12;
      if ( (unsigned __int64)v12 < a8 + 16 )
      {
        if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)v17) )
        {
          *a4 |= a5;
          return a1[2] == *a1;
        }
        v12 = v17[0];
      }
      v13 = ((unsigned __int64)v12 - 16) / a8;
      if ( a1[2] - *a1 < ((unsigned __int64)v12 - 16) / a8 )
        v13 = *((_DWORD *)a1 + 4) - *a1;
      v17[0] = 0LL;
      DirectComposition::CBatch::EnsureBatchBuffer(a2, v13 * (unsigned int)a8 + 16, v17);
      v14 = (char *)v17[0];
      *(_DWORD *)v17[0] = v13 * a8 + 16;
      *(_QWORD *)(v14 + 4) = 0LL;
      *((_DWORD *)v14 + 3) = 0;
      v15 = a6;
      if ( *a1 )
        v15 = a7;
      *((_DWORD *)v14 + 1) = v15;
      *((_DWORD *)v14 + 2) = a3;
      *((_DWORD *)v14 + 3) = v13 * a8;
      memmove(v14 + 16, (const void *)(a1[1] + *a1 * a8), v13 * (unsigned int)a8);
      *a1 += v13;
    }
  }
  return a1[2] == *a1;
}
