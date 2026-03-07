void __fastcall VIDMM_GLOBAL::FlushAllocationFromProcessorCache(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  int v3; // esi
  _DWORD *v4; // rdx
  __int64 v5; // rdi
  void *v6; // rdi
  struct _MDL *v7; // r8
  unsigned __int8 v8; // r9
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  v4 = (_DWORD *)*((_QWORD *)a2 + 67);
  if ( (*v4 & 4) != 0 && (*v4 & 0x800000) == 0 && !*((_BYTE *)this + 7089) )
  {
    v5 = *((_QWORD *)a2 + 11);
    memset(&ApcState, 0, sizeof(ApcState));
    if ( !v5 || (*v4 & 8) != 0 )
    {
      v6 = (void *)*((_QWORD *)a2 + 49);
      v3 = 1;
    }
    else
    {
      v6 = *(void **)(v5 + 16);
    }
    if ( !(unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() || v6 )
    {
      if ( !v3 )
        KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 11) + 8LL), &ApcState);
      VidMmGetFullMDL(a2, 0LL);
      VidMmFlushCpuCacheWorker(v6, *((_QWORD *)a2 + 1), v7, v8);
      if ( !v3 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
}
