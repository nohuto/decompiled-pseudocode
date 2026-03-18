/*
 * XREFs of ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C015E4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C005B180 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     EngFreeMem @ 0x1C0077DB0 (EngFreeMem.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MulDisablePDEV(struct PDEV ***pv)
{
  struct PDEV **i; // rbx

  if ( qword_1C0294438 )
    qword_1C0294438(pv[4]);
  for ( i = *pv; i; i = (struct PDEV **)*i )
    PDEVOBJ::vUnreferencePdev(i + 7);
  EngFreeMem(pv);
}
