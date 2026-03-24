/*
 * XREFs of ?EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0066DB4
 * Callers:
 *     ?EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0065F40 (-EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?OpenDwmHandle@CompositionInputObject@@QEBAJPEAPEAX@Z @ 0x1C004BD50 (-OpenDwmHandle@CompositionInputObject@@QEBAJPEAPEAX@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0063BD8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionMarshaler::EmitInputSink(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  CompositionInputObject *v5; // rcx
  char *v6; // rcx
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
    return 1;
  v9 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v9) )
  {
    v8 = 0LL;
    v5 = (CompositionInputObject *)*((_QWORD *)this + 33);
    if ( !v5 || (int)CompositionInputObject::OpenDwmHandle(v5, &v8, v3, v4) < 0 )
      v8 = 0LL;
    v6 = (char *)v9;
    *(_DWORD *)v9 = 20;
    *(_OWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 1) = 201;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
    *(_QWORD *)(v6 + 12) = v8;
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  return 0;
}
