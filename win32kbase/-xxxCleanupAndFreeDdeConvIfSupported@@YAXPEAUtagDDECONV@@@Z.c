/*
 * XREFs of ?xxxCleanupAndFreeDdeConvIfSupported@@YAXPEAUtagDDECONV@@@Z @ 0x1C01537C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall xxxCleanupAndFreeDdeConvIfSupported(struct tagDDECONV *a1)
{
  if ( qword_1C02D6D20 && (int)qword_1C02D6D20() >= 0 )
  {
    if ( qword_1C02D6D28 )
      qword_1C02D6D28(a1);
  }
}
