/*
 * XREFs of ?EmitUpdateCommands@CRedirectVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C026AF30
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0063B90 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CRedirectVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CRedirectVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v4; // edi
  char *v5; // rcx
  __int64 v6; // rax
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) )
  {
    if ( (*((_DWORD *)this + 96) & 1) == 0 )
      return 1;
    v8 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v8) )
    {
      v5 = (char *)v8;
      *(_DWORD *)v8 = 16;
      *(_QWORD *)(v5 + 4) = 0LL;
      *((_DWORD *)v5 + 3) = 0;
      *((_DWORD *)v5 + 1) = 325;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      v6 = *((_QWORD *)this + 47);
      if ( v6 )
        v4 = *(_DWORD *)(v6 + 32);
      *((_DWORD *)v5 + 3) = v4;
      *((_DWORD *)this + 96) &= ~1u;
      return 1;
    }
  }
  return 0;
}
