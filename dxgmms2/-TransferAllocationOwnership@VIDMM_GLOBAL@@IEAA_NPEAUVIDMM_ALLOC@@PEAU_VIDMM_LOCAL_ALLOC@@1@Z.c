// write access to const memory has been detected, the output may be wrong!
bool __fastcall VIDMM_GLOBAL::TransferAllocationOwnership(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC ***a2,
        struct _VIDMM_LOCAL_ALLOC *a3,
        struct _VIDMM_LOCAL_ALLOC *a4)
{
  struct _VIDMM_LOCAL_ALLOC *v4; // rdi
  struct _VIDMM_GLOBAL_ALLOC *v8; // rbx
  struct _VIDMM_GLOBAL_ALLOC *v9; // rax
  __int64 v10; // rax

  v4 = a4;
  v8 = **a2;
  if ( a4 )
  {
    v4 = VIDMM_GLOBAL::TransferOwnershipToProcess(this, **a2, a3, a4);
  }
  else
  {
    if ( *((_DWORD *)v8 + 36) && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    }
    v9 = a2[2][5];
    if ( v9 )
    {
      v10 = *((_QWORD *)v9 + 7);
      if ( v10 )
      {
        if ( *(_DWORD *)(v10 + 64) )
        {
          if ( (**((_DWORD **)v8 + 67) & 0x10) == 0 )
          {
            v4 = VIDMM_GLOBAL::TransferOwnershipToSystemProcess(this, v8, a3);
            *((_DWORD *)v8 + 19) = (v4 != 0LL ? 4 : 0) | *((_DWORD *)v8 + 19) & 0xFFFFFFFB;
          }
        }
        else
        {
          *((_DWORD *)v8 + 19) |= 1u;
        }
      }
    }
  }
  *((_QWORD *)v8 + 11) = v4;
  return v4 != 0LL;
}
