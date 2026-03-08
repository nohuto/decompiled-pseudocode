/*
 * XREFs of ?InvalidateCache@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_VIDMM_MULTI_ALLOC@@_K3@Z @ 0x1C00E3F54
 * Callers:
 *     ?VidMmInvalidateCache@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_VIDMM_MULTI_ALLOC@@_K4@Z @ 0x1C002CC80 (-VidMmInvalidateCache@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PE.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002124 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage @ 0x1C0019B44 (Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage.c)
 *     ?VidMmFlushCpuCacheWorker@@YAJPEAX_KPEAU_MDL@@E@Z @ 0x1C00EA1F0 (-VidMmFlushCpuCacheWorker@@YAJPEAX_KPEAU_MDL@@E@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InvalidateCache(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct _VIDMM_MULTI_GLOBAL_ALLOC *a3,
        char **a4,
        unsigned __int64 a5,
        unsigned __int64 Length)
{
  char *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct _VIDMM_MULTI_GLOBAL_ALLOC *i; // rax
  __int64 v16; // rbx
  unsigned __int64 v17; // rbp
  _QWORD *v18; // rax
  unsigned __int64 v19; // rdx
  char *v20; // rsi
  __int64 v21; // rcx
  unsigned int v22; // edi
  struct _MDL *v23; // r8
  unsigned __int8 v24; // r9
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-78h] BYREF

  if ( !(unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
    return 3221225473LL;
  v11 = 0LL;
  if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage()
    && !*((_BYTE *)this + 7090)
    && (!a2 || (*(_DWORD *)(*((_QWORD *)a2 + 4) + 424LL) & 0x1000) == 0) )
  {
    WdLogSingleEntry1(1LL, 27797LL);
    DxgkLogInternalTriageEvent(v13, 0x40000LL);
    return 0LL;
  }
  if ( a4 )
  {
    v11 = *a4;
  }
  else
  {
    if ( !a3 )
    {
      WdLogSingleEntry1(1LL, 27808LL);
LABEL_11:
      DxgkLogInternalTriageEvent(v14, 0x40000LL);
      return 3221225485LL;
    }
    if ( !a2 )
    {
      WdLogSingleEntry1(1LL, 27815LL);
      goto LABEL_11;
    }
    DXGFASTMUTEX::Acquire((struct _VIDMM_MULTI_GLOBAL_ALLOC *)((char *)a3 + 296));
    for ( i = (struct _VIDMM_MULTI_GLOBAL_ALLOC *)*((_QWORD *)a3 + 34);
          i != (struct _VIDMM_MULTI_GLOBAL_ALLOC *)((char *)a3 + 272);
          i = *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)i )
    {
      if ( *((struct VIDMM_PROCESS **)i - 6) == a2 )
      {
        v11 = (char *)i - 56;
        break;
      }
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)a3 + 37);
    if ( !v11 )
    {
      WdLogSingleEntry1(1LL, 27839LL);
      goto LABEL_11;
    }
  }
  v16 = *(_QWORD *)v11;
  v17 = Length;
  if ( g_IsInternalReleaseOrDbg )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
    v18[3] = a4;
    v18[4] = a5;
    v18[5] = Length;
  }
  if ( !Length )
    v17 = *(_QWORD *)(v16 + 8);
  v19 = *(_QWORD *)(v16 + 8);
  if ( a5 >= v19 || v17 > v19 - a5 )
  {
    WdLogSingleEntry1(1LL, v19);
    goto LABEL_11;
  }
  if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() && (*(_DWORD *)(v16 + 72) & 0xA000) != 0 )
  {
    v21 = *(_QWORD *)(v16 + 552);
    if ( (*(_BYTE *)(v21 + 10) & 5) != 0 )
      v20 = *(char **)(v21 + 24);
    else
      v20 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v21, 0, MmCached, 0LL, 0, 0x40000010u);
  }
  else if ( (**(_DWORD **)(*(_QWORD *)v11 + 536LL) & 8) != 0 )
  {
    v20 = *(char **)(*(_QWORD *)v11 + 392LL);
  }
  else
  {
    v20 = (char *)*((_QWORD *)v11 + 2);
  }
  if ( !v20 )
  {
    WdLogSingleEntry1(1LL, 27901LL);
    goto LABEL_11;
  }
  memset(&ApcState, 0, sizeof(ApcState));
  if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
    KeStackAttachProcess(**((PRKPROCESS **)v11 + 1), &ApcState);
  v22 = 0;
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v16 + 296));
  if ( *(_DWORD *)(v16 + 112) == 2 && (*(_DWORD *)(*(_QWORD *)(v16 + 120) + 80LL) & 0x1001) != 0
    || (*(_DWORD *)(v16 + 72) & 0x100000) != 0 )
  {
    v22 = VidMmFlushCpuCacheWorker(&v20[a5], v17, v23, v24);
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v16 + 296));
  if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
    KeUnstackDetachProcess(&ApcState);
  return v22;
}
