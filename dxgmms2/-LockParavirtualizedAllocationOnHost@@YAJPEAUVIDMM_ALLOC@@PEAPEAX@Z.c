__int64 __fastcall LockParavirtualizedAllocationOnHost(__int64 **a1, void **a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  VIDMM_PROCESS *v7; // rbp
  struct _MDL *FullMDL; // rax
  int v9; // edi
  __int64 v10; // rcx

  v3 = **a1;
  v4 = *(_QWORD *)(v3 + 120);
  if ( v4 && (*(_DWORD *)(v4 + 80) & 0x1001) == 0 )
  {
    WdLogSingleEntry1(1LL, **a1);
    DxgkLogInternalTriageEvent(v5, 0x40000LL);
    return 3221225473LL;
  }
  if ( *(_QWORD *)(v3 + 560) )
    goto LABEL_7;
  v7 = (VIDMM_PROCESS *)a1[1][1];
  FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)**a1, 0LL);
  if ( FullMDL )
  {
    v9 = VIDMM_PROCESS::MapHostAddressesToGuest(
           v7,
           FullMDL,
           *(_QWORD *)(v3 + 8),
           (void **)(v3 + 560),
           (unsigned __int64 *)(v3 + 568));
    if ( v9 >= 0 )
    {
LABEL_7:
      *a2 = *(void **)(v3 + 568);
      return 0LL;
    }
  }
  else
  {
    v9 = -1073741823;
  }
  WdLogSingleEntry1(1LL, v9);
  DxgkLogInternalTriageEvent(v10, 0x40000LL);
  return (unsigned int)v9;
}
