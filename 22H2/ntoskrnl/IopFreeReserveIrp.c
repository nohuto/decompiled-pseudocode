/*
 * XREFs of IopFreeReserveIrp @ 0x14055564C
 * Callers:
 *     IopCompleteRequest @ 0x1402AB360 (IopCompleteRequest.c)
 *     IopFreeIrp @ 0x1402AF210 (IopFreeIrp.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     IopFreeBackpocketIrp @ 0x1405555DC (IopFreeBackpocketIrp.c)
 */

LONG __fastcall IopFreeReserveIrp(IRP *a1)
{
  struct _KEVENT *v1; // rcx

  a1->AllocationFlags &= 0xDEu;
  if ( a1 == IopReserveIrps )
  {
    v1 = (struct _KEVENT *)&word_140C5DC10;
    _InterlockedExchange(&dword_140C5DC08, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140C5DC28 )
  {
    v1 = (struct _KEVENT *)&word_140C5DC38;
    _InterlockedExchange(&dword_140C5DC30, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140C5DC50 )
  {
    v1 = &stru_140C5DC60;
    _InterlockedExchange(&dword_140C5DC58, 0);
    return KeSetEvent(v1, 1, 0);
  }
  return IopFreeBackpocketIrp(a1, 1);
}
