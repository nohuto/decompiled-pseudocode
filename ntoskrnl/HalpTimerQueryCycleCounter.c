/*
 * XREFs of HalpTimerQueryCycleCounter @ 0x140376AA0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x14022CC50 (HalpTimerGetInternalData.c)
 *     HalpFindTimer @ 0x140377CA8 (HalpFindTimer.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpTimerQueryCycleCounter(_QWORD *a1)
{
  __int64 result; // rax
  __int64 InternalData; // rax
  __int64 v4; // rdx

  result = HalpFindTimer(5, 0, 0, 0, 1);
  if ( result )
  {
    if ( a1 )
      *a1 = *(_QWORD *)(result + 192);
    InternalData = HalpTimerGetInternalData(result);
    return (*(__int64 (__fastcall **)(__int64))(v4 + 112))(InternalData);
  }
  return result;
}
