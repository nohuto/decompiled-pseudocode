/*
 * XREFs of AlpcpProbeAndCaptureMessageHeader @ 0x140715E54
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140713844 (AlpcpAcceptConnectPort.c)
 *     NtAlpcOpenSenderProcess @ 0x140714820 (NtAlpcOpenSenderProcess.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140715930 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140716318 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpProcessConnectionRequest @ 0x140717E20 (AlpcpProcessConnectionRequest.c)
 *     NtAlpcOpenSenderThread @ 0x140769DB0 (NtAlpcOpenSenderThread.c)
 *     LpcpCopyRequestData @ 0x14097523C (LpcpCopyRequestData.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall AlpcpProbeAndCaptureMessageHeader(unsigned __int64 a1, __int64 a2, int a3)
{
  unsigned __int64 result; // rax
  __m128i v4; // xmm1
  unsigned __int64 v5; // xmm0_8
  __int16 v6; // ax

  result = 0x7FFFFFFF0000LL;
  if ( (a3 & 0xC0000000) == 0x80000000 )
  {
    if ( a1 < 0x7FFFFFFF0000LL )
      result = a1;
    v4 = *(__m128i *)result;
    v5 = *(_QWORD *)(result + 16);
    v6 = _mm_cvtsi128_si32(*(__m128i *)result);
    *(_WORD *)a2 = v6;
    *(_WORD *)(a2 + 2) = v6 + 40;
    *(_DWORD *)(a2 + 4) = v4.m128i_i32[1];
    *(_QWORD *)(a2 + 8) = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v4, 8));
    *(_QWORD *)(a2 + 16) = HIDWORD(_mm_srli_si128(v4, 8).m128i_u64[0]);
    result = (unsigned int)v5;
    *(_QWORD *)(a2 + 32) = HIDWORD(v5);
    *(_DWORD *)(a2 + 32) = HIDWORD(v5);
    *(_DWORD *)(a2 + 24) = v5;
  }
  else
  {
    if ( a1 < 0x7FFFFFFF0000LL )
      result = a1;
    *(_OWORD *)a2 = *(_OWORD *)result;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(result + 16);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(result + 32);
  }
  return result;
}
