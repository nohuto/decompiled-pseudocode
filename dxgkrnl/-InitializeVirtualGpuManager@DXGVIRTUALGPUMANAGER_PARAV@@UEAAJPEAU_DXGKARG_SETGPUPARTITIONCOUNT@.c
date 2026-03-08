/*
 * XREFs of ?InitializeVirtualGpuManager@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z @ 0x1C036A7D0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_PARAV::InitializeVirtualGpuManager(
        DXGVIRTUALGPUMANAGER_PARAV *this,
        struct _DXGKARG_SETGPUPARTITIONCOUNT *a2)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rax

  if ( a2->PartitionCount > *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 4608LL) )
  {
    WdLogSingleEntry1(3LL, 843LL);
    return 3221225485LL;
  }
  if ( *((_DWORD *)this + 4) )
  {
    WdLogSingleEntry1(3LL, 848LL);
    return 3221225485LL;
  }
  if ( a2->PartitionCount > *((_DWORD *)this + 3) )
  {
    operator delete(*((void **)this + 3));
    v5 = 8LL * a2->PartitionCount;
    if ( !is_mul_ok(a2->PartitionCount, 8uLL) )
      v5 = -1LL;
    v6 = operator new[](v5, 0x4B677844u, 256LL);
    *((_QWORD *)this + 3) = v6;
    if ( !v6 )
    {
      WdLogSingleEntry1(6LL, 857LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate memory for virtual GPUs",
        857LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    *((struct _DXGKARG_SETGPUPARTITIONCOUNT *)this + 3) = (struct _DXGKARG_SETGPUPARTITIONCOUNT)a2->PartitionCount;
  }
  return 0LL;
}
