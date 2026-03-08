/*
 * XREFs of ?InitializeVirtualGpuManager@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z @ 0x1C036CDB0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?DdiSetGpuPartitionCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z @ 0x1C0368E64 (-DdiSetGpuPartitionCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_GPUP::InitializeVirtualGpuManager(
        DXGVIRTUALGPUMANAGER_GPUP *this,
        struct _DXGKARG_SETGPUPARTITIONCOUNT *a2,
        __int64 a3)
{
  void **v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  int v9; // esi

  if ( *((_DWORD *)this + 4) )
  {
    WdLogSingleEntry1(3LL, 400LL);
    return 3221225485LL;
  }
  v6 = (void **)((char *)this + 24);
  if ( a2->PartitionCount != *((_DWORD *)this + 3) )
  {
    operator delete(*v6);
    v7 = 8LL * a2->PartitionCount;
    if ( !is_mul_ok(a2->PartitionCount, 8uLL) )
      v7 = -1LL;
    v8 = operator new[](v7, 0x4B677844u, 256LL);
    *v6 = (void *)v8;
    if ( !v8 )
    {
      WdLogSingleEntry1(6LL, 410LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate memory for virtual GPUs",
        410LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    *((struct _DXGKARG_SETGPUPARTITIONCOUNT *)this + 3) = (struct _DXGKARG_SETGPUPARTITIONCOUNT)a2->PartitionCount;
  }
  v9 = ADAPTER_RENDER::DdiSetGpuPartitionCount(*((ADAPTER_RENDER **)this + 4), a2, a3);
  if ( v9 < 0 )
  {
    operator delete(*v6);
    *((_DWORD *)this + 3) = 0;
    *v6 = 0LL;
  }
  return (unsigned int)v9;
}
