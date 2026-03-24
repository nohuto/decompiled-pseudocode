/*
 * XREFs of PiSwFreeInterfaceList @ 0x14074DF0C
 * Callers:
 *     PiSwProcessRemove @ 0x140732F28 (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x1407342E0 (PiSwDeviceFree.c)
 *     PiSwIrpStartCreateWorker @ 0x14074CF08 (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x14074DC58 (PiSwCompleteCreate.c)
 * Callees:
 *     PiSwInterfaceFree @ 0x140734E74 (PiSwInterfaceFree.c)
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
