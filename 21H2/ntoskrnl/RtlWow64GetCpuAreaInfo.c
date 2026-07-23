/*
 * XREFs of RtlWow64GetCpuAreaInfo @ 0x1405F6134
 * Callers:
 *     RtlpWalkFrameChain @ 0x1402C1B50 (RtlpWalkFrameChain.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1405F5DB8 (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x140264610 (RtlpGetLegacyContextLength.c)
 *     RtlpGetContextFlagsLocation @ 0x1402651AC (RtlpGetContextFlagsLocation.c)
 *     RtlpArchContextFlagFromMachine @ 0x1405F61E4 (RtlpArchContextFlagFromMachine.c)
 */

__int64 __fastcall RtlWow64GetCpuAreaInfo(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 result; // rax
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0;
  v11 = 0;
  *(_QWORD *)(a3 + 24) = a1;
  v5 = RtlpArchContextFlagFromMachine(332LL);
  v6 = v5;
  if ( !v5 )
    return 3221225485LL;
  RtlpGetLegacyContextLength(v5, (int *)&v11, &v12);
  v7 = ~(v12 - 1LL) & (a1 + v12 + 3LL);
  v8 = v7 + v11 + 7LL;
  *(_QWORD *)a3 = v7;
  *(_QWORD *)(a3 + 8) = v8 & 0xFFFFFFFFFFFFFFF8uLL;
  *(_QWORD *)(a3 + 16) = RtlpGetContextFlagsLocation(v7, v6);
  *(_DWORD *)(a3 + 32) = v6;
  *(_QWORD *)(a3 + 40) = (v9 + 11) & 0xFFFFFFFFFFFFFFFCuLL;
  result = 0LL;
  *(_WORD *)(a3 + 36) = 332;
  return result;
}
