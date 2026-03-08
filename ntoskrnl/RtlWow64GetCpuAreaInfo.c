/*
 * XREFs of RtlWow64GetCpuAreaInfo @ 0x14077C93C
 * Callers:
 *     RtlpWalkFrameChain @ 0x14027FF40 (RtlpWalkFrameChain.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x14077C5B8 (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x140365130 (RtlpGetLegacyContextLength.c)
 *     RtlpGetContextFlagsLocation @ 0x140365178 (RtlpGetContextFlagsLocation.c)
 *     RtlpArchContextFlagFromMachine @ 0x14077C9E4 (RtlpArchContextFlagFromMachine.c)
 */

__int64 __fastcall RtlWow64GetCpuAreaInfo(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  int v6; // eax
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 result; // rax
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0;
  v13 = 0;
  *(_QWORD *)(a3 + 24) = a1;
  v6 = RtlpArchContextFlagFromMachine(a2);
  v7 = v6;
  if ( !v6 )
    return 3221225485LL;
  RtlpGetLegacyContextLength(v6, (int *)&v13, &v12);
  v8 = ~(v12 - 1LL) & (a1 + v12 + 3LL);
  v9 = v8 + v13 + 7LL;
  *(_QWORD *)a3 = v8;
  *(_QWORD *)(a3 + 8) = v9 & 0xFFFFFFFFFFFFFFF8uLL;
  *(_QWORD *)(a3 + 16) = RtlpGetContextFlagsLocation(v8, v7);
  *(_DWORD *)(a3 + 32) = v7;
  *(_QWORD *)(a3 + 40) = (v10 + 11) & 0xFFFFFFFFFFFFFFFCuLL;
  result = 0LL;
  *(_WORD *)(a3 + 36) = a2;
  return result;
}
