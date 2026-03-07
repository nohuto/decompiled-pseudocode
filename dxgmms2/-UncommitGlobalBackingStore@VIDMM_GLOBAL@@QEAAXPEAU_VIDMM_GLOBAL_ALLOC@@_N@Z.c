void __fastcall VIDMM_GLOBAL::UncommitGlobalBackingStore(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2, char a3)
{
  int v3; // eax
  VIDMM_GLOBAL *v6; // rsi
  int v7; // eax
  void *v8; // rcx
  void *v9; // rdx

  v3 = *((_DWORD *)a2 + 18);
  v6 = this;
  if ( (v3 & 0x2000) == 0 && (v3 & 0x100000) == 0 )
  {
    if ( (v3 & 0x40000) == 0 && (**((_DWORD **)a2 + 67) & 0x10020008) == 0 )
      goto LABEL_5;
    this = (VIDMM_GLOBAL *)**((unsigned int **)a2 + 67);
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(this);
    if ( (**((_DWORD **)a2 + 67) & 0x4000000) == 0 || !*((_DWORD *)a2 + 101) )
    {
      v7 = *((_DWORD *)a2 + 18);
      if ( (v7 & 0x4000) != 0 && (v7 & 0x40000) != 0 )
      {
        v9 = (void *)*((_QWORD *)a2 + 70);
        if ( v9 )
          VIDMM_PROCESS::UnmapHostAddressesFromGuest(
            *((VIDMM_PROCESS **)a2 + 68),
            v9,
            *((_QWORD *)a2 + 71),
            *((_QWORD *)a2 + 1),
            1);
      }
      if ( (*((_DWORD *)a2 + 18) & 0x1000000) != 0 )
      {
        MmUnmapViewInSystemSpace(*((PVOID *)a2 + 49));
        *((_DWORD *)a2 + 18) &= ~0x1000000u;
        *((_QWORD *)a2 + 49) = 0LL;
      }
      v8 = (void *)*((_QWORD *)a2 + 48);
      if ( a3 )
        VidMmDereferenceObjectAsync(v8);
      else
        ObfDereferenceObject(v8);
      *((_QWORD *)a2 + 48) = 0LL;
    }
    else
    {
LABEL_5:
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(this);
    }
  }
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)(1616LL * (*((_DWORD *)a2 + 17) & 0x3F) + *((_QWORD *)v6 + 5028) + 1584),
    -*((_QWORD *)a2 + 1));
  *((_DWORD *)a2 + 19) &= ~0x20u;
}
