/*
 * XREFs of IopFreeBackpocketIrp @ 0x14055313C
 * Callers:
 *     IopFreeReserveIrp @ 0x1405531AC (IopFreeReserveIrp.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 */

LONG __fastcall IopFreeBackpocketIrp(IRP *a1, char a2)
{
  struct _KEVENT *v2; // rcx
  LONG result; // eax

  if ( a1 == Irp )
  {
    v2 = (struct _KEVENT *)&word_140C5D770;
    qword_140C5D768 = 0LL;
    _InterlockedExchange(&dword_140C5D760, 0);
    return KeSetEvent(v2, a2, 0);
  }
  if ( a1 == qword_140C5D788 )
  {
    v2 = &stru_140C5D7A0;
    qword_140C5D798 = 0LL;
    _InterlockedExchange(&dword_140C5D790, 0);
    return KeSetEvent(v2, a2, 0);
  }
  result = (int)qword_140C5D7B8;
  *(_QWORD *)&a1->Type = qword_140C5D7B8;
  qword_140C5D7B8 = a1;
  return result;
}
