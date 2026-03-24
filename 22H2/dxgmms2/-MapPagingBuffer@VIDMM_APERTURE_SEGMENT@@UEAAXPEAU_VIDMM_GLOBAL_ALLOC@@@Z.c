/*
 * XREFs of ?MapPagingBuffer@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C2090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00867FC (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::MapPagingBuffer(VIDMM_APERTURE_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int128 v4; // rtt
  __int64 v5; // rdi
  BOOL v6; // ebx
  struct _MDL *FullMDL; // rax

  v4 = *((__int64 *)a2 + 17);
  v5 = *(_QWORD *)this;
  v6 = (**((_DWORD **)a2 + 62) & 0x800004) == 4;
  FullMDL = VidMmGetFullMDL(a2, 0LL);
  (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD, BOOL))(v5 + 224))(
    this,
    a2,
    *((_QWORD *)a2 + 1) >> 12,
    v4 / 4096,
    v4 / 4096,
    FullMDL,
    0,
    v6);
  *((_DWORD *)a2 + 19) &= ~0x400000u;
  (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *))(*(_QWORD *)this + 160LL))(this);
}
