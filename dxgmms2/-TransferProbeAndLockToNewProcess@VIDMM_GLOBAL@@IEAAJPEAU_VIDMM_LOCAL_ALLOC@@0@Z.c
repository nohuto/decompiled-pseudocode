__int64 __fastcall VIDMM_GLOBAL::TransferProbeAndLockToNewProcess(
        VIDMM_GLOBAL *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        struct _VIDMM_LOCAL_ALLOC *a3)
{
  __int64 v3; // rbx
  int v7; // edi
  struct _VIDMM_MDL *v9; // r14
  enum _LOCK_OPERATION v10; // [rsp+28h] [rbp-30h]

  v3 = *(_QWORD *)a3;
  v7 = VIDMM_GLOBAL::ProbeAndLockAllocation(
         this,
         a3,
         (struct _VIDMM_GLOBAL_ALLOC *)v3,
         0LL,
         *(_QWORD *)(v3 + 8),
         v10,
         *(struct VIDMM_SEGMENT **)(v3 + 120),
         0);
  if ( v7 >= 0 )
  {
    if ( *(_QWORD *)(v3 + 96) )
    {
      v9 = VidMmiProbeAndLockAllocation(
             (struct _VIDMM_GLOBAL_ALLOC *)v3,
             0LL,
             *(_QWORD *)(v3 + 8),
             IoModifyAccess,
             *(struct VIDMM_SEGMENT **)(v3 + 120),
             a3);
      if ( !v9 )
      {
        v7 = -1073741801;
        VIDMM_GLOBAL::UnlockAllocation(this, a3, 0LL, *(_QWORD *)(v3 + 8), 0, 1);
        return (unsigned int)v7;
      }
      VidMmiUnlockAllocation(*(struct _VIDMM_MDL **)(v3 + 96));
      *(_QWORD *)(v3 + 96) = v9;
    }
    VIDMM_GLOBAL::UnlockAllocation(this, a2, 0LL, *(_QWORD *)(v3 + 8), 0, 0);
  }
  return (unsigned int)v7;
}
