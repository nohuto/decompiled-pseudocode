/*
 * XREFs of ExpSetSwappingKernelApc @ 0x140AA7FA0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeSetKernelStackSwapEnable @ 0x140283360 (KeSetKernelStackSwapEnable.c)
 */

LONG __fastcall ExpSetSwappingKernelApc(__int64 a1, __int64 a2, BOOLEAN *a3, struct _KEVENT **a4)
{
  struct _KEVENT *v4; // rbx

  v4 = *a4;
  if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 1) != 0 )
    KeSetKernelStackSwapEnable(*a3);
  return KeSetEvent(v4, 0, 0);
}
