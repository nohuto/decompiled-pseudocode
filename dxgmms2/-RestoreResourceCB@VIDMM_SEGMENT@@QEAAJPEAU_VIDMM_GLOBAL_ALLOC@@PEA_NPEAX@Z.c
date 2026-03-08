/*
 * XREFs of ?RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00E75D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002124 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchMarkDeviceAsError @ 0x1C0014AF0 (VidSchMarkDeviceAsError.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E4FC (McTemplateK0p_EtwWriteTransfer.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C00FA934 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00FDBD0 (-IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::RestoreResourceCB(VIDMM_SEGMENT *this, struct _KTHREAD **a2, bool *a3, void *a4)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rcx
  struct _VIDMM_GLOBAL_ALLOC *i; // rbx
  _QWORD *j; // rsi

  if ( VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB((struct _VIDMM_GLOBAL_ALLOC *)a2) )
  {
    WdLogSingleEntry1(4LL, a2);
    if ( (byte_1C00769C2 & 0x40) != 0 )
      McTemplateK0p_EtwWriteTransfer(v6, &EventVidMmRestoreResource, v7, a2);
    v8 = VIDMM_MEMORY_SEGMENT::TransferToSegment(this, (struct _VIDMM_GLOBAL_ALLOC *)a2, 0LL, 1);
    if ( v8 < 0 )
    {
      WdLogSingleEntry1(1LL, v8);
      DxgkLogInternalTriageEvent(v9, 0x40000LL);
      for ( i = a2[34]; i != (struct _VIDMM_GLOBAL_ALLOC *)(a2 + 34); i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
      {
        for ( j = (_QWORD *)*((_QWORD *)i - 2); j != (_QWORD *)((char *)i - 16); j = (_QWORD *)*j )
          VidSchMarkDeviceAsError(*(_QWORD *)(*(j - 4) + 32LL));
      }
    }
    *((_BYTE *)a2 + 83) = 1;
    ExReleasePushLockExclusiveEx(a2 + 63, 0LL);
    KeLeaveCriticalRegion();
    DXGFASTMUTEX::Release(a2 + 37);
  }
  return 0LL;
}
