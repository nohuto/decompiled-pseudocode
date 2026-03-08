/*
 * XREFs of ?RestoreFromPurge@VIDMM_APERTURE_SEGMENT@@UEAAXXZ @ 0x1C00B5430
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0098CB8 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::RestoreFromPurge(VIDMM_APERTURE_SEGMENT *this)
{
  char *v1; // rdi
  char *v3; // rbx
  struct _VIDMM_GLOBAL_ALLOC *v4; // rbp
  int v5; // ecx
  void (__fastcall *v6)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD, BOOL); // r15
  BOOL v7; // r14d
  struct _MDL *FullMDL; // rax
  VIDMM_APERTURE_SEGMENT *v9; // rdi
  char *v10; // rbp
  int v11; // r15d
  void (__fastcall *v12)(VIDMM_APERTURE_SEGMENT *, char *, _QWORD, __int64, __int64, struct _MDL *, _DWORD, bool); // rbx
  struct _MDL *v13; // rax

  v1 = (char *)this + 160;
  v3 = (char *)*((_QWORD *)this + 20);
  while ( v3 != v1 )
  {
    v4 = (struct _VIDMM_GLOBAL_ALLOC *)(v3 - 408);
    v3 = *(char **)v3;
    v5 = **((_DWORD **)v4 + 67);
    if ( (v5 & 0x10000000) == 0 && (*((_DWORD *)v4 + 18) & 0x400) == 0 )
    {
      v6 = *(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD, BOOL))(*(_QWORD *)this + 200LL);
      v7 = (v5 & 4) != 0 && (v5 & 0x800000) == 0;
      FullMDL = VidMmGetFullMDL(v4, 0LL);
      v6(
        this,
        v4,
        *((_QWORD *)v4 + 1) >> 12,
        *((_QWORD *)v4 + 16) / 4096LL,
        *((_QWORD *)v4 + 16) / 4096LL,
        FullMDL,
        0,
        v7);
    }
  }
  v9 = (VIDMM_APERTURE_SEGMENT *)*((_QWORD *)this + 22);
  while ( v9 != (VIDMM_APERTURE_SEGMENT *)((char *)this + 176) )
  {
    v10 = (char *)v9 - 408;
    v9 = *(VIDMM_APERTURE_SEGMENT **)v9;
    v11 = **((_DWORD **)v10 + 67);
    if ( (v11 & 0x10000000) == 0 )
    {
      v12 = *(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, char *, _QWORD, __int64, __int64, struct _MDL *, _DWORD, bool))(*(_QWORD *)this + 200LL);
      v13 = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v10, 0LL);
      v12(
        this,
        v10,
        *((_QWORD *)v10 + 1) >> 12,
        *((_QWORD *)v10 + 16) / 4096LL,
        *((_QWORD *)v10 + 16) / 4096LL,
        v13,
        0,
        (v11 & 0x800004) == 4);
    }
  }
}
