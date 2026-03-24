/*
 * XREFs of AlpcpProbeAndCaptureMessageHeader @ 0x1405E0284
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1405DECC8 (AlpcpProcessConnectionRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1405DFA58 (AlpcpSendLegacySynchronousRequest.c)
 *     NtAlpcOpenSenderProcess @ 0x1405DFFA0 (NtAlpcOpenSenderProcess.c)
 *     AlpcpAcceptConnectPort @ 0x1405E103C (AlpcpAcceptConnectPort.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1405E1BDC (AlpcpReplyLegacySynchronousRequest.c)
 *     NtAlpcOpenSenderThread @ 0x14068F9F0 (NtAlpcOpenSenderThread.c)
 *     LpcpCopyRequestData @ 0x1408C1C9C (LpcpCopyRequestData.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall AlpcpProbeAndCaptureMessageHeader(unsigned __int64 a1, __int64 a2, int a3)
{
  unsigned __int64 result; // rax
  __m128i v4; // xmm1
  __int16 v5; // ax
  unsigned __int64 v6; // [rsp+10h] [rbp-18h]

  result = 0x7FFFFFFF0000LL;
  if ( (a3 & 0xC0000000) == 0x80000000 )
  {
    if ( a1 < 0x7FFFFFFF0000LL )
      result = a1;
    v4 = *(__m128i *)result;
    v6 = *(_QWORD *)(result + 16);
    v5 = _mm_cvtsi128_si32(*(__m128i *)result);
    *(_WORD *)a2 = v5;
    *(_WORD *)(a2 + 2) = v5 + 40;
    *(_DWORD *)(a2 + 4) = v4.m128i_i32[1];
    *(_QWORD *)(a2 + 8) = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v4, 8));
    *(_QWORD *)(a2 + 16) = HIDWORD(_mm_srli_si128(v4, 8).m128i_u64[0]);
    result = (unsigned int)v6;
    *(_QWORD *)(a2 + 32) = HIDWORD(v6);
    *(_DWORD *)(a2 + 32) = HIDWORD(v6);
    *(_DWORD *)(a2 + 24) = v6;
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
