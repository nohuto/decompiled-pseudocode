/*
 * XREFs of PortpErrorInitDpc @ 0x1C005A8D8
 * Callers:
 *     PortTraceErrorRegisterDriver @ 0x1C007E540 (PortTraceErrorRegisterDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall PortpErrorInitDpc(char *DeferredContext)
{
  KeInitializeDpc((PRKDPC)(DeferredContext + 88), (PKDEFERRED_ROUTINE)PortpErrorDrainListDpc, DeferredContext);
}
