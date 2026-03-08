/*
 * XREFs of ?EmitUpdateCommands@CMatrixTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000BF40
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CMatrixTransformMarshaler::EmitUpdateCommands(
        DirectComposition::CMatrixTransformMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rdx
  bool result; // al
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v5) )
    return 0;
  v3 = (char *)v5;
  *(_DWORD *)v5 = 36;
  *(_OWORD *)(v3 + 4) = 0LL;
  *(_OWORD *)(v3 + 20) = 0LL;
  *((_DWORD *)v3 + 1) = 468;
  *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
  result = 1;
  *(_OWORD *)(v3 + 12) = *(_OWORD *)((char *)this + 72);
  *(_QWORD *)(v3 + 28) = *((_QWORD *)this + 11);
  return result;
}
