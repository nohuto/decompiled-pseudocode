/*
 * XREFs of ?EmitUpdateRails@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00AC788
 * Callers:
 *     ?EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00AC0E0 (-EmitUpdateCommands@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionMarshaler::EmitUpdateRails(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // bl
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x800) != 0 )
  {
    v6 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v6) )
    {
      v4 = (char *)v6;
      *(_DWORD *)v6 = 16;
      *(_QWORD *)(v4 + 4) = 0LL;
      *((_DWORD *)v4 + 3) = 0;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v4 + 1) = 197;
      v4[12] = (*((_BYTE *)this + 332) & 0x40) != 0;
      v4[13] = *((_BYTE *)this + 332) >> 7;
      *((_DWORD *)this + 4) &= ~0x800u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
