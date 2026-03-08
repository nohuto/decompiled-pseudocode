/*
 * XREFs of EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x1408A3ADC
 * Callers:
 *     EtwpCovSampCaptureUserAddresses @ 0x1408A3D6C (EtwpCovSampCaptureUserAddresses.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     EtwpCovSampCaptureBufferRelease @ 0x14040CB5C (EtwpCovSampCaptureBufferRelease.c)
 *     EtwpCovSampCaptureBufferIsEmpty @ 0x140461A12 (EtwpCovSampCaptureBufferIsEmpty.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x140461A8C (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x1408A3A8C (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampProcessMapAddresses @ 0x1408A5072 (EtwpCovSampProcessMapAddresses.c)
 *     EtwpCovSampStackHashCheck @ 0x1408A537C (EtwpCovSampStackHashCheck.c)
 */

void __fastcall EtwpCovSampCaptureBufferMapAddressesAndQueue(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int16 v7; // ax
  unsigned int v8; // ecx
  int v9; // [rsp+68h] [rbp+10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  v9 = 0;
  v3 = 0LL;
  v10 = 0LL;
  if ( !EtwpCovSampCaptureBufferIsEmpty(a2) )
  {
    if ( (int)EtwpCovSampAcquireSamplerRundown(&v10) >= 0
      && !(unsigned int)EtwpCovSampStackHashCheck(a1, v5, a2 + 64, *(unsigned __int16 *)(a2 + 62)) )
    {
      v6 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.StaticBitmap[1];
      if ( v6 )
      {
        v3 = v10;
        EtwpCovSampProcessMapAddresses(
          v6,
          v10 + 16,
          a2 + 64,
          *(unsigned __int16 *)(a2 + 62),
          a2 + 64,
          *(unsigned __int16 *)(a2 + 60),
          (__int64)&v9);
        v7 = v9;
        v8 = *(_DWORD *)(a2 + 56) & 0xFFFFFFF4;
        *(_DWORD *)(a2 + 56) = v8;
        *(_WORD *)(a2 + 62) = v7;
        if ( v7 )
          *(_DWORD *)(a2 + 56) = v8 | 4;
        EtwpCovSampCaptureBufferQueue(a1, a2);
        goto LABEL_11;
      }
    }
    v3 = v10;
  }
  if ( a2 )
    EtwpCovSampCaptureBufferRelease(a1, a2);
LABEL_11:
  if ( v3 )
  {
    ExReleaseRundownProtection_0(&stru_140C31880);
    KeLeaveCriticalRegion();
  }
}
