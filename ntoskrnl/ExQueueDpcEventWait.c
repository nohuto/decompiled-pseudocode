/*
 * XREFs of ExQueueDpcEventWait @ 0x140609C40
 * Callers:
 *     <none>
 * Callees:
 *     KeRegisterObjectDpc @ 0x140565CE8 (KeRegisterObjectDpc.c)
 */

char __fastcall ExQueueDpcEventWait(__int64 a1, char a2)
{
  if ( *(_BYTE *)(a1 + 17) != 5 )
    __fastfail(5u);
  return KeRegisterObjectDpc(*(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 48), a1, a2);
}
