/*
 * XREFs of ?UnmapPagingBuffer@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00F8D90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0098CB8 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::UnmapPagingBuffer(VIDMM_APERTURE_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  void (__fastcall *v4)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD); // rbx
  struct _MDL *FullMDL; // rax

  v4 = *(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD))(*(_QWORD *)this + 208LL);
  FullMDL = VidMmGetFullMDL(a2, 0LL);
  v4(this, a2, *((_QWORD *)a2 + 1) >> 12, *((_QWORD *)a2 + 16) / 4096LL, *((_QWORD *)a2 + 16) / 4096LL, FullMDL, 0);
  *((_DWORD *)a2 + 17) |= 0x800000u;
  (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *))(*(_QWORD *)this + 152LL))(this);
}
