/*
 * XREFs of ?EmitSegmentUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C024FB78
 * Callers:
 *     ?EmitUpdateCommands@CInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C024FDC0 (-EmitUpdateCommands@CInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CInkMarshaler::EmitSegmentUpdate(
        DirectComposition::CInkMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v4; // rdx
  void *v6; // [rsp+80h] [rbp+10h] BYREF

  for ( ; *((_DWORD *)this + 38) != *((_QWORD *)this + 17); *((_DWORD *)v4 + 3) = (*((_DWORD *)this + 38))++ )
  {
    v6 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x34uLL, &v6) )
      break;
    v4 = (char *)v6;
    *(_DWORD *)v6 = 52;
    *(_OWORD *)(v4 + 4) = 0LL;
    *(_OWORD *)(v4 + 20) = 0LL;
    *(_OWORD *)(v4 + 36) = 0LL;
    *((_DWORD *)v4 + 1) = 186;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v4 + 4) = *(_OWORD *)(*((_QWORD *)this + 18) * *((unsigned int *)this + 38) + *((_QWORD *)this + 14));
    *((_DWORD *)v4 + 5) = *(_DWORD *)(*((_QWORD *)this + 18) * *((unsigned int *)this + 38)
                                    + *((_QWORD *)this + 14)
                                    + 4LL);
    *((_DWORD *)v4 + 6) = *(_DWORD *)(*((_QWORD *)this + 18) * *((unsigned int *)this + 38)
                                    + *((_QWORD *)this + 14)
                                    + 8LL);
    *((_DWORD *)v4 + 7) = *(_DWORD *)(*((_QWORD *)this + 18) * *((unsigned int *)this + 38)
                                    + *((_QWORD *)this + 14)
                                    + 12LL);
    *((_DWORD *)v4 + 8) = *(_OWORD *)(*((_QWORD *)this + 18) * *((unsigned int *)this + 38)
                                    + *((_QWORD *)this + 14)
                                    + 16LL);
    *((_DWORD *)v4 + 9) = *(_DWORD *)(*((_QWORD *)this + 18) * *((unsigned int *)this + 38)
                                    + *((_QWORD *)this + 14)
                                    + 20LL);
    *((_DWORD *)v4 + 10) = *(_DWORD *)(*((_QWORD *)this + 18) * *((unsigned int *)this + 38)
                                     + *((_QWORD *)this + 14)
                                     + 24LL);
    *((_DWORD *)v4 + 11) = *(_DWORD *)(*((_QWORD *)this + 18) * *((unsigned int *)this + 38)
                                     + *((_QWORD *)this + 14)
                                     + 28LL);
    *((_DWORD *)v4 + 12) = *(_DWORD *)(*((_QWORD *)this + 18) * *((unsigned int *)this + 38)
                                     + *((_QWORD *)this + 14)
                                     + 32LL);
  }
  return *((unsigned int *)this + 38) == *((_QWORD *)this + 17);
}
