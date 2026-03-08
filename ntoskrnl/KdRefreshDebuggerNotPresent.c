/*
 * XREFs of KdRefreshDebuggerNotPresent @ 0x1403ACAF0
 * Callers:
 *     KiBugCheckShouldEnterPostBugCheckDebugger @ 0x140567644 (KiBugCheckShouldEnterPostBugCheckDebugger.c)
 * Callees:
 *     KdExitDebugger @ 0x140AAD2D0 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140AAD40C (KdEnterDebugger.c)
 *     KdpPrintString @ 0x140AAF4EC (KdpPrintString.c)
 */

BOOLEAN KdRefreshDebuggerNotPresent(void)
{
  __int64 v0; // rax
  char v1; // di
  BOOLEAN v2; // bl
  __int64 v3; // rcx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0LL;
  if ( KdPitchDebugger || !(_BYTE)KdDebuggerEnabled )
    return 1;
  v0 = -1LL;
  *((_QWORD *)&v5 + 1) = "KDTARGET: Refreshing KD connection\n";
  do
    ++v0;
  while ( aKdtargetRefres[v0] );
  LOWORD(v5) = v0;
  v1 = KdEnterDebugger(0LL, 0LL);
  KdpPrintString(&v5);
  v2 = (unsigned __int8)KdDebuggerNotPresent;
  LOBYTE(v3) = v1;
  KdExitDebugger(v3);
  return v2;
}
