/*
 * XREFs of VslpFlushBufferArray @ 0x1404FDC70
 * Callers:
 *     VslpSkFlushBufferCallback @ 0x1404FE020 (VslpSkFlushBufferCallback.c)
 *     VslpSkStopProfiling @ 0x1404FE06C (VslpSkStopProfiling.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     EtwSendTraceBuffer @ 0x1405A6160 (EtwSendTraceBuffer.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

_QWORD *VslpFlushBufferArray()
{
  _QWORD *result; // rax
  unsigned int v1; // edi
  __int64 v2; // rsi
  unsigned int v3; // r12d
  unsigned __int64 *v4; // rbx
  bool v5; // zf
  __int64 v6; // rcx
  unsigned int v7; // r14d
  int v8; // ebp
  __int64 v9; // r15
  _DWORD *v10; // r9
  int v11; // ecx

  result = VslpEventLog;
  v1 = 0;
  v2 = *((unsigned int *)VslpEventLog + 2);
  v3 = *(_DWORD *)VslpEventLog;
  v4 = (unsigned __int64 *)((char *)VslpEventLog + 8 * v2 + 24);
  if ( (_DWORD)v2 )
  {
    do
    {
      result = (_QWORD *)*v4;
      v5 = !_BitScanForward64((unsigned __int64 *)&v6, *v4);
      if ( !v5 )
      {
        v7 = v1 << 6;
        do
        {
          v8 = v7 + v6;
          if ( v7 + (unsigned int)v6 >= v3 )
            break;
          if ( _interlockedbittestandreset64((volatile signed __int32 *)v4, (unsigned int)v6) == 1 )
          {
            result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x54736D56u);
            v9 = (__int64)result;
            if ( !result )
              return result;
            v10 = VslpEventLog;
            *(_DWORD *)result = v8;
            result[1] = (char *)&v10[4 * v10[2] + 6] + (unsigned int)(v8 * v10[1]);
            ExAcquireRundownProtection((PEX_RUNDOWN_REF)&VslpBufferFlushRundown);
            v11 = VslpLoggerId;
            *(_WORD *)(*(_QWORD *)(v9 + 8) + 42LL) = VslpLoggerId;
            if ( (int)EtwSendTraceBuffer(
                        v11,
                        *(_QWORD *)(v9 + 8),
                        0,
                        (unsigned int)&VslpFlushBufferArrayEntryCallback,
                        v9) < 0 )
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)&VslpBufferFlushRundown);
          }
          result = (_QWORD *)*v4;
          v5 = !_BitScanForward64((unsigned __int64 *)&v6, *v4);
        }
        while ( !v5 );
      }
      ++v1;
      ++v4;
    }
    while ( v1 < (unsigned int)v2 );
  }
  return result;
}
