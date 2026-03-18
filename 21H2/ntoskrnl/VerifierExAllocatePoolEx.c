/*
 * XREFs of VerifierExAllocatePoolEx @ 0x140A902F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfCheckPoolType @ 0x140A82F58 (VfCheckPoolType.c)
 */

__int64 __fastcall VerifierExAllocatePoolEx(int a1, __int64 a2, int a3)
{
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  if ( (MmVerifierData & 0x2000000) != 0 )
    VfCheckPoolType(a1, retaddr, 0);
  return pXdvExAllocatePoolWithTagPriority(a1 | 0x80u, 0, a2, a3, 32, 0LL, 0, retaddr, (__int64)VfHandlePoolAlloc);
}
