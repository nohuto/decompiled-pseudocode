/*
 * XREFs of ?EmitSetRectanglesCommand@CRegionGeometryMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01D98F0
 * Callers:
 *     ?EmitUpdateCommands@CRegionGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01DB2B0 (-EmitUpdateCommands@CRegionGeometryMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C005B9DC (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0062BD8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 */

bool __fastcall DirectComposition::CRegionGeometryMarshaler::EmitSetRectanglesCommand(
        DirectComposition::CRegionGeometryMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  bool v5; // zf
  unsigned int v6; // eax
  bool v7; // bp
  void *v8; // rdx
  unsigned __int64 v9; // r15
  unsigned int v10; // r14d
  char *v11; // rdx
  int v12; // eax
  void *v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( (v2 & 0x800) != 0 )
  {
    v5 = *((_DWORD *)this + 26) == 0;
    *((_DWORD *)this + 4) = v2 & 0xFFFFF7FF;
    v6 = *((_DWORD *)this + 27);
    v7 = v5;
    while ( v6 < *((_DWORD *)this + 26) || v7 )
    {
      v7 = 0;
      v8 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
      v14 = v8;
      if ( (unsigned __int64)v8 < 0x30 )
      {
        if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v14) )
        {
          *((_DWORD *)this + 4) |= 0x800u;
          return *((_DWORD *)this + 27) == *((_DWORD *)this + 26);
        }
        v8 = v14;
      }
      v9 = (unsigned int)(*((_DWORD *)this + 26) - *((_DWORD *)this + 27));
      if ( v9 >= ((unsigned __int64)v8 - 32) >> 4 )
        LODWORD(v9) = ((unsigned __int64)v8 - 32) >> 4;
      v14 = 0LL;
      v10 = 16 * v9;
      DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(16 * v9 + 32), &v14);
      v11 = (char *)v14;
      *(_DWORD *)v14 = 16 * v9 + 32;
      v5 = *((_DWORD *)this + 27) == 0;
      *(_OWORD *)(v11 + 4) = 0LL;
      *(_QWORD *)(v11 + 20) = 0LL;
      *((_DWORD *)v11 + 7) = 0;
      v12 = 585;
      if ( !v5 )
        v12 = 586;
      *((_DWORD *)v11 + 1) = v12;
      *((_DWORD *)v11 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v11 + 3) = v10;
      memmove(v11 + 16, (const void *)(*((_QWORD *)this + 12) + 16LL * *((unsigned int *)this + 27)), v10);
      *((_DWORD *)this + 27) += v9;
      v6 = *((_DWORD *)this + 27);
    }
  }
  return *((_DWORD *)this + 27) == *((_DWORD *)this + 26);
}
