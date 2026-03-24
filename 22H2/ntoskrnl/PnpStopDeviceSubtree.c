/*
 * XREFs of PnpStopDeviceSubtree @ 0x1408B8B38
 * Callers:
 *     PnpRebalance @ 0x1408B87F4 (PnpRebalance.c)
 *     PnpStopDeviceSubtree @ 0x1408B8B38 (PnpStopDeviceSubtree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x14036EEA8 (PipSetDevNodeState.c)
 *     IopQueryReconfiguration @ 0x1408B2D70 (IopQueryReconfiguration.c)
 *     PnpStopDeviceSubtree @ 0x1408B8B38 (PnpStopDeviceSubtree.c)
 */

__int64 __fastcall PnpStopDeviceSubtree(__int64 a1)
{
  _QWORD *i; // rbx
  __int64 result; // rax

  for ( i = *(_QWORD **)(a1 + 8); i; i = (_QWORD *)*i )
    result = PnpStopDeviceSubtree(i);
  if ( *(_DWORD *)(a1 + 300) == 777 )
  {
    IopQueryReconfiguration(4, *(struct _DEVICE_OBJECT **)(a1 + 32));
    return PipSetDevNodeState(a1, 778);
  }
  return result;
}
