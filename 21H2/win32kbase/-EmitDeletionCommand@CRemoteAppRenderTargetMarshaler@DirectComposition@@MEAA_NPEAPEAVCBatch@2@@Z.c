/*
 * XREFs of ?EmitDeletionCommand@CRemoteAppRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022C710
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitDeletionCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0011D30 (-EmitDeletionCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0011E08 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CRemoteAppRenderTargetMarshaler::EmitDeletionCommand(
        DirectComposition::CRemoteAppRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // di
  char *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( *((_QWORD *)this + 9) )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( (*((_DWORD *)this + 4) & 0x100) == 0 )
    return DirectComposition::CResourceMarshaler::EmitDeletionCommand(this, a2);
  v7 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)a2, 0xCuLL, &v7) )
  {
    v5 = (char *)v7;
    *(_DWORD *)v7 = 12;
    *(_QWORD *)(v5 + 4) = 0LL;
    *((_DWORD *)v5 + 1) = 337;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)this + 4) &= ~0x100u;
    return DirectComposition::CResourceMarshaler::EmitDeletionCommand(this, a2);
  }
  return v3;
}
