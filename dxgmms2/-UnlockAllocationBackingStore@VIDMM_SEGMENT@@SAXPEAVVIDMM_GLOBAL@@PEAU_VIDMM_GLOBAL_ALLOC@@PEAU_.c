void __fastcall VIDMM_SEGMENT::UnlockAllocationBackingStore(
        struct VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_LOCAL_ALLOC *a3)
{
  struct _VIDMM_LOCAL_ALLOC *v3; // rdi
  int v6; // eax
  struct _VIDMM_MDL *v7; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8

  v3 = a3;
  if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 436LL) & 4) == 0 || (**((_DWORD **)a2 + 67) & 0x4000) != 0 )
  {
    v6 = *((_DWORD *)a2 + 18);
    if ( (v6 & 0x400) == 0 && (v6 & 0x2000) == 0 )
    {
      if ( !a3 )
        v3 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 11);
      v7 = (struct _VIDMM_MDL *)*((_QWORD *)a2 + 12);
      if ( v7 )
      {
        VidMmiUnlockAllocation(v7);
        *((_QWORD *)a2 + 12) = 0LL;
      }
      if ( --*((_DWORD *)a2 + 91) < 0 )
        DxgCreateLiveDumpWithWdLogs(403LL, 2072LL, a2, 0LL, 0LL, 1);
      if ( !*((_DWORD *)a2 + 91) )
      {
        VIDMM_GLOBAL::UnlockAllocation(this, v3, 0LL, *((_QWORD *)a2 + 1), 0, 1);
        if ( bTracingEnabled )
        {
          if ( (byte_1C00769C1 & 0x10) != 0 )
            McTemplateK0x_EtwWriteTransfer(v10, v9, v11, a2);
        }
      }
    }
  }
}
