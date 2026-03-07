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
