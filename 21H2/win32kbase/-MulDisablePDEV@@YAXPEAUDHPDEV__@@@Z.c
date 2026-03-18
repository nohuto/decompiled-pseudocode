/*
 * XREFs of ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C016E310
 * Callers:
 *     <none>
 * Callees:
 *     EngFreeMem @ 0x1C00486B0 (EngFreeMem.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00717F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MulDisablePDEV(struct PDEV ***pv, __int64 a2, int a3)
{
  struct PDEV **i; // rbx

  if ( qword_1C029ADA8 )
    qword_1C029ADA8(pv[4]);
  for ( i = *pv; i; i = (struct PDEV **)*i )
    PDEVOBJ::vUnreferencePdev(i + 7, 0, a3);
  EngFreeMem(pv);
}
