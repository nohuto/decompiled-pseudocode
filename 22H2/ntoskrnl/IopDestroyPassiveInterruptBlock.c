/*
 * XREFs of IopDestroyPassiveInterruptBlock @ 0x1409582CC
 * Callers:
 *     IoDisconnectInterrupt @ 0x14078E6E0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14078EC70 (IopConnectInterrupt.c)
 * Callees:
 *     IopDereferencePassiveInterruptBlock @ 0x1403A2B4C (IopDereferencePassiveInterruptBlock.c)
 *     IopFindPassiveInterruptBlock @ 0x1403A2DE8 (IopFindPassiveInterruptBlock.c)
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
