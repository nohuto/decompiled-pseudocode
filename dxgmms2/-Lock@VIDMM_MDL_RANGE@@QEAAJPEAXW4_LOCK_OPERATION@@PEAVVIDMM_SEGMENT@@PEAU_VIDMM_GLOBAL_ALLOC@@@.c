/*
 * XREFs of ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0097F90
 * Callers:
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C0097D10 (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PE.c)
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C0098EB0 (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall VIDMM_MDL_RANGE::Lock(
        VIDMM_MDL_RANGE *this,
        void *a2,
        enum _LOCK_OPERATION a3,
        struct VIDMM_SEGMENT *a4,
        struct _VIDMM_GLOBAL_ALLOC *a5)
{
  char v7; // r15
  struct _MDL *Mdl; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // ecx

  v7 = 0;
  Mdl = IoAllocateMdl(a2, *((_DWORD *)this + 4) - *((_DWORD *)this + 2), 0, 0, 0LL);
  *(_QWORD *)this = Mdl;
  if ( Mdl )
  {
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    v7 = 1;
    if ( !a4 )
      return 0LL;
    v9 = *(_QWORD *)this + 48LL;
    v10 = (((*(_DWORD *)(*(_QWORD *)this + 32LL) + *(_DWORD *)(*(_QWORD *)this + 44LL)) & 0xFFF)
         + (unsigned __int64)*(unsigned int *)(*(_QWORD *)this + 40LL)
         + 4095) >> 12;
    v11 = 0LL;
    if ( !v10 )
      return 0LL;
    while ( 1 )
    {
      v12 = *((_QWORD *)a4 + 31);
      if ( v12 )
      {
        *(_QWORD *)(v12 + 16LL * *((unsigned int *)a4 + 61)) = *(_QWORD *)(v9 + 8 * v11);
        *(_QWORD *)(*((_QWORD *)a4 + 31) + 16LL * (unsigned int)(*((_DWORD *)a4 + 61))++ + 8) = a5;
        v16 = *((_DWORD *)a4 + 61);
        if ( v16 >= *((_DWORD *)a4 + 60) )
          v16 = 0;
        *((_DWORD *)a4 + 61) = v16;
      }
      if ( *(_QWORD *)(v9 + 8 * v11) << 12 > *((_QWORD *)a4 + 15) )
        break;
      if ( ++v11 >= v10 )
        return 0LL;
    }
    WdLogSingleEntry2(1LL, v11, *(_QWORD *)(v9 + 8 * v11));
    v15 = 0x40000LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
    WdLogSingleEntry1(6LL, 5882LL);
    v15 = 262145LL;
  }
  DxgkLogInternalTriageEvent(v14, v15);
  if ( *(_QWORD *)this )
  {
    if ( v7 )
      MmUnlockPages(*(PMDL *)this);
    IoFreeMdl(*(PMDL *)this);
    *(_QWORD *)this = 0LL;
  }
  return 3223191809LL;
}
