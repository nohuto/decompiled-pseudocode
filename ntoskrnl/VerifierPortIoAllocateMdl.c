/*
 * XREFs of VerifierPortIoAllocateMdl @ 0x140AC8170
 * Callers:
 *     <none>
 * Callees:
 *     IoAllocateMdl @ 0x14020CAD0 (IoAllocateMdl.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

PMDL __fastcall VerifierPortIoAllocateMdl(void *a1, ULONG a2, BOOLEAN a3, BOOLEAN a4, PIRP Irp)
{
  if ( (VfRuleClasses & 0x400000) == 0 || (MmVerifierData & 1) != 0 || (MmVerifierData & 8) != 0 )
    return (PMDL)((__int64 (__fastcall *)(void *))pXdvIoAllocateMdl)(a1);
  else
    return IoAllocateMdl(a1, a2, a3, a4, Irp);
}
