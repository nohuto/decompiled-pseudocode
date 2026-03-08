/*
 * XREFs of ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x1C01CA21C
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0163E8C (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01C9880 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0029942 (-AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0046DC4 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 */

__int64 __fastcall ReadPresentPrivateDriverData(
        struct DXGADAPTER *a1,
        __int64 a2,
        char *a3,
        struct CRefCountedBuffer **a4)
{
  size_t v6; // rdi
  __int64 RefCountedBuffer; // rax
  struct CRefCountedBuffer *v9; // rbx

  v6 = (unsigned int)a2;
  *a4 = 0LL;
  if ( *((int *)a1 + 638) < 0x2000 && !*((_BYTE *)a1 + 2852) || *((_DWORD *)a1 + 524) < 0x5007u || !(_DWORD)a2 )
    return 0LL;
  RefCountedBuffer = CRefCountedBuffer::AllocateRefCountedBuffer(a2, a2, 66LL);
  v9 = (struct CRefCountedBuffer *)RefCountedBuffer;
  if ( RefCountedBuffer )
  {
    *(_QWORD *)RefCountedBuffer = 0LL;
    *(_DWORD *)(RefCountedBuffer + 8) = v6;
    *(_DWORD *)(RefCountedBuffer + 12) = 1;
    if ( &a3[v6] < a3 || (unsigned __int64)&a3[v6] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove((void *)(RefCountedBuffer + 16), a3, v6);
    *a4 = v9;
    return 0LL;
  }
  WdLogSingleEntry1(6LL, 2723LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate memory for present private driver data",
    2723LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
