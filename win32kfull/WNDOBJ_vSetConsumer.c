/*
 * XREFs of WNDOBJ_vSetConsumer @ 0x1C028B0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall WNDOBJ_vSetConsumer(WNDOBJ *pwo, PVOID pvConsumer)
{
  if ( pwo != *(WNDOBJ **)(*(_QWORD *)&pwo[3].coClient.iUniq + 16LL) )
    pwo->pvConsumer = pvConsumer;
}
