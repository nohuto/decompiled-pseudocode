/*
 * XREFs of MiInitializeEnclaveMetadataPage @ 0x140B9AC44
 * Callers:
 *     MiCreateEnclaveRegions @ 0x140B48B44 (MiCreateEnclaveRegions.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     MiReservePtes @ 0x14027D070 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1402CB8E0 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402CF2B0 (MiMakeValidPte.c)
 *     MiSetPfnBlink @ 0x1402DF0B0 (MiSetPfnBlink.c)
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
 *     MiWritePteShadow @ 0x140356D4C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140356DAC (MiPteHasShadow.c)
 *     KeCreateEnclaveMetadataPage @ 0x140570640 (KeCreateEnclaveMetadataPage.c)
 *     MiAllocateEnclavePages @ 0x140646E08 (MiAllocateEnclavePages.c)
 *     MiReturnEnclavePage @ 0x140648A7C (MiReturnEnclavePage.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 MiInitializeEnclaveMetadataPage()
{
  ULONG_PTR v0; // rdi
  unsigned __int64 v1; // rbp
  char *Pool; // rax
  void *v3; // rsi
  __int64 EnclavePages; // rax
  __int64 v5; // rbx
  unsigned __int64 ValidPte; // rbx
  int v7; // r14d
  __int64 v8; // r8
  __int64 result; // rax

  v0 = MiReservePtes((__int64)&qword_140C69A40, 1u);
  if ( !v0 )
    return 0LL;
  v1 = -1LL;
  Pool = (char *)MiAllocatePool(64, 0x50uLL, 0x4D424D45u);
  v3 = Pool;
  if ( Pool )
  {
    *(_DWORD *)Pool = 512;
    *((_QWORD *)Pool + 1) = Pool + 16;
    Pool[16] |= 1u;
    EnclavePages = MiAllocateEnclavePages(
                     (__int64)MiSystemPartition,
                     *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192)
                                         + 138LL),
                     0,
                     1LL);
    v5 = EnclavePages;
    if ( !EnclavePages )
    {
LABEL_15:
      ExFreePoolWithTag(v3, 0);
      if ( v1 != -1LL )
        MiReturnEnclavePage(v1);
      goto LABEL_17;
    }
    MiSetPfnBlink(EnclavePages, 0LL, 0);
    v1 = 0xAAAAAAAAAAAAAAABuLL * ((v5 + 0x220000000000LL) >> 4);
    ValidPte = MiMakeValidPte(v0, v1, 3221225476LL);
    v7 = 0;
    if ( MiPteInShadowRange(v0) )
    {
      if ( MiPteHasShadow() )
      {
        v7 = 1;
        if ( HIBYTE(word_140C66DFC) )
          goto LABEL_11;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_11;
      }
      if ( (ValidPte & 1) != 0 )
        ValidPte |= 0x8000000000000000uLL;
    }
LABEL_11:
    *(_QWORD *)v0 = ValidPte;
    if ( v7 )
      MiWritePteShadow(v0, ValidPte, v8);
    if ( (int)KeCreateEnclaveMetadataPage() >= 0 )
    {
      qword_140C699A0 = 0LL;
      result = 1LL;
      qword_140C69990 = (__int64)(v0 << 25) >> 16;
      qword_140C69998 = (__int64)v3;
      dword_140C699A8 = 0;
      return result;
    }
    goto LABEL_15;
  }
LABEL_17:
  MiReleasePtes((__int64)&qword_140C69A40, (__int64 *)v0, 1u);
  return 0LL;
}
