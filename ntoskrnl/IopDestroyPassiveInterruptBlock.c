/*
 * XREFs of IopDestroyPassiveInterruptBlock @ 0x1409552AC
 * Callers:
 *     IoDisconnectInterrupt @ 0x1406F41C0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x1406F43D8 (IopConnectInterrupt.c)
 * Callees:
 *     IopDereferencePassiveInterruptBlock @ 0x14039E56C (IopDereferencePassiveInterruptBlock.c)
 *     IopFindPassiveInterruptBlock @ 0x14039E808 (IopFindPassiveInterruptBlock.c)
 */

void __fastcall IopDestroyPassiveInterruptBlock(unsigned int a1)
{
  volatile signed __int32 *PassiveInterruptBlock; // rax

  PassiveInterruptBlock = (volatile signed __int32 *)IopFindPassiveInterruptBlock(a1);
  if ( PassiveInterruptBlock )
  {
    _InterlockedDecrement(PassiveInterruptBlock + 48);
    IopDereferencePassiveInterruptBlock((PVOID)PassiveInterruptBlock);
  }
}
