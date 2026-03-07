// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::EnsureLockedPages(
        VIDMM_GLOBAL *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  VIDMM_GLOBAL *v8; // rbx
  __int64 v9; // rcx
  PRKPROCESS *v10; // rcx
  void **v11; // rax
  void *v12; // rcx
  VIDMM_GLOBAL **v13; // rcx
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-68h] BYREF

  v8 = (VIDMM_GLOBAL *)operator new(32LL, 0x39356956u, 256LL);
  if ( !v8 )
  {
    _InterlockedIncrement(&dword_1C00768C0);
    WdLogSingleEntry1(6LL, 25032LL);
    DxgkLogInternalTriageEvent(v9, 262145LL);
LABEL_5:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 55LL, 0LL, 0LL, 0LL);
    return;
  }
  v10 = (PRKPROCESS *)*((_QWORD *)a2 + 1);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*v10, &ApcState);
  *((_QWORD *)v8 + 2) = VidMmiProbeAndLockAllocation(
                          *(struct _VIDMM_GLOBAL_ALLOC **)a2,
                          a3,
                          a4,
                          IoModifyAccess,
                          0LL,
                          a2);
  KeUnstackDetachProcess(&ApcState);
  v11 = (void **)*((_QWORD *)a2 + 1);
  v12 = *v11;
  *((_QWORD *)v8 + 3) = *v11;
  ObfReferenceObject(v12);
  if ( !*((_QWORD *)v8 + 2) )
  {
    WdLogSingleEntry0(3LL);
    goto LABEL_5;
  }
  v13 = (VIDMM_GLOBAL **)*((_QWORD *)this + 5002);
  if ( *v13 != (VIDMM_GLOBAL *)((char *)this + 40008) )
    __fastfail(3u);
  *(_QWORD *)v8 = (char *)this + 40008;
  *((_QWORD *)v8 + 1) = v13;
  *v13 = v8;
  *((_QWORD *)this + 5002) = v8;
}
