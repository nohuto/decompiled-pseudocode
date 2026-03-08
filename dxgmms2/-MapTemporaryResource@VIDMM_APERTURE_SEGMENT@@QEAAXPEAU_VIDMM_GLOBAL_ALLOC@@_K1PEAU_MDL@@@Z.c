/*
 * XREFs of ?MapTemporaryResource@VIDMM_APERTURE_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1C00F866C
 * Callers:
 *     ?BeginTemporaryResourceAccess@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1C00F7F60 (-BeginTemporaryResourceAccess@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::MapTemporaryResource(
        VIDMM_APERTURE_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        struct _MDL *a5)
{
  _QWORD *v9; // rax
  unsigned __int64 i; // rbx
  unsigned __int64 j; // rbx

  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v9[3] = a2;
    v9[4] = a3;
    v9[5] = a4;
  }
  (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, _QWORD, struct _MDL *, int, bool))(*(_QWORD *)this + 200LL))(
    this,
    a2,
    a4 >> 12,
    (*((_QWORD *)a2 + 29) + a3) >> 12,
    *((_QWORD *)a2 + 29) >> 12,
    a5,
    1,
    (**((_DWORD **)a2 + 67) & 0x800004) == 4);
  for ( i = 0LL; i < a3; i += 4096LL )
    (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, __int64, unsigned __int64, _QWORD, _QWORD, int, _DWORD))(*(_QWORD *)this + 200LL))(
      this,
      a2,
      1LL,
      (*((_QWORD *)a2 + 29) + i) >> 12,
      *((_QWORD *)a2 + 29) >> 12,
      *((_QWORD *)this + 34),
      1,
      0);
  for ( j = a4 + i; j < *((_QWORD *)a2 + 1); j += 4096LL )
    (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, __int64, unsigned __int64, _QWORD, _QWORD, int, _DWORD))(*(_QWORD *)this + 200LL))(
      this,
      a2,
      1LL,
      (*((_QWORD *)a2 + 29) + j) >> 12,
      *((_QWORD *)a2 + 29) >> 12,
      *((_QWORD *)this + 34),
      1,
      0);
}
