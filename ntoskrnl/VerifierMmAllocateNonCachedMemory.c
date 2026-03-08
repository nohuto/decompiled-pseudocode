/*
 * XREFs of VerifierMmAllocateNonCachedMemory @ 0x140ADFA80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ViTargetTrackContiguousMemory @ 0x140AC8D80 (ViTargetTrackContiguousMemory.c)
 *     VfFaultsInjectResourceFailure @ 0x140AD2FAC (VfFaultsInjectResourceFailure.c)
 *     VfFillAllocatedMemory @ 0x140AD700C (VfFillAllocatedMemory.c)
 */

_SLIST_ENTRY *__fastcall VerifierMmAllocateNonCachedMemory(size_t a1)
{
  _SLIST_ENTRY *v3; // rax
  _SLIST_ENTRY *v4; // rbx
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  v3 = (_SLIST_ENTRY *)((__int64 (__fastcall *)(size_t))pXdvMmAllocateNonCachedMemory)(a1);
  v4 = v3;
  if ( v3 )
  {
    VfFillAllocatedMemory(v3, a1);
    if ( (MmVerifierData & 8) != 0 )
      ViTargetTrackContiguousMemory(retaddr, v4, a1);
  }
  return v4;
}
