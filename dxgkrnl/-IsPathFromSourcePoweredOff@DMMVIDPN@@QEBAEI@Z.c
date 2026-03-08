/*
 * XREFs of ?IsPathFromSourcePoweredOff@DMMVIDPN@@QEBAEI@Z @ 0x1C0225114
 * Callers:
 *     ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x1C0224D4C (-DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DMMVIDPN::IsPathFromSourcePoweredOff(DMMVIDPN *this, int a2)
{
  DMMVIDPN *v2; // r8
  _QWORD *v3; // r10
  DMMVIDPN *v5; // rcx

  v2 = (DMMVIDPN *)*((_QWORD *)this + 15);
  v3 = 0LL;
  if ( v2 != (DMMVIDPN *)((char *)this + 120) )
    v3 = (_QWORD *)((char *)v2 - 8);
  while ( 1 )
  {
    if ( !v3 )
      return 0;
    if ( *(_DWORD *)(v3[11] + 24LL) == a2 && *(_DWORD *)(*(_QWORD *)(v3[12] + 96LL) + 120LL) == 2 )
      break;
    v5 = (DMMVIDPN *)v3[1];
    v3 = (_QWORD *)((char *)v5 - 8);
    if ( v5 == (DMMVIDPN *)((char *)this + 120) )
      v3 = 0LL;
  }
  return 1;
}
