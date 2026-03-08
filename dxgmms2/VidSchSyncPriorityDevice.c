/*
 * XREFs of VidSchSyncPriorityDevice @ 0x1C00B46B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z @ 0x1C0017F1C (-UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z.c)
 */

__int64 __fastcall VidSchSyncPriorityDevice(__int64 a1)
{
  DXGDEVICE::UpdatePriorityClass(*(DXGDEVICE **)(a1 + 8));
  return 0LL;
}
