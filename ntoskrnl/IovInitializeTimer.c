/*
 * XREFs of IovInitializeTimer @ 0x140ABE780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall IovInitializeTimer(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  if ( (MmVerifierData & 0x10) != 0 && *(_QWORD *)(BugCheckParameter2 + 40) )
    VerifierBugCheckIfAppropriate(0xC9u, 0xAuLL, BugCheckParameter2, 0LL, 0LL);
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64, __int64))pXdvIoInitializeTimer)(BugCheckParameter2, a2, a3);
}
