/*
 * XREFs of ObDereferenceObjectExWithTag @ 0x140344234
 * Callers:
 *     IopDropIrp @ 0x140293E48 (IopDropIrp.c)
 *     NtCancelTimer @ 0x1402CD830 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x1402CDE34 (ExpSetTimerObject.c)
 *     ObDereferenceObjectEx @ 0x140344218 (ObDereferenceObjectEx.c)
 *     ExTimerRundown @ 0x140352F6C (ExTimerRundown.c)
 *     ObpCreateHandle @ 0x1407C0130 (ObpCreateHandle.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x1402ECA68 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
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
