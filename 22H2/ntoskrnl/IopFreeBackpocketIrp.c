/*
 * XREFs of IopFreeBackpocketIrp @ 0x140500734
 * Callers:
 *     IopFreeReserveIrp @ 0x1405007A4 (IopFreeReserveIrp.c)
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 */

LONG __fastcall IopFreeBackpocketIrp(IRP *a1, char a2)
{
  struct _KEVENT *v2; // rcx
  LONG result; // eax

  if ( a1 == Irp )
  {
    qword_140C45DC8 = 0LL;
    _InterlockedExchange(&dword_140C45DC0, 0);
    v2 = (struct _KEVENT *)&word_140C45DD0;
    return KeSetEvent(v2, a2, 0);
  }
  if ( a1 == qword_140C45DE8 )
  {
    qword_140C45DF8 = 0LL;
    _InterlockedExchange(&dword_140C45DF0, 0);
    v2 = &stru_140C45E00;
    return KeSetEvent(v2, a2, 0);
  }
  result = (int)qword_140C45E18;
  *(_QWORD *)&a1->Type = qword_140C45E18;
  qword_140C45E18 = a1;
  return result;
}
