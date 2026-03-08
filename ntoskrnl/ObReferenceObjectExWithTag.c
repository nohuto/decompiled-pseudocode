/*
 * XREFs of ObReferenceObjectExWithTag @ 0x1402CBB20
 * Callers:
 *     PspInsertThread @ 0x1406B0F50 (PspInsertThread.c)
 *     ObpCreateHandle @ 0x1407C0130 (ObpCreateHandle.c)
 *     MiCreateImageOrDataSection @ 0x1407D12B0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 */

unsigned __int64 __fastcall ObReferenceObjectExWithTag(ULONG_PTR BugCheckParameter2, int a2)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rax

  v3 = a2;
  if ( ObpTraceFlags )
    ObpPushStackInfo(BugCheckParameter2 - 48);
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), v3);
  if ( v4 <= 0 )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x10uLL, v3 + v4);
  return v3 + v4;
}
