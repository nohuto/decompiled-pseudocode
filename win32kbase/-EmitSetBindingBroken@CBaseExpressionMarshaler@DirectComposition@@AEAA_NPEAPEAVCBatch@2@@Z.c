/*
 * XREFs of ?EmitSetBindingBroken@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0062E94
 * Callers:
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0062D70 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CBaseExpressionMarshaler::EmitSetBindingBroken(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // bl
  char *v5; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x100) == 0 && (*((_BYTE *)this + 120) & 4) != 0 )
  {
    v6 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v6) )
    {
      v5 = (char *)v6;
      *(_DWORD *)v6 = 16;
      *(_QWORD *)(v5 + 4) = 0LL;
      *((_DWORD *)v5 + 3) = 0;
      *((_DWORD *)v5 + 1) = 22;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      v5[12] = (*((_BYTE *)this + 120) & 8) != 0;
      *((_DWORD *)this + 4) |= 0x100u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
