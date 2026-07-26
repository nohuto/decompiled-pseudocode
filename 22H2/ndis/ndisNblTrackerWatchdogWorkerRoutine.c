/*
 * XREFs of ndisNblTrackerWatchdogWorkerRoutine @ 0x1C0118840
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisMLiveBugCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K111@Z @ 0x1C005F724 (-ndisMLiveBugCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K111@Z.c)
 */

void __fastcall ndisNblTrackerWatchdogWorkerRoutine(_DWORD *P)
{
  int v1; // eax
  __int64 v3; // rdi

  v1 = P[2];
  if ( !v1 || (unsigned int)(v1 - 3) <= 2 )
  {
    v3 = *(_QWORD *)P;
    if ( (_BYTE)KdDebuggerNotPresent )
      ndisMLiveBugCheck((struct _NDIS_MINIPORT_BLOCK *)v3, 48LL, v3, *(_QWORD *)(v3 + 3832), 0LL);
    ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v3, 0x68u);
  }
  ExFreePoolWithTag(P, 0);
}
