/*
 * XREFs of VerifierMmFreeContiguousMemorySpecifyCache @ 0x140ADFEA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ViTargetFreeContiguousMemory @ 0x140AC8AC0 (ViTargetFreeContiguousMemory.c)
 */

__int64 __fastcall VerifierMmFreeContiguousMemorySpecifyCache(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( qword_140C36F50 )
    ViTargetFreeContiguousMemory(retaddr, a1);
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD))pXdvMmFreeContiguousMemorySpecifyCache)(a1, a2, a3);
}
