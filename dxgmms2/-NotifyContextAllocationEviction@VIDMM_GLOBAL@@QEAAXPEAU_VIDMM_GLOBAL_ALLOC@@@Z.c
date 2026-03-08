/*
 * XREFs of ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0089FC4
 * Callers:
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0086BA0 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C008CF40 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C00FB3F8 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 * Callees:
 *     VidSchSwitchFromDevice @ 0x1C00ADEF0 (VidSchSwitchFromDevice.c)
 *     VidSchSwitchFromContext @ 0x1C00AE3A0 (VidSchSwitchFromContext.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyContextAllocationEviction(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)a2 + 13);
  if ( (*((_DWORD *)a2 + 17) & 0x20000000) != 0 )
  {
    if ( v2 )
    {
      if ( *(_QWORD *)(v2 + 800) )
        VidSchSwitchFromDevice();
    }
  }
  else if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 404) & 0x10) == 0 )
    {
      v3 = *(_QWORD *)(v2 + 256);
      if ( v3 )
      {
        LOBYTE(a2) = 1;
        VidSchSwitchFromContext(v3, a2);
      }
    }
  }
}
