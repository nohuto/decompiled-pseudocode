/*
 * XREFs of CcGetNodeForLazyWrite @ 0x1402191F0
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x140215670 (CcNotifyOfMappedWrite.c)
 *     CcLazyWriteScanVolume @ 0x140218810 (CcLazyWriteScanVolume.c)
 *     CcLazyWriteScan @ 0x140533B4C (CcLazyWriteScan.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcGetNodeForLazyWrite(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rdx

  v1 = *(_DWORD *)(a1 + 556);
  if ( v1 == -1 )
    v1 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  v2 = v1 % CcNumberNumaNodes;
  if ( CcEnablePerVolumeLazyWriter )
    return *(_QWORD *)(*(_QWORD *)(a1 + 600) + 8 * v2 + 64);
  else
    return *(_QWORD *)(*(_QWORD *)(a1 + 536) + 8 * v2 + 112);
}
