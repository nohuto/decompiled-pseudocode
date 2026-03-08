/*
 * XREFs of ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C018B170
 * Callers:
 *     <none>
 * Callees:
 *     EngFreeMem @ 0x1C002AE00 (EngFreeMem.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C003C110 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MulDisablePDEV(struct PDEV ***pv)
{
  struct PDEV **i; // rbx

  if ( qword_1C02D55A8 )
    qword_1C02D55A8(pv[4]);
  for ( i = *pv; i; i = (struct PDEV **)*i )
    PDEVOBJ::vUnreferencePdev(i + 7);
  EngFreeMem(pv);
}
