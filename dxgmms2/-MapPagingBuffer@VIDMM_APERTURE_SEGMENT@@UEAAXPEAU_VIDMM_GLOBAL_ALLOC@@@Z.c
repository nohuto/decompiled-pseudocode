/*
 * XREFs of ?MapPagingBuffer@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00F85B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0098CB8 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::MapPagingBuffer(VIDMM_APERTURE_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  void (__fastcall *v4)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD, bool); // rdi
  int v5; // ebx
  struct _MDL *FullMDL; // rax

  v4 = *(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD, bool))(*(_QWORD *)this + 200LL);
  v5 = **((_DWORD **)a2 + 67);
  FullMDL = VidMmGetFullMDL(a2, 0LL);
  v4(
    this,
    a2,
    *((_QWORD *)a2 + 1) >> 12,
    *((_QWORD *)a2 + 16) / 4096LL,
    *((_QWORD *)a2 + 16) / 4096LL,
    FullMDL,
    0,
    (v5 & 0x800004) == 4);
  *((_DWORD *)a2 + 17) &= ~0x800000u;
  (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *))(*(_QWORD *)this + 152LL))(this);
}
