/*
 * XREFs of PoDeviceAcquireIrp @ 0x1402B9AA8
 * Callers:
 *     IopfCompleteRequest @ 0x14027B2C0 (IopfCompleteRequest.c)
 *     PopIrpWorker @ 0x1402B9440 (PopIrpWorker.c)
 *     PoHandleIrp @ 0x1402B986C (PoHandleIrp.c)
 * Callees:
 *     PopDiagTraceDeviceAcquireIrp @ 0x1402B9AE4 (PopDiagTraceDeviceAcquireIrp.c)
 */

__int64 __fastcall PoDeviceAcquireIrp(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  if ( (unsigned __int8)(a2 - 2) <= 1u )
  {
    if ( a3 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200) + 40LL) = a3;
      return PopDiagTraceDeviceAcquireIrp(a1, a3);
    }
  }
  return result;
}
