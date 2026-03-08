/*
 * XREFs of IoNotifyPowerOperationVetoed @ 0x1409536C4
 * Callers:
 *     PoBroadcastSystemState @ 0x140AA38F8 (PoBroadcastSystemState.c)
 * Callees:
 *     PnpSetPowerVetoEvent @ 0x140961990 (PnpSetPowerVetoEvent.c)
 */

__int64 __fastcall IoNotifyPowerOperationVetoed(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax

  if ( !a2 )
    a2 = *((_QWORD *)IopRootDeviceNode + 4);
  if ( !*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) )
    return 3221225712LL;
  v4 = *(_QWORD *)(*(_QWORD *)(a3 + 312) + 40LL);
  if ( v4 )
    return PnpSetPowerVetoEvent(a1, a2, a3, a2, 6, v4 + 40);
  else
    return 3221225713LL;
}
