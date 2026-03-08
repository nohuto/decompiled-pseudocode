/*
 * XREFs of PiSwFreeInterfaceList @ 0x140807ACC
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x140806A2C (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x1408071C4 (PiSwCompleteCreate.c)
 *     PiSwDeviceFree @ 0x140964270 (PiSwDeviceFree.c)
 *     PiSwProcessRemove @ 0x140964760 (PiSwProcessRemove.c)
 * Callees:
 *     PiSwInterfaceFree @ 0x140964570 (PiSwInterfaceFree.c)
 */

void __fastcall PiSwFreeInterfaceList(_QWORD **a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    if ( (_QWORD **)v2[1] != a1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    v3[1] = a1;
    PiSwInterfaceFree(v2);
  }
}
