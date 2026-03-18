/*
 * XREFs of PoDeviceAcquireIrp @ 0x14028D898
 * Callers:
 *     PopIrpWorker @ 0x14028D230 (PopIrpWorker.c)
 *     PoHandleIrp @ 0x14028D65C (PoHandleIrp.c)
 *     IopfCompleteRequest @ 0x1402C9980 (IopfCompleteRequest.c)
 * Callees:
 *     PopDiagTraceDeviceAcquireIrp @ 0x14028D8D4 (PopDiagTraceDeviceAcquireIrp.c)
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
