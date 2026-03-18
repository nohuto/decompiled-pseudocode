/*
 * XREFs of VidSchDeviceQueuesNotEmpty @ 0x1C0001EA0
 * Callers:
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C0089554 (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00B4D1C (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchDeviceQueuesNotEmpty(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( !a1 )
    return 0;
  if ( *(_DWORD *)(a1 + 1580) || *(_DWORD *)(a1 + 1576) )
    return 1;
  return v1;
}
