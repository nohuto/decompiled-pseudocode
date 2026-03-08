/*
 * XREFs of ?EndTemporaryResourceAccess@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1C00F8060
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1C0001754 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?UnmapTemporaryResource@VIDMM_APERTURE_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1C00F8E28 (-UnmapTemporaryResource@VIDMM_APERTURE_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::EndTemporaryResourceAccess(
        VIDMM_APERTURE_SEGMENT *this,
        void **a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        struct _MDL *a5)
{
  unsigned __int64 LogicalAddress; // rax

  VIDMM_APERTURE_SEGMENT::UnmapTemporaryResource(this, (struct _VIDMM_GLOBAL_ALLOC *)a2, a3, a4, a5);
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 40179LL) && a5 != *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL) )
  {
    LogicalAddress = SysMmGetLogicalAddress(a2[66]);
    if ( LogicalAddress )
      LogicalAddress += a3;
    SysMmUnmapIommuRange(
      *(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 224LL),
      LogicalAddress,
      a5,
      0);
  }
}
