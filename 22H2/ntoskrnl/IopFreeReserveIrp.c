/*
 * XREFs of IopFreeReserveIrp @ 0x1405007A4
 * Callers:
 *     IopCompleteRequest @ 0x1402C31B0 (IopCompleteRequest.c)
 *     IopFreeIrp @ 0x1402D3D20 (IopFreeIrp.c)
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     IopFreeBackpocketIrp @ 0x140500734 (IopFreeBackpocketIrp.c)
 */

LONG __fastcall IopFreeReserveIrp(IRP *a1)
{
  struct _KEVENT *v1; // rcx

  a1->AllocationFlags &= 0xDEu;
  if ( a1 == IopReserveIrps )
  {
    v1 = (struct _KEVENT *)&word_140C45D50;
    _InterlockedExchange(&dword_140C45D48, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140C45D68 )
  {
    v1 = (struct _KEVENT *)&word_140C45D78;
    _InterlockedExchange(&dword_140C45D70, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140C45D90 )
  {
    v1 = &stru_140C45DA0;
    _InterlockedExchange(&dword_140C45D98, 0);
    return KeSetEvent(v1, 1, 0);
  }
  return IopFreeBackpocketIrp(a1, 1);
}
