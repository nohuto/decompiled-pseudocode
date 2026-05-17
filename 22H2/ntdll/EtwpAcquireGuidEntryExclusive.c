/*
 * XREFs of EtwpAcquireGuidEntryExclusive @ 0x180047DB4
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180043554 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpEventApiCallback @ 0x180043934 (EtwpEventApiCallback.c)
 *     EtwDeliverDataBlock @ 0x1800452B0 (EtwDeliverDataBlock.c)
 *     EtwpRegisterGuidsApiCallback @ 0x180046630 (EtwpRegisterGuidsApiCallback.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180047D08 (EtwpDereferenceUmGuidEntry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

struct _TEB *__fastcall EtwpAcquireGuidEntryExclusive(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  struct _TEB *result; // rax

  RtlAcquireSRWLockExclusive(a1 + 40, a2, a3, a4);
  result = NtCurrentTeb();
  *(_DWORD *)(a1 + 48) = result->ClientId.UniqueThread;
  return result;
}
