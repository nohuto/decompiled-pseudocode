/*
 * XREFs of ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C019D9FC
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C019CB50 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0029942 (-AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0046DC4 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 */

__int64 __fastcall ReadPresentPrivateDriverData(
        struct DXGADAPTER *a1,
        const struct _D3DKMT_MULTIPLANE_OVERLAY3 *a2,
        struct CRefCountedBuffer **a3)
{
  UINT DriverPrivateDataSize; // ecx
  _DWORD *RefCountedBuffer; // rbx
  UINT v8; // eax
  size_t v9; // r8
  char *pDriverPrivateData; // rdx

  *a3 = 0LL;
  if ( *((int *)a1 + 638) < 0x2000 && !*((_BYTE *)a1 + 2852) )
    return 0LL;
  DriverPrivateDataSize = a2->DriverPrivateDataSize;
  if ( !DriverPrivateDataSize )
    return 0LL;
  RefCountedBuffer = (_DWORD *)CRefCountedBuffer::AllocateRefCountedBuffer(DriverPrivateDataSize, (__int64)a2, 66LL);
  if ( RefCountedBuffer )
  {
    v8 = a2->DriverPrivateDataSize;
    *(_QWORD *)RefCountedBuffer = 0LL;
    RefCountedBuffer[2] = v8;
    RefCountedBuffer[3] = 1;
    v9 = a2->DriverPrivateDataSize;
    pDriverPrivateData = (char *)a2->pDriverPrivateData;
    if ( &pDriverPrivateData[v9] < pDriverPrivateData || (unsigned __int64)&pDriverPrivateData[v9] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(RefCountedBuffer + 4, pDriverPrivateData, v9);
    *a3 = (struct CRefCountedBuffer *)RefCountedBuffer;
    return 0LL;
  }
  WdLogSingleEntry1(6LL, 1354LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate memory for present private driver data",
    1354LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
