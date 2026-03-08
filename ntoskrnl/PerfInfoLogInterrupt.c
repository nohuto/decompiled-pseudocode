/*
 * XREFs of PerfInfoLogInterrupt @ 0x1402CD5F0
 * Callers:
 *     KiInvokeInterruptServiceRoutine @ 0x14039E8DC (KiInvokeInterruptServiceRoutine.c)
 *     KiScanInterruptObjectList @ 0x140417C90 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140417E70 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140417FC0 (KiInterruptSubDispatchNoLock.c)
 * Callees:
 *     EtwTraceTimedEvent @ 0x1402CD670 (EtwTraceTimedEvent.c)
 */

__int64 __fastcall PerfInfoLogInterrupt(__int64 a1, int a2, __int64 a3)
{
  unsigned __int16 v3; // r10
  int v4; // r9d
  __int64 v6; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+38h] [rbp-10h]
  int v8; // [rsp+3Ch] [rbp-Ch]

  v8 = 0;
  if ( !*(_BYTE *)(a1 + 93) )
  {
    v3 = 3935;
    goto LABEL_6;
  }
  if ( !*(_QWORD *)(a1 + 32) )
  {
    v3 = 3907;
LABEL_6:
    v4 = 12;
    v6 = *(_QWORD *)(a1 + 24);
    goto LABEL_4;
  }
  v6 = *(_QWORD *)(a1 + 32);
  v3 = 3890;
  v4 = 16;
  v8 = *(_DWORD *)(a1 + 40);
LABEL_4:
  v7 = a2;
  return EtwTraceTimedEvent(v3, 536887296, (unsigned int)&v6, v4, 4196866, a3);
}
