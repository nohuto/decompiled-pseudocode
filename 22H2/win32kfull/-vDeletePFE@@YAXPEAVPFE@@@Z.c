/*
 * XREFs of ?vDeletePFE@@YAXPEAVPFE@@@Z @ 0x1C02E1730
 * Callers:
 *     <none>
 * Callees:
 *     ?vDelete@PFEOBJ@@QEAAXXZ @ 0x1C007C384 (-vDelete@PFEOBJ@@QEAAXXZ.c)
 */

void __fastcall vDeletePFE(struct PFE *a1)
{
  struct PFE *v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  PFEOBJ::vDelete((PFEOBJ *)&v1);
}
