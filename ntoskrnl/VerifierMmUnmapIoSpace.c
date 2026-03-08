/*
 * XREFs of VerifierMmUnmapIoSpace @ 0x140AE07C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ViTargetAddToCounter @ 0x140AC8994 (ViTargetAddToCounter.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierMmUnmapIoSpace(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  unsigned __int8 CurrentIrql; // dl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x7BuLL, CurrentIrql, BugCheckParameter3, a2);
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 216LL, 0xE0u, -a2);
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64))pXdvMmUnmapIoSpace)(BugCheckParameter3, a2);
}
