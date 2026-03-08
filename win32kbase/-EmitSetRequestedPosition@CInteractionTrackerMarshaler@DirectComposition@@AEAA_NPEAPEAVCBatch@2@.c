/*
 * XREFs of ?EmitSetRequestedPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02677A8
 * Callers:
 *     ?EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0267710 (-EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedPosition(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // di
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x200) == 0 )
  {
    v6 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v6) )
    {
      v4 = (char *)v6;
      *(_DWORD *)v6 = 36;
      *(_OWORD *)(v4 + 4) = 0LL;
      *(_OWORD *)(v4 + 20) = 0LL;
      *((_DWORD *)v4 + 1) = 215;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v4 + 3) = *((_DWORD *)this + 30);
      *((_DWORD *)v4 + 4) = *((_DWORD *)this + 31);
      *((_DWORD *)v4 + 5) = *((_DWORD *)this + 51);
      *((_DWORD *)v4 + 6) = *((_DWORD *)this + 53);
      *((_DWORD *)v4 + 8) = *((_DWORD *)this + 32);
      *((_DWORD *)this + 4) |= 0x200u;
      *((_DWORD *)this + 30) = 0;
      *((_DWORD *)this + 31) = 0;
      *((_DWORD *)this + 32) = 0;
      *((_DWORD *)this + 51) = 0;
      *((_DWORD *)this + 53) = 0;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
