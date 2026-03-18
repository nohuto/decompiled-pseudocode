/*
 * XREFs of ?EmitSetTexCoord0LayoutCommand@CSceneMeshMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0223EA8
 * Callers:
 *     ?EmitUpdateCommands@CSceneMeshMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0225000 (-EmitUpdateCommands@CSceneMeshMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0011E08 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CSceneMeshMarshaler::EmitSetTexCoord0LayoutCommand(
        DirectComposition::CSceneMeshMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x10000) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v5) )
  {
    v3 = (char *)v5;
    *(_DWORD *)v5 = 16;
    *(_QWORD *)(v3 + 4) = 0LL;
    *((_DWORD *)v3 + 3) = 0;
    *((_DWORD *)v3 + 1) = 623;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v3 + 3) = *((_DWORD *)this + 35);
    *((_DWORD *)this + 4) &= ~0x10000u;
    return 1;
  }
  return 0;
}
