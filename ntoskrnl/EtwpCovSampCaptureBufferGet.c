/*
 * XREFs of EtwpCovSampCaptureBufferGet @ 0x14046197C
 * Callers:
 *     EtwpCovSampCaptureSample @ 0x140601340 (EtwpCovSampCaptureSample.c)
 *     EtwpCovSampCaptureUserAddresses @ 0x1408A3D6C (EtwpCovSampCaptureUserAddresses.c)
 * Callees:
 *     EtwpCovSampLookasidePop @ 0x140461CA8 (EtwpCovSampLookasidePop.c)
 */

__int64 __fastcall EtwpCovSampCaptureBufferGet(__int64 a1)
{
  unsigned __int64 v2; // rbx
  unsigned int v3; // eax
  unsigned int v4; // ecx
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 result; // rax

  v2 = (unsigned int)*(_QWORD *)(a1 + 8);
  v3 = ((unsigned int)v2 >> 13) & 0x3FFFF;
  _BitScanReverse(&v4, v3);
  v5 = (v2 >> 4) & 0x1FF;
  v6 = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v4 - 2) + 8LL * (v3 ^ (1 << v4)) + 8);
  result = EtwpCovSampLookasidePop(a1, v6 + 8 * (v5 + 10));
  if ( result )
  {
    *(_WORD *)(result + 62) = 0;
    *(_DWORD *)(result + 56) = 0;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8 * v5 + 312));
  }
  return result;
}
