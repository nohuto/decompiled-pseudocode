/*
 * XREFs of ObDereferenceObjectExWithTag @ 0x1402A2454
 * Callers:
 *     IopDropIrp @ 0x14028CCA8 (IopDropIrp.c)
 *     ObDereferenceObjectEx @ 0x1402A2438 (ObDereferenceObjectEx.c)
 *     ExTimerRundown @ 0x14030A23C (ExTimerRundown.c)
 *     NtCancelTimer @ 0x14032E090 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x14032E684 (ExpSetTimerObject.c)
 *     ObpCreateHandle @ 0x1406E45C0 (ObpCreateHandle.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14020B950 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140582C68 (ObpPushStackInfo.c)
 */

__int64 __fastcall ObDereferenceObjectExWithTag(ULONG_PTR BugCheckParameter2, int a2)
{
  signed __int64 v2; // rdi
  __int64 v3; // rsi
  signed __int64 BugCheckParameter4; // rbx

  v2 = BugCheckParameter2 - 48;
  v3 = a2;
  if ( ObpTraceFlags )
    ObpPushStackInfo(BugCheckParameter2 - 48);
  BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)v2, -(int)v3) - v3;
  if ( BugCheckParameter4 <= 0 )
  {
    if ( *(_QWORD *)(v2 + 8) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v2 + 24) ^ (unsigned __int64)BYTE1(v2)],
        BugCheckParameter2,
        6uLL,
        *(_QWORD *)(v2 + 8));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 5uLL, BugCheckParameter4);
    ObpDeferObjectDeletion(v2);
  }
  return BugCheckParameter4;
}
