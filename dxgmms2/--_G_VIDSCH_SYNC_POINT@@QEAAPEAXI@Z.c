/*
 * XREFs of ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C00345E4
 * Callers:
 *     ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C00159A0 (-VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIIW4_VIDSCH_.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall _VIDSCH_SYNC_POINT::`scalar deleting destructor'(_QWORD *P)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rcx

  v2 = (_QWORD *)P[9];
  if ( v2 != P + 10 && v2 )
    ExFreePoolWithTag(v2, 0);
  P[9] = 0LL;
  *((_DWORD *)P + 32) = 0;
  v3 = (_QWORD *)P[3];
  if ( v3 != P + 4 && v3 )
    ExFreePoolWithTag(v3, 0);
  P[3] = 0LL;
  *((_DWORD *)P + 16) = 0;
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
