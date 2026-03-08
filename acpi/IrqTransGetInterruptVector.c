/*
 * XREFs of IrqTransGetInterruptVector @ 0x1C009A410
 * Callers:
 *     <none>
 * Callees:
 *     IrqLibAcquireArbiterLock @ 0x1C005CC88 (IrqLibAcquireArbiterLock.c)
 *     IrqLibReleaseArbiterLock @ 0x1C005CD28 (IrqLibReleaseArbiterLock.c)
 *     IrqTranslatepQueryDeviceIrql @ 0x1C009A6BC (IrqTranslatepQueryDeviceIrql.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C009ABF4 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqArbGsivFromIrq @ 0x1C009D69C (IrqArbGsivFromIrq.c)
 */

__int64 __fastcall IrqTransGetInterruptVector(__int64 a1, __int64 a2, unsigned int a3, int a4, _BYTE *a5, _QWORD *a6)
{
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 v9; // rsi
  int DeviceIdtAssignment; // ebx
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+30h] [rbp-18h]

  v6 = a3;
  v7 = 0;
  v11 = 0LL;
  v12 = 0LL;
  if ( a3 != a4 )
    return 0LL;
  IrqLibAcquireArbiterLock(0);
  v9 = (unsigned int)IrqArbGsivFromIrq(v6);
  DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(0LL, v9, 0LL, &v11);
  IrqLibReleaseArbiterLock();
  if ( DeviceIdtAssignment >= 0 )
  {
    v7 = DWORD1(v12);
    *a5 = IrqTranslatepQueryDeviceIrql((unsigned int)v9, DWORD1(v12));
    *a6 = v11;
  }
  return v7;
}
