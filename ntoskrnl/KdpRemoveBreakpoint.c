/*
 * XREFs of KdpRemoveBreakpoint @ 0x140AB2ABC
 * Callers:
 *     KdpLowWriteContent @ 0x140AB29EC (KdpLowWriteContent.c)
 *     KdpSetOwedBreakpoints @ 0x140AB2B80 (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KdpWriteInstructionBuffer @ 0x140565CB4 (KdpWriteInstructionBuffer.c)
 *     KdpCopyCodeStream @ 0x140AB2660 (KdpCopyCodeStream.c)
 */

__int64 __fastcall KdpRemoveBreakpoint(__int64 a1, _BYTE *a2)
{
  __int64 v3; // rax
  __int64 v4; // r10
  int v5; // r8d
  int v7; // edx

  KdpWriteInstructionBuffer(a2, *(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 36));
  v5 = KdpCopyCodeStream(
         (char *)(v3 & ~(unsigned __int64)*(unsigned __int8 *)(a1 + 37)),
         v4,
         *(unsigned __int8 *)(a1 + 36),
         5);
  if ( v5 < 0 )
    return 0LL;
  v7 = (*(_DWORD *)(a1 + 32) & 4) != 0 ? *(_DWORD *)(a1 + 32) | 5 : 0;
  *(_DWORD *)(a1 + 32) = v7;
  if ( v5 == 259 )
    *(_DWORD *)(a1 + 32) = v7 | 9;
  return 1LL;
}
