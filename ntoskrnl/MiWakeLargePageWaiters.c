/*
 * XREFs of MiWakeLargePageWaiters @ 0x14064DA54
 * Callers:
 *     MiInsertLargePageChain @ 0x1402CADB0 (MiInsertLargePageChain.c)
 *     MiInsertLargePageInNodeList @ 0x14031C970 (MiInsertLargePageInNodeList.c)
 *     MiGetLargePage @ 0x14034EF30 (MiGetLargePage.c)
 *     MiDeleteAcceleratorDescriptor @ 0x14065241C (MiDeleteAcceleratorDescriptor.c)
 *     MiDeleteHardwareAccelerators @ 0x140652540 (MiDeleteHardwareAccelerators.c)
 * Callees:
 *     KeSignalGate @ 0x1402F0524 (KeSignalGate.c)
 */

char __fastcall MiWakeLargePageWaiters(_QWORD *a1)
{
  _QWORD *v1; // rbx
  char result; // al

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      result = KeSignalGate((__int64)(a1 + 1), 1u);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}
