/*
 * XREFs of VerifierPortIoAllocateWorkItem @ 0x140AC81E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VerifierPortIoAllocateWorkItem(__int64 a1, __int64 a2)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(__int64, __int64)))pXdvIoAllocateWorkItem)(
           a1,
           a2,
           IovAllocateWorkItem);
}
