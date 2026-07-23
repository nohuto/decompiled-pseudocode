/*
 * XREFs of EtwTraceRaw @ 0x1405A6488
 * Callers:
 *     NtTraceEvent @ 0x14025C4C0 (NtTraceEvent.c)
 * Callees:
 *     EtwpOpenLogger @ 0x14025D3F8 (EtwpOpenLogger.c)
 *     EtwpReleaseTraceBuffer @ 0x14025D4A0 (EtwpReleaseTraceBuffer.c)
 *     EtwpReserveTraceBuffer @ 0x1402D0E80 (EtwpReserveTraceBuffer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14036C70C (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpCloseLogger @ 0x1403799A8 (EtwpCloseLogger.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     EtwpSendTraceEvent @ 0x1405AAAA8 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1405AB5B8 (EtwpInvokeEventCallback.c)
 *     EtwpCheckLoggerControlAccess @ 0x1406BBBBC (EtwpCheckLoggerControlAccess.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwTraceRaw(__int64 a1, void *a2, unsigned int a3, char a4)
{
  size_t v5; // r13
  int ReserveTraceBufferStatus; // ebx
  unsigned int v7; // r12d
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  void *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  LARGE_INTEGER v15[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v16; // [rsp+50h] [rbp-48h] BYREF
  __int64 v17; // [rsp+60h] [rbp-38h]
  char v18; // [rsp+A0h] [rbp+8h] BYREF
  void *Src; // [rsp+A8h] [rbp+10h]
  char v20; // [rsp+B8h] [rbp+20h]

  v20 = a4;
  Src = a2;
  v5 = a3;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  ReserveTraceBufferStatus = 0;
  v15[0].QuadPart = 0LL;
  v7 = (unsigned __int16)a1;
  if ( a4 )
    v8 = *((_QWORD *)PsGetCurrentServerSiloGlobals(a1, (__int64)a2) + 108);
  else
    v8 = EtwpHostSiloState;
  if ( v7 < *(_DWORD *)(v8 + 16) )
  {
    v9 = EtwpOpenLogger(v7, v8, a4, &v18);
    v10 = v9;
    v15[1].QuadPart = v9;
    if ( v9 )
    {
      if ( (*(_DWORD *)(v9 + 12) & 0x80u) != 0 )
      {
        ReserveTraceBufferStatus = -1073741790;
LABEL_31:
        EtwpCloseLogger(v7, v8, v18);
        return (unsigned int)ReserveTraceBufferStatus;
      }
      if ( a4 )
      {
        ReserveTraceBufferStatus = EtwpCheckLoggerControlAccess(0x200u);
        if ( ReserveTraceBufferStatus < 0 )
          goto LABEL_31;
        if ( (_DWORD)v5 )
        {
          if ( ((unsigned __int8)Src & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)Src + v5 > 0x7FFFFFFF0000LL || (char *)Src + v5 < Src )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else if ( (*(_DWORD *)(v9 + 12) & 0x1000000) != 0 )
      {
        ReserveTraceBufferStatus = -1073741637;
        goto LABEL_31;
      }
      v11 = (void *)EtwpReserveTraceBuffer((unsigned int *)v10, (unsigned int)v5, (__int64)&v16, v15, 0);
      if ( v11 )
      {
        memmove(v11, Src, v5);
        if ( (*(_DWORD *)(v10 + 12) & 0x80000) != 0
          && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
        {
          EtwpSendTraceEvent(v10, &v16, v12);
        }
        if ( *(_QWORD *)(v10 + 1272) )
        {
          LOBYTE(v13) = a4;
          EtwpInvokeEventCallback(v10, &v16, 0LL, v13);
        }
        EtwpReleaseTraceBuffer((signed __int64 *)&v16);
      }
      else
      {
        ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v10, v5);
      }
      goto LABEL_31;
    }
  }
  return (unsigned int)-1073741816;
}
