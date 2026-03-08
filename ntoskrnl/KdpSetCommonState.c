/*
 * XREFs of KdpSetCommonState @ 0x14036B850
 * Callers:
 *     KdpReportLoadSymbolsStateChange @ 0x140AAD6F0 (KdpReportLoadSymbolsStateChange.c)
 *     KdpReportExceptionStateChange @ 0x140AAE63C (KdpReportExceptionStateChange.c)
 *     KdpReportCommandStringStateChange @ 0x140AB1398 (KdpReportCommandStringStateChange.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     KdpCopyMemoryChunks @ 0x140AAD0F4 (KdpCopyMemoryChunks.c)
 *     KdpDeleteBreakpointRange @ 0x140AADCBC (KdpDeleteBreakpointRange.c)
 */

__int64 __fastcall KdpSetCommonState(int a1, __int64 a2, __int64 a3)
{
  __int16 v4; // ax
  ULONG ActiveProcessorCount; // eax
  ULONG v7; // ecx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 result; // rax
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0;
  v4 = KeProcessorLevel;
  *(_DWORD *)a3 = a1;
  *(_WORD *)(a3 + 4) = v4;
  *(_WORD *)(a3 + 6) = KeGetPcr()->Prcb.Number;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v7 = *(unsigned __int16 *)(a3 + 6);
  *(_DWORD *)(a3 + 8) = ActiveProcessorCount;
  if ( ActiveProcessorCount <= v7 )
    *(_DWORD *)(a3 + 8) = v7 + 1;
  *(_QWORD *)(a3 + 16) = KeGetCurrentThread();
  v8 = *(_QWORD *)(a2 + 248);
  *(_QWORD *)(a3 + 24) = v8;
  *(_OWORD *)(a3 + 192) = 0LL;
  *(_OWORD *)(a3 + 208) = 0LL;
  *(_OWORD *)(a3 + 224) = 0LL;
  KdpCopyMemoryChunks(v8, a3 + 216, 16, 0, 4, (__int64)&v11);
  v9 = v11;
  *(_WORD *)(a3 + 212) = v11;
  result = KdpDeleteBreakpointRange(v8, v8 + v9 - 1);
  if ( (_BYTE)result )
    return KdpCopyMemoryChunks(v8, (int)a3 + 216, v9, 0, 4, (__int64)&v11);
  return result;
}
