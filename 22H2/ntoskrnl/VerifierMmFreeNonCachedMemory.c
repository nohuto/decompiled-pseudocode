/*
 * XREFs of VerifierMmFreeNonCachedMemory @ 0x140AE3F00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     ViTargetFreeContiguousMemory @ 0x140ACCAC0 (ViTargetFreeContiguousMemory.c)
 */

__int64 __fastcall VerifierMmFreeNonCachedMemory(__int64 a1, __int64 a2)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( qword_140C37350 )
    ViTargetFreeContiguousMemory(retaddr, a1);
  return ((__int64 (__fastcall *)(__int64, __int64))pXdvMmFreeNonCachedMemory)(a1, a2);
}
