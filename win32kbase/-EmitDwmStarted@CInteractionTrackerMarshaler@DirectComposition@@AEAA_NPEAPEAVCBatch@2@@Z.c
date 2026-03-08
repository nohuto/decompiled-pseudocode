/*
 * XREFs of ?EmitDwmStarted@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0266ECC
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0267B00 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitDwmStarted(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // di
  char *v4; // rcx
  char v5; // al
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x2000000) == 0 )
  {
    v7 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v7) )
    {
      v4 = (char *)v7;
      *(_DWORD *)v7 = 28;
      *(_OWORD *)(v4 + 4) = 0LL;
      *(_QWORD *)(v4 + 20) = 0LL;
      *((_DWORD *)v4 + 1) = 202;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
      v4[12] = (*((_BYTE *)this + 464) & 4) != 0;
      *((_DWORD *)v4 + 4) = *((_DWORD *)this + 17);
      *((_DWORD *)v4 + 5) = *((_DWORD *)this + 18);
      *((_DWORD *)v4 + 6) = *((_DWORD *)this + 39);
      v5 = *((_BYTE *)this + 464);
      if ( (v5 & 4) != 0 )
        *((_DWORD *)this + 4) &= ~0x4000000u;
      *((_DWORD *)this + 4) |= 0x2000000u;
      *((_BYTE *)this + 464) = v5 & 0xFB;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
